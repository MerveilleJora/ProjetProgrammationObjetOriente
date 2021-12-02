#pragma once

namespace POOProjet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormpersonnel
	/// </summary>
	public ref class MyFormpersonnel : public System::Windows::Forms::Form
	{
	public:
		MyFormpersonnel(void)
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
		~MyFormpersonnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Label_Personnel;
	private: System::Windows::Forms::Label^ Label_Nom_Entreprise_Perso;

	private: System::Windows::Forms::Button^ Button_Afficher_Perso;


	protected:



	private: System::Windows::Forms::Button^ Button_Modifier_Perso;

	private: System::Windows::Forms::Button^ Button_Supprimer_Perso;

	private: System::Windows::Forms::Button^ Button_Creer_Perso;
	private: System::Windows::Forms::Label^ Label_Champ_Perso;


	private: System::Windows::Forms::TextBox^ TextBox_Perso;

	private: System::Windows::Forms::Button^ Button_Entrer_Perso;
	private: System::Windows::Forms::DataGridView^ DataGridView_Perso;
	private: System::Windows::Forms::Button^ Button_Retour_Perso;






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
			this->Label_Personnel = (gcnew System::Windows::Forms::Label());
			this->Label_Nom_Entreprise_Perso = (gcnew System::Windows::Forms::Label());
			this->Button_Afficher_Perso = (gcnew System::Windows::Forms::Button());
			this->Button_Modifier_Perso = (gcnew System::Windows::Forms::Button());
			this->Button_Supprimer_Perso = (gcnew System::Windows::Forms::Button());
			this->Button_Creer_Perso = (gcnew System::Windows::Forms::Button());
			this->Label_Champ_Perso = (gcnew System::Windows::Forms::Label());
			this->TextBox_Perso = (gcnew System::Windows::Forms::TextBox());
			this->Button_Entrer_Perso = (gcnew System::Windows::Forms::Button());
			this->DataGridView_Perso = (gcnew System::Windows::Forms::DataGridView());
			this->Button_Retour_Perso = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridView_Perso))->BeginInit();
			this->SuspendLayout();
			// 
			// Label_Personnel
			// 
			this->Label_Personnel->AutoSize = true;
			this->Label_Personnel->Location = System::Drawing::Point(12, 9);
			this->Label_Personnel->Name = L"Label_Personnel";
			this->Label_Personnel->Size = System::Drawing::Size(72, 17);
			this->Label_Personnel->TabIndex = 0;
			this->Label_Personnel->Text = L"Personnel";
			// 
			// Label_Nom_Entreprise_Perso
			// 
			this->Label_Nom_Entreprise_Perso->AutoSize = true;
			this->Label_Nom_Entreprise_Perso->Location = System::Drawing::Point(252, 39);
			this->Label_Nom_Entreprise_Perso->Name = L"Label_Nom_Entreprise_Perso";
			this->Label_Nom_Entreprise_Perso->Size = System::Drawing::Size(131, 17);
			this->Label_Nom_Entreprise_Perso->TabIndex = 7;
			this->Label_Nom_Entreprise_Perso->Text = L"NOM ENTREPRISE";
			// 
			// Button_Afficher_Perso
			// 
			this->Button_Afficher_Perso->Location = System::Drawing::Point(79, 566);
			this->Button_Afficher_Perso->Name = L"Button_Afficher_Perso";
			this->Button_Afficher_Perso->Size = System::Drawing::Size(500, 56);
			this->Button_Afficher_Perso->TabIndex = 11;
			this->Button_Afficher_Perso->Text = L"Afficher";
			this->Button_Afficher_Perso->UseVisualStyleBackColor = true;
			// 
			// Button_Modifier_Perso
			// 
			this->Button_Modifier_Perso->Location = System::Drawing::Point(79, 504);
			this->Button_Modifier_Perso->Name = L"Button_Modifier_Perso";
			this->Button_Modifier_Perso->Size = System::Drawing::Size(500, 56);
			this->Button_Modifier_Perso->TabIndex = 10;
			this->Button_Modifier_Perso->Text = L"Modifier";
			this->Button_Modifier_Perso->UseVisualStyleBackColor = true;
			// 
			// Button_Supprimer_Perso
			// 
			this->Button_Supprimer_Perso->Location = System::Drawing::Point(79, 442);
			this->Button_Supprimer_Perso->Name = L"Button_Supprimer_Perso";
			this->Button_Supprimer_Perso->Size = System::Drawing::Size(500, 56);
			this->Button_Supprimer_Perso->TabIndex = 9;
			this->Button_Supprimer_Perso->Text = L"Supprimer";
			this->Button_Supprimer_Perso->UseVisualStyleBackColor = true;
			// 
			// Button_Creer_Perso
			// 
			this->Button_Creer_Perso->Location = System::Drawing::Point(79, 380);
			this->Button_Creer_Perso->Name = L"Button_Creer_Perso";
			this->Button_Creer_Perso->Size = System::Drawing::Size(500, 56);
			this->Button_Creer_Perso->TabIndex = 8;
			this->Button_Creer_Perso->Text = L"Créer";
			this->Button_Creer_Perso->UseVisualStyleBackColor = true;
			// 
			// Label_Champ_Perso
			// 
			this->Label_Champ_Perso->AutoSize = true;
			this->Label_Champ_Perso->Location = System::Drawing::Point(26, 323);
			this->Label_Champ_Perso->Name = L"Label_Champ_Perso";
			this->Label_Champ_Perso->Size = System::Drawing::Size(52, 17);
			this->Label_Champ_Perso->TabIndex = 12;
			this->Label_Champ_Perso->Text = L"Champ";
			// 
			// TextBox_Perso
			// 
			this->TextBox_Perso->Location = System::Drawing::Point(29, 343);
			this->TextBox_Perso->Name = L"TextBox_Perso";
			this->TextBox_Perso->Size = System::Drawing::Size(538, 22);
			this->TextBox_Perso->TabIndex = 13;
			// 
			// Button_Entrer_Perso
			// 
			this->Button_Entrer_Perso->Location = System::Drawing::Point(573, 340);
			this->Button_Entrer_Perso->Name = L"Button_Entrer_Perso";
			this->Button_Entrer_Perso->Size = System::Drawing::Size(56, 28);
			this->Button_Entrer_Perso->TabIndex = 14;
			this->Button_Entrer_Perso->Text = L"Entrer";
			this->Button_Entrer_Perso->UseVisualStyleBackColor = true;
			// 
			// DataGridView_Perso
			// 
			this->DataGridView_Perso->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataGridView_Perso->Location = System::Drawing::Point(29, 71);
			this->DataGridView_Perso->Name = L"DataGridView_Perso";
			this->DataGridView_Perso->RowHeadersWidth = 51;
			this->DataGridView_Perso->RowTemplate->Height = 24;
			this->DataGridView_Perso->Size = System::Drawing::Size(600, 223);
			this->DataGridView_Perso->TabIndex = 15;
			// 
			// Button_Retour_Perso
			// 
			this->Button_Retour_Perso->Location = System::Drawing::Point(564, 9);
			this->Button_Retour_Perso->Name = L"Button_Retour_Perso";
			this->Button_Retour_Perso->Size = System::Drawing::Size(81, 47);
			this->Button_Retour_Perso->TabIndex = 16;
			this->Button_Retour_Perso->Text = L"Retour à l\'accueil";
			this->Button_Retour_Perso->UseVisualStyleBackColor = true;
			// 
			// MyFormpersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(657, 637);
			this->Controls->Add(this->Button_Retour_Perso);
			this->Controls->Add(this->DataGridView_Perso);
			this->Controls->Add(this->Button_Entrer_Perso);
			this->Controls->Add(this->TextBox_Perso);
			this->Controls->Add(this->Label_Champ_Perso);
			this->Controls->Add(this->Button_Afficher_Perso);
			this->Controls->Add(this->Button_Modifier_Perso);
			this->Controls->Add(this->Button_Supprimer_Perso);
			this->Controls->Add(this->Button_Creer_Perso);
			this->Controls->Add(this->Label_Nom_Entreprise_Perso);
			this->Controls->Add(this->Label_Personnel);
			this->Name = L"MyFormpersonnel";
			this->Text = L"MyFormpersonnel";
			this->Load += gcnew System::EventHandler(this, &MyFormpersonnel::MyFormpersonnel_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridView_Perso))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyFormpersonnel_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
