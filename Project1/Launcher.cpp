#include "Launcher.h"
#include "ControlPanel.h"
#include "IconGame.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace std;

[STAThread]
void main() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    
    Project1::Launcher form;
    // Project1 имя решения, Form1h имя формы
    Application::Run(% form);
}

// Режим редактирования
System::Void Project1::Launcher::butChange_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
    if (!StatusChange)
    {
        StatusChange = true;
        this->Text += " - режим редакции";
        MenuStripPrew->Visible = true;
    }
    return System::Void();
}
// Сохранить изменения
System::Void Project1::Launcher::butSave_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
    if (StatusChange)
    {
        StatusChange = false;
        this->Text = "Launcher";
        MenuStripPrew->Visible = false;
    }
    return System::Void();
}
// Добавить картинку
System::Void Project1::Launcher::добавитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (DialogImage->ShowDialog() == DialogResult)
    {
        String^ path = DialogImage->FileName;
    }
    return System::Void();
}

System::Void Project1::Launcher::click_butImageMinus(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}


System::Void Project1::Launcher::click_butImagePlus(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void Project1::Launcher::butAddGame_Click(System::Object^ sender, System::EventArgs^ e)
{
   
    return System::Void();
}
