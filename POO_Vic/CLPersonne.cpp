#include "CLPersonne.h"


System::String^ NS_Comp_Mappage::CLPersonne::SelectP(void)
{
	return "SELECT DISTINCT Personne.id_personne, Personne.Nom, Personne.Prenom, Associer.id_type, Posseder.id_adresse, Adresse.id_CP, CodePostal.id_ville, Avoir.type_date, Date.date FROM Personne INNER JOIN Associer ON Personne.id_personne = Associer.id_personne INNER JOIN Posseder ON Posseder.id_personne = Personne.id_personne INNER JOIN Adresse ON Adresse.id_adresse = Posseder.id_adresse INNER JOIN CodePostal  ON CodePostal.id_CP = Adresse.id_CP INNER JOIN Date_type ON Date_type.id_personne = Personne.id_personne INNER JOIN Avoir ON Avoir.id_date = Date_type.id_date INNER JOIN Date ON Date.id_date = Avoir.id_date WHERE Avoir.type_date = 'embauche' AND Associer.id_type = 'Personnel'";
}
System::String^ NS_Comp_Mappage::CLPersonne::SelectC(void)
{
	return "";
}
System::String^ NS_Comp_Mappage::CLPersonne::Insert(void)
{
	return "INSERT INTO Personne (Nom,Prenom) VALUES ('" + this->Nom + "', '" + this->Prenom + "') INSERT INTO Associer(id_type, id_personne) SELECT 'personnel', id_personne FROM Personne WHERE Nom = '" + this->Nom + "' AND Prenom = '" + this->Nom + "'; INSERT INTO Adresse(id_adresse, id_CP) SELECT '" + this->AdressePersonnelle + "', '" + this->CPAdressePersonnelle + "' FROM Personne WHERE Nom = '" + this->Nom + "' AND Prenom = '" + this->Prenom + "'; INSERT INTO Posseder(id_personne, id_adresse, type_adresse) SELECT id_personne, id_adresse, 'perso' FROM Personne, Adresse WHERE Nom = '" + this->Nom + "' AND Prenom = '" + this->Prenom + "' AND id_adresse = '" + this->AdressePersonnelle + "'; INSERT INTO CodePostal(id_CP, id_ville) SELECT id_CP, '" + this->VilleAdressePersonnelle + "' FROM Adresse WHERE id_CP = '" + this->CPAdressePersonnelle + "'; INSERT INTO Ville(id_ville) VALUES('" + this->VilleAdressePersonnelle + "'); INSERT INTO Date(date) SELECT '" + this->DateE + "'FROM Personne WHERE Nom = '" + this->Nom + "' AND Prenom = '" + this->Prenom + "'; INSERT INTO Date_type(id_date, id_personne) SELECT id_date, id_personne FROM Personne, Date WHERE Nom = '" + this->Nom + "' AND Prenom = '" + this->Prenom + "' AND date = '" + this->DateE + "'; INSERT INTO Avoir(type_date, id_date) SELECT 'embauche', id_date FROM Personne, Date WHERE Nom = '" + this->Nom + "' AND Prenom = '" + this->Prenom + "' AND date = '" + DateE + "'; ";
}
System::String^ NS_Comp_Mappage::CLPersonne::DeleteP(void)
{
	return "DELETE FROM Associer WHERE id_personne ='"+this->Id+"' AND id_type ='personnel'";
}
System::String^ NS_Comp_Mappage::CLPersonne::Update(void)
{
	return "";
}

#pragma region SET
void NS_Comp_Mappage::CLPersonne::setIdPersonne(int IdPersonne)
{
	this->IdPersonne = IdPersonne;
}
void NS_Comp_Mappage::CLPersonne::setNom(System::String^ Nom)
{
	this->Nom = Nom;
}
void NS_Comp_Mappage::CLPersonne::setPrenom(System::String^ Prenom)
{
	this->Prenom = Prenom;
}
void NS_Comp_Mappage::CLPersonne::setAdressePersonnelle(System::String^ AdressePersonnelle)
{
	this->AdressePersonnelle = AdressePersonnelle;
}
void NS_Comp_Mappage::CLPersonne::setCPAdressePersonnelle(System::String^ CPAdressePersonnelle)
{
	this->CPAdressePersonnelle = CPAdressePersonnelle;
}
void NS_Comp_Mappage::CLPersonne::setVilleAdressePersonnelle(System::String^ VilleAdressePersonnelle)
{
	this->VilleAdressePersonnelle = VilleAdressePersonnelle;
}
void NS_Comp_Mappage::CLPersonne::setAdresseFacturation(System::String^ AdresseFacturation)
{
	this->AdresseFacturation = AdresseFacturation;
}
void NS_Comp_Mappage::CLPersonne::setCPAdresseFacturation(int CPAdresseFacturation)
{
	this->CPAdresseFacturation = CPAdresseFacturation;
}
void NS_Comp_Mappage::CLPersonne::setVilleAdresseFacturation(System::String^ VilleAdresseFacturation)
{
	this->VilleAdresseFacturation = VilleAdresseFacturation;
}
void NS_Comp_Mappage::CLPersonne::setAdresseLivraison(System::String^ AdresseLivraison)
{
	this->AdresseLivraison = AdresseLivraison;
}
void NS_Comp_Mappage::CLPersonne::setCPAdresseLivraison(int CPAdresseLivraison)
{
	this->CPAdresseLivraison = CPAdresseLivraison;
}
void NS_Comp_Mappage::CLPersonne::setVilleAdresseLivraison(System::String^ VilleAdresseLivraison)
{
	this->VilleAdresseLivraison = VilleAdresseLivraison;
}
void NS_Comp_Mappage::CLPersonne::setDateN(System::String^ DateN)
{
	this->DateN = DateN;
}
void NS_Comp_Mappage::CLPersonne::setDateA(System::String^ DateA)
{
	this->DateA = DateA;
}
void NS_Comp_Mappage::CLPersonne::setDateE(System::String^ DateE)
{
	this->DateE = DateE;
}
void NS_Comp_Mappage::CLPersonne::setTypePersonne(System::String^ TypePersonne)
{
	this->TypePersonne = TypePersonne;
}
#pragma endregion

#pragma region GET
int NS_Comp_Mappage::CLPersonne::getIdPersonne(void)
{
	return this->IdPersonne;
}
System::String^ NS_Comp_Mappage::CLPersonne::getNom(void)
{
	return this->Nom;
}
System::String^ NS_Comp_Mappage::CLPersonne::getPrenom(void)
{
	return this->Prenom;
}
System::String^ NS_Comp_Mappage::CLPersonne::getAdressePersonnelle(void)
{
	return this->AdressePersonnelle;
}
System::String^ NS_Comp_Mappage::CLPersonne::getCPAdressePersonnelle(void)
{
	return this->CPAdressePersonnelle;
}
System::String^ NS_Comp_Mappage::CLPersonne::getVilleAdressePersonnelle(void)
{
	return this->VilleAdressePersonnelle;
}
System::String^ NS_Comp_Mappage::CLPersonne::getAdresseFacturation(void)
{
	return this->AdresseFacturation;
}
int NS_Comp_Mappage::CLPersonne::getCPAdresseFacturation(void)
{
	return this->CPAdresseFacturation;
}
System::String^ NS_Comp_Mappage::CLPersonne::getVilleAdresseFacturation(void)
{
	return this->VilleAdresseFacturation;
}
System::String^ NS_Comp_Mappage::CLPersonne::getAdresseLivraison(void)
{
	return this->AdresseLivraison;
}
int NS_Comp_Mappage::CLPersonne::getCPAdresseLivraison(void)
{
	return this->CPAdresseLivraison;
}
System::String^ NS_Comp_Mappage::CLPersonne::getVilleAdresseLivraison(void)
{
	return this->VilleAdresseLivraison;
}
System::String^ NS_Comp_Mappage::CLPersonne::getDateN(void)
{
	return this->DateN;
}
System::String^ NS_Comp_Mappage::CLPersonne::getDateA(void)
{
	return this->DateA;
}
System::String^ NS_Comp_Mappage::CLPersonne::getDateE(void)
{
	return this->DateE;
}
System::String^ NS_Comp_Mappage::CLPersonne::getTypePersonne(void)
{
	return this->TypePersonne;
}
#pragma endregion
