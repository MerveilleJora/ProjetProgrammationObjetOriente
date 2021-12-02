#include "CLPersonne.h"
#include "CL_CAD.h"

namespace NS_Comp_Svc
{
	ref class CLservicePersonnel//service gestion de clients 
	{
	private:
		//Objet de composant 
		NS_Comp_Data::CL_CAD^ oCad;
		NS_Comp_Mappage::CLPersonne^ oTBPersonne;
	public:
		CLservicePersonnel(void);//constructeur int IdPersonne;
		
		//les autres m�thodes
		System::Data::DataSet^ afficherPersonnel(System::String^);
		void creerPersonnel(System::String^, System::String^, System::String^, System::String^, System::String^, System::String^);
		void supprimerPersonnel(int);
		void modifierPersonnel(int);
	};
}