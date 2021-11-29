#pragma once

namespace POOProjet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormstatistiques
	/// </summary>
	public ref class MyFormstatistiques : public System::Windows::Forms::Form
	{
	public:
		MyFormstatistiques(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyFormstatistiques()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Label_Statistiques;
	private: System::Windows::Forms::Label^ Label_Nom_Entreprise_Stat;
	private: System::Windows::Forms::DataGridView^ DataGridView_Stat;
	private: System::Windows::Forms::Label^ Label_Champ_Stat;
	private: System::Windows::Forms::TextBox^ TextBox_Stat;
	private: System::Windows::Forms::Button^ Button_Entrer_Stat;
	private: System::Windows::Forms::Button^ Button_Panier_moyen_Stat;
	private: System::Windows::Forms::Button^ Button_Valeur_Com_Stat;
	protected:








	private: System::Windows::Forms::Button^ Button_Total_Achats_Stat;

	private: System::Windows::Forms::Button^ Button_Chiffre_Affaire_Stat;
	private: System::Windows::Forms::Button^ Button_Valeur_Achat_Stat;
	private: System::Windows::Forms::Button^ Button_Pires_Ventes_Stat;




	private: System::Windows::Forms::Button^ Button_Meilleures_Ventes_Stat;
	private: System::Windows::Forms::Button^ Button_Seuil_Rea_Stat;
	private: System::Windows::Forms::Button^ Button_Simulation_Stat;
	private: System::Windows::Forms::Label^ Label_Calculer_Stat;
	private: System::Windows::Forms::Label^ Label_Identifier_Stat;
	private: System::Windows::Forms::Label^ Label_Simuler_Stat;






	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Label_Statistiques = (gcnew System::Windows::Forms::Label());
			this->Label_Nom_Entreprise_Stat = (gcnew System::Windows::Forms::Label());
			this->DataGridView_Stat = (gcnew System::Windows::Forms::DataGridView());
			this->Label_Champ_Stat = (gcnew System::Windows::Forms::Label());
			this->TextBox_Stat = (gcnew System::Windows::Forms::TextBox());
			this->Button_Entrer_Stat = (gcnew System::Windows::Forms::Button());
			this->Button_Panier_moyen_Stat = (gcnew System::Windows::Forms::Button());
			this->Button_Valeur_Com_Stat = (gcnew System::Windows::Forms::Button());
			this->Button_Total_Achats_Stat = (gcnew System::Windows::Forms::Button());
			this->Button_Chiffre_Affaire_Stat = (gcnew System::Windows::Forms::Button());
			this->Button_Valeur_Achat_Stat = (gcnew System::Windows::Forms::Button());
			this->Button_Pires_Ventes_Stat = (gcnew System::Windows::Forms::Button());
			this->Button_Meilleures_Ventes_Stat = (gcnew System::Windows::Forms::Button());
			this->Button_Seuil_Rea_Stat = (gcnew System::Windows::Forms::Button());
			this->Button_Simulation_Stat = (gcnew System::Windows::Forms::Button());
			this->Label_Calculer_Stat = (gcnew System::Windows::Forms::Label());
			this->Label_Identifier_Stat = (gcnew System::Windows::Forms::Label());
			this->Label_Simuler_Stat = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridView_Stat))->BeginInit();
			this->SuspendLayout();
			// 
			// Label_Statistiques
			// 
			this->Label_Statistiques->AutoSize = true;
			this->Label_Statistiques->Location = System::Drawing::Point(12, 9);
			this->Label_Statistiques->Name = L"Label_Statistiques";
			this->Label_Statistiques->Size = System::Drawing::Size(81, 17);
			this->Label_Statistiques->TabIndex = 1;
			this->Label_Statistiques->Text = L"Statistiques";
			// 
			// Label_Nom_Entreprise_Stat
			// 
			this->Label_Nom_Entreprise_Stat->AutoSize = true;
			this->Label_Nom_Entreprise_Stat->Location = System::Drawing::Point(252, 39);
			this->Label_Nom_Entreprise_Stat->Name = L"Label_Nom_Entreprise_Stat";
			this->Label_Nom_Entreprise_Stat->Size = System::Drawing::Size(131, 17);
			this->Label_Nom_Entreprise_Stat->TabIndex = 8;
			this->Label_Nom_Entreprise_Stat->Text = L"NOM ENTREPRISE";
			// 
			// DataGridView_Stat
			// 
			this->DataGridView_Stat->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataGridView_Stat->Location = System::Drawing::Point(29, 71);
			this->DataGridView_Stat->Name = L"DataGridView_Stat";
			this->DataGridView_Stat->RowHeadersWidth = 51;
			this->DataGridView_Stat->RowTemplate->Height = 24;
			this->DataGridView_Stat->Size = System::Drawing::Size(600, 223);
			this->DataGridView_Stat->TabIndex = 16;
			// 
			// Label_Champ_Stat
			// 
			this->Label_Champ_Stat->AutoSize = true;
			this->Label_Champ_Stat->Location = System::Drawing::Point(26, 323);
			this->Label_Champ_Stat->Name = L"Label_Champ_Stat";
			this->Label_Champ_Stat->Size = System::Drawing::Size(52, 17);
			this->Label_Champ_Stat->TabIndex = 17;
			this->Label_Champ_Stat->Text = L"Champ";
			// 
			// TextBox_Stat
			// 
			this->TextBox_Stat->Location = System::Drawing::Point(29, 343);
			this->TextBox_Stat->Name = L"TextBox_Stat";
			this->TextBox_Stat->Size = System::Drawing::Size(538, 22);
			this->TextBox_Stat->TabIndex = 18;
			// 
			// Button_Entrer_Stat
			// 
			this->Button_Entrer_Stat->Location = System::Drawing::Point(573, 343);
			this->Button_Entrer_Stat->Name = L"Button_Entrer_Stat";
			this->Button_Entrer_Stat->Size = System::Drawing::Size(56, 28);
			this->Button_Entrer_Stat->TabIndex = 19;
			this->Button_Entrer_Stat->Text = L"Entrer";
			this->Button_Entrer_Stat->UseVisualStyleBackColor = true;
			// 
			// Button_Panier_moyen_Stat
			// 
			this->Button_Panier_moyen_Stat->Location = System::Drawing::Point(179, 388);
			this->Button_Panier_moyen_Stat->Name = L"Button_Panier_moyen_Stat";
			this->Button_Panier_moyen_Stat->Size = System::Drawing::Size(146, 43);
			this->Button_Panier_moyen_Stat->TabIndex = 20;
			this->Button_Panier_moyen_Stat->Text = L"Panier moyen (après remises)";
			this->Button_Panier_moyen_Stat->UseVisualStyleBackColor = true;
			// 
			// Button_Valeur_Com_Stat
			// 
			this->Button_Valeur_Com_Stat->Location = System::Drawing::Point(179, 437);
			this->Button_Valeur_Com_Stat->Name = L"Button_Valeur_Com_Stat";
			this->Button_Valeur_Com_Stat->Size = System::Drawing::Size(146, 43);
			this->Button_Valeur_Com_Stat->TabIndex = 21;
			this->Button_Valeur_Com_Stat->Text = L"Valeur commerciale";
			this->Button_Valeur_Com_Stat->UseVisualStyleBackColor = true;
			// 
			// Button_Total_Achats_Stat
			// 
			this->Button_Total_Achats_Stat->Location = System::Drawing::Point(483, 388);
			this->Button_Total_Achats_Stat->Name = L"Button_Total_Achats_Stat";
			this->Button_Total_Achats_Stat->Size = System::Drawing::Size(146, 43);
			this->Button_Total_Achats_Stat->TabIndex = 22;
			this->Button_Total_Achats_Stat->Text = L"Montant total des achats d\'un client";
			this->Button_Total_Achats_Stat->UseVisualStyleBackColor = true;
			// 
			// Button_Chiffre_Affaire_Stat
			// 
			this->Button_Chiffre_Affaire_Stat->Location = System::Drawing::Point(331, 388);
			this->Button_Chiffre_Affaire_Stat->Name = L"Button_Chiffre_Affaire_Stat";
			this->Button_Chiffre_Affaire_Stat->Size = System::Drawing::Size(146, 43);
			this->Button_Chiffre_Affaire_Stat->TabIndex = 23;
			this->Button_Chiffre_Affaire_Stat->Text = L"Chiffre d\'affaire";
			this->Button_Chiffre_Affaire_Stat->UseVisualStyleBackColor = true;
			// 
			// Button_Valeur_Achat_Stat
			// 
			this->Button_Valeur_Achat_Stat->Location = System::Drawing::Point(331, 437);
			this->Button_Valeur_Achat_Stat->Name = L"Button_Valeur_Achat_Stat";
			this->Button_Valeur_Achat_Stat->Size = System::Drawing::Size(146, 43);
			this->Button_Valeur_Achat_Stat->TabIndex = 24;
			this->Button_Valeur_Achat_Stat->Text = L"Valeur d\'achat";
			this->Button_Valeur_Achat_Stat->UseVisualStyleBackColor = true;
			// 
			// Button_Pires_Ventes_Stat
			// 
			this->Button_Pires_Ventes_Stat->Location = System::Drawing::Point(331, 500);
			this->Button_Pires_Ventes_Stat->Name = L"Button_Pires_Ventes_Stat";
			this->Button_Pires_Ventes_Stat->Size = System::Drawing::Size(146, 43);
			this->Button_Pires_Ventes_Stat->TabIndex = 26;
			this->Button_Pires_Ventes_Stat->Text = L"Pires ventes";
			this->Button_Pires_Ventes_Stat->UseVisualStyleBackColor = true;
			// 
			// Button_Meilleures_Ventes_Stat
			// 
			this->Button_Meilleures_Ventes_Stat->Location = System::Drawing::Point(179, 500);
			this->Button_Meilleures_Ventes_Stat->Name = L"Button_Meilleures_Ventes_Stat";
			this->Button_Meilleures_Ventes_Stat->Size = System::Drawing::Size(146, 43);
			this->Button_Meilleures_Ventes_Stat->TabIndex = 27;
			this->Button_Meilleures_Ventes_Stat->Text = L"Meilleures ventes";
			this->Button_Meilleures_Ventes_Stat->UseVisualStyleBackColor = true;
			// 
			// Button_Seuil_Rea_Stat
			// 
			this->Button_Seuil_Rea_Stat->Location = System::Drawing::Point(483, 500);
			this->Button_Seuil_Rea_Stat->Name = L"Button_Seuil_Rea_Stat";
			this->Button_Seuil_Rea_Stat->Size = System::Drawing::Size(150, 43);
			this->Button_Seuil_Rea_Stat->TabIndex = 28;
			this->Button_Seuil_Rea_Stat->Text = L"Sous le seuil de réapprovisionnement";
			this->Button_Seuil_Rea_Stat->UseVisualStyleBackColor = true;
			this->Button_Seuil_Rea_Stat->Click += gcnew System::EventHandler(this, &MyFormstatistiques::button10_Click);
			// 
			// Button_Simulation_Stat
			// 
			this->Button_Simulation_Stat->Location = System::Drawing::Point(179, 563);
			this->Button_Simulation_Stat->Name = L"Button_Simulation_Stat";
			this->Button_Simulation_Stat->Size = System::Drawing::Size(146, 43);
			this->Button_Simulation_Stat->TabIndex = 30;
			this->Button_Simulation_Stat->Text = L"Simulation";
			this->Button_Simulation_Stat->UseVisualStyleBackColor = true;
			// 
			// Label_Calculer_Stat
			// 
			this->Label_Calculer_Stat->AutoSize = true;
			this->Label_Calculer_Stat->Location = System::Drawing::Point(26, 423);
			this->Label_Calculer_Stat->Name = L"Label_Calculer_Stat";
			this->Label_Calculer_Stat->Size = System::Drawing::Size(59, 17);
			this->Label_Calculer_Stat->TabIndex = 31;
			this->Label_Calculer_Stat->Text = L"Calculer";
			// 
			// Label_Identifier_Stat
			// 
			this->Label_Identifier_Stat->AutoSize = true;
			this->Label_Identifier_Stat->Location = System::Drawing::Point(26, 513);
			this->Label_Identifier_Stat->Name = L"Label_Identifier_Stat";
			this->Label_Identifier_Stat->Size = System::Drawing::Size(133, 17);
			this->Label_Identifier_Stat->TabIndex = 32;
			this->Label_Identifier_Stat->Text = L"Identifier les articles";
			// 
			// Label_Simuler_Stat
			// 
			this->Label_Simuler_Stat->AutoSize = true;
			this->Label_Simuler_Stat->Location = System::Drawing::Point(26, 576);
			this->Label_Simuler_Stat->Name = L"Label_Simuler_Stat";
			this->Label_Simuler_Stat->Size = System::Drawing::Size(147, 17);
			this->Label_Simuler_Stat->TabIndex = 33;
			this->Label_Simuler_Stat->Text = L"Simuler des variations";
			// 
			// MyFormstatistiques
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(657, 637);
			this->Controls->Add(this->Label_Simuler_Stat);
			this->Controls->Add(this->Label_Identifier_Stat);
			this->Controls->Add(this->Label_Calculer_Stat);
			this->Controls->Add(this->Button_Simulation_Stat);
			this->Controls->Add(this->Button_Seuil_Rea_Stat);
			this->Controls->Add(this->Button_Meilleures_Ventes_Stat);
			this->Controls->Add(this->Button_Pires_Ventes_Stat);
			this->Controls->Add(this->Button_Valeur_Achat_Stat);
			this->Controls->Add(this->Button_Chiffre_Affaire_Stat);
			this->Controls->Add(this->Button_Total_Achats_Stat);
			this->Controls->Add(this->Button_Valeur_Com_Stat);
			this->Controls->Add(this->Button_Panier_moyen_Stat);
			this->Controls->Add(this->Button_Entrer_Stat);
			this->Controls->Add(this->TextBox_Stat);
			this->Controls->Add(this->Label_Champ_Stat);
			this->Controls->Add(this->DataGridView_Stat);
			this->Controls->Add(this->Label_Nom_Entreprise_Stat);
			this->Controls->Add(this->Label_Statistiques);
			this->Name = L"MyFormstatistiques";
			this->Text = L"MyFormstatistiques";
			this->Load += gcnew System::EventHandler(this, &MyFormstatistiques::MyFormstatistiques_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridView_Stat))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void MyFormstatistiques_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
