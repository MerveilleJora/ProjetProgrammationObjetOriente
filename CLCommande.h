#pragma once
namespace NS_Comp_Mappage
{
	ref class CLCommande
	{
	private:
		System::String^ sSql;
		System::String^ ReferenceCommande;
		System::String^ ReferenceArticle;
		System::String^ DateLivraison;
		System::String^ DateEmission;
		System::String^ DatePayement;
		System::String^ MoyenDePayement;
		System::String^ DateSoldeEnregistre;
		System::String^ NomArticle;
		int QuantiteArticle;
		int TotalArticleSelonNature;
		double PrixHT;
		double PrixTVA;
		double PrixTTC;
		System::String^ NomSociete;
		System::String^ AdresseSociete;
		int NumServiceClient;
		System::String^ Logo;
		System::String^ NomClient;
		System::String^ PrenomClient;
		System::String^ AdresseLivraison;
		System::String^ AdresseFacturation;
	public:

		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);

#pragma region SET
		void setReferenceCommande(System::String^);
		void setReferenceArticle(System::String^);
		void setDateLivraison(System::String^);
		void setDateEmission(System::String^);
		void setDatePayement(System::String^);
		void setMoyenDePayement(System::String^);
		void setDateSoldeEnregistre(System::String^);
		void setNomArticle(System::String^);
		void setQuantiteArticle(int);
		void setTotalArticleSelonNature(int);
		void setPrixHT(double);
		void setPrixTVA(double);
		void setPrixTTC(double);
		void setNomSociete(System::String^);
		void setAdresseSociete(System::String^);
		void setNumServiceClient(int);
		void setLogo(System::String^);
		void setNomClient(System::String^);
		void setPrenomClient(System::String^);
		void setAdresseLivraison(System::String^);
		void setAdresseFacturation(System::String^);
#pragma endregion
#pragma region GET
		System::String^ getReferenceCommande(void);
		System::String^ getReferenceArticle(void);
		System::String^ getDateLivraison(void);
		System::String^ getDateEmission(void);
		System::String^ getDatePayement(void);
		System::String^ getMoyenDePayement(void);
		System::String^ getDateSoldeEnregistre(void);
		System::String^ getNomArticle(void);
		int getQuantiteArticle(void);
		int getTotalArticleSelonNature(void);
		double getPrixHT(void);
		double getPrixTVA(void);
		double getPrixTTC(void);
		System::String^ getNomSociete(void);
		System::String^ getAdresseSociete(void);
		int getNumServiceClient(void);
		System::String^ getLogo(void);
		System::String^ getNomClient(void);
		System::String^ getPrenomClient(void);
		System::String^ getAdresseLivraison(void);
		System::String^ getAdresseFacturation(void);
#pragma endregion
	};
}
