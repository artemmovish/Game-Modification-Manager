#include "Launcher.h"
#include "ControlPanel.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace std;


[STAThread]
void main() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    
    Project1::Launcher form;
    // Project1 ��� �������, Form1h ��� �����
    Application::Run(% form);
}


