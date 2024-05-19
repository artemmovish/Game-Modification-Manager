#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;
using namespace System::Diagnostics;

namespace Project1 {

	/// <summary>
	/// Сводка для FolderControl
	/// </summary>
	public ref class FolderControl : public System::Windows::Forms::UserControl
	{
	public:
		FolderControl(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~FolderControl()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Label^ name;
	private: System::Windows::Forms::TextBox^ nameChange;


	private: System::Windows::Forms::Button^ butRename;
	private: System::Windows::Forms::Button^ butPath;
	private: System::Windows::Forms::Button^ butOpen;
	private: System::Windows::Forms::Button^ butDel;
	private: System::Windows::Forms::Button^ butSave;
	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;




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
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->name = (gcnew System::Windows::Forms::Label());
			this->nameChange = (gcnew System::Windows::Forms::TextBox());
			this->butRename = (gcnew System::Windows::Forms::Button());
			this->butPath = (gcnew System::Windows::Forms::Button());
			this->butOpen = (gcnew System::Windows::Forms::Button());
			this->butDel = (gcnew System::Windows::Forms::Button());
			this->butSave = (gcnew System::Windows::Forms::Button());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->flowLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->name);
			this->flowLayoutPanel1->Controls->Add(this->nameChange);
			this->flowLayoutPanel1->Controls->Add(this->butRename);
			this->flowLayoutPanel1->Controls->Add(this->butPath);
			this->flowLayoutPanel1->Controls->Add(this->butOpen);
			this->flowLayoutPanel1->Controls->Add(this->butDel);
			this->flowLayoutPanel1->Controls->Add(this->butSave);
			this->flowLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(355, 88);
			this->flowLayoutPanel1->TabIndex = 0;
			// 
			// name
			// 
			this->name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->name->ForeColor = System::Drawing::Color::Silver;
			this->name->Location = System::Drawing::Point(3, 0);
			this->name->Name = L"name";
			this->name->Size = System::Drawing::Size(360, 23);
			this->name->TabIndex = 0;
			this->name->Text = L"Название раздела";
			// 
			// nameChange
			// 
			this->nameChange->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nameChange->Location = System::Drawing::Point(3, 26);
			this->nameChange->MaxLength = 25;
			this->nameChange->Name = L"nameChange";
			this->nameChange->Size = System::Drawing::Size(348, 30);
			this->nameChange->TabIndex = 1;
			this->nameChange->Visible = false;
			// 
			// butRename
			// 
			this->butRename->Location = System::Drawing::Point(3, 62);
			this->butRename->Name = L"butRename";
			this->butRename->Size = System::Drawing::Size(117, 23);
			this->butRename->TabIndex = 2;
			this->butRename->Text = L"Изменить название";
			this->butRename->UseVisualStyleBackColor = true;
			this->butRename->Click += gcnew System::EventHandler(this, &FolderControl::butRename_Click);
			// 
			// butPath
			// 
			this->butPath->Location = System::Drawing::Point(126, 62);
			this->butPath->Name = L"butPath";
			this->butPath->Size = System::Drawing::Size(94, 23);
			this->butPath->TabIndex = 3;
			this->butPath->Text = L"Указать путь";
			this->butPath->UseVisualStyleBackColor = true;
			this->butPath->Click += gcnew System::EventHandler(this, &FolderControl::butPath_Click);
			// 
			// butOpen
			// 
			this->butOpen->Location = System::Drawing::Point(226, 62);
			this->butOpen->Name = L"butOpen";
			this->butOpen->Size = System::Drawing::Size(111, 23);
			this->butOpen->TabIndex = 4;
			this->butOpen->Text = L"Открыть раздел";
			this->butOpen->UseVisualStyleBackColor = true;
			this->butOpen->Visible = false;
			this->butOpen->Click += gcnew System::EventHandler(this, &FolderControl::butOpen_Click);
			// 
			// butDel
			// 
			this->butDel->Location = System::Drawing::Point(3, 91);
			this->butDel->Name = L"butDel";
			this->butDel->Size = System::Drawing::Size(75, 23);
			this->butDel->TabIndex = 5;
			this->butDel->Text = L"Удалить";
			this->butDel->UseVisualStyleBackColor = true;
			this->butDel->Visible = false;
			this->butDel->Click += gcnew System::EventHandler(this, &FolderControl::butDel_Click);
			// 
			// butSave
			// 
			this->butSave->Location = System::Drawing::Point(84, 91);
			this->butSave->Name = L"butSave";
			this->butSave->Size = System::Drawing::Size(75, 23);
			this->butSave->TabIndex = 6;
			this->butSave->Text = L"Сохранить";
			this->butSave->UseVisualStyleBackColor = true;
			this->butSave->Click += gcnew System::EventHandler(this, &FolderControl::butSave_Click);
			// 
			// FolderControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->flowLayoutPanel1);
			this->Name = L"FolderControl";
			this->Size = System::Drawing::Size(355, 88);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		public: String^ path;
			  String^ pathCopy;
			  cli::array<int>^ status = gcnew cli::array<int>(2);

			  void CreateTxt(String^ content, String^ filePath)
			  {
				  try
				  {
					  // Создаем StreamWriter для записи в файл
					  StreamWriter^ writer = gcnew StreamWriter(filePath);

					  // Записываем данные в файл
					  writer->WriteLine(content);

					  // Закрываем StreamWriter
					  writer->Close();

					  MessageBox::Show("Раздел созданн, откройте раздел и \n переместите нужные моды");
				  }
				  catch (Exception^ ex)
				  {
					  MessageBox::Show("Произошла ошибка: {0}", ex->Message);
				  }
			  }

			  String^ GetLastFolder(String^ folderPath)
			  {
				  try
				  {
					  // Удаляем завершающий символ разделителя пути, если он существует
					  if (folderPath->EndsWith("\\") || folderPath->EndsWith("/"))
					  {
						  folderPath = folderPath->Substring(0, folderPath->Length - 1);
					  }

					  // Получаем имя последней папки в пути
					  String^ lastFolderName = Path::GetFileName(folderPath);

					  return lastFolderName;
				  }
				  catch (Exception^ ex)
				  {
					  Console::WriteLine("Произошла ошибка: {0}", ex->Message);
					  return nullptr;
				  }
			  }

			  void Load(String^ n)
			  {
				  path = n;
				  String^ pathFile = path + "\\pathCopy.txt";
				  
				  if (File::Exists(pathFile))
				  {
					  // Создаем StreamReader для чтения файла
					  StreamReader^ reader = gcnew StreamReader(pathFile);
					  // Читаем все содержимое файла
					  pathCopy = reader->ReadToEnd();
					  pathCopy = pathCopy->Substring(0, pathCopy->Length - 2);
					  // Закрываем StreamReader
					  reader->Close();

					  name->Text = GetLastFolder(path);
					  butRename->Visible = false;
					  butPath->Visible = false;
					  butSave->Visible = false;
					  butOpen->Visible = true;
					  butDel->Visible = true;

				  }
				  else
				  {
					  MessageBox::Show("Файл не существует(FolderControl->Load): {0}");
				  }
			  }

	private: System::Void butRename_Click(System::Object^ sender, System::EventArgs^ e) {
		if (name->Visible)
		{
			name->Visible = false;
			nameChange->Visible = true;
			butRename->Text = "Сохранить название";
			status[0] = 0;
		}
		else
		{
			if (nameChange->Text != "" && nameChange->Text != " ")
			{
				name->Text = nameChange->Text;
				name->Visible = true;
				nameChange->Visible = false;
				butRename->Text = "Изменить название";
				status[0] = 1;
			}
			else
			{
				MessageBox::Show("Измените название");
			}
		}
	}
private: System::Void butPath_Click(System::Object^ sender, System::EventArgs^ e) {
	if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		status[1] = 1;
		pathCopy = folderBrowserDialog1->SelectedPath;
	}
	else
	{
		status[1] = 0;
		MessageBox::Show("No folder selected.");
	}
}
private: System::Void butSave_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!status[0])
	{
		MessageBox::Show("Укажите название раздела");
	}
	else if (!status[1])
	{
		MessageBox::Show("Укажите путь копирования");
	}
	else
	{
		butRename->Visible = false;
		butPath->Visible = false;
		butSave->Visible = false;
		butOpen->Visible = true;
		butDel->Visible = true;
		path += "\\" + name->Text;
		Directory::CreateDirectory(path);
		CreateTxt(pathCopy, path + "\\pathCopy.txt");
	}
}
private: System::Void butOpen_Click(System::Object^ sender, System::EventArgs^ e) {
	// Создайте новый процесс, который откроет проводник с указанной папкой
	Process^ explorerProcess = gcnew Process();
	explorerProcess->StartInfo->FileName = "explorer.exe";
	explorerProcess->StartInfo->Arguments = path;
	explorerProcess->Start();
}
private: System::Void butDel_Click(System::Object^ sender, System::EventArgs^ e) {
	Directory::Delete(path, true);
	delete this;
}
};
}
