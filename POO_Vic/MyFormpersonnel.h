#pragma once
#include "CLservicePersonnel.h"

namespace POO_Vic {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyFormpersonnel : public System::Windows::Forms::Form
	{
	public:
		MyFormpersonnel(void)
		{
			InitializeComponent();
			oSvcPersonnel = gcnew NS_Comp_Svc::CLservicePersonnel();
			oDs = gcnew System::Data::DataSet;
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		~MyFormpersonnel()
		{
			if (components)
			{
				delete components;
			}
		}
		//private: System::Windows::Forms::DataGridView^ dgv;
	private: System::Windows::Forms::Button^ creer;
	private: System::Windows::Forms::Button^ modif;
	private: System::Windows::Forms::Button^ afficher;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dgv1;


	private: NS_Comp_Svc::CLservicePersonnel^ oSvcPersonnel;
	private: System::Data::DataSet^ oDs;

	private: System::Windows::Forms::TextBox^ txt_nom;
	private: System::Windows::Forms::TextBox^ txt_prenom;
	private: System::Windows::Forms::TextBox^ txt_adresse;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::TextBox^ txt_ville;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txt_dateE;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txt_CP;






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
			this->creer = (gcnew System::Windows::Forms::Button());
			this->modif = (gcnew System::Windows::Forms::Button());
			this->afficher = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->dgv1 = (gcnew System::Windows::Forms::DataGridView());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->txt_prenom = (gcnew System::Windows::Forms::TextBox());
			this->txt_adresse = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_CP = (gcnew System::Windows::Forms::TextBox());
			this->txt_ville = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_dateE = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv1))->BeginInit();
			this->SuspendLayout();
			// 
			// creer
			// 
			this->creer->Location = System::Drawing::Point(717, 46);
			this->creer->Margin = System::Windows::Forms::Padding(4);
			this->creer->Name = L"creer";
			this->creer->Size = System::Drawing::Size(121, 23);
			this->creer->TabIndex = 0;
			this->creer->Text = L"Créer";
			this->creer->UseVisualStyleBackColor = true;
			this->creer->Click += gcnew System::EventHandler(this, &MyFormpersonnel::button1_Click);
			// 
			// modif
			// 
			this->modif->Location = System::Drawing::Point(717, 76);
			this->modif->Margin = System::Windows::Forms::Padding(4);
			this->modif->Name = L"modif";
			this->modif->Size = System::Drawing::Size(121, 23);
			this->modif->TabIndex = 1;
			this->modif->Text = L"Modifier";
			this->modif->UseVisualStyleBackColor = true;
			// 
			// afficher
			// 
			this->afficher->Location = System::Drawing::Point(717, 107);
			this->afficher->Margin = System::Windows::Forms::Padding(4);
			this->afficher->Name = L"afficher";
			this->afficher->Size = System::Drawing::Size(121, 25);
			this->afficher->TabIndex = 2;
			this->afficher->Text = L"Afficher";
			this->afficher->UseVisualStyleBackColor = true;
			this->afficher->Click += gcnew System::EventHandler(this, &MyFormpersonnel::afficher_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(717, 15);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Supprimer";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(760, 469);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(121, 54);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Retour à l\'accueil";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// dgv1
			// 
			this->dgv1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv1->Location = System::Drawing::Point(40, 15);
			this->dgv1->Margin = System::Windows::Forms::Padding(4);
			this->dgv1->Name = L"dgv1";
			this->dgv1->RowHeadersWidth = 51;
			this->dgv1->Size = System::Drawing::Size(669, 204);
			this->dgv1->TabIndex = 5;
			// 
			// txt_nom
			// 
			this->txt_nom->Location = System::Drawing::Point(40, 240);
			this->txt_nom->Margin = System::Windows::Forms::Padding(4);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(245, 22);
			this->txt_nom->TabIndex = 7;
			// 
			// txt_prenom
			// 
			this->txt_prenom->Location = System::Drawing::Point(49, 279);
			this->txt_prenom->Margin = System::Windows::Forms::Padding(4);
			this->txt_prenom->Name = L"txt_prenom";
			this->txt_prenom->Size = System::Drawing::Size(236, 22);
			this->txt_prenom->TabIndex = 8;
			// 
			// txt_adresse
			// 
			this->txt_adresse->Location = System::Drawing::Point(153, 326);
			this->txt_adresse->Margin = System::Windows::Forms::Padding(4);
			this->txt_adresse->Name = L"txt_adresse";
			this->txt_adresse->Size = System::Drawing::Size(132, 22);
			this->txt_adresse->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(311, 244);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 17);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Nom";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(311, 283);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 17);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Prénom";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(311, 330);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 17);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Adresse";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(311, 370);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(26, 17);
			this->label4->TabIndex = 13;
			this->label4->Text = L"CP";
			// 
			// txt_CP
			// 
			this->txt_CP->Location = System::Drawing::Point(153, 370);
			this->txt_CP->Margin = System::Windows::Forms::Padding(4);
			this->txt_CP->Name = L"txt_CP";
			this->txt_CP->ShortcutsEnabled = false;
			this->txt_CP->Size = System::Drawing::Size(132, 22);
			this->txt_CP->TabIndex = 14;
			// 
			// txt_ville
			// 
			this->txt_ville->Location = System::Drawing::Point(153, 415);
			this->txt_ville->Margin = System::Windows::Forms::Padding(4);
			this->txt_ville->Name = L"txt_ville";
			this->txt_ville->Size = System::Drawing::Size(132, 22);
			this->txt_ville->TabIndex = 15;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(304, 415);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(34, 17);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Ville";
			// 
			// txt_dateE
			// 
			this->txt_dateE->Location = System::Drawing::Point(153, 469);
			this->txt_dateE->Margin = System::Windows::Forms::Padding(4);
			this->txt_dateE->Name = L"txt_dateE";
			this->txt_dateE->Size = System::Drawing::Size(132, 22);
			this->txt_dateE->TabIndex = 17;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(311, 473);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(119, 17);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Date d\'embauche";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(897, 538);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txt_dateE);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_ville);
			this->Controls->Add(this->txt_CP);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_adresse);
			this->Controls->Add(this->txt_prenom);
			this->Controls->Add(this->txt_nom);
			this->Controls->Add(this->dgv1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->afficher);
			this->Controls->Add(this->modif);
			this->Controls->Add(this->creer);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyFormpersonnel";
			this->Text = L"Gestion du personnel";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvcPersonnel->creerPersonnel(this->txt_CP->Text, this->txt_nom->Text, this->txt_prenom->Text, this->txt_adresse->Text, this->txt_ville->Text, this->txt_dateE->Text);
	}
	private: System::Void afficher_Click(System::Object^ sender, System::EventArgs^ e) {
		this->dgv1->Refresh();
		this->oDs = this->oSvcPersonnel->afficherPersonnel("Rsl");
		// this->oDs = this->oSvcPersonnel->
		this->dgv1->DataSource = this->oDs;
		this->dgv1->DataMember = "Rsl";
	}
	};
}