#include "CL_CAD.h"


NS_Comp_Data::CL_CAD::CL_CAD(void)
{
	this->sCnx = "Data Source=LAPTOP-9MPLG68V\\MYSQL_JORA;Initial Catalog=Electronik;Integrated Security=True";

	this->sSql = "Rien";//initialise la variable sql à "rien"

	this->oCnx = gcnew System::Data::SqlClient::SqlConnection(this->sCnx);//créer un objet connexion en se basant sur la variable sCnx de type string 
	this->oCmd = gcnew System::Data::SqlClient::SqlCommand(this->sSql, this->oCnx);//création d'un objet commande contenant la requête sql et l'objet chaîne de connexion
	this->oDA = gcnew System::Data::SqlClient::SqlDataAdapter();//Objet faisant la liaison entre l'application et SQL server/Dans cet objet on est connecté à sql server on va récupérer les données, les mettre en cache dans un objet hors connexion
	this->oDs = gcnew System::Data::DataSet();//objet de type dataset

	this->oCmd->CommandType = System::Data::CommandType::Text;//commandes utilisés sont de type text
}
/*------------------------------------------------------------requête sql-------------Nom résultat de requête*/
System::Data::DataSet^ NS_Comp_Data::CL_CAD::getRows(System::String^ sSql, System::String^ sDataTableName)//récupère des action/ A utiliser lorsqu'on fait un select 
{
	this->oDs->Clear();//nettoyer le dataset qui cumule les données précédentes 
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->SelectCommand = this->oCmd;
	this->oDA->Fill(this->oDs, sDataTableName);//faire un excécute en les nommants la variable sDataTableName

	return this->oDs;//retourne l'objet dataset avec les données
}
void NS_Comp_Data::CL_CAD::actionRows(System::String^ sSql) //requête de type action - INSERT, DELETE, UDAPTE
{
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->SelectCommand = this->oCmd;
	this->oCnx->Open();//On doit le faire explicitement
	this->oCmd->ExecuteNonQuery();//exécute la requête sans retour
	this->oCnx->Close();
}
