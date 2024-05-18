#pragma once
#include "AddMod.h"
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
	/// Сводка для IconMod
	/// </summary>
	/// 
	public delegate void SendModName(String^ str);

	public ref class IconMod : public System::Windows::Forms::UserControl
	{
	public:
		event SendModName^ clickIconMod;
		IconMod(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~IconMod()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	public: System::Windows::Forms::PictureBox^ Icon;
	public: System::Windows::Forms::TextBox^ NameMod;





	protected:




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(IconMod::typeid));
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->NameMod = (gcnew System::Windows::Forms::TextBox());
			this->Icon = (gcnew System::Windows::Forms::PictureBox());
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icon))->BeginInit();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->NameMod, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->Icon, 0, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 83.24873F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.75127F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(175, 197);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// NameMod
			// 
			this->NameMod->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->NameMod->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->NameMod->Dock = System::Windows::Forms::DockStyle::Fill;
			this->NameMod->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NameMod->ForeColor = System::Drawing::Color::Silver;
			this->NameMod->Location = System::Drawing::Point(3, 167);
			this->NameMod->Name = L"NameMod";
			this->NameMod->ReadOnly = true;
			this->NameMod->Size = System::Drawing::Size(169, 27);
			this->NameMod->TabIndex = 1;
			this->NameMod->Text = L"Шаблон";
			// 
			// Icon
			// 
			this->Icon->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Icon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Icon.Image")));
			this->Icon->Location = System::Drawing::Point(3, 3);
			this->Icon->Name = L"Icon";
			this->Icon->Size = System::Drawing::Size(169, 158);
			this->Icon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Icon->TabIndex = 0;
			this->Icon->TabStop = false;
			this->Icon->Click += gcnew System::EventHandler(this, &IconMod::Icon_Click);
			// 
			// IconMod
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Transparent;
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"IconMod";
			this->Size = System::Drawing::Size(175, 197);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icon))->EndInit();
			this->ResumeLayout(false);

		}


#pragma endregion
	public:
		String^ gameName;


	private: System::Void Icon_Click(System::Object^ sender, System::EventArgs^ e) {
		AddMod^ mod = gcnew AddMod();
		mod->textName->Text = NameMod->Text;
		try
		{
			mod->Prew->Image = Image::FromFile("Game\\" + gameName + "\\" + NameMod->Text + "\\prewOld.gif");
			mod->Icon->Image = Image::FromFile("Game\\" + gameName + "\\" + NameMod->Text + "\\iconOld.gif");
		}
		catch (Exception^ ex)
		{
			// Вывод сообщения об ошибке в виде окна сообщения
			MessageBox::Show("Ошибка(IconModClick) при выполнении установки картинок: " + ex->Message, "Ошибка");
		}

		// Строка подключения к базе данных Access
		String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=" + "Ресурсы\\Games.accdb" + ";Persist Security Info=False;";

		// Создание объекта для подключения к базе данных
		OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
		try
		{
			// Открытие соединения
			connection->Open();
			// SQL запрос для извлечения данных из таблицы InfoGame
			String^ query = "SELECT ModDict, ModPathExe FROM InfoMod WHERE ModName = ?";

			// Создание команды для выполнения SQL запроса
			OleDbCommand^ command = gcnew OleDbCommand(query, connection);
			command->Parameters->Add(gcnew OleDbParameter("@param1", NameMod->Text));

			// Создание объекта для чтения данных из базы
			OleDbDataReader^ reader = command->ExecuteReader();
			reader->Read();
			mod->textDict->Text = reader->GetString(0);
			mod->textExe->Text = reader->GetString(1);
			mod->nameGame = gameName;
			delete mod->butSave;
			mod->butStart->Enabled = true;
			mod->butAddGameMod->Enabled = true;
			mod->ShowDialog();
		}
		catch (Exception^ ex) {

			// Вывод сообщения об ошибке в виде окна сообщения
			MessageBox::Show("Ошибка(IconModClick) при выполнении запроса: " + ex->Message, "Ошибка");
		}
		connection->Close();
	}
};
}
