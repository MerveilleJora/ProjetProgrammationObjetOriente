#include "CLPersonne.h"
#include "CL_CAD.h"

namespace NS_Comp_Svc
{
	ref class CLserviceClient//service gestion de clients 
	{
	private:
		//Objet de composant
		NS_Comp_Data::CL_CAD^ oCad;
		NS_Comp_Mappage::CLPersonne^ oTBPersonne;
	public:
		CLserviceClient(void);//constructeur 
		//les autres méthodes
		System::Data::DataSet^ afficherClient(System::String^);
		void creerClient(System::String^, System::String^, System::String^, int, System::String^, System::String^, int, System::String^, System::String^, System::String^);
		void supprimerClient(int);
		void modifierClient(int);
	};
}
