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

#pragma region créer une commande
void NS_Comp_Svc::CLserviceCommande::creerCommande(System::String^ ReferenceCommande, System::String^ ReferenceArticle, System::String^ DateLivraison, System::String^ DateEmission, System::String^ DatePayement, System::String^ MoyenDePayement, System::String^ DateSoldeEnregistre, System::String^ NomArticle, int QuantiteArticle, int TotalArticleSelonNature, double PrixHT, double PrixTVA, double PrixTTC, System::String^ NomSociete, System::String^ AdresseSociete, int NumServiceClient, System::String^ Logo, System::String^ NomClient, System::String^ PrenomClient, System::String^ AdresseLivraison, System::String^ AdresseFacturation)
{
	System::String^ sSql;
	this->oTBCommande->setReferenceCommande(ReferenceCommande);
	this->oTBCommande->setReferenceArticle(ReferenceArticle);
	this->oTBCommande->setDateLivraison(DateLivraison);
	this->oTBCommande->setDateEmission(DateEmission);
	this->oTBCommande->setDatePayement(DatePayement);
	this->oTBCommande->setMoyenDePayement(MoyenDePayement);
	this->oTBCommande->setDateSoldeEnregistre(DateSoldeEnregistre);
	this->oTBCommande->setNomArticle(NomArticle);
	this->oTBCommande->setQuantiteArticle(QuantiteArticle);
	this->oTBCommande->setTotalArticleSelonNature(TotalArticleSelonNature);
	this->oTBCommande->setPrixHT(PrixHT);
	this->oTBCommande->setPrixTVA(PrixTVA);
	this->oTBCommande->setPrixTTC(PrixTTC);
	this->oTBCommande->setNomSociete(NomSociete);
	this->oTBCommande->setAdresseSociete(AdresseSociete);
	this->oTBCommande->setNumServiceClient(NumServiceClient);
	this->oTBCommande->setLogo(Logo);
	this->oTBCommande->setNomClient(NomClient);
	this->oTBCommande->setPrenomClient(PrenomClient);
	this->oTBCommande->setAdresseLivraison(AdresseLivraison);
	this->oTBCommande->setAdresseFacturation(AdresseFacturation);

	sSql = this->oTBCommande->Insert();

	this->oCad->actionRows(sSql);
}
#pragma endregion

void NS_Comp_Svc::CLserviceCommande::supprimerCommande(System::String^ ReferenceCommande)
{
	System::String^ sSql;
	this->oTBCommande->setReferenceCommande(ReferenceCommande);
	sSql = this->oTBCommande->Delete();

	this->oCad->actionRows(sSql);
}

void NS_Comp_Svc::CLserviceCommande::modifierCommande(System::String^ ReferenceCommande)
{
	System::String^ sSql;
	this->oTBCommande->setReferenceCommande(ReferenceCommande);
	sSql = this->oTBCommande->Update();

	this->oCad->actionRows(sSql);
}