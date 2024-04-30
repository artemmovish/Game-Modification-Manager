#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AddMod
	/// </summary>
	public ref class AddMod : public System::Windows::Forms::Form
	{
	public:
		AddMod(void)
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
		~AddMod()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ PanelPrew;
	protected:
	private: System::Windows::Forms::PictureBox^ Prew;
	private: System::Windows::Forms::TableLayoutPanel^ PanelDict;
	private: System::Windows::Forms::TextBox^ textExe;
	private: System::Windows::Forms::TextBox^ textDict;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TextBox^ textName;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Button^ butChange;
	private: System::Windows::Forms::Button^ butSave;
	private: System::Windows::Forms::Button^ butDel;
	private: System::Windows::Forms::Button^ butStart;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddMod::typeid));
			this->PanelPrew = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Prew = (gcnew System::Windows::Forms::PictureBox());
			this->PanelDict = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textExe = (gcnew System::Windows::Forms::TextBox());
			this->textDict = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textName = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->butChange = (gcnew System::Windows::Forms::Button());
			this->butSave = (gcnew System::Windows::Forms::Button());
			this->butDel = (gcnew System::Windows::Forms::Button());
			this->butStart = (gcnew System::Windows::Forms::Button());
			this->PanelPrew->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Prew))->BeginInit();
			this->PanelDict->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// PanelPrew
			// 
			this->PanelPrew->ColumnCount = 1;
			this->PanelPrew->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->PanelPrew->Controls->Add(this->Prew, 0, 0);
			this->PanelPrew->Controls->Add(this->PanelDict, 0, 1);
			this->PanelPrew->Dock = System::Windows::Forms::DockStyle::Left;
			this->PanelPrew->Location = System::Drawing::Point(0, 0);
			this->PanelPrew->Name = L"PanelPrew";
			this->PanelPrew->RowCount = 2;
			this->PanelPrew->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 59.65217F)));
			this->PanelPrew->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 40.34783F)));
			this->PanelPrew->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->PanelPrew->Size = System::Drawing::Size(714, 666);
			this->PanelPrew->TabIndex = 4;
			// 
			// Prew
			// 
			this->Prew->BackColor = System::Drawing::Color::Transparent;
			this->Prew->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Prew->Cursor = System::Windows::Forms::Cursors::PanWest;
			this->Prew->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Prew->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Prew.Image")));
			this->Prew->Location = System::Drawing::Point(3, 3);
			this->Prew->Name = L"Prew";
			this->Prew->Size = System::Drawing::Size(708, 391);
			this->Prew->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Prew->TabIndex = 0;
			this->Prew->TabStop = false;
			// 
			// PanelDict
			// 
			this->PanelDict->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->PanelDict->ColumnCount = 2;
			this->PanelDict->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 73.47517F)));
			this->PanelDict->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 26.52482F)));
			this->PanelDict->Controls->Add(this->textExe, 0, 1);
			this->PanelDict->Controls->Add(this->textDict, 0, 0);
			this->PanelDict->Controls->Add(this->tableLayoutPanel1, 1, 0);
			this->PanelDict->Controls->Add(this->butStart, 1, 1);
			this->PanelDict->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PanelDict->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PanelDict->Location = System::Drawing::Point(3, 400);
			this->PanelDict->Name = L"PanelDict";
			this->PanelDict->RowCount = 2;
			this->PanelDict->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 78.9916F)));
			this->PanelDict->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 21.0084F)));
			this->PanelDict->Size = System::Drawing::Size(708, 263);
			this->PanelDict->TabIndex = 1;
			// 
			// textExe
			// 
			this->textExe->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->textExe->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textExe->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textExe->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textExe->ForeColor = System::Drawing::Color::Silver;
			this->textExe->Location = System::Drawing::Point(4, 210);
			this->textExe->Multiline = true;
			this->textExe->Name = L"textExe";
			this->textExe->ReadOnly = true;
			this->textExe->Size = System::Drawing::Size(512, 49);
			this->textExe->TabIndex = 1;
			this->textExe->Text = L"ПУТЬ К .EXE";
			// 
			// textDict
			// 
			this->textDict->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->textDict->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textDict->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textDict->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textDict->ForeColor = System::Drawing::Color::Silver;
			this->textDict->Location = System::Drawing::Point(4, 4);
			this->textDict->Multiline = true;
			this->textDict->Name = L"textDict";
			this->textDict->ReadOnly = true;
			this->textDict->Size = System::Drawing::Size(512, 199);
			this->textDict->TabIndex = 0;
			this->textDict->Text = L"ОПИСАНИЕ";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->textName, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 1);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(523, 4);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 61.79775F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 38.20225F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(181, 199);
			this->tableLayoutPanel1->TabIndex = 2;
			// 
			// textName
			// 
			this->textName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->textName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textName->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textName->ForeColor = System::Drawing::Color::Silver;
			this->textName->Location = System::Drawing::Point(3, 3);
			this->textName->Multiline = true;
			this->textName->Name = L"textName";
			this->textName->ReadOnly = true;
			this->textName->Size = System::Drawing::Size(175, 116);
			this->textName->TabIndex = 1;
			this->textName->Text = L"НАЗВАНИЕ ИГРЫ";
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 3;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33176F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.3349F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				33.33333F)));
			this->tableLayoutPanel2->Controls->Add(this->butChange, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->butSave, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->butDel, 1, 0);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 125);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(175, 71);
			this->tableLayoutPanel2->TabIndex = 2;
			// 
			// butChange
			// 
			this->butChange->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butChange.BackgroundImage")));
			this->butChange->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->butChange->Dock = System::Windows::Forms::DockStyle::Fill;
			this->butChange->Enabled = false;
			this->butChange->FlatAppearance->BorderSize = 0;
			this->butChange->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->butChange->Location = System::Drawing::Point(61, 3);
			this->butChange->Name = L"butChange";
			this->butChange->Size = System::Drawing::Size(52, 65);
			this->butChange->TabIndex = 14;
			this->butChange->UseVisualStyleBackColor = true;
			// 
			// butSave
			// 
			this->butSave->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butSave.BackgroundImage")));
			this->butSave->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->butSave->Dock = System::Windows::Forms::DockStyle::Fill;
			this->butSave->Enabled = false;
			this->butSave->FlatAppearance->BorderSize = 0;
			this->butSave->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->butSave->Location = System::Drawing::Point(3, 3);
			this->butSave->Name = L"butSave";
			this->butSave->Size = System::Drawing::Size(52, 65);
			this->butSave->TabIndex = 12;
			this->butSave->UseVisualStyleBackColor = true;
			// 
			// butDel
			// 
			this->butDel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butDel.BackgroundImage")));
			this->butDel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->butDel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->butDel->Enabled = false;
			this->butDel->FlatAppearance->BorderSize = 0;
			this->butDel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->butDel->Location = System::Drawing::Point(119, 3);
			this->butDel->Name = L"butDel";
			this->butDel->Size = System::Drawing::Size(53, 65);
			this->butDel->TabIndex = 13;
			this->butDel->UseVisualStyleBackColor = true;
			// 
			// butStart
			// 
			this->butStart->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->butStart->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butStart.BackgroundImage")));
			this->butStart->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->butStart->Enabled = false;
			this->butStart->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(33)));
			this->butStart->FlatAppearance->BorderSize = 0;
			this->butStart->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->butStart->ForeColor = System::Drawing::Color::Silver;
			this->butStart->Location = System::Drawing::Point(526, 217);
			this->butStart->Name = L"butStart";
			this->butStart->Size = System::Drawing::Size(175, 35);
			this->butStart->TabIndex = 3;
			this->butStart->UseVisualStyleBackColor = true;
			// 
			// AddMod
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->ClientSize = System::Drawing::Size(1114, 666);
			this->Controls->Add(this->PanelPrew);
			this->Name = L"AddMod";
			this->Text = L"AddMod";
			this->PanelPrew->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Prew))->EndInit();
			this->PanelDict->ResumeLayout(false);
			this->PanelDict->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
