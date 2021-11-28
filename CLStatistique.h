#pragma once
namespace NS_Comp_Mappage
{
	ref class CLStatistique
	{
	private:
		System::String^ sSql;
		double panierMoyen;
		double chiffreAffaire;
		double sousSeuil;
		System::String^ articlesplusvendu;
		System::String^ articlesmoinsvendu;
		double totalparclient;
		double valeurCommerciale;
		double valeurAchat;
	public:
		//paniermoyen
		void setpanierMoyen(double);
		double getpanierMoyen(void);
		//chiffre d'affaire
		void setchiffreAffaire(void);
		void getchiffreAffaire(double);
		//Sous seuil d'approvisionnement
		void setsousSeuil(double);
		double getsousSeuil(double);
		//Montant total par client 
		void setTotalparclient(double);
		double getTotalparclient(void);
		//Articles les moins et plus vendus
		void setArticleplusvendu(System::String);
		System::String^ getArticleplusvendu(void);
		void setArticlemoinsvendu(System::String);
		System::String^ getArticlemoinsvendu(void);
		//Valeur commerciale
		void setValeurCommerciale(double);
		double getValeurCommerciale(void);
		//Valeur d'achat
		void setValeurAchat(double);
		double getValeurAchat(void);
	};
}
