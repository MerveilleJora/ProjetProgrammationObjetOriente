#pragma once
namespace NS_Comp_Mappage
{
	ref class CLStatistique
	{
	private:
		System::String^ sSql;
		double PanierMoyen;
		double ChiffreAffaire;
		double SousSeuil;
		System::String^ Articlesplusvendu;
		System::String^ Articlesmoinsvendu;
		double Totalparclient;
		double ValeurCommerciale;
		double ValeurAchat;
		double Simulation;
	public:

#pragma region SET
		System::String^ Select(void);
		System::String^ Insert(void);
		System::String^ Delete(void);
		System::String^ Update(void);

		void setPanierMoyen(double);
		void setChiffreAffaire(double);
		void setSousSeuil(double);
		void setTotalparclient(double);
		void setArticlesplusvendu(System::String^);
		void setArticlesmoinsvendu(System::String^);
		void setValeurCommerciale(double);
		void setValeurAchat(double);
		void setSimulation(double);
#pragma endregion

#pragma region GET
		double getPanierMoyen(void);
		double getChiffreAffaire(void);
		double getSousSeuil(void);
		double getTotalparclient(void);
		System::String^ getArticlesplusvendu(void);
		System::String^ getArticlesmoinsvendu(void);
		double getValeurCommerciale(void);
		double getValeurAchat(void);
		double getSimulation(void);
#pragma endregion
	};
}