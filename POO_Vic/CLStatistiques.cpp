#include "CLStatistiques.h"

System::String^ NS_Comp_Mappage::CLStatistique::Select(void)
{
	return "";
}
System::String^ NS_Comp_Mappage::CLStatistique::Insert(void)
{
	return "";
}
System::String^ NS_Comp_Mappage::CLStatistique::Delete(void)
{
	return "";
}
System::String^ NS_Comp_Mappage::CLStatistique::Update(void)
{
	return "";
}

#pragma region SET
void NS_Comp_Mappage::CLStatistique::setPanierMoyen(double PanierMoyen)
{
	this->PanierMoyen = PanierMoyen;
}
void NS_Comp_Mappage::CLStatistique::setChiffreAffaire(double ChiffreAffaire)
{
	this->ChiffreAffaire = ChiffreAffaire;
}
void NS_Comp_Mappage::CLStatistique::setSousSeuil(double SousSeuil)
{
	this->SousSeuil = SousSeuil;
}
void NS_Comp_Mappage::CLStatistique::setTotalparclient(double Totalparclient)
{
	this->Totalparclient = Totalparclient;
}
void NS_Comp_Mappage::CLStatistique::setArticlesplusvendu(System::String^ Articlesplusvendu)
{
	this->Articlesplusvendu = Articlesplusvendu;
}
void NS_Comp_Mappage::CLStatistique::setArticlesmoinsvendu(System::String^ Articlesmoinsvendu)
{
	this->Articlesmoinsvendu = Articlesmoinsvendu;
}
void NS_Comp_Mappage::CLStatistique::setValeurCommerciale(double ValeurCommerciale)
{
	this->ValeurCommerciale = ValeurCommerciale;
}
void NS_Comp_Mappage::CLStatistique::setValeurAchat(double ValeurAchat)
{
	this->ValeurAchat = ValeurAchat;
}
void NS_Comp_Mappage::CLStatistique::setSimulation(double)
{
	this->Simulation = Simulation;
}
#pragma endregion

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// GET //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

double NS_Comp_Mappage::CLStatistique::getPanierMoyen(void)
{
	return this->PanierMoyen;
}
double NS_Comp_Mappage::CLStatistique::getChiffreAffaire(void)
{
	return this->ChiffreAffaire;
}
double NS_Comp_Mappage::CLStatistique::getSousSeuil(void)
{
	return this->SousSeuil;
}
double NS_Comp_Mappage::CLStatistique::getTotalparclient(void)
{
	return this->Totalparclient;
}
System::String^ NS_Comp_Mappage::CLStatistique::getArticlesplusvendu(void)
{
	return this->Articlesplusvendu;
}
System::String^	NS_Comp_Mappage::CLStatistique::getArticlesmoinsvendu(void)
{
	return this->Articlesmoinsvendu;
}
double NS_Comp_Mappage::CLStatistique::getValeurCommerciale(void)
{
	return this->ValeurCommerciale;
}
double NS_Comp_Mappage::CLStatistique::getValeurAchat(void)
{
	return this->ValeurAchat;
}
double NS_Comp_Mappage::CLStatistique::getSimulation(void)
{
	return this->Simulation;
}