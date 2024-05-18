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
    String^ stringConection = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=" + "�������\\Games.accdb" + ";Persist Security Info=False;";
    OleDbConnection^ connection = gcnew OleDbConnection(stringConection);
    try
    {
        connection->Open();
        
        String^ query = "INSERT INTO InfoMod (ModName, ModDict, GameName) VALUES(@n , @d , @g)";

        OleDbCommand^ commandInsert = gcnew OleDbCommand(query, connection);

        commandInsert->Parameters->AddWithValue("@n", textName->Text);
        commandInsert->Parameters->AddWithValue("@d", textDict->Text);
        commandInsert->Parameters->AddWithValue("@g", nameGame);
        commandInsert->ExecuteNonQuery();
        connection->Close();
        // �������� ����� ����� ��� ���������� �����������
        String^ folderPath = "Game\\" + nameGame + "\\" + textName->Text;
        Directory::CreateDirectory(folderPath);

        // ���������� ����������� �� PictureBox1
        if (Prew->Image != nullptr)
        {
            String^ imagePath1 = Path::Combine(folderPath, "prew.gif");
            Prew->Image->Save(imagePath1);
        }
        else
        {
            Console::WriteLine("����������� � PictureBox1 �����������.");
        }

        // ���������� ����������� �� PictureBox2
        if (Icon->Image != nullptr)
        {
            String^ imagePath2 = Path::Combine(folderPath, "icon.gif");
            Icon->Image->Save(imagePath2);
        }
        else
        {
            Console::WriteLine("����������� � PictureBox2 �����������.");
        }
        butAddGameMod->Enabled = true;
        butDel->Enabled = true;
        MenuStripPrew->Enabled = false;
    }
    catch (Exception^ e)
    {
        int hr = Marshal::GetHRForException(e);
        if (hr == -2147467259) // ��� ������ - ������������ ������
        {
            System::Windows::Forms::MessageBox::Show("������: ��� ���� ��� ���������������, ����������� ������ ���");
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

System::Void Project1::AddMod::��������PrewToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (DialogImage->ShowDialog() == System::Windows::Forms::DialogResult::OK)
    {
        Prew->Image = Image::FromFile(DialogImage->FileName);
    }
    return System::Void();
}

System::Void Project1::AddMod::��������IconToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (DialogImage->ShowDialog() == System::Windows::Forms::DialogResult::OK)
    {
        Icon->Image = Image::FromFile(DialogImage->FileName);
    }
    return System::Void();
}

System::Void Project1::AddMod::butDel_Click(System::Object^ sender, System::EventArgs^ e)
{
    OleDbConnection^ connection = gcnew OleDbConnection("Provider=Microsoft.ACE.OLEDB.12.0;Data Source=" + "�������\\Games.accdb" + ";Persist Security Info=False;");
    OleDbCommand^ command = gcnew OleDbCommand();

    try
    {
        command->Connection = connection;
        connection->Open();

        // ��������� SQL ������ �� �������� ������
        command->CommandText = "UPDATE InfoMod SET Status = 1 WHERE ModName = ?";
        command->Parameters->AddWithValue("?", textName->Text);

        // ��������� �������
        command->ExecuteNonQuery();
    }
    catch (Exception^ ex)
    {
        // ��������� ������, ��������, ����� �� ������� ��� � ���
        Console::WriteLine("Error: " + ex->Message);
    }
    finally
    {
        // ��������� ���������� � ����� ������
        if (connection != nullptr && connection->State == ConnectionState::Open)
        {
            connection->Close();
        }
    }
    return System::Void();
}

System::Void Project1::AddMod::butStart_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}