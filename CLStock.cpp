#include "CLStock.h"

System::String^ NS_Comp_Mappage::CLStock::Select(void)
{
	return "SELECT Article.reference_article, Article.nom_article, Article.type_article, Article.quantite_article, Article.prix_HT, Article.taux_TVA_stock, Article.seuil_rea FROM Article;";
}
System::String^ NS_Comp_Mappage::CLStock::Insert(void)
{
	return "INSERT INTO Article (nom_article, couleur, prix_HT, taux_TVA, quantite_article, seuil_rea, taux_TVA_stock, type_article) VALUES('"+this->NomArticle+"', '"+this->CouleurArticle+"', '"+this->PrixHT+"', '"+this->TauxTVA+"', '"+this->QuantiteArticle+"', '"+this->SeuilApprovisionnement+"', '"+this->TauxTVA*this->QuantiteArticle+"', '"+NatureArticle+"'); INSERT INTO Type_article(type_article) SELECT type_article FROM Article WHERE nom_article = '"+NatureArticle+"'; ";
}
System::String^ NS_Comp_Mappage::CLStock::Delete(void)
{
	return "DELETE FROM Article WHERE reference_article = '"+this->ReferenceArticle+"'; ";
}
System::String^ NS_Comp_Mappage::CLStock::Update(void)
{
	return "UPDATE Article SET [nom_article] = ('"+this->NomArticle+"'), [couleur] = ('"+this->CouleurArticle+"'), [prix_HT] = ('"+this->PrixHT+"'), [taux_TVA] = ('"+TauxTVA+"'), [quantite_article] = ('"+this->QuantiteArticle+"'), [seuil_rea] = ('"+this->SeuilApprovisionnement+"'), [taux_TVA_stock] = ('" + this->TauxTVA * this->QuantiteArticle + "'), [type_article] = ('"+this->NatureArticle+"'), WHERE reference_article = '"+this->ReferenceArticle+"'";
}

#pragma region SET
void NS_Comp_Mappage::CLStock::setReferenceArticle(System::String^ ReferenceArticle)
{
	this->ReferenceArticle = ReferenceArticle;
}
void NS_Comp_Mappage::CLStock::setNatureArticle(System::String^ NatureArticle)
{
	this->NatureArticle = NatureArticle;
}
void NS_Comp_Mappage::CLStock::setCouleurArticle(System::String^ CouleurArticle)
{
	this->CouleurArticle = CouleurArticle;
}
void NS_Comp_Mappage::CLStock::setNomArticle(System::String^ NomArticle)
{
	this->NomArticle = NomArticle;
}
void NS_Comp_Mappage::CLStock::setQuantiteArticle(int QuantiteArticle)
{
	this->QuantiteArticle = QuantiteArticle;
}
void NS_Comp_Mappage::CLStock::setSeuilApprovisionnement(int SeuilApprovisionnement)
{
	this->SeuilApprovisionnement = SeuilApprovisionnement;
}
void NS_Comp_Mappage::CLStock::setTauxTVA(double TauxTVA)
{
	this->TauxTVA = TauxTVA;
}
void NS_Comp_Mappage::CLStock::setPrixHT(double PrixHT)
{
	this->PrixHT = PrixHT;
}
void NS_Comp_Mappage::CLStock::setPrixHTGrosseCommande(double PrixHTGrosseCommande)
{
	this->PrixHTGrosseCommande = PrixHTGrosseCommande;
}
#pragma endregion
#pragma region GET
System::String^ NS_Comp_Mappage::CLStock::getReferenceArticle(void)
{
	return this->ReferenceArticle;
}
System::String^ NS_Comp_Mappage::CLStock::getNatureArticle(void)
{
	return this->NatureArticle;
}
System::String^ NS_Comp_Mappage::CLStock::getCouleurArticle(void)
{
	return this->CouleurArticle;
}
System::String^ NS_Comp_Mappage::CLStock::getNomArticle(void)
{
	return this->NomArticle;
}
int NS_Comp_Mappage::CLStock::getQuantiteArticle(void)
{
	return this->QuantiteArticle;
}
int NS_Comp_Mappage::CLStock::getSeuilApprovisionnement(void)
{
	return this->SeuilApprovisionnement;
}
double NS_Comp_Mappage::CLStock::getTauxTVA(void)
{
	return this->TauxTVA;
}
double NS_Comp_Mappage::CLStock::getPrixHT(void)
{
	return this->PrixHT;
}
double NS_Comp_Mappage::CLStock::getPrixHTGrosseCommande(void)
{
	return this->PrixHTGrosseCommande;
}
#pragma endregion
