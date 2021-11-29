
#pragma once
namespace NS_Comp_Data
{
	ref class CL_CAD//donne accès aux données sql 
	{
	private://en privé, les attributs composants d'accès aux donnés
		System::String^ sSql;
		System::String^ sCnx;//pour stocker la chaîne de connexion
		System::Data::SqlClient::SqlConnection^ oCnx;
		System::Data::SqlClient::SqlCommand^ oCmd;
		System::Data::SqlClient::SqlDataAdapter^ oDA;
		System::Data::DataSet^ oDs;
	public:
		CL_CAD(void);//constructeur
		System::Data::DataSet^ getRows(System::String^, System::String^);//récupère des enregistrements
		void actionRows(System::String^);//exécuter les enregistrements(sans récupéere)
	};
}
