#include "CLCommande.h"


System::String^ NS_Comp_Mappage::CLCommande::Select(void)
{
	return "";
}
System::String^ NS_Comp_Mappage::CLCommande::Insert(void)
{
	return "";
}
System::String^ NS_Comp_Mappage::CLCommande::Delete(void)
{
	return "";
}
System::String^ NS_Comp_Mappage::CLCommande::Update(void)
{
	return "";
}


#pragma region SET
void NS_Comp_Mappage::CLCommande::setReferenceCommande(System::String^ ReferenceCommande)
{
	this->ReferenceCommande = ReferenceCommande;
}
void NS_Comp_Mappage::CLCommande::setReferenceArticle(System::String^ ReferenceArticle)
{
	this->ReferenceArticle = ReferenceArticle;
}
void NS_Comp_Mappage::CLCommande::setDateLivraison(System::String^ DateLivraison)
{
	this->DateLivraison = DateLivraison;
}
void NS_Comp_Mappage::CLCommande::setDateEmission(System::String^ DateEmission)
{
	this->DateEmission = DateEmission;
}
void NS_Comp_Mappage::CLCommande::setDatePayement(System::String^ DatePayement)
{
	this->DatePayement = DatePayement;
}
void NS_Comp_Mappage::CLCommande::setMoyenDePayement(System::String^ MoyenDePayement)
{
	this->MoyenDePayement = MoyenDePayement;
}
void NS_Comp_Mappage::CLCommande::setDateSoldeEnregistre(System::String^ DateSoldeEnregistre)
{
	this->DateSoldeEnregistre = DateSoldeEnregistre;
}
void NS_Comp_Mappage::CLCommande::setNomArticle(System::String^ NomArticle)
{
	this->NomArticle = NomArticle;
}
void NS_Comp_Mappage::CLCommande::setQuantiteArticle(int QuantiteArticle)
{
	this->QuantiteArticle = QuantiteArticle;
}
void NS_Comp_Mappage::CLCommande::setTotalArticleSelonNature(int TotalArticleSelonNature)
{
	this->TotalArticleSelonNature = TotalArticleSelonNature;
}
void NS_Comp_Mappage::CLCommande::setPrixHT(double PrixHT)
{
	this->PrixHT = PrixHT;
}
void NS_Comp_Mappage::CLCommande::setPrixTVA(double PrixTVA)
{
	this->PrixTVA = PrixTVA;
}
void NS_Comp_Mappage::CLCommande::setPrixTTC(double PrixTTC)
{
	this->PrixTTC = PrixTTC;
}
void NS_Comp_Mappage::CLCommande::setNomSociete(System::String^ NomSociete)
{
	this->NomSociete = NomSociete;
}
void NS_Comp_Mappage::CLCommande::setAdresseSociete(System::String^ AdresseSociete)
{
	this->AdresseSociete = AdresseSociete;
}
void NS_Comp_Mappage::CLCommande::setNumServiceClient(int NumServiceClient)
{
	this->NumServiceClient = NumServiceClient;
}
void NS_Comp_Mappage::CLCommande::setLogo(System::String^ Logo)
{
	this->Logo = Logo;
}
void NS_Comp_Mappage::CLCommande::setNomClient(System::String^ NomClient)
{
	this->NomClient = NomClient;
}
void NS_Comp_Mappage::CLCommande::setPrenomClient(System::String^ PrenomClient)
{
	this->PrenomClient = PrenomClient;
}
void NS_Comp_Mappage::CLCommande::setAdresseLivraison(System::String^ AdresseLivraison)
{
	this->AdresseLivraison = AdresseLivraison;
}
void NS_Comp_Mappage::CLCommande::setAdresseFacturation(System::String^ AdresseFacturation)
{
	this->AdresseFacturation = AdresseFacturation;
}
#pragma endregion
#pragma region GET
System::String^ NS_Comp_Mappage::CLCommande::getReferenceCommande(void)
{
	return this->ReferenceCommande;
}
System::String^ NS_Comp_Mappage::CLCommande::getReferenceArticle(void)
{
	return this->ReferenceArticle;
}
System::String^ NS_Comp_Mappage::CLCommande::getDateLivraison(void)
{
	return this->DateLivraison;
}
System::String^ NS_Comp_Mappage::CLCommande::getDateEmission(void)
{
	return this->DateEmission;
}
System::String^ NS_Comp_Mappage::CLCommande::getDatePayement(void)
{
	return this->DatePayement;
}
System::String^ NS_Comp_Mappage::CLCommande::getMoyenDePayement(void)
{
	return this->MoyenDePayement;
}
System::String^ NS_Comp_Mappage::CLCommande::getDateSoldeEnregistre(void)
{
	return this->DateSoldeEnregistre;
}
System::String^ NS_Comp_Mappage::CLCommande::getNomArticle(void)
{
	return this->NomArticle;
}
int NS_Comp_Mappage::CLCommande::getQuantiteArticle(void)
{
	return this->QuantiteArticle;
}
int NS_Comp_Mappage::CLCommande::getTotalArticleSelonNature(void)
{
	return this->TotalArticleSelonNature;
}
double NS_Comp_Mappage::CLCommande::getPrixHT(void)
{
	return this->PrixHT;
}
double NS_Comp_Mappage::CLCommande::getPrixTVA(void)
{
	return this->PrixTVA;
}
double NS_Comp_Mappage::CLCommande::getPrixTTC(void)
{
	return this->PrixTTC;
}
System::String^ NS_Comp_Mappage::CLCommande::getNomSociete(void)
{
	return this->NomSociete;
}
System::String^ NS_Comp_Mappage::CLCommande::getAdresseSociete(void)
{
	return this->AdresseSociete;
}
int NS_Comp_Mappage::CLCommande::getNumServiceClient(void)
{
	return this->NumServiceClient;
}
System::String^ NS_Comp_Mappage::CLCommande::getLogo(void)
{
	return this->Logo;
}
System::String^ NS_Comp_Mappage::CLCommande::getNomClient(void)
{
	return this->NomClient;
}
System::String^ NS_Comp_Mappage::CLCommande::getPrenomClient(void)
{
	return this->PrenomClient;
}
System::String^ NS_Comp_Mappage::CLCommande::getAdresseLivraison(void)
{
	return this->AdresseLivraison;
}
System::String^ NS_Comp_Mappage::CLCommande::getAdresseFacturation(void)
{
	return this->AdresseFacturation;
}
#pragma endregion