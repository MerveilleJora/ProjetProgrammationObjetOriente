#pragma once
namespace NS_Comp_Data
{
	ref class CL_CAD//donne acc�s aux donn�es sql 
	{
	private://en priv�, les attributs composants d'acc�s aux donn�s
		System::String^ sSql;
		System::String^ sCnx;//pour stocker la cha�ne de connexion
		System::Data::SqlClient::SqlConnection^ oCnx;
		System::Data::SqlClient::SqlCommand^ oCmd;
		System::Data::SqlClient::SqlDataAdapter^ oDA;
		System::Data::DataSet^ oDs;
	public:
		CL_CAD(void);//constructeur
		System::Data::DataSet^ getRows(System::String^, System::String^);//r�cup�re des enregistrements
		void actionRows(System::String^);//ex�cuter les enregistrements(sans r�cup�ere)
	};
}