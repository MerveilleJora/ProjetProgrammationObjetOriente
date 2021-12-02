#include "CLserviceClient.h"


NS_Comp_Svc::CLserviceClient::CLserviceClient(void)
{
	this->oCad = gcnew NS_Comp_Data::CL_CAD();
	this->oTBPersonne = gcnew NS_Comp_Mappage::CLPersonne();
}
System::Data::DataSet^ NS_Comp_Svc::CLserviceClient::afficherClient(System::String^ dataTableName)
{
	System::String^ sSql;

	sSql = this->oTBPersonne->SelectC();
	return this->oCad->getRows(sSql, dataTableName);
}

void NS_Comp_Svc::CLserviceClient::creerClient(System::String^ Nom, System::String^ Prenom, System::String^ AdresseFacturation, int CPAdresseFacturation, System::String^ VilleAdresseFacturation, System::String^ AdresseLivraison, int CPAdresseLivraison, System::String^ VilleAdresseLivraison, System::String^ DateN, System::String^ DateA)
{
	System::String^ sSql;
	this->oTBPersonne->setNom(Nom);
	this->oTBPersonne->setPrenom(Prenom);
	this->oTBPersonne->setAdresseFacturation(AdresseFacturation);
	this->oTBPersonne->setCPAdresseFacturation(CPAdresseFacturation);
	this->oTBPersonne->setVilleAdresseFacturation(VilleAdresseFacturation);
	this->oTBPersonne->setAdresseLivraison(AdresseLivraison);
	this->oTBPersonne->setCPAdresseLivraison(CPAdresseLivraison);
	this->oTBPersonne->setVilleAdresseLivraison(VilleAdresseLivraison);
	this->oTBPersonne->setDateN(DateN);
	this->oTBPersonne->setDateE(DateA);
	sSql = this->oTBPersonne->Insert();

	this->oCad->actionRows(sSql);
}

void NS_Comp_Svc::CLserviceClient::supprimerClient(int IdPersonne)
{
	System::String^ sSql;
	this->oTBPersonne->setIdPersonne(IdPersonne);
	sSql = this->oTBPersonne->Delete();

	this->oCad->actionRows(sSql);
}

void NS_Comp_Svc::CLserviceClient::modifierClient(int IdPersonne)
{
	System::String^ sSql;
	this->oTBPersonne->setIdPersonne(IdPersonne);
	sSql = this->oTBPersonne->Update();

	this->oCad->actionRows(sSql);
}