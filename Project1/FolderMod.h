#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Data::OleDb;
using namespace System::IO;

namespace Project1 {
	
	/// <summary>
	/// Сводка для FolderMod
	/// </summary>
	public ref class FolderMod : public System::Windows::Forms::UserControl
	{
	public:
		FolderMod(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			butSave->Visible = false;
			butDel->Visible = false;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~FolderMod()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ butChangeName;
	private: System::Windows::Forms::Button^ butDel;

	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::FolderBrowserDialog^ folderDialog;
	private: System::Windows::Forms::TextBox^ textName;
	private: System::Windows::Forms::Button^ butSave;
	private: System::Windows::Forms::Button^ butPathChange;
	private: System::Windows::Forms::Button^ butCopyFolder;
	private: System::Windows::Forms::Button^ butNo;



	protected:

	protected:




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->butChangeName = (gcnew System::Windows::Forms::Button());
			this->butDel = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->butSave = (gcnew System::Windows::Forms::Button());
			this->butPathChange = (gcnew System::Windows::Forms::Button());
			this->butCopyFolder = (gcnew System::Windows::Forms::Button());
			this->butNo = (gcnew System::Windows::Forms::Button());
			this->folderDialog = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->textName = (gcnew System::Windows::Forms::TextBox());
			this->flowLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// butChangeName
			// 
			this->butChangeName->Location = System::Drawing::Point(3, 3);
			this->butChangeName->Name = L"butChangeName";
			this->butChangeName->Size = System::Drawing::Size(130, 23);
			this->butChangeName->TabIndex = 2;
			this->butChangeName->Text = L"Изменить название";
			this->butChangeName->UseVisualStyleBackColor = true;
			this->butChangeName->Click += gcnew System::EventHandler(this, &FolderMod::butChangeName_Click);
			// 
			// butDel
			// 
			this->butDel->Location = System::Drawing::Point(139, 3);
			this->butDel->Name = L"butDel";
			this->butDel->Size = System::Drawing::Size(96, 23);
			this->butDel->TabIndex = 3;
			this->butDel->Text = L"Удалить";
			this->butDel->UseVisualStyleBackColor = true;
			this->butDel->Click += gcnew System::EventHandler(this, &FolderMod::butDel_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->butChangeName);
			this->flowLayoutPanel1->Controls->Add(this->butDel);
			this->flowLayoutPanel1->Controls->Add(this->butSave);
			this->flowLayoutPanel1->Controls->Add(this->butPathChange);
			this->flowLayoutPanel1->Controls->Add(this->butCopyFolder);
			this->flowLayoutPanel1->Controls->Add(this->butNo);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 36);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(349, 61);
			this->flowLayoutPanel1->TabIndex = 5;
			// 
			// butSave
			// 
			this->butSave->Location = System::Drawing::Point(241, 3);
			this->butSave->Name = L"butSave";
			this->butSave->Size = System::Drawing::Size(96, 23);
			this->butSave->TabIndex = 4;
			this->butSave->Text = L"Сохранить";
			this->butSave->UseVisualStyleBackColor = true;
			this->butSave->Click += gcnew System::EventHandler(this, &FolderMod::butSave_Click);
			// 
			// butPathChange
			// 
			this->butPathChange->Location = System::Drawing::Point(3, 32);
			this->butPathChange->Name = L"butPathChange";
			this->butPathChange->Size = System::Drawing::Size(130, 23);
			this->butPathChange->TabIndex = 5;
			this->butPathChange->Text = L"Указать путь копирования";
			this->butPathChange->UseVisualStyleBackColor = true;
			this->butPathChange->Click += gcnew System::EventHandler(this, &FolderMod::butPathChange_Click);
			// 
			// butCopyFolder
			// 
			this->butCopyFolder->Location = System::Drawing::Point(139, 32);
			this->butCopyFolder->Name = L"butCopyFolder";
			this->butCopyFolder->Size = System::Drawing::Size(126, 23);
			this->butCopyFolder->TabIndex = 6;
			this->butCopyFolder->Text = L"Скопировать папку";
			this->butCopyFolder->UseVisualStyleBackColor = true;
			// 
			// butNo
			// 
			this->butNo->Location = System::Drawing::Point(271, 32);
			this->butNo->Name = L"butNo";
			this->butNo->Size = System::Drawing::Size(75, 21);
			this->butNo->TabIndex = 7;
			this->butNo->Text = L"Отмена";
			this->butNo->UseVisualStyleBackColor = true;
			// 
			// textName
			// 
			this->textName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textName->ForeColor = System::Drawing::Color::Black;
			this->textName->Location = System::Drawing::Point(3, 3);
			this->textName->Name = L"textName";
			this->textName->Size = System::Drawing::Size(342, 30);
			this->textName->TabIndex = 6;
			this->textName->Text = L"Папка перемещения";
			// 
			// FolderMod
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->textName);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Name = L"FolderMod";
			this->Size = System::Drawing::Size(349, 97);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public: String^ ModName = "";
			  String^ GameName = "";
		String^ PathFCopy = "";
		String^ PathFolder = "";
		bool StatusChange = false;

private: System::Void butChangeName_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textName->ReadOnly)
	{
		this->textName->ReadOnly = false;
	}
	else
	{
		this->textName->ReadOnly = true;
	}
	
}

	   void CopyDirectory(String^ sourceDirName, String^ destDirName)
	   {
		   // Получаем содержимое исходной папки
		   array<String^>^ files = Directory::GetFiles(sourceDirName);
		   array<String^>^ dirs = Directory::GetDirectories(sourceDirName);

		   // Если папка назначения не существует, создаем ее
		   if (!Directory::Exists(destDirName))
		   {
			   Directory::CreateDirectory(destDirName);
		   }

		   // Копируем файлы
		   for each (String ^ file in files)
		   {
			   String^ fileName = Path::GetFileName(file);
			   String^ destFile = Path::Combine(destDirName, fileName);
			   File::Copy(file, destFile);
		   }

		   // Рекурсивно копируем подпапки
		   for each (String ^ subdir in dirs)
		   {
			   String^ dirName = Path::GetFileName(subdir);
			   String^ destSubDir = Path::Combine(destDirName, dirName);
			   CopyDirectory(subdir, destSubDir);
		   }
	   }

private: System::Void butDel_Click(System::Object^ sender, System::EventArgs^ e) {
	// Строка подключения к базе данных Access
	String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=" + "Ресурсы\\Games.accdb" + ";Persist Security Info=False;";

	// Создание объекта для подключения к базе данных
	OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

	try {
		// Открытие соединения
		connection->Open();

		// SQL запрос для извлечения данных из таблицы InfoGame
		String^ query = "DELETE FROM FoldersMods WHERE NameFolder = ?";

		// Создание команды для выполнения SQL запроса
		OleDbCommand^ commandCheckExistence = gcnew OleDbCommand(query, connection);
		commandCheckExistence->Parameters->AddWithValue("?", textName->Text);
		commandCheckExistence->ExecuteNonQuery();
		// Закрытие объектов чтения и соединения
		connection->Close();
	}
	catch (Exception^ ex) {
		// Вывод сообщения об ошибке в виде окна сообщения
		MessageBox::Show("Ошибка при выполнении запроса: " + ex->Message, "Ошибка");
	}
	delete this;
}

private: System::Void butSave_Click(System::Object^ sender, System::EventArgs^ e) {
	butSave->Visible = false;
	butChangeName->Visible = false;
	butDel->Visible = true;
	// Строка подключения к базе данных Access
	String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=" + "Ресурсы\\Games.accdb" + ";Persist Security Info=False;";

	// Создание объекта для подключения к базе данных
	OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

	try {
		// Открытие соединения
		connection->Open();

		// Если игра не существует, выполняем запрос на вставку
		String^ queryInsert = "INSERT INTO FoldersMods (PathFolder, NameFolder, ModName) VALUES (?, ?, ?)";
		OleDbCommand^ commandInsert = gcnew OleDbCommand(queryInsert, connection);
		commandInsert->Parameters->AddWithValue("?", PathFolder);
		commandInsert->Parameters->AddWithValue("?", textName->Text);
		commandInsert->Parameters->AddWithValue("?", ModName);
		commandInsert->ExecuteNonQuery();
		connection->Close();
	}
	catch (Exception^ ex) {
		// Вывод сообщения об ошибке в виде окна сообщения
		MessageBox::Show("Ошибка при выполнении запроса: " + ex->Message, "Ошибка");
	}
	this->textName->ReadOnly = true;
}

private: System::Void butPathChange_Click(System::Object^ sender, System::EventArgs^ e) {
	// Показываем диалоговое окно и проверяем результат
	if (folderDialog->ShowDialog() == DialogResult::OK)
	{
		// Получаем выбранный путь
		PathFolder = folderDialog->SelectedPath;
	}
	else
	{
		MessageBox::Show("Выбор пути отменен");
	}
}
};
}
