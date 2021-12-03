#pragma once
#include "CLserviceStock.h"

namespace Project6 {

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
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ RefArticle;
	private: System::Windows::Forms::TextBox^ NatureArticle;
	private: System::Windows::Forms::TextBox^ couleur;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ nomArticle;
	private: System::Windows::Forms::Label^ labe;


	private: NS_Comp_Svc::CLserviceStock^ osvcStock;
	private: Data::DataSet^ oDs;
	private: System::Windows::Forms::TextBox^ QuantiteArticle;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ Seuil;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tauxTVA;
	private: System::Windows::Forms::Label^ T;
	private: System::Windows::Forms::TextBox^ HT;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ tauxtvastock;




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
			this->RefArticle = (gcnew System::Windows::Forms::TextBox());
			this->NatureArticle = (gcnew System::Windows::Forms::TextBox());
			this->couleur = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->nomArticle = (gcnew System::Windows::Forms::TextBox());
			this->labe = (gcnew System::Windows::Forms::Label());
			this->QuantiteArticle = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Seuil = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tauxTVA = (gcnew System::Windows::Forms::TextBox());
			this->T = (gcnew System::Windows::Forms::Label());
			this->HT = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tauxtvastock = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(27, 41);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(462, 315);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(523, 58);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Afficher";
			this->button1->UseVisualStyleBackColor = true;
			
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(523, 111);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Créer";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(523, 161);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Supprimer";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(523, 220);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Modifier";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(523, 355);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 75);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Retour à l\'accueil";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// RefArticle
			// 
			this->RefArticle->Location = System::Drawing::Point(27, 362);
			this->RefArticle->Name = L"RefArticle";
			this->RefArticle->Size = System::Drawing::Size(100, 20);
			this->RefArticle->TabIndex = 6;
			// 
			// NatureArticle
			// 
			this->NatureArticle->Location = System::Drawing::Point(27, 388);
			this->NatureArticle->Name = L"NatureArticle";
			this->NatureArticle->Size = System::Drawing::Size(100, 20);
			this->NatureArticle->TabIndex = 7;
			// 
			// couleur
			// 
			this->couleur->Location = System::Drawing::Point(27, 414);
			this->couleur->Name = L"couleur";
			this->couleur->Size = System::Drawing::Size(100, 20);
			this->couleur->TabIndex = 8;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(133, 365);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(24, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Ref";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(133, 391);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Nature";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(133, 417);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Couleur";
			// 
			// nomArticle
			// 
			this->nomArticle->Location = System::Drawing::Point(209, 414);
			this->nomArticle->Name = L"nomArticle";
			this->nomArticle->Size = System::Drawing::Size(100, 20);
			this->nomArticle->TabIndex = 12;
			// 
			// labe
			// 
			this->labe->AutoSize = true;
			this->labe->Location = System::Drawing::Point(315, 417);
			this->labe->Name = L"labe";
			this->labe->Size = System::Drawing::Size(58, 13);
			this->labe->TabIndex = 13;
			this->labe->Text = L"NomArticle";
			// 
			// QuantiteArticle
			// 
			this->QuantiteArticle->Location = System::Drawing::Point(209, 388);
			this->QuantiteArticle->Name = L"QuantiteArticle";
			this->QuantiteArticle->Size = System::Drawing::Size(100, 20);
			this->QuantiteArticle->TabIndex = 14;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(315, 388);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(91, 13);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Quantité d\'articles";
			// 
			// Seuil
			// 
			this->Seuil->Location = System::Drawing::Point(209, 362);
			this->Seuil->Name = L"Seuil";
			this->Seuil->Size = System::Drawing::Size(100, 20);
			this->Seuil->TabIndex = 16;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(315, 365);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 13);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Seuil sous R";
			// 
			// tauxTVA
			// 
			this->tauxTVA->Location = System::Drawing::Point(209, 440);
			this->tauxTVA->Name = L"tauxTVA";
			this->tauxTVA->Size = System::Drawing::Size(100, 20);
			this->tauxTVA->TabIndex = 18;
			// 
			// T
			// 
			this->T->AutoSize = true;
			this->T->Location = System::Drawing::Point(315, 443);
			this->T->Name = L"T";
			this->T->Size = System::Drawing::Size(55, 13);
			this->T->TabIndex = 19;
			this->T->Text = L"Taux TVA";
			// 
			// HT
			// 
			this->HT->Location = System::Drawing::Point(209, 470);
			this->HT->Name = L"HT";
			this->HT->Size = System::Drawing::Size(100, 20);
			this->HT->TabIndex = 20;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(318, 470);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(42, 13);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Prix HT";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(520, 477);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(84, 13);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Taux TVA stock";
			// 
			// tauxtvastock
			// 
			this->tauxtvastock->Location = System::Drawing::Point(414, 474);
			this->tauxtvastock->Name = L"tauxtvastock";
			this->tauxtvastock->Size = System::Drawing::Size(100, 20);
			this->tauxtvastock->TabIndex = 23;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(661, 502);
			this->Controls->Add(this->tauxtvastock);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->HT);
			this->Controls->Add(this->T);
			this->Controls->Add(this->tauxTVA);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->Seuil);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->QuantiteArticle);
			this->Controls->Add(this->labe);
			this->Controls->Add(this->nomArticle);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->couleur);
			this->Controls->Add(this->NatureArticle);
			this->Controls->Add(this->RefArticle);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridView1->Refresh();
	this->oDs = this->osvcStock->afficherStock("Rsl");

	this->dataGridView1->DataSource = this->oDs;
	this->dataGridView1->DataMember = "Rsl";
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->osvcStock->creerStock(this->RefArticle->Text, this->NatureArticle->Text, this->couleur->Text, this->nomArticle->Text, this->QuantiteArticle->Text, this->Seuil->Text, this->tauxTVA->Text, this->HT->Text, this->tauxtvastock->Text);
}


private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->osvcStock->supprimerStock(this->RefArticle->Text);
}


private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->osvcStock->modifierStock(this->QuantiteArticle->Text, this->RefArticle->Text);
}
};
}
