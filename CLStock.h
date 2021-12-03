
#pragma once
namespace NS_Comp_Mappage
{
	ref class CLStock
	{
	private:
		System::String^ sSql;
		System::String^ ReferenceArticle;
		System::String^ NatureArticle;
		System::String^ CouleurArticle;
		System::String^ NomArticle;
		System::String QuantiteArticle;
		System::String SeuilApprovisionnement;
		System::String TauxTVA;
		System::String PrixHT;
		System::String PrixHTGrosseCommande;


	public:
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);

#pragma region SET
		void setReferenceArticle(System::String^);
		void setNatureArticle(System::String^);
		void setCouleurArticle(System::String^);
		void setNomArticle(System::String^);
		void setQuantiteArticle(System::String^);
		void setSeuilApprovisionnement(System::String^);
		void setTauxTVA(System::String^);
		void setPrixHT(System::String^);
		void setPrixHTGrosseCommande(System::String^);
#pragma endregion
#pragma region GET
		System::String^ getReferenceArticle(void);
		System::String^ getNatureArticle(void);
		System::String^ getCouleurArticle(void);
		System::String^ getNomArticle(void);
		System::String^ getQuantiteArticle(void);
		System::String^ getSeuilApprovisionnement(void);
		System::String^ getTauxTVA(void);
		System::String^ getPrixHT(void);
		System::String^ getPrixHTGrosseCommande(void);
#pragma endregion
	};
}
