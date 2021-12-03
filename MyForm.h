#pragma once
#include "CLserviceCommande.h"

namespace Project7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			oSvccommande = gcnew NS_Comp_Svc::CLserviceCommande();
			oDs = gcnew System::Data::DataSet;
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
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
	private: System::Windows::Forms::TextBox^ dateE;
	private: System::Windows::Forms::TextBox^ dateP;
	private: System::Windows::Forms::TextBox^ dateS;
	private: System::Windows::Forms::TextBox^ refcommande;




	private: System::Windows::Forms::TextBox^ RefA;
	private: System::Windows::Forms::TextBox^ nom_article;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ RefC;
	private: System::Windows::Forms::Label^ feefefe;



	private: System::Windows::Forms::TextBox^ dateL;
	private: System::Windows::Forms::TextBox^ quantiteart;


	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ HT;

	private: System::Windows::Forms::Label^ paiement;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ NumC;

	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ Logo;

	private: System::Windows::Forms::Label^ NomC;
	private: System::Windows::Forms::Label^ PrenomC;
	private: System::Windows::Forms::Label^ adrL;



	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ adr;

	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ TTC;

	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ TVA;

	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ AdrS;

	private: System::Windows::Forms::TextBox^ nomS;
	private: NS_Comp_Svc::CLserviceCommande^ oSvccommande;
	private: System::Data::DataSet^ oDs;


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
			this->dateE = (gcnew System::Windows::Forms::TextBox());
			this->dateP = (gcnew System::Windows::Forms::TextBox());
			this->dateS = (gcnew System::Windows::Forms::TextBox());
			this->refcommande = (gcnew System::Windows::Forms::TextBox());
			this->RefA = (gcnew System::Windows::Forms::TextBox());
			this->nom_article = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->RefC = (gcnew System::Windows::Forms::Label());
			this->feefefe = (gcnew System::Windows::Forms::Label());
			this->dateL = (gcnew System::Windows::Forms::TextBox());
			this->quantiteart = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->HT = (gcnew System::Windows::Forms::TextBox());
			this->paiement = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->NumC = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->Logo = (gcnew System::Windows::Forms::Label());
			this->NomC = (gcnew System::Windows::Forms::Label());
			this->PrenomC = (gcnew System::Windows::Forms::Label());
			this->adrL = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->adr = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->TTC = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->TVA = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->AdrS = (gcnew System::Windows::Forms::TextBox());
			this->nomS = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(38, 24);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(406, 268);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(497, 24);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 55);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Créer";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(497, 102);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 55);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Supprimer";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(497, 163);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(140, 55);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Afficher";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(497, 237);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(140, 55);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Modifier";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// dateE
			// 
			this->dateE->Location = System::Drawing::Point(38, 311);
			this->dateE->Name = L"dateE";
			this->dateE->Size = System::Drawing::Size(100, 20);
			this->dateE->TabIndex = 5;
			// 
			// dateP
			// 
			this->dateP->Location = System::Drawing::Point(38, 337);
			this->dateP->Name = L"dateP";
			this->dateP->Size = System::Drawing::Size(100, 20);
			this->dateP->TabIndex = 6;
			// 
			// dateS
			// 
			this->dateS->Location = System::Drawing::Point(38, 363);
			this->dateS->Name = L"dateS";
			this->dateS->Size = System::Drawing::Size(100, 20);
			this->dateS->TabIndex = 7;
			// 
			// refcommande
			// 
			this->refcommande->Location = System::Drawing::Point(280, 311);
			this->refcommande->Name = L"refcommande";
			this->refcommande->Size = System::Drawing::Size(100, 20);
			this->refcommande->TabIndex = 8;
			// 
			// RefA
			// 
			this->RefA->Location = System::Drawing::Point(280, 337);
			this->RefA->Name = L"RefA";
			this->RefA->Size = System::Drawing::Size(100, 20);
			this->RefA->TabIndex = 9;
			// 
			// nom_article
			// 
			this->nom_article->Location = System::Drawing::Point(280, 363);
			this->nom_article->Name = L"nom_article";
			this->nom_article->Size = System::Drawing::Size(100, 20);
			this->nom_article->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(144, 311);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 13);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Date d\'émission";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(144, 337);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 13);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Date de paiement ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(144, 363);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 13);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Date solde";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(144, 389);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(89, 13);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Date de livraison ";
			// 
			// RefC
			// 
			this->RefC->AutoSize = true;
			this->RefC->Location = System::Drawing::Point(386, 314);
			this->RefC->Name = L"RefC";
			this->RefC->Size = System::Drawing::Size(79, 13);
			this->RefC->TabIndex = 15;
			this->RefC->Text = L"Ref commande";
			// 
			// feefefe
			// 
			this->feefefe->AutoSize = true;
			this->feefefe->Location = System::Drawing::Point(389, 340);
			this->feefefe->Name = L"feefefe";
			this->feefefe->Size = System::Drawing::Size(55, 13);
			this->feefefe->TabIndex = 16;
			this->feefefe->Text = L"Ref article";
			// 
			// dateL
			// 
			this->dateL->Location = System::Drawing::Point(38, 389);
			this->dateL->Name = L"dateL";
			this->dateL->Size = System::Drawing::Size(100, 20);
			this->dateL->TabIndex = 17;
			// 
			// quantiteart
			// 
			this->quantiteart->Location = System::Drawing::Point(280, 389);
			this->quantiteart->Name = L"quantiteart";
			this->quantiteart->Size = System::Drawing::Size(100, 20);
			this->quantiteart->TabIndex = 18;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(38, 415);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 20);
			this->textBox9->TabIndex = 19;
			// 
			// HT
			// 
			this->HT->Location = System::Drawing::Point(280, 415);
			this->HT->Name = L"HT";
			this->HT->Size = System::Drawing::Size(100, 20);
			this->HT->TabIndex = 20;
			// 
			// paiement
			// 
			this->paiement->AutoSize = true;
			this->paiement->Location = System::Drawing::Point(144, 418);
			this->paiement->Name = L"paiement";
			this->paiement->Size = System::Drawing::Size(103, 13);
			this->paiement->TabIndex = 21;
			this->paiement->Text = L"Moyen de paiement ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(386, 366);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(58, 13);
			this->label8->TabIndex = 22;
			this->label8->Text = L"nom article";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(386, 392);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(79, 13);
			this->label9->TabIndex = 23;
			this->label9->Text = L"quantité article ";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(408, 422);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(36, 13);
			this->label10->TabIndex = 24;
			this->label10->Text = L"Prix ht";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(389, 495);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(28, 13);
			this->label11->TabIndex = 25;
			this->label11->Text = L"TVA";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(389, 467);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(39, 13);
			this->label12->TabIndex = 26;
			this->label12->Text = L"Prix ttc";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(540, 488);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(66, 13);
			this->label13->TabIndex = 27;
			this->label13->Text = L"Nom société";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(540, 532);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(82, 13);
			this->label14->TabIndex = 28;
			this->label14->Text = L"Adresse société";
			// 
			// NumC
			// 
			this->NumC->AutoSize = true;
			this->NumC->Location = System::Drawing::Point(144, 499);
			this->NumC->Name = L"NumC";
			this->NumC->Size = System::Drawing::Size(78, 13);
			this->NumC->TabIndex = 29;
			this->NumC->Text = L"Numéro  client ";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(38, 441);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 20);
			this->textBox11->TabIndex = 30;
			// 
			// Logo
			// 
			this->Logo->AutoSize = true;
			this->Logo->Location = System::Drawing::Point(397, 531);
			this->Logo->Name = L"Logo";
			this->Logo->Size = System::Drawing::Size(31, 13);
			this->Logo->TabIndex = 31;
			this->Logo->Text = L"Logo";
			// 
			// NomC
			// 
			this->NomC->AutoSize = true;
			this->NomC->Location = System::Drawing::Point(144, 444);
			this->NomC->Name = L"NomC";
			this->NomC->Size = System::Drawing::Size(60, 13);
			this->NomC->TabIndex = 32;
			this->NomC->Text = L"Nom clietn ";
			// 
			// PrenomC
			// 
			this->PrenomC->AutoSize = true;
			this->PrenomC->Location = System::Drawing::Point(144, 467);
			this->PrenomC->Name = L"PrenomC";
			this->PrenomC->Size = System::Drawing::Size(86, 13);
			this->PrenomC->TabIndex = 33;
			this->PrenomC->Text = L"Prénom cLIENT ";
			// 
			// adrL
			// 
			this->adrL->AutoSize = true;
			this->adrL->Location = System::Drawing::Point(144, 535);
			this->adrL->Name = L"adrL";
			this->adrL->Size = System::Drawing::Size(138, 13);
			this->adrL->TabIndex = 34;
			this->adrL->Text = L"aDRESSE DE LIVRAISON ";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(389, 444);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(157, 13);
			this->label20->TabIndex = 35;
			this->label20->Text = L"aDRESSE DE FACTURATION ";
			// 
			// adr
			// 
			this->adr->Location = System::Drawing::Point(280, 441);
			this->adr->Name = L"adr";
			this->adr->Size = System::Drawing::Size(100, 20);
			this->adr->TabIndex = 36;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(38, 467);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(100, 20);
			this->textBox13->TabIndex = 37;
			// 
			// TTC
			// 
			this->TTC->Location = System::Drawing::Point(280, 467);
			this->TTC->Name = L"TTC";
			this->TTC->Size = System::Drawing::Size(100, 20);
			this->TTC->TabIndex = 38;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(38, 496);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(100, 20);
			this->textBox15->TabIndex = 39;
			// 
			// TVA
			// 
			this->TVA->Location = System::Drawing::Point(280, 492);
			this->TVA->Name = L"TVA";
			this->TVA->Size = System::Drawing::Size(100, 20);
			this->TVA->TabIndex = 40;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(38, 532);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(100, 20);
			this->textBox17->TabIndex = 41;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(280, 528);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(100, 20);
			this->textBox18->TabIndex = 42;
			// 
			// AdrS
			// 
			this->AdrS->Location = System::Drawing::Point(434, 528);
			this->AdrS->Name = L"AdrS";
			this->AdrS->Size = System::Drawing::Size(100, 20);
			this->AdrS->TabIndex = 43;
			// 
			// nomS
			// 
			this->nomS->Location = System::Drawing::Point(434, 488);
			this->nomS->Name = L"nomS";
			this->nomS->Size = System::Drawing::Size(100, 20);
			this->nomS->TabIndex = 44;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(679, 564);
			this->Controls->Add(this->nomS);
			this->Controls->Add(this->AdrS);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->TVA);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->TTC);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->adr);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->adrL);
			this->Controls->Add(this->PrenomC);
			this->Controls->Add(this->NomC);
			this->Controls->Add(this->Logo);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->NumC);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->paiement);
			this->Controls->Add(this->HT);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->quantiteart);
			this->Controls->Add(this->dateL);
			this->Controls->Add(this->feefefe);
			this->Controls->Add(this->RefC);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->nom_article);
			this->Controls->Add(this->RefA);
			this->Controls->Add(this->refcommande);
			this->Controls->Add(this->dateS);
			this->Controls->Add(this->dateP);
			this->Controls->Add(this->dateE);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	


/*private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {//créer
	this->oSvccommande->creerCommande()
}
	   
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {//supprimer
this->oSvccommande->supprimerCommande() }
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {//afficher
	this->dataGridView1->Refresh();
	this->oDs = this->oSvccommande->afficherPersonnel("Rsl");

	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "Rsl";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {//modifier 
	this->oSvccommande->modifierCommande();
}*/
};
}
