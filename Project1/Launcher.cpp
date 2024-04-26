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


// Добавить картинку
System::Void Project1::Launcher::добавитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (DialogImage->ShowDialog() == DialogResult)
    {
        String^ path = DialogImage->FileName;
    }
    return System::Void();
}

// изменить изображения
System::Void Project1::Launcher::click_butImageMinus(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}
System::Void Project1::Launcher::click_butImagePlus(System::Object^ sender, System::EventArgs^ e)
{
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
    if (name != "Кликни на меня")
    {
        GetData(name);
    }
    else
    {
        this->Text = "Launcher - режим изменения";

        StatusChange = true;
        textName->ReadOnly = false;
        textName->ForeColor = Drawing::Color::White;

        textDict->ReadOnly = false;
        textDict->ForeColor = Drawing::Color::White;

        textExe->ReadOnly = false;
        textExe->ForeColor = Drawing::Color::White;

        textDict->Text = "После добавления информации нажмите сохранить.\n Если вы захотите в дальнейшем изменить информаую, то выберите режим изменения и редактируйте";
        textName->Text = "Название игры, название игры уникально";
        textExe->Text = "Кликни на строку чтобы изменить";
    }
    activateButton(true, 0);
    return System::Void();
}

// кнопки управления игрой
System::Void Project1::Launcher::butChange_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (!StatusChange)
    {
        this->Text = "Launcher - режим изменения";

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
        if (DialogExe->ShowDialog() == DialogResult)
        {
            textExe->Text = DialogExe->FileName;
        }
    }
    return System::Void();
}




