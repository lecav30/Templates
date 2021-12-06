#include "MyForm.h"  
using namespace System;
using namespace System::Windows::Forms;
[STAThread]

void main() 
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
    // Project : Name of your project
	Application::Run(gcnew Project::MyForm());
}
