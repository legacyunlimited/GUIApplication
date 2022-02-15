#include "MainPage.h"
using namespace System;
using namespace std;
using namespace System::Windows::Forms;
[STAThread]

void main()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    GUIApplication::MainPage form;
    Application::Run(% form);
}

