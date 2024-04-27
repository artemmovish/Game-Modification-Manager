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
    // Project1 ��� �������, Form1h ��� �����
    Application::Run(% form);
}


// �������� ��������
System::Void Project1::Launcher::��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (DialogImage->ShowDialog() == DialogResult)
    {
        String^ path = DialogImage->FileName;
    }
    return System::Void();
}

// �������� �����������
System::Void Project1::Launcher::click_butImageMinus(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}
System::Void Project1::Launcher::click_butImagePlus(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

// �������� ������ ����
System::Void Project1::Launcher::butAddGame_Click(System::Object^ sender, System::EventArgs^ e)
{
    IconGame^ game = gcnew IconGame();
    game->clickIconGame += gcnew SendGameName(this, &Launcher::click_IconGame);
    panelGame->Controls->Add(game);
    return System::Void();
}

// ���� �� ������ ����
System::Void Project1::Launcher::click_IconGame(String^ name)
{
    if (name != "������ �� ����")
    {
        GetData(name);
    }
    else
    {
        this->Text = "Launcher - ����� ���������";

        MenuStripPrew->Enabled = true;

        StatusChange = true;
        textName->ReadOnly = false;
        textName->ForeColor = Drawing::Color::White;

        textDict->ReadOnly = false;
        textDict->ForeColor = Drawing::Color::White;

        textExe->ReadOnly = false;
        textExe->ForeColor = Drawing::Color::White;

        textDict->Text = "����� ���������� ���������� ������� ���������.\n ���� �� �������� � ���������� �������� ���������, �� �������� ����� ��������� � ������������";
        textName->Text = "�������� ����, �������� ���� ���������";
        textExe->Text = "������ �� ������ ����� ��������";
    }
    activateButton(true, 0);
    return System::Void();
}

// ������ ���������� �����
System::Void Project1::Launcher::butChange_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (!StatusChange)
    {
        this->Text = "Launcher - ����� ���������";

        MenuStripPrew->Enabled = true;

        StatusChange = true;
        textName->ReadOnly = false;
        textName->ForeColor = Drawing::Color::White;

        textDict->ReadOnly = false;
        textDict->ForeColor = Drawing::Color::White;

        textExe->ReadOnly = false;
        textExe->ForeColor = Drawing::Color::White;
    }
    return System::Void();
}
System::Void Project1::Launcher::butSave_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (StatusChange)
    {
        this->Text = "Launcher";

        MenuStripPrew->Enabled = false;

        StatusChange = false;
        textName->ReadOnly = true;
        textName->ForeColor = Drawing::Color::Silver;

        textDict->ReadOnly = true;
        textDict->ForeColor = Drawing::Color::Silver;

        textExe->ReadOnly = true;
        textExe->ForeColor = Drawing::Color::Silver;

        SaveData();
    }
    
    return System::Void();
}
System::Void Project1::Launcher::butDel_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}
System::Void Project1::Launcher::butStart_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}
System::Void Project1::Launcher::textExe_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (StatusChange)
    {
        if (DialogExe->ShowDialog() == System::Windows::Forms::DialogResult::OK)
        {
            textExe->Text = DialogExe->FileName;
        }
    }
    return System::Void();
}

System::Void Project1::Launcher::��������PrewToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (DialogImage->ShowDialog() == System::Windows::Forms::DialogResult::OK)
    {
        Prew->Image = Image::FromFile(DialogImage->FileName);
    }
    return System::Void();
}

System::Void Project1::Launcher::��������IconToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    IconGame^ gameChange = nullptr;
    for each (IconGame ^ control in panelGame->Controls)
    {
        if (control->NameGame->Text == textName->Text)
        {
            gameChange = control;
            break; // ����� �������, ����� ����� �� �����
        }
    }
    if (DialogImage->ShowDialog() == System::Windows::Forms::DialogResult::OK)
    {
        gameChange->loadImage(DialogImage->FileName);
    }
    return System::Void();
}



