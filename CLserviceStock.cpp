#include "ClserviceStock.h"


NS_Comp_Svc::CLserviceStock::CLserviceStock(void)
{
	this->oCad = gcnew NS_Comp_Data::CL_CAD();
	this->oTBStock = gcnew NS_Comp_Mappage::CLStock();
}
System::Data::DataSet^ NS_Comp_Svc::CLserviceStock::afficherStock(System::String^ dataTableName)
{
	System::String^ sSql;

	sSql = this->oTBStock->Select();
	return this->oCad->getRows(sSql, dataTableName);
}

void NS_Comp_Svc::CLserviceStock::creerStock(System::String^ ReferenceArticle, System::String^ NatureArticle, System::String^ CouleurArticle, System::String^ NomArticle, System::String^ QuantiteArticle, System::String^ SeuilApprovisionnement, System::String^ TauxTVA, System::String^ PrixHT, System::String^ PrixHTGrosseCommande)
{
	System::String^ sSql;
	this->oTBStock->setReferenceArticle(ReferenceArticle);
	this->oTBStock->setNatureArticle(NatureArticle);
	this->oTBStock->setCouleurArticle(CouleurArticle);
	this->oTBStock->setNomArticle(NomArticle);
	this->oTBStock->setQuantiteArticle(QuantiteArticle);
	this->oTBStock->setTauxTVA(TauxTVA);
	this->oTBStock->setSeuilApprovisionnement(SeuilApprovisionnement);
	this->oTBStock->setPrixHT(PrixHT);
	this->oTBStock->setPrixHTGrosseCommande(PrixHTGrosseCommande);

	sSql = this->oTBStock->Insert();

	this->oCad->actionRows(sSql);
}

void NS_Comp_Svc::CLserviceStock::supprimerStock(System::String^ ReferenceArticle)
{
	System::String^ sSql;
	this->oTBStock->setReferenceArticle(ReferenceArticle);
	sSql = this->oTBStock->Delete();

	this->oCad->actionRows(sSql);
}

void NS_Comp_Svc::CLserviceStock::modifierStock(System::String^ QuantiteArticle, System::String^ Refarticle)
{
	System::String^ sSql;
	this->oTBStock->setReferenceArticle(QuantiteArticle);
	this->oTBStock->setReferenceArticle(Refarticle);
	sSql = this->oTBStock->Update();

	this->oCad->actionRows(sSql);
