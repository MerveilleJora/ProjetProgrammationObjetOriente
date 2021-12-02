#include "MyFormpersonnel.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is your project name
    POO_Vic::MyFormpersonnel Form;
    Application::Run(% Form);
}
