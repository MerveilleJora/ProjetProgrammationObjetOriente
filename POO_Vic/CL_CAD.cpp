#include "CL_CAD.h"
NS_Comp_Data::CL_CAD::CL_CAD(void)
{
	this->sCnx = "Data Source=LAPTOP-M3466NS4\\MSSQL_LISA;Initial Catalog=DB_POO;Persist Security Info=True;User ID=CNX_P6;Password=4Pourtous";

	this->sSql = "Rien";//initialise la variable sql � "rien"
	this->sSql = "Rien";//initialise la variable sql � "rien"

	this->oCnx = gcnew System::Data::SqlClient::SqlConnection(this->sCnx);//cr�er un objet connexion en se basant sur la variable sCnx de type string 
	this->oCmd = gcnew System::Data::SqlClient::SqlCommand(this->sSql, this->oCnx);//cr�ation d'un objet commande contenant la requ�te sql
	this->oDA = gcnew System::Data::SqlClient::SqlDataAdapter();//Objet faisant la liaison entre l'application et LQS server/Dans cet objet on est connect� � sql server on va r�cup�rer les donn�es, les mettre en cache dans un objet hors connexion
	this->oCnx = gcnew System::Data::SqlClient::SqlConnection(this->sCnx);//cr�er un objet connexion en se basant sur la variable sCnx de type string 
	this->oCmd = gcnew System::Data::SqlClient::SqlCommand(this->sSql, this->oCnx);//cr�ation d'un objet commande contenant la requ�te sql et l'objet cha�ne de connexion
	this->oDA = gcnew System::Data::SqlClient::SqlDataAdapter();//Objet faisant la liaison entre l'application et SQL server/Dans cet objet on est connect� � sql server on va r�cup�rer les donn�es, les mettre en cache dans un objet hors connexion
	this->oDs = gcnew System::Data::DataSet();//objet de type dataset

	this->oCmd->CommandType = System::Data::CommandType::Text;//commandes utilis�s sont de type text
	this->oCmd->CommandType = System::Data::CommandType::Text;//commandes utilis�s sont de type text
}
/*------------------------------------------------------------requ�te sql-------------Nom r�sultat de requ�te*/
System::Data::DataSet^ NS_Comp_Data::CL_CAD::getRows(System::String^ sSql, System::String^ sDataTableName)//r�cup�re des action/ A utiliser lorsqu'on fait un select
{
	this->oDs->Clear();//nettoyer le dataset qui cumule les donn�es pr�c�dentes 
	this->oDs->Clear();//nettoyer le dataset qui cumule les donn�es pr�c�dentes 
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->SelectCommand = this->oCmd;
	this->oDA->Fill(this->oDs, sDataTableName);//faire un exc�cute en les nommants la variable sDataTableName
	this->oDA->Fill(this->oDs, sDataTableName);//faire un exc�cute en les nommants la variable sDataTableName

	return this->oDs;//retourne l'objet dataset avec les donn�es
	return this->oDs;//retourne l'objet dataset avec les donn�es
}
void NS_Comp_Data::CL_CAD::actionRows(System::String^ sSql) //requ�te de type action - INSERT, DELETE, UDAPTE
{
	this->sSql = sSql;
	this->oCmd->CommandText = this->sSql;
	this->oDA->SelectCommand = this->oCmd;
	this->oCnx->Open();//On doit le faire expliciter 
	this->oCmd->ExecuteNonQuery();//ex�cute la requ�te sans retour
	this->oCnx->Open();//On doit le faire explicitement
	this->oCmd->ExecuteNonQuery();//ex�cute la requ�te sans retour
	this->oCnx->Close();
}