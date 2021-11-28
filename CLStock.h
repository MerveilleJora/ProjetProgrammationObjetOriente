#pragma once
namespace NS_Comp_Mappage
{
	ref class CLStock
	{
	private:
		System::String^ sSql;
		int numStock;
		int quantiteArt;
		int seuilApprovisionnement;
		
	public:
		System::String^ Select(void);

		void setnumStock(void);
		int getnumStock(void);
		void setquantiteArt(void);
		int getquantiteArt(void);
		void setSeuilApprovisionnement(void);
		int getseuilApprovisionnement(void);

	};
}

