#include "MyFormaccueil.h"
#include "MyFormpersonnel.h"
#include "MyFormstatistiques.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //POOProjet::MyFormaccueil form;
    //POOProjet::MyFormpersonnel form;
    POOProjet::MyFormstatistiques form;
    Application::Run(% form);
}