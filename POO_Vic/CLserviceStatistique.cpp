#include "CLserviceStatistiques.h"

NS_Comp_Svc::CLserviceStatistique::CLserviceStatistique(void)
{
	this->oCad = gcnew NS_Comp_Data::CL_CAD();
	this->oTBStatistique = gcnew NS_Comp_Mappage::CLStatistique();
}

System::Data::DataSet^ NS_Comp_Svc::CLserviceStatistique::afficherPanierMoyen(System::String^ PanierMoyen)
{
	System::String^ sSql;

	sSql = this->oTBStatistique->Select();

	return this->oCad->getRows(sSql, PanierMoyen);
}

System::Data::DataSet^ NS_Comp_Svc::CLserviceStatistique::afficherChiffreAffaire(System::String^ ChiffreAffaire)
{
	System::String^ sSql;

	sSql = this->oTBStatistique->Select();

	return this->oCad->getRows(sSql, ChiffreAffaire);
}
System::Data::DataSet^ NS_Comp_Svc::CLserviceStatistique::afficherSousSeuil(System::String^ SousSeuil)
{
	System::String^ sSql;

	sSql = this->oTBStatistique->Select();

	return this->oCad->getRows(sSql, SousSeuil);
}
System::Data::DataSet^ NS_Comp_Svc::CLserviceStatistique::afficherTotalparclient(System::String^ Totalparclient)
{
	System::String^ sSql;

	sSql = this->oTBStatistique->Select();

	return this->oCad->getRows(sSql, Totalparclient);
}
System::Data::DataSet^ NS_Comp_Svc::CLserviceStatistique::afficherArticleplusvendu(System::String^ Articleplusvendu)
{
	System::String^ sSql;

	sSql = this->oTBStatistique->Select();

	return this->oCad->getRows(sSql, Articleplusvendu);
}
System::Data::DataSet^ NS_Comp_Svc::CLserviceStatistique::afficherArticlemoinsvendu(System::String^ Articlemoinsvendu)
{
	System::String^ sSql;

	sSql = this->oTBStatistique->Select();

	return this->oCad->getRows(sSql, Articlemoinsvendu);
}
System::Data::DataSet^ NS_Comp_Svc::CLserviceStatistique::afficherValeurCommercial(System::String^ ValeurCommercial)
{
	System::String^ sSql;

	sSql = this->oTBStatistique->Select();

	return this->oCad->getRows(sSql, ValeurCommercial);
}
System::Data::DataSet^ NS_Comp_Svc::CLserviceStatistique::afficherValeurAchat(System::String^ ValeurAchat)
{
	System::String^ sSql;

	sSql = this->oTBStatistique->Select();

	return this->oCad->getRows(sSql, ValeurAchat);
}
System::Data::DataSet^ NS_Comp_Svc::CLserviceStatistique::afficherSimulation(System::String^ Simulation)
{
	System::String^ sSql;

	sSql = this->oTBStatistique->Select();

	return this->oCad->getRows(sSql, Simulation);
}