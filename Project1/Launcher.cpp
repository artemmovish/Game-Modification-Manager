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
    // Project1 имя решения, Form1h имя формы
    Application::Run(% form);
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

// изменить трек
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

// добавить шаблон игры
System::Void Project1::Launcher::butAddGame_Click(System::Object^ sender, System::EventArgs^ e)
{
    IconGame^ game = gcnew IconGame();
    game->clickIconGame += gcnew SendGameName(this, &Launcher::click_IconGame);
    panelGame->Controls->Add(game);
    return System::Void();
}

// клик на иконку игры
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
    if (name != "Шаблон")
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
        Prew->Image = Image::FromFile("Ресурсы\\Кнопки\\Modification-Manager-27-04-2024.png");
        this->Text = "Launcher - режим изменения";

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

// кнопки управления игрой
System::Void Project1::Launcher::butChange_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (!StatusChange)
    {
        this->Text = "Launcher - режим изменения";

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
    if (textName->Text == "Шаблон")
    {
        StatusChange = false;
    }
    return System::Void();
}
System::Void Project1::Launcher::butSave_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (StatusChange && OldName != "Шаблон")
    {
        MenuStripPrew->Enabled = false;

        StatusChange = false;
        textName->ReadOnly = true;
        textName->ForeColor = Drawing::Color::Silver;

        textDict->ReadOnly = true;
        textDict->ForeColor = Drawing::Color::Silver;

        textExe->ReadOnly = true;
        textExe->ForeColor = Drawing::Color::Silver;

        if (textName->Text == "Шаблон")
        {
            MessageBox::Show("Шаблон изменять нельзя", "Сообщение");
        }
        else if (textName->Text == "" || textName->Text->Substring(0, 1) == " ")
        {
            MessageBox::Show("Нельзя задать пустое имя", "Сообщение");
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
        if (textName->Text == "Шаблон")
        {
            MessageBox::Show("Шаблон изменять нельзя", "Сообщение");
        }
        else if (textName->Text == "" || textName->Text->Substring(0, 1) == " ")
        {
            MessageBox::Show("Неверный формат имени");
        }
        else if (OldName == "Шаблон")
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
    if (textName->Text != "Шаблон" && OldName != "Шаблон")
    {   
        if (StatusChange)
        {
            MessageBox::Show("Сохраните изменения, прежде чем удалить игру");
            return System::Void();
        }
        if (MessageBox::Show("Вы уверены, что хотите удалить?", "Подтверждение", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
            DeleteGame();
            Application::Restart();
        }
    }
    else
    {
        MessageBox::Show("Шаблон нельзя удалить");
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
        MessageBox::Show("Возникла ошибка при запуске, измените путь к .exe файл");
    }
    
    return System::Void();
}
System::Void Project1::Launcher::textExe_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (StatusChange|| OldName=="Шаблон")
    {
        if (DialogExe->ShowDialog() == System::Windows::Forms::DialogResult::OK)
        {
            textExe->Text = DialogExe->FileName;
        }
    }
    return System::Void();
}

// изменить изображения
System::Void Project1::Launcher::изменитьPrewToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (DialogImage->ShowDialog() == System::Windows::Forms::DialogResult::OK)
    {
        Prew->Image = Image::FromFile(DialogImage->FileName);
    }
    return System::Void();
}
System::Void Project1::Launcher::изменитьIconToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    IconGame^ gameChange = SearchGame(OldName);
    if (DialogImage->ShowDialog() == System::Windows::Forms::DialogResult::OK)
    {
        gameChange->loadImage(DialogImage->FileName);
    }
    return System::Void();
}

// Добавить мод
System::Void Project1::Launcher::butAddGameMod_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (textName->Text == "Шаблон" || textName->Text == "НАЗВАНИЕ ИГРЫ")
    {
        MessageBox::Show("Выберете игру");
    }
    else if (StatusChange)
    {
        MessageBox::Show("Сохраните изменения игры");
    }
    else
    {
        AddMod^ mod = gcnew AddMod();
        mod->nameGame = textName->Text;
        mod->Show();
    }
}