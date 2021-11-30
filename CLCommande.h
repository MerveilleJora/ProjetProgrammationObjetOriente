#pragma once
namespace NS_Comp_Mappage
{
	ref class CLCommande
	{
	private:
		System::String^ sSql;
		System::String^ Refefence;
		System::String^ Date;
		double prixHT;
		double TVA;
		double prixTTC;
	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);
		void setReference(int);
		void setDate(System::String^);
		void setNom(System::String^);
		void setPrenom(System::String^);
		int getReference(void);
		System::String^ getDate(void);
		System::String^ getNom(void);
		System::String^ getPrenom(void);
	};
}
