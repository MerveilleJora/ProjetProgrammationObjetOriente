#include "CLserviceCommande.h"


NS_Comp_Svc::CLserviceCommande::CLserviceCommande(void)
{
	this->oCad = gcnew NS_Comp_Data::CL_CAD();
	this->oTBCommande = gcnew NS_Comp_Mappage::CLCommande();
}
System::Data::DataSet^ NS_Comp_Svc::CLserviceCommande::afficherCommande(System::String^ dataTableName)
{
	System::String^ sSql;

	sSql = this->oTBCommande->Select();
	return this->oCad->getRows(sSql, dataTableName);
}
void NS_Comp_Svc::CLserviceCommande::creerCommande(int Id, System::String^ nom, System::String^ prenom, System::String^ date)
{
	System::String^ sSql;
	this->oTBCommande->setReference(Id);
	this->oTBCommande->setNom(nom);
	this->oTBCommande->setPrenom(prenom);
	this->oTBCommande->setDate(date);
	sSql = this->oTBCommande->Insert();

	this->oCad->actionRows(sSql);
}

void NS_Comp_Svc::CLserviceCommande::supprimerCommande(int Id)
{
	System::String^ sSql;
	this->oTBCommande->setReference(Id);
	sSql = this->oTBCommande->Delete();

	this->oCad->actionRows(sSql);
}

void NS_Comp_Svc::CLserviceCommande::modifierCommande(int Id)
{
	System::String^ sSql;
	this->oTBCommande->setReference(Id);
	sSql = this->oTBCommande->Update();

	this->oCad->actionRows(sSql);
}
