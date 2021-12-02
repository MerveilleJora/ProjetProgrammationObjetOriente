#pragma once

namespace POO_Vic {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyFormaccueil
	/// </summary>
	public ref class MyFormaccueil : public System::Windows::Forms::Form
	{
	public:
		MyFormaccueil(void)
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
		~MyFormaccueil()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ Label_Accueil;
	protected:

	private: System::Windows::Forms::Button^ Button_Gestion_Perso_Accueil;
	private: System::Windows::Forms::Button^ Button_Gestion_Client_Accueil;
	private: System::Windows::Forms::Button^ Button_Gestion_Commande_Accueil;
	private: System::Windows::Forms::Button^ Button_Gestion_Stock_Accueil;
	private: System::Windows::Forms::Button^ Button_Gestion_Stat_Accueil;
	private: System::Windows::Forms::Label^ Label_Nom_Entreprise_Accueil;
	private: System::Windows::Forms::PictureBox^ PictureBox_Accueil;




	protected:

	protected:









	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyFormaccueil::typeid));
			this->Label_Accueil = (gcnew System::Windows::Forms::Label());
			this->Button_Gestion_Perso_Accueil = (gcnew System::Windows::Forms::Button());
			this->Button_Gestion_Client_Accueil = (gcnew System::Windows::Forms::Button());
			this->Button_Gestion_Commande_Accueil = (gcnew System::Windows::Forms::Button());
			this->Button_Gestion_Stock_Accueil = (gcnew System::Windows::Forms::Button());
			this->Button_Gestion_Stat_Accueil = (gcnew System::Windows::Forms::Button());
			this->Label_Nom_Entreprise_Accueil = (gcnew System::Windows::Forms::Label());
			this->PictureBox_Accueil = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBox_Accueil))->BeginInit();
			this->SuspendLayout();
			// 
			// Label_Accueil
			// 
			this->Label_Accueil->AutoSize = true;
			this->Label_Accueil->Location = System::Drawing::Point(12, 9);
			this->Label_Accueil->Name = L"Label_Accueil";
			this->Label_Accueil->Size = System::Drawing::Size(100, 17);
			this->Label_Accueil->TabIndex = 0;
			this->Label_Accueil->Text = L"Page d\'accueil";
			// 
			// Button_Gestion_Perso_Accueil
			// 
			this->Button_Gestion_Perso_Accueil->Location = System::Drawing::Point(78, 318);
			this->Button_Gestion_Perso_Accueil->Name = L"Button_Gestion_Perso_Accueil";
			this->Button_Gestion_Perso_Accueil->Size = System::Drawing::Size(500, 56);
			this->Button_Gestion_Perso_Accueil->TabIndex = 1;
			this->Button_Gestion_Perso_Accueil->Text = L"Gestion du personnel";
			this->Button_Gestion_Perso_Accueil->UseVisualStyleBackColor = true;
			this->Button_Gestion_Perso_Accueil->Click += gcnew System::EventHandler(this, &MyFormaccueil::button1_Click);
			// 
			// Button_Gestion_Client_Accueil
			// 
			this->Button_Gestion_Client_Accueil->Location = System::Drawing::Point(78, 380);
			this->Button_Gestion_Client_Accueil->Name = L"Button_Gestion_Client_Accueil";
			this->Button_Gestion_Client_Accueil->Size = System::Drawing::Size(500, 56);
			this->Button_Gestion_Client_Accueil->TabIndex = 2;
			this->Button_Gestion_Client_Accueil->Text = L"Gestion d\'un client";
			this->Button_Gestion_Client_Accueil->UseVisualStyleBackColor = true;
			this->Button_Gestion_Client_Accueil->Click += gcnew System::EventHandler(this, &MyFormaccueil::button2_Click);
			// 
			// Button_Gestion_Commande_Accueil
			// 
			this->Button_Gestion_Commande_Accueil->Location = System::Drawing::Point(78, 442);
			this->Button_Gestion_Commande_Accueil->Name = L"Button_Gestion_Commande_Accueil";
			this->Button_Gestion_Commande_Accueil->Size = System::Drawing::Size(500, 56);
			this->Button_Gestion_Commande_Accueil->TabIndex = 3;
			this->Button_Gestion_Commande_Accueil->Text = L"Gestion des commandes";
			this->Button_Gestion_Commande_Accueil->UseVisualStyleBackColor = true;
			this->Button_Gestion_Commande_Accueil->Click += gcnew System::EventHandler(this, &MyFormaccueil::button3_Click);
			// 
			// Button_Gestion_Stock_Accueil
			// 
			this->Button_Gestion_Stock_Accueil->Location = System::Drawing::Point(78, 504);
			this->Button_Gestion_Stock_Accueil->Name = L"Button_Gestion_Stock_Accueil";
			this->Button_Gestion_Stock_Accueil->Size = System::Drawing::Size(500, 56);
			this->Button_Gestion_Stock_Accueil->TabIndex = 4;
			this->Button_Gestion_Stock_Accueil->Text = L"Gestion du stock";
			this->Button_Gestion_Stock_Accueil->UseVisualStyleBackColor = true;
			this->Button_Gestion_Stock_Accueil->Click += gcnew System::EventHandler(this, &MyFormaccueil::button4_Click);
			// 
			// Button_Gestion_Stat_Accueil
			// 
			this->Button_Gestion_Stat_Accueil->Location = System::Drawing::Point(78, 566);
			this->Button_Gestion_Stat_Accueil->Name = L"Button_Gestion_Stat_Accueil";
			this->Button_Gestion_Stat_Accueil->Size = System::Drawing::Size(500, 56);
			this->Button_Gestion_Stat_Accueil->TabIndex = 5;
			this->Button_Gestion_Stat_Accueil->Text = L"Gestion des statistiques";
			this->Button_Gestion_Stat_Accueil->UseVisualStyleBackColor = true;
			this->Button_Gestion_Stat_Accueil->Click += gcnew System::EventHandler(this, &MyFormaccueil::button5_Click);
			// 
			// Label_Nom_Entreprise_Accueil
			// 
			this->Label_Nom_Entreprise_Accueil->AutoSize = true;
			this->Label_Nom_Entreprise_Accueil->Location = System::Drawing::Point(252, 39);
			this->Label_Nom_Entreprise_Accueil->Name = L"Label_Nom_Entreprise_Accueil";
			this->Label_Nom_Entreprise_Accueil->Size = System::Drawing::Size(131, 17);
			this->Label_Nom_Entreprise_Accueil->TabIndex = 6;
			this->Label_Nom_Entreprise_Accueil->Text = L"NOM ENTREPRISE";
			// 
			// PictureBox_Accueil
			// 
			this->PictureBox_Accueil->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PictureBox_Accueil.Image")));
			this->PictureBox_Accueil->Location = System::Drawing::Point(29, 71);
			this->PictureBox_Accueil->Name = L"PictureBox_Accueil";
			this->PictureBox_Accueil->Size = System::Drawing::Size(600, 223);
			this->PictureBox_Accueil->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->PictureBox_Accueil->TabIndex = 7;
			this->PictureBox_Accueil->TabStop = false;
			// 
			// MyFormaccueil
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(657, 637);
			this->Controls->Add(this->PictureBox_Accueil);
			this->Controls->Add(this->Label_Nom_Entreprise_Accueil);
			this->Controls->Add(this->Button_Gestion_Stat_Accueil);
			this->Controls->Add(this->Button_Gestion_Stock_Accueil);
			this->Controls->Add(this->Button_Gestion_Commande_Accueil);
			this->Controls->Add(this->Button_Gestion_Client_Accueil);
			this->Controls->Add(this->Button_Gestion_Perso_Accueil);
			this->Controls->Add(this->Label_Accueil);
			this->Name = L"MyFormaccueil";
			this->Text = L"MyFormaccueil";
			this->Load += gcnew System::EventHandler(this, &MyFormaccueil::MyFormaccueil_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureBox_Accueil))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyFormaccueil_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}