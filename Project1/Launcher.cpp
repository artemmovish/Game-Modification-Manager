#include "Launcher.h"
#include "ControlPanel.h"
#include "IconGame.h"
#include "AddMod.h"
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

// �������� ����
System::Void Project1::Launcher::click_butImageMinus(System::Object^ sender, System::EventArgs^ e)
{
    targetPlay--;
    soundPlayer = gcnew SoundPlayer(fileAudio[targetPlay % fileAudio->Length]);
    soundPlayer->Play();
    return System::Void();
}
System::Void Project1::Launcher::click_butImagePlus(System::Object^ sender, System::EventArgs^ e)
{
    targetPlay++;
    soundPlayer = gcnew SoundPlayer(fileAudio[targetPlay % fileAudio->Length]);
    soundPlayer->Play();
    return System::Void();
}

System::Void Project1::Launcher::click_butPlay(System::Object^ sender, System::EventArgs^ e)
{
    soundPlayer->Play();
    return System::Void();
}

System::Void Project1::Launcher::click_butStop(System::Object^ sender, System::EventArgs^ e)
{
    soundPlayer->Stop();
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
    this->Text = "Launcher";

    MenuStripPrew->Enabled = false;

    StatusChange = false;
    textName->ReadOnly = true;
    textName->ForeColor = Drawing::Color::Silver;

    textDict->ReadOnly = true;
    textDict->ForeColor = Drawing::Color::Silver;

    textExe->ReadOnly = true;
    textExe->ForeColor = Drawing::Color::Silver;

    GetData(name);
    if (name != "������")
    {
        try
        {
            Prew->Image = Image::FromFile("Game\\" + name + "\\prewOld.png");
        }
        catch (System::IO::FileNotFoundException^)
        {
            try
            {
                Prew->Image = Image::FromFile("Game\\" + name + "\\prewOld.gif");
            }
            catch (System::IO::FileNotFoundException^)
            {
                Prew->Image = Image::FromFile("Game\\" + name + "\\prewOld.jpg");
            }
        }
    }
    else
    {
        Prew->Image = Image::FromFile("�������\\������\\Modification-Manager-27-04-2024.png");
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
    activateButton(true, 0);
    OldName = name;
    StatusDel = false;
    butAddGame->Enabled = true;
    panelGameMod->Controls->Clear();
    LoadMod();
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
    else
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
    }
    if (textName->Text == "������")
    {
        StatusChange = false;
    }
    return System::Void();
}
System::Void Project1::Launcher::butSave_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (StatusChange && OldName != "������")
    {
        MenuStripPrew->Enabled = false;

        StatusChange = false;
        textName->ReadOnly = true;
        textName->ForeColor = Drawing::Color::Silver;

        textDict->ReadOnly = true;
        textDict->ForeColor = Drawing::Color::Silver;

        textExe->ReadOnly = true;
        textExe->ForeColor = Drawing::Color::Silver;

        if (textName->Text == "������")
        {
            MessageBox::Show("������ �������� ������", "���������");
        }
        else if (textName->Text == "" || textName->Text->Substring(0, 1) == " ")
        {
            MessageBox::Show("������ ������ ������ ���", "���������");
        }
        else
        {
            this->Text = "Launcher";
            UpdateData();
            Application::Restart();
        }
    }
    else
    {
        if (textName->Text == "������")
        {
            MessageBox::Show("������ �������� ������", "���������");
        }
        else if (textName->Text == "" || textName->Text->Substring(0, 1) == " ")
        {
            MessageBox::Show("�������� ������ �����");
        }
        else if (OldName == "������")
        {
            this->Text = "Launcher";
            SaveData();
            Application::Restart();
        }
    }
    return System::Void();
}
System::Void Project1::Launcher::butDel_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (textName->Text != "������" && OldName != "������")
    {   
        if (StatusChange)
        {
            MessageBox::Show("��������� ���������, ������ ��� ������� ����");
            return System::Void();
        }
        if (MessageBox::Show("�� �������, ��� ������ �������?", "�������������", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
            DeleteGame();
            Application::Restart();
        }
    }
    else
    {
        MessageBox::Show("������ ������ �������");
    }
    return System::Void();
}
System::Void Project1::Launcher::butStart_Click(System::Object^ sender, System::EventArgs^ e)
{
    try
    {
        process1->StartInfo->FileName = textExe->Text;
        process1->StartInfo->WorkingDirectory = Path::GetDirectoryName(textExe->Text);
        process1->Start();
    }
    catch (Exception^ ex)
    {
        MessageBox::Show("�������� ������ ��� �������, �������� ���� � .exe ����");
    }
    
    return System::Void();
}
System::Void Project1::Launcher::textExe_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (StatusChange|| OldName=="������")
    {
        if (DialogExe->ShowDialog() == System::Windows::Forms::DialogResult::OK)
        {
            textExe->Text = DialogExe->FileName;
        }
    }
    return System::Void();
}

// �������� �����������
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
    IconGame^ gameChange = SearchGame(OldName);
    if (DialogImage->ShowDialog() == System::Windows::Forms::DialogResult::OK)
    {
        gameChange->loadImage(DialogImage->FileName);
    }
    return System::Void();
}

// �������� ���
System::Void Project1::Launcher::butAddGameMod_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (textName->Text == "������" || textName->Text == "�������� ����")
    {
        MessageBox::Show("�������� ����");
    }
    else if (StatusChange)
    {
        MessageBox::Show("��������� ��������� ����");
    }
    else
    {
        AddMod^ mod = gcnew AddMod();
        mod->nameGame = textName->Text;
        mod->Show();
    }
}