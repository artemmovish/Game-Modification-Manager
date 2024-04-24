#pragma once
#include "ControlPanel.h"
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Launcher
	/// </summary>
	public ref class Launcher : public System::Windows::Forms::Form
	{
	public:
		Launcher(void)
		{
			InitializeComponent();
			panelGameMod->RightToLeft = System::Windows::Forms::RightToLeft::Yes;

			ControlPanel^ controlPanel = gcnew ControlPanel();
			controlPanel->Anchor = static_cast<AnchorStyles>(AnchorStyles::None);
			panelManegement->Controls->Add(controlPanel, 1, 0);
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Launcher()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^ panelGame;
	protected:
	protected:
	private: System::Windows::Forms::FlowLayoutPanel^ panelGameMod;
	private: System::Windows::Forms::TableLayoutPanel^ PanelPrew;
	private: System::Windows::Forms::TableLayoutPanel^ PanelDict;
	private: System::Windows::Forms::TextBox^ textDict;
	private: System::Windows::Forms::TableLayoutPanel^ panelManegement;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::TextBox^ textExe;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TextBox^ textName;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Launcher::typeid));
			this->panelGame = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->panelGameMod = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->PanelPrew = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->PanelDict = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textExe = (gcnew System::Windows::Forms::TextBox());
			this->textDict = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textName = (gcnew System::Windows::Forms::TextBox());
			this->panelManegement = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->panelGame->SuspendLayout();
			this->panelGameMod->SuspendLayout();
			this->PanelPrew->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->PanelDict->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelGame
			// 
			this->panelGame->AutoScroll = true;
			this->panelGame->Controls->Add(this->button10);
			this->panelGame->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelGame->Location = System::Drawing::Point(0, 0);
			this->panelGame->MinimumSize = System::Drawing::Size(200, 600);
			this->panelGame->Name = L"panelGame";
			this->panelGame->Size = System::Drawing::Size(200, 600);
			this->panelGame->TabIndex = 1;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(23)), static_cast<System::Int32>(static_cast<System::Byte>(11)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->ForeColor = System::Drawing::Color::Silver;
			this->button10->Location = System::Drawing::Point(3, 3);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(170, 170);
			this->button10->TabIndex = 4;
			this->button10->Text = L"button10";
			this->button10->UseVisualStyleBackColor = false;
			// 
			// panelGameMod
			// 
			this->panelGameMod->AutoScroll = true;
			this->panelGameMod->Controls->Add(this->button9);
			this->panelGameMod->Dock = System::Windows::Forms::DockStyle::Right;
			this->panelGameMod->FlowDirection = System::Windows::Forms::FlowDirection::RightToLeft;
			this->panelGameMod->Location = System::Drawing::Point(914, 0);
			this->panelGameMod->Name = L"panelGameMod";
			this->panelGameMod->Size = System::Drawing::Size(200, 600);
			this->panelGameMod->TabIndex = 2;
			// 
			// button9
			// 
			this->button9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(27, 3);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(170, 170);
			this->button9->TabIndex = 5;
			this->button9->Text = L"button9";
			this->button9->UseVisualStyleBackColor = false;
			// 
			// PanelPrew
			// 
			this->PanelPrew->ColumnCount = 1;
			this->PanelPrew->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->PanelPrew->Controls->Add(this->pictureBox1, 0, 0);
			this->PanelPrew->Controls->Add(this->PanelDict, 0, 1);
			this->PanelPrew->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PanelPrew->Location = System::Drawing::Point(200, 0);
			this->PanelPrew->Name = L"PanelPrew";
			this->PanelPrew->RowCount = 2;
			this->PanelPrew->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 59.65217F)));
			this->PanelPrew->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 40.34783F)));
			this->PanelPrew->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->PanelPrew->Size = System::Drawing::Size(714, 600);
			this->PanelPrew->TabIndex = 3;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(708, 351);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
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
			this->PanelDict->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PanelDict->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->PanelDict->Location = System::Drawing::Point(3, 360);
			this->PanelDict->Name = L"PanelDict";
			this->PanelDict->RowCount = 2;
			this->PanelDict->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 78.9916F)));
			this->PanelDict->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 21.0084F)));
			this->PanelDict->Size = System::Drawing::Size(708, 237);
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
			this->textExe->Location = System::Drawing::Point(4, 189);
			this->textExe->Multiline = true;
			this->textExe->Name = L"textExe";
			this->textExe->ReadOnly = true;
			this->textExe->Size = System::Drawing::Size(512, 44);
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
			this->textDict->Size = System::Drawing::Size(512, 178);
			this->textDict->TabIndex = 0;
			this->textDict->Text = L"ОПИСАНИЕ";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->textName, 0, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(523, 4);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 47.51381F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 52.48619F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(181, 178);
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
			this->textName->Size = System::Drawing::Size(175, 78);
			this->textName->TabIndex = 1;
			this->textName->Text = L"НАЗВАНИЕ ИГРЫ";
			// 
			// panelManegement
			// 
			this->panelManegement->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panelManegement->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->panelManegement->ColumnCount = 3;
			this->panelManegement->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				31.25F)));
			this->panelManegement->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				37.5F)));
			this->panelManegement->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				31.25F)));
			this->panelManegement->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panelManegement->Location = System::Drawing::Point(0, 600);
			this->panelManegement->Name = L"panelManegement";
			this->panelManegement->RowCount = 1;
			this->panelManegement->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->panelManegement->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 65)));
			this->panelManegement->Size = System::Drawing::Size(1114, 66);
			this->panelManegement->TabIndex = 4;
			// 
			// Launcher
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->ClientSize = System::Drawing::Size(1114, 666);
			this->Controls->Add(this->PanelPrew);
			this->Controls->Add(this->panelGameMod);
			this->Controls->Add(this->panelGame);
			this->Controls->Add(this->panelManegement);
			this->Name = L"Launcher";
			this->Text = L"Launcher";
			this->panelGame->ResumeLayout(false);
			this->panelGameMod->ResumeLayout(false);
			this->PanelPrew->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->PanelDict->ResumeLayout(false);
			this->PanelDict->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion





};
}
