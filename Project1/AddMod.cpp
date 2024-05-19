#include "AddMod.h"

System::Void Project1::AddMod::butAddGameMod_Click(System::Object^ sender, System::EventArgs^ e)
{
    FolderControl^ fold = gcnew FolderControl();
    fold->path = "game\\" + nameGame + "\\" + textName->Text;
    panelFolders->Controls->Add(fold);
    return System::Void();
}

System::Void Project1::AddMod::butSave_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ stringConection = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=" + "Ресурсы\\Games.accdb" + ";Persist Security Info=False;";
    OleDbConnection^ connection = gcnew OleDbConnection(stringConection);
    try
    {
        connection->Open();
        
        String^ query = "INSERT INTO InfoMod (ModName, ModDict, GameName, ModPathExe) VALUES(@n , @d , @g, @p)";

        OleDbCommand^ commandInsert = gcnew OleDbCommand(query, connection);

        commandInsert->Parameters->AddWithValue("@n", textName->Text);
        commandInsert->Parameters->AddWithValue("@d", textDict->Text);
        commandInsert->Parameters->AddWithValue("@g", nameGame);
        commandInsert->Parameters->AddWithValue("@p", textExe->Text);
        commandInsert->ExecuteNonQuery();
        connection->Close();
        // Создание новой папки для сохранения изображений
        String^ folderPath = "Game\\" + nameGame + "\\" + textName->Text;
        Directory::CreateDirectory(folderPath);

        // Сохранение изображений из PictureBox1
        if (Prew->Image != nullptr)
        {
            String^ imagePath1 = Path::Combine(folderPath, "prew.gif");
            Prew->Image->Save(imagePath1);
        }
        else
        {
            Console::WriteLine("Изображение в PictureBox1 отсутствует.");
        }

        // Сохранение изображений из PictureBox2
        if (Icon->Image != nullptr)
        {
            String^ imagePath2 = Path::Combine(folderPath, "icon.gif");
            Icon->Image->Save(imagePath2);
        }
        else
        {
            Console::WriteLine("Изображение в PictureBox2 отсутствует.");
        }
        butAddGameMod->Enabled = true;
        butDel->Enabled = true;
        MenuStripPrew->Enabled = false;
    }
    catch (Exception^ e)
    {
        int hr = Marshal::GetHRForException(e);
        if (hr == -2147467259) // Код ошибки - дублирования данных
        {
            System::Windows::Forms::MessageBox::Show("Ошибка: Имя мода уже зарезервировано, используйте другое имя");
            return System::Void();
        }
        else
        {
            System::Windows::Forms::MessageBox::Show(e->Message);
            return System::Void();
        }
    }
    delete butSave;
    return System::Void();
}

System::Void Project1::AddMod::изменитьPrewToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (DialogImage->ShowDialog() == System::Windows::Forms::DialogResult::OK)
    {
        Prew->Image = Image::FromFile(DialogImage->FileName);
    }
    return System::Void();
}

System::Void Project1::AddMod::изменитьIconToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (DialogImage->ShowDialog() == System::Windows::Forms::DialogResult::OK)
    {
        Icon->Image = Image::FromFile(DialogImage->FileName);
    }
    return System::Void();
}

System::Void Project1::AddMod::butDel_Click(System::Object^ sender, System::EventArgs^ e)
{
    OleDbConnection^ connection = gcnew OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data Source=" + "Ресурсы\\Games.accdb" + ";Persist Security Info=False;");
    OleDbCommand^ command = gcnew OleDbCommand();

    try
    {
        command->Connection = connection;
        connection->Open();

        // Формируем SQL запрос на удаление записи
        command->CommandText = "UPDATE InfoMod SET Status_ = -1 WHERE ModName = ?";
        command->Parameters->AddWithValue("?", textName->Text);

        // Выполняем команду
        command->ExecuteNonQuery();
    }
    catch (Exception^ ex)
    {
        // Обработка ошибок, например, вывод на консоль или в лог
        MessageBox::Show("Error: " + ex->Message);
    }
    finally
    {
        // Закрываем соединение с базой данных
        if (connection != nullptr && connection->State == ConnectionState::Open)
        {
            connection->Close();
        }
    }
    Application::Restart();
    return System::Void();
}

System::Void Project1::AddMod::butStart_Click(System::Object^ sender, System::EventArgs^ e)
{
    try
    {
        MessageBox::Show("Подождите запуск приложения");
        for each (Control ^ control in this->panelFolders->Controls)
        {
            if (FolderControl^ folderControl = dynamic_cast<FolderControl^>(control))
            {
                Directory::Delete(folderControl->pathCopy, true);
                Directory::CreateDirectory(folderControl->pathCopy);
                CopyDirectory(folderControl->path, folderControl->pathCopy);
            }
        }
    
        System::Diagnostics::Process^ process1 = gcnew Process();
        process1->StartInfo->FileName = textExe->Text;
        process1->StartInfo->WorkingDirectory = Path::GetDirectoryName(textExe->Text);
        process1->Start();
    }
    catch (Exception^ ex)
    {
        MessageBox::Show("Ошибка при старте:" + ex->Message);
    }

    return System::Void();
}

System::Void Project1::AddMod::textExe_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (DialogExe->ShowDialog() == System::Windows::Forms::DialogResult::OK)
    {
        textExe->Text = DialogExe->FileName;
    }
    return System::Void();
}
