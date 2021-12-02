#include "CLCommande.h"
#include "CL_CAD.h"

namespace NS_Comp_Svc
{
	ref class CLserviceCommande//service gestion de personnels 
	{
	private:
		//Objet de composant 
		NS_Comp_Data::CL_CAD^ oCad;
		NS_Comp_Mappage::CLCommande^ oTBCommande;
	public:
		CLserviceCommande(void);//constructeur 
		//les autres méthodes
		System::Data::DataSet^ afficherCommande(System::String^);
		void creerCommande(System::String^, System::String^, System::String^, System::String^,System::String^, System::String^, System::String^, System::String^, int, int, double, double, double, System::String^, System::String^, int, System::String^, System::String^, System::String^, System::String^, System::String^);
		void supprimerCommande(System::String^);
		void modifierCommande(System::String^);
	};
}