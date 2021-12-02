#include "CLStatistiques.h"
#include "CLPersonne.h"
#include "CLCommande.h"
#include "CL_CAD.h"

namespace NS_Comp_Svc
{
	ref class CLserviceStatistique//service gestion de personnels 
	{
	private:
		//Objet de composant 
		NS_Comp_Data::CL_CAD^ oCad;
		NS_Comp_Mappage::CLStatistique^ oTBStatistique;
		NS_Comp_Mappage::CLPersonne^ oTBPersonne;
		NS_Comp_Mappage::CLCommande^ oTBCommande;
	public:
		CLserviceStatistique(void);//constructeur 
		//les autres méthodes
		System::Data::DataSet^ afficherPanierMoyen(System::String^);
		System::Data::DataSet^ afficherChiffreAffaire(System::String^);
		System::Data::DataSet^ afficherSousSeuil(System::String^);
		System::Data::DataSet^ afficherTotalparclient(System::String^);
		System::Data::DataSet^ afficherArticleplusvendu(System::String^);
		System::Data::DataSet^ afficherArticlemoinsvendu(System::String^);
		System::Data::DataSet^ afficherValeurCommercial(System::String^);
		System::Data::DataSet^ afficherValeurAchat(System::String^);
		System::Data::DataSet^ afficherSimulation(System::String^);
	};
}