#include "CLservicePersonnel.h"

NS_Comp_Svc::CLservicePersonnel::CLservicePersonnel(void)
{
	this->oCad = gcnew NS_Comp_Data::CL_CAD();
	this->oTBPersonne = gcnew NS_Comp_Mappage::CLPersonne();
}
System::Data::DataSet^ NS_Comp_Svc::CLservicePersonnel::afficherPersonnel(System::String^ dataTableName)
{
	System::String^ sSql;

	sSql = this->oTBPersonne->SelectP();
	return this->oCad->getRows(sSql, dataTableName);
}

void NS_Comp_Svc::CLservicePersonnel::creerPersonnel(System::String^ CPAdressePersonnelle, System::String^ Nom, System::String^ Prenom, System::String^ AdressePersonnelle, System::String^ VilleAdressePersonnelle, System::String^ DateE)
{
	System::String^ sSql;

	this->oTBPersonne->setCPAdressePersonnelle(CPAdressePersonnelle);
	this->oTBPersonne->setNom(Nom);
	this->oTBPersonne->setPrenom(Prenom);
	this->oTBPersonne->setAdressePersonnelle(AdressePersonnelle);
	this->oTBPersonne->setVilleAdressePersonnelle(VilleAdressePersonnelle);
	this->oTBPersonne->setDateE(DateE);

	sSql = this->oTBPersonne->Insert();

	this->oCad->actionRows(sSql);
}

void NS_Comp_Svc::CLservicePersonnel::supprimerPersonnel(int IdPersonne)
{
	System::String^ sSql;
	this->oTBPersonne->setIdPersonne(IdPersonne);
	sSql = this->oTBPersonne->Delete();

	this->oCad->actionRows(sSql);
}

void NS_Comp_Svc::CLservicePersonnel::modifierPersonnel(int IdPersonne)
{
	System::String^ sSql;
	this->oTBPersonne->setIdPersonne(IdPersonne);
	sSql = this->oTBPersonne->Update();

	this->oCad->actionRows(sSql);
}