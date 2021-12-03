
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
		int QuantiteArticle;
		int SeuilApprovisionnement;
		double TauxTVA;
		double PrixHT;
		double PrixHTGrosseCommande;


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
		void setQuantiteArticle(int);
		void setSeuilApprovisionnement(int);
		void setTauxTVA(double);
		void setPrixHT(double);
		void setPrixHTGrosseCommande(double);
#pragma endregion
#pragma region GET
		System::String^ getReferenceArticle(void);
		System::String^ getNatureArticle(void);
		System::String^ getCouleurArticle(void);
		System::String^ getNomArticle(void);
		int getQuantiteArticle(void);
		int getSeuilApprovisionnement(void);
		double getTauxTVA(void);
		double getPrixHT(void);
		double getPrixHTGrosseCommande(void);
#pragma endregion
	};
}