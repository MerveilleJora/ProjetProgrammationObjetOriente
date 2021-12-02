#include "CLserviceCLient.h"
#pragma once

namespace Project6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyformClient
	/// </summary>
	public ref class MyformClient : public System::Windows::Forms::Form
	{
	public:
		MyformClient(void)
		{
			
			InitializeComponent();
			osvcClient = gcnew NS_Comp_Svc::CLserviceClient();
			oDs = gcnew System::Data::DataSet;
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyformClient()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ txt_nom;
	private: System::Windows::Forms::TextBox^ txt_daten;
	private: System::Windows::Forms::TextBox^ txt_Adf;
	private: System::Windows::Forms::TextBox^ txt_Adl;

	




	private: System::Windows::Forms::TextBox^ txt_prenom;
	private: System::Windows::Forms::Label^ Label1;
	private: System::Windows::Forms::Label^ prenom;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txt_datei;
	private: System::Windows::Forms::Label^ label5;

	private: NS_Comp_Svc::CLserviceClient^ osvcClient;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::TextBox^ txt_CPL;
	private: System::Windows::Forms::TextBox^ txt_CPF;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txt_vl;
	private: System::Windows::Forms::TextBox^ txt_vf;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->txt_daten = (gcnew System::Windows::Forms::TextBox());
			this->txt_Adf = (gcnew System::Windows::Forms::TextBox());
			this->txt_Adl = (gcnew System::Windows::Forms::TextBox());
			this->txt_prenom = (gcnew System::Windows::Forms::TextBox());
			this->Label1 = (gcnew System::Windows::Forms::Label());
			this->prenom = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txt_datei = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_CPL = (gcnew System::Windows::Forms::TextBox());
			this->txt_CPF = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txt_vl = (gcnew System::Windows::Forms::TextBox());
			this->txt_vf = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(33, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(687, 266);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(771, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Créer";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyformClient::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(771, 102);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Afficher";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyformClient::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(771, 183);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Supprimer";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyformClient::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(768, 272);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(78, 26);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Modifier";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyformClient::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(771, 362);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 76);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Retour à l\'accueil";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// txt_nom
			// 
			this->txt_nom->Location = System::Drawing::Point(33, 304);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(222, 20);
			this->txt_nom->TabIndex = 6;
			// 
			// txt_daten
			// 
			this->txt_daten->Location = System::Drawing::Point(33, 360);
			this->txt_daten->Name = L"txt_daten";
			this->txt_daten->Size = System::Drawing::Size(222, 20);
			this->txt_daten->TabIndex = 7;
			// 
			// txt_Adf
			// 
			this->txt_Adf->Location = System::Drawing::Point(364, 349);
			this->txt_Adf->Name = L"txt_Adf";
			this->txt_Adf->Size = System::Drawing::Size(222, 20);
			this->txt_Adf->TabIndex = 8;
			// 
			// txt_Adl
			// 
			this->txt_Adl->Location = System::Drawing::Point(364, 300);
			this->txt_Adl->Name = L"txt_Adl";
			this->txt_Adl->Size = System::Drawing::Size(222, 20);
			this->txt_Adl->TabIndex = 9;
			// 
			// txt_prenom
			// 
			this->txt_prenom->Location = System::Drawing::Point(33, 330);
			this->txt_prenom->Name = L"txt_prenom";
			this->txt_prenom->Size = System::Drawing::Size(222, 20);
			this->txt_prenom->TabIndex = 10;
			// 
			// Label1
			// 
			this->Label1->AutoSize = true;
			this->Label1->Location = System::Drawing::Point(261, 307);
			this->Label1->Name = L"Label1";
			this->Label1->Size = System::Drawing::Size(29, 13);
			this->Label1->TabIndex = 11;
			this->Label1->Text = L"Nom";
			// 
			// prenom
			// 
			this->prenom->AutoSize = true;
			this->prenom->Location = System::Drawing::Point(261, 333);
			this->prenom->Name = L"prenom";
			this->prenom->Size = System::Drawing::Size(43, 13);
			this->prenom->TabIndex = 12;
			this->prenom->Text = L"Prénom";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(592, 300);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Adresse livraison ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(592, 352);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(101, 13);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Adresse facturation ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(261, 363);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(94, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L"date de naissance";
			// 
			// txt_datei
			// 
			this->txt_datei->Location = System::Drawing::Point(364, 401);
			this->txt_datei->Name = L"txt_datei";
			this->txt_datei->Size = System::Drawing::Size(222, 20);
			this->txt_datei->TabIndex = 16;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(590, 404);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(91, 13);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Date d\'inscription ";
			// 
			// txt_CPL
			// 
			this->txt_CPL->Location = System::Drawing::Point(364, 326);
			this->txt_CPL->Name = L"txt_CPL";
			this->txt_CPL->Size = System::Drawing::Size(69, 20);
			this->txt_CPL->TabIndex = 18;
			// 
			// txt_CPF
			// 
			this->txt_CPF->Location = System::Drawing::Point(364, 375);
			this->txt_CPF->Name = L"txt_CPF";
			this->txt_CPF->Size = System::Drawing::Size(69, 20);
			this->txt_CPF->TabIndex = 19;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(439, 330);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(21, 13);
			this->label23->TabIndex = 20;
			this->label23->Text = L"CP";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(439, 378);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(21, 13);
			this->label6->TabIndex = 21;
			this->label6->Text = L"CP";
			// 
			// txt_vl
			// 
			this->txt_vl->Location = System::Drawing::Point(466, 326);
			this->txt_vl->Name = L"txt_vl";
			this->txt_vl->Size = System::Drawing::Size(69, 20);
			this->txt_vl->TabIndex = 22;
			// 
			// txt_vf
			// 
			this->txt_vf->Location = System::Drawing::Point(466, 375);
			this->txt_vf->Name = L"txt_vf";
			this->txt_vf->Size = System::Drawing::Size(69, 20);
			this->txt_vf->TabIndex = 23;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(541, 329);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(26, 13);
			this->label7->TabIndex = 24;
			this->label7->Text = L"Ville";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(541, 378);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(26, 13);
			this->label8->TabIndex = 25;
			this->label8->Text = L"Ville";
			// 
			// MyformClient
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(858, 450);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txt_vf);
			this->Controls->Add(this->txt_vl);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->txt_CPF);
			this->Controls->Add(this->txt_CPL);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txt_datei);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->prenom);
			this->Controls->Add(this->Label1);
			this->Controls->Add(this->txt_prenom);
			this->Controls->Add(this->txt_Adl);
			this->Controls->Add(this->txt_Adf);
			this->Controls->Add(this->txt_daten);
			this->Controls->Add(this->txt_nom);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyformClient";
			this->Text = L"MyformClient";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {//Créer
	this->osvcClient->creerClient(this->txt_nom, this->txt_prenom, this->txt_Adf, this->txt_CPF, this->txt_CPF, this->txt_vf, this->txt_Adl, this->txt_CPL, this->txt_vl, this->txt_daten, this->txt_datei);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {//Afficher
	this->dataGridView1->Refresh();
	this->oDs = this->osvcClient->afficherClient("Rsl");
	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "Rsl";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {//Supprimer
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {//Modifier
}
};
}
