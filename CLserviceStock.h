#pragma once
#include "CLStock.h"
#include "CL_CAD.h"

namespace NS_Comp_Svc
{
	ref class CLserviceStock//service gestion de personnels 
	{
	private:
		//Objet de composant 
		NS_Comp_Data::CL_CAD^ oCad;
		NS_Comp_Mappage::CLStock^ oTBStock;
	public:
		CLserviceStock(void);//constructeur 
		//les autres méthodes
		System::Data::DataSet^ afficherStock(System::String^);
		void creerStock(System::String^, System::String^, System::String^, System::String^, int, int, double, double, double);
		void supprimerStock(System::String^);
		void modifierStock(System::String^);
	};
}