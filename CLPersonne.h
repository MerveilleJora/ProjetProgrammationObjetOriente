#pragma once
namespace NS_Comp_Mappage
{
	ref class CLPersonne
	{
	private:
		System::String^ sSql;
		int Id;
		System::String^ nom;
		System::String^ prenom;
		System::String^ dateN;
		System::String^ dateA;
		System::String^ dateE;
	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		void setId(int);
		void setNom(System::String^);
		void setPrenom(System::String^);
		void setDateN(System::String^);
		void setDateA(System::String^);
		void setDateE(System::String^);
		int getId(void);
		System::String^ getNom(void);
		System::String^ getPrenom(void);
		System::String^ getDateN(void);
		System::String^ getDateA(void);
		System::String^ getDateE(void);
	};
}
