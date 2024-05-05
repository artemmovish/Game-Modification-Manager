#pragma once
#include "ControlPanel.h"
#include <vector>
#include <cliext/list>
#include "IconGame.h"
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::Data::OleDb;
	using namespace System::IO;
	/// <summary>
	/// Сводка для Launcher
	/// </summary>
	public ref class Launcher : public System::Windows::Forms::Form
	{
	public:
		Launcher(void)
		{
			InitializeComponent();
			//
			// Scroll panelGameMod
			//
			panelGameMod->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			//
			// ControlPanel
			//
			ControlPanel^ controlPanel = gcnew ControlPanel();
			controlPanel->Anchor = static_cast<AnchorStyles>(AnchorStyles::None);
			controlPanel->clickbutImageMinus += gcnew EventHandler(this, &Launcher::click_butImageMinus);
			controlPanel->clickbutImagePlus += gcnew EventHandler(this, &Launcher::click_butImagePlus);
			panelManegement->Controls->Add(controlPanel, 1, 0);
			//
			// MenuStripImage
			//
			MenuStripPrew->Enabled = false;
			//
			// Загрузка игр
			//
			LoadGame();
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



	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::TextBox^ textName;
	private: System::Windows::Forms::PictureBox^ Prew;

	private: System::Windows::Forms::Button^ butStart;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Button^ butDel;


	private: System::Windows::Forms::Button^ butSave;



	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::Button^ butAddGame;

	private: System::Windows::Forms::Button^ butAddGameMod;
	private: System::Windows::Forms::ContextMenuStrip^ MenuStripPrew;




	private: System::Windows::Forms::OpenFileDialog^ DialogExe;
	private: System::Windows::Forms::OpenFileDialog^ DialogImage;
	private: System::Windows::Forms::Button^ butChange;
	private: System::Windows::Forms::ToolStripMenuItem^ изменитьPrewToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ изменитьIconToolStripMenuItem;
	private: System::Diagnostics::Process^ process1;
	private: System::Windows::Forms::TextBox^ textExe;

	private: System::ComponentModel::IContainer^ components;
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Launcher::typeid));
			this->panelGame = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panelGameMod = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->PanelPrew = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Prew = (gcnew System::Windows::Forms::PictureBox());
			this->MenuStripPrew = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->изменитьPrewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->изменитьIconToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->panelManegement = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->butAddGame = (gcnew System::Windows::Forms::Button());
			this->butAddGameMod = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->DialogExe = (gcnew System::Windows::Forms::OpenFileDialog());
			this->DialogImage = (gcnew System::Windows::Forms::OpenFileDialog());
			this->process1 = (gcnew System::Diagnostics::Process());
			this->PanelPrew->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Prew))->BeginInit();
			this->MenuStripPrew->SuspendLayout();
			this->PanelDict->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->panelManegement->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelGame
			// 
			this->panelGame->AutoScroll = true;
			this->panelGame->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelGame->Location = System::Drawing::Point(0, 0);
			this->panelGame->Name = L"panelGame";
			this->panelGame->Size = System::Drawing::Size(200, 600);
			this->panelGame->TabIndex = 1;
			// 
			// panelGameMod
			// 
			this->panelGameMod->AutoScroll = true;
			this->panelGameMod->Dock = System::Windows::Forms::DockStyle::Right;
			this->panelGameMod->FlowDirection = System::Windows::Forms::FlowDirection::RightToLeft;
			this->panelGameMod->Location = System::Drawing::Point(914, 0);
			this->panelGameMod->Name = L"panelGameMod";
			this->panelGameMod->Size = System::Drawing::Size(200, 600);
			this->panelGameMod->TabIndex = 2;
			// 
			// PanelPrew
			// 
			this->PanelPrew->ColumnCount = 1;
			this->PanelPrew->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->PanelPrew->Controls->Add(this->Prew, 0, 0);
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
			// Prew
			// 
			this->Prew->BackColor = System::Drawing::Color::Transparent;
			this->Prew->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Prew->ContextMenuStrip = this->MenuStripPrew;
			this->Prew->Cursor = System::Windows::Forms::Cursors::PanWest;
			this->Prew->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Prew->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Prew.Image")));
			this->Prew->Location = System::Drawing::Point(3, 3);
			this->Prew->Name = L"Prew";
			this->Prew->Size = System::Drawing::Size(708, 351);
			this->Prew->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Prew->TabIndex = 0;
			this->Prew->TabStop = false;
			// 
			// MenuStripPrew
			// 
			this->MenuStripPrew->BackColor = System::Drawing::Color::DimGray;
			this->MenuStripPrew->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->изменитьPrewToolStripMenuItem,
					this->изменитьIconToolStripMenuItem
			});
			this->MenuStripPrew->Name = L"contextMenuStrip1";
			this->MenuStripPrew->ShowImageMargin = false;
			this->MenuStripPrew->Size = System::Drawing::Size(133, 48);
			// 
			// изменитьPrewToolStripMenuItem
			// 
			this->изменитьPrewToolStripMenuItem->Name = L"изменитьPrewToolStripMenuItem";
			this->изменитьPrewToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->изменитьPrewToolStripMenuItem->Text = L"Изменить Prew";
			this->изменитьPrewToolStripMenuItem->Click += gcnew System::EventHandler(this, &Launcher::изменитьPrewToolStripMenuItem_Click);
			// 
			// изменитьIconToolStripMenuItem
			// 
			this->изменитьIconToolStripMenuItem->Name = L"изменитьIconToolStripMenuItem";
			this->изменитьIconToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->изменитьIconToolStripMenuItem->Text = L"Изменить Icon";
			this->изменитьIconToolStripMenuItem->Click += gcnew System::EventHandler(this, &Launcher::изменитьIconToolStripMenuItem_Click);
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
			this->textExe->Click += gcnew System::EventHandler(this, &Launcher::textExe_Click);
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
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 1);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(523, 4);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 61.79775F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 38.20225F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
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
			this->textName->Size = System::Drawing::Size(175, 103);
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
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 112);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(175, 63);
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
			this->butChange->Size = System::Drawing::Size(52, 57);
			this->butChange->TabIndex = 14;
			this->toolTip1->SetToolTip(this->butChange, L"Изменить");
			this->butChange->UseVisualStyleBackColor = true;
			this->butChange->Click += gcnew System::EventHandler(this, &Launcher::butChange_Click);
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
			this->butSave->Size = System::Drawing::Size(52, 57);
			this->butSave->TabIndex = 12;
			this->toolTip1->SetToolTip(this->butSave, L"Сохранить");
			this->butSave->UseVisualStyleBackColor = true;
			this->butSave->Click += gcnew System::EventHandler(this, &Launcher::butSave_Click);
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
			this->butDel->Size = System::Drawing::Size(53, 57);
			this->butDel->TabIndex = 13;
			this->toolTip1->SetToolTip(this->butDel, L"Удалить");
			this->butDel->UseVisualStyleBackColor = true;
			this->butDel->Click += gcnew System::EventHandler(this, &Launcher::butDel_Click);
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
			this->butStart->Location = System::Drawing::Point(526, 193);
			this->butStart->Name = L"butStart";
			this->butStart->Size = System::Drawing::Size(175, 35);
			this->butStart->TabIndex = 3;
			this->butStart->UseVisualStyleBackColor = true;
			this->butStart->Click += gcnew System::EventHandler(this, &Launcher::butStart_Click);
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
			this->panelManegement->Controls->Add(this->butAddGame, 0, 0);
			this->panelManegement->Controls->Add(this->butAddGameMod, 2, 0);
			this->panelManegement->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panelManegement->Location = System::Drawing::Point(0, 600);
			this->panelManegement->Name = L"panelManegement";
			this->panelManegement->RowCount = 1;
			this->panelManegement->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->panelManegement->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 65)));
			this->panelManegement->Size = System::Drawing::Size(1114, 66);
			this->panelManegement->TabIndex = 4;
			// 
			// butAddGame
			// 
			this->butAddGame->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->butAddGame->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butAddGame.BackgroundImage")));
			this->butAddGame->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->butAddGame->FlatAppearance->BorderSize = 0;
			this->butAddGame->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->butAddGame->Location = System::Drawing::Point(9, 8);
			this->butAddGame->Name = L"butAddGame";
			this->butAddGame->Size = System::Drawing::Size(330, 50);
			this->butAddGame->TabIndex = 0;
			this->butAddGame->UseVisualStyleBackColor = true;
			this->butAddGame->Click += gcnew System::EventHandler(this, &Launcher::butAddGame_Click);
			// 
			// butAddGameMod
			// 
			this->butAddGameMod->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->butAddGameMod->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butAddGameMod.BackgroundImage")));
			this->butAddGameMod->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->butAddGameMod->FlatAppearance->BorderSize = 0;
			this->butAddGameMod->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->butAddGameMod->Location = System::Drawing::Point(774, 8);
			this->butAddGameMod->Name = L"butAddGameMod";
			this->butAddGameMod->Size = System::Drawing::Size(330, 50);
			this->butAddGameMod->TabIndex = 1;
			this->butAddGameMod->UseVisualStyleBackColor = true;
			this->butAddGameMod->Click += gcnew System::EventHandler(this, &Launcher::butAddGameMod_Click);
			// 
			// DialogExe
			// 
			this->DialogExe->Filter = L"\"Исполняемые файлы и ярлыки (*.exe; *.lnk)|*.exe;*.lnk|Все файлы (*.*)|*.*\";";
			// 
			// DialogImage
			// 
			this->DialogImage->Filter = L"\"Изображения (*.jpg; *.png; *.gif)|*.jpg;*.png;*.gif|Все файлы (*.*)|*.*\";";
			// 
			// process1
			// 
			this->process1->StartInfo->Domain = L"";
			this->process1->StartInfo->FileName = L"\"C:\\Users\\aorus\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\MediaGet.ln"
				L"k\"";
			this->process1->StartInfo->LoadUserProfile = false;
			this->process1->StartInfo->Password = nullptr;
			this->process1->StartInfo->StandardErrorEncoding = nullptr;
			this->process1->StartInfo->StandardOutputEncoding = nullptr;
			this->process1->StartInfo->UserName = L"";
			this->process1->SynchronizingObject = this;
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
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(1130, 705);
			this->Name = L"Launcher";
			this->Text = L"Launcher";
			this->PanelPrew->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Prew))->EndInit();
			this->MenuStripPrew->ResumeLayout(false);
			this->PanelDict->ResumeLayout(false);
			this->PanelDict->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->panelManegement->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		bool StatusChange = false; 
		bool StatusDel;
		String^ OldName;

IconGame^ SearchGame(String^ name)
{
	IconGame^ gameChange = nullptr;
	for each (IconGame ^ control in panelGame->Controls)
	{
		if (control->NameGame->Text == name)
		{
			gameChange = control;
			break; // Нашли элемент, можно выйти из цикла
		}
	}
	return gameChange;
}

void activateButton(bool activ, int index)
		{
			if (index == 0)
			{
				butSave->Enabled = activ;
				butChange->Enabled = activ;
				butDel->Enabled = activ;
				butStart->Enabled = activ;
			}
			else if (index == 1) { butSave->Enabled = activ; }
			else if (index == 2) { butChange->Enabled = activ; }
			else if (index == 3) { butDel->Enabled = activ; }
			else if (index == 4) { butStart->Enabled = activ; }
			else { MessageBox::Show("Нет индекса для режима"); }
		}
			
void GetData(String^ gameName) {
			  // Строка подключения к базе данных Access
			  String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=" + "Ресурсы\\Games.accdb" + ";Persist Security Info=False;";

			  // Создание объекта для подключения к базе данных
			  OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

			  try {
				  // Открытие соединения
				  connection->Open();

				  // SQL запрос для извлечения данных из таблицы InfoGame
				  String^ query = "SELECT GameDict, GamePathExe FROM InfoGame WHERE GameName = ?";

				  // Создание команды с параметром
				  OleDbCommand^ command = gcnew OleDbCommand(query, connection);
				  command->Parameters->AddWithValue("@GameName", gameName);

				  // Выполнение запроса и получение результата
				  OleDbDataReader^ reader = command->ExecuteReader();

				  // Перебор результатов запроса
				  while (reader->Read()) {
					  // Получение данных из каждой строки результата
					  textDict->Text = reader->GetString(0);
					  textExe->Text =  reader->GetString(1);
					  textName->Text = gameName;
				  }

				  // Закрытие ридера
				  reader->Close();
			  }
			  catch (Exception^ e) {
				  // Обработка исключений
				  MessageBox::Show("Ошибка: " + e->Message, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			  }
			  finally {
				  // Закрытие соединения, даже если произошла ошибка
				  if (connection->State == ConnectionState::Open) {
					  connection->Close();
				  }
			  }
		  }

void LoadGame()
{
	// Строка подключения к базе данных Access
	String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=" + "Ресурсы\\Games.accdb" + ";Persist Security Info=False;";

	// Создание объекта для подключения к базе данных
	OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

	try {
		// Открытие соединения
		connection->Open();

		// Удаление записей со статусом -1
		String^ deleteQuery = "DELETE FROM InfoGame WHERE Status_ = -1";
		OleDbCommand^ deleteCommand = gcnew OleDbCommand(deleteQuery, connection);
		deleteCommand->ExecuteNonQuery();

		// SQL запрос для извлечения данных из таблицы InfoGame
		String^ query = "SELECT GameName, Status_, OldName FROM InfoGame";
		// Создание команды для выполнения SQL запроса
		OleDbCommand^ command = gcnew OleDbCommand(query, connection);

		// Создание объекта для чтения данных из базы
		OleDbDataReader^ reader = command->ExecuteReader();

		// Перебор результатов запроса
		while (reader->Read()) {
			// Ваш существующий код обработки данных
			if (reader->GetInt32(1) == 0)
			{
				if (reader->GetString(0) != "Шаблон")
				{
					String^ n = reader->GetString(0);
					String^ o = reader->GetString(2);
					if (n != o)
					{
						// Укажите путь к каталогу, который вы хотите переименовать
						String^ oldDirectoryName = "Game\\" + reader->GetString(2);
						// Укажите новое имя для каталога
						String^ newDirectoryName = "Game\\" + reader->GetString(0);
						try
						{
							// Проверяем, существует ли исходный каталог
							if (Directory::Exists(oldDirectoryName))
							{
								// Переименовываем каталог
								Directory::Move(oldDirectoryName, newDirectoryName);
								Console::WriteLine("Каталог успешно переименован.");
							}
						}
						catch (Exception^ e)
						{
							//MessageBox::Show("Ошибка при переименовании каталога: " + e->Message);
						}
					}
					String^ pathGame = "Game\\" + reader->GetString(0) + "\\";
					try {
						// Копируем файл prew.gif
						if (File::Exists(pathGame + "prew.gif")) {
							File::Copy(pathGame + "prew.gif", pathGame + "prewOld.gif", true); // Перезаписываем существующую копию
						}
						else {
							File::Copy(pathGame + "prew.gif", pathGame + "prewOld.gif");
						}

						// Копируем файл icon.gif
						if (File::Exists(pathGame + "icon.gif")) {
							File::Copy(pathGame + "icon.gif", pathGame + "iconOld.gif", true); // Перезаписываем существующую копию
						}
						else {
							File::Copy(pathGame + "icon.gif", pathGame + "iconOld.gif");
						}
					}
					catch (IOException^ e) {
						MessageBox::Show("Ошибка при копировании файла: " + e->Message);
					}
					IconGame^ game = gcnew IconGame();
					game->LoadGame(reader->GetString(0)); // Название игры
					game->clickIconGame += gcnew SendGameName(this, &Launcher::click_IconGame);
					panelGame->Controls->Add(game);
				}
			}
			else
			{

			}
		}

		// Закрытие объектов чтения и соединения
		reader->Close();
		connection->Close();
	}
	catch (Exception^ ex) {
		// Вывод сообщения об ошибке в виде окна сообщения
		MessageBox::Show("Ошибка при выполнении запроса: " + ex->Message, "Ошибка");
	}
}

void SaveImage()
{	
	//Создание папки с игрой
	String^ pathGame = "Game\\" + textName->Text;
	Directory::CreateDirectory(pathGame);

	// Проверяем, есть ли изображение в pictureBox
	if (Prew->Image != nullptr)
	{
		// Получаем изображение из pictureBox
		Image^ image = Prew->Image;

		// Генерируем уникальное имя файла
		String^ fileName = pathGame + "\\prew.gif";

		// Получаем формат изображения
		Imaging::ImageFormat^ format = image->RawFormat;

		// Сохраняем изображение в файл с соответствующим форматом
		image->Save(fileName, format);

		//Prew->Image = Image::FromFile(fileName);
	}
	else
	{
		MessageBox::Show("Нет изображения для сохранения!");
	}

	// Ищем игру
	IconGame^ gameChange = SearchGame(textName->Text);
	if (gameChange->getIcon() != nullptr)
	{
		// Получаем изображение из pictureBox
		Image^ image = gameChange->getIcon();

		// Генерируем уникальное имя файла
		String^ fileName = pathGame + "\\icon.gif";

		// Получаем формат изображения
		Imaging::ImageFormat^ format = image->RawFormat;

		// Сохраняем изображение в файл с соответствующим форматом
		image->Save(fileName, format);
	}
}

void SaveData()
{
	String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Ресурсы\\Games.accdb;Persist Security Info=False;";
	OleDbConnection^ connection = gcnew OleDbConnection(connectionString);
	try
	{
		connection->Open();

		// Проверяем, существует ли игра с заданным именем
		String^ queryCheckExistence = "SELECT COUNT(*) FROM InfoGame WHERE GameName = ?";
		OleDbCommand^ commandCheckExistence = gcnew OleDbCommand(queryCheckExistence, connection);
		commandCheckExistence->Parameters->AddWithValue("?", OldName);
		int count = Convert::ToInt32(commandCheckExistence->ExecuteScalar());

		if (count > 0 && OldName != "Шаблон")
		{
			// Если игра существует, выполняем запрос на обновление
			String^ queryUpdate = "UPDATE InfoGame SET GameDict = GD, GamePathExe = PE, Status_ = S, GameName = GM, OldName = OM WHERE GameName = ?";
			OleDbCommand^ commandUpdate = gcnew OleDbCommand(queryUpdate, connection);
			commandUpdate->Parameters->AddWithValue("GD", textDict->Text);
			commandUpdate->Parameters->AddWithValue("PE", textExe->Text);
			if (StatusDel) // Значение для столбца Status, если необходимо обновить
			{
				commandUpdate->Parameters->AddWithValue("S", -1); 
			}
			else
			{
				commandUpdate->Parameters->AddWithValue("S", 0);
			}
			commandUpdate->Parameters->AddWithValue("GM", textName->Text);
			if (textName->Text != OldName)
			{
				commandUpdate->Parameters->AddWithValue("OM", OldName);
			}
			else
			{
				commandUpdate->Parameters->AddWithValue("OM", "");
			}
			commandUpdate->Parameters->AddWithValue("?", OldName);
			MessageBox::Show("Данные обновлены успешно.");
			commandUpdate->ExecuteNonQuery();
		}
		else if (textName->Text != "Шаблон")
		{
			// Если игра не существует, выполняем запрос на вставку
			String^ queryInsert = "INSERT INTO InfoGame (GameDict, GamePathExe, GameName, Status_) VALUES (?, ?, ?, ?)";
			OleDbCommand^ commandInsert = gcnew OleDbCommand(queryInsert, connection);
			commandInsert->Parameters->AddWithValue("?", textDict->Text);
			commandInsert->Parameters->AddWithValue("?", textExe->Text);
			commandInsert->Parameters->AddWithValue("?", textName->Text);
			commandInsert->Parameters->AddWithValue("?", 0); // Значение для столбца Status
			commandInsert->ExecuteNonQuery();
			MessageBox::Show("Данные сохранены успешно.");
		}
		else { MessageBox::Show("нельзя изменять шаблон."); }
	}
	catch (OleDbException^ ex)
	{
		MessageBox::Show("Произошла ошибка при сохранении данных: " + ex->Message);
	}
	finally
	{
		connection->Close();
	}
}

void LoadMod()
{
	// Строка подключения к базе данных Access
	String^ connectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=" + "Ресурсы\\Games.accdb" + ";Persist Security Info=False;";

	// Создание объекта для подключения к базе данных
	OleDbConnection^ connection = gcnew OleDbConnection(connectionString);

	try {
		// Открытие соединения
		connection->Open();

		// Удаление записей со статусом -1
		String^ deleteQuery = "DELETE FROM InfoGame WHERE Status_ = -1";
		OleDbCommand^ deleteCommand = gcnew OleDbCommand(deleteQuery, connection);
		deleteCommand->ExecuteNonQuery();

		// SQL запрос для извлечения данных из таблицы InfoGame
		String^ query = "SELECT GameName, Status_, OldName FROM InfoGame";
		// Создание команды для выполнения SQL запроса
		OleDbCommand^ command = gcnew OleDbCommand(query, connection);

		// Создание объекта для чтения данных из базы
		OleDbDataReader^ reader = command->ExecuteReader();

		// Перебор результатов запроса
		while (reader->Read()) {
			// Ваш существующий код обработки данных
			if (reader->GetInt32(1) == 0)
			{
				if (reader->GetString(0) != "Шаблон")
				{
					String^ n = reader->GetString(0);
					String^ o = reader->GetString(2);
					if (n != o)
					{
						// Укажите путь к каталогу, который вы хотите переименовать
						String^ oldDirectoryName = "Game\\" + reader->GetString(2);
						// Укажите новое имя для каталога
						String^ newDirectoryName = "Game\\" + reader->GetString(0);
						try
						{
							// Проверяем, существует ли исходный каталог
							if (Directory::Exists(oldDirectoryName))
							{
								// Переименовываем каталог
								Directory::Move(oldDirectoryName, newDirectoryName);
								Console::WriteLine("Каталог успешно переименован.");
							}
						}
						catch (Exception^ e)
						{
							//MessageBox::Show("Ошибка при переименовании каталога: " + e->Message);
						}
					}
					String^ pathGame = "Game\\" + reader->GetString(0) + "\\";
					try {
						// Копируем файл prew.gif
						if (File::Exists(pathGame + "prew.gif")) {
							File::Copy(pathGame + "prew.gif", pathGame + "prewOld.gif", true); // Перезаписываем существующую копию
						}
						else {
							File::Copy(pathGame + "prew.gif", pathGame + "prewOld.gif");
						}

						// Копируем файл icon.gif
						if (File::Exists(pathGame + "icon.gif")) {
							File::Copy(pathGame + "icon.gif", pathGame + "iconOld.gif", true); // Перезаписываем существующую копию
						}
						else {
							File::Copy(pathGame + "icon.gif", pathGame + "iconOld.gif");
						}
					}
					catch (IOException^ e) {
						MessageBox::Show("Ошибка при копировании файла: " + e->Message);
					}
					IconGame^ game = gcnew IconGame();
					game->LoadGame(reader->GetString(0)); // Название игры
					game->clickIconGame += gcnew SendGameName(this, &Launcher::click_IconGame);
					panelGame->Controls->Add(game);
				}
			}
			else
			{

			}
		}

		// Закрытие объектов чтения и соединения
		reader->Close();
		connection->Close();
	}
	catch (Exception^ ex) {
		// Вывод сообщения об ошибке в виде окна сообщения
		MessageBox::Show("Ошибка при выполнении запроса: " + ex->Message, "Ошибка");
	}
}
private: System::Void добавитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void click_butImageMinus(System::Object^ sender, System::EventArgs^ e);
private: System::Void click_butImagePlus(System::Object^ sender, System::EventArgs^ e);
private: System::Void butAddGame_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void click_IconGame(String^ name);

private: System::Void butChange_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void butSave_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void butDel_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void butStart_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void textExe_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void изменитьPrewToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void изменитьIconToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void butAddGameMod_Click(System::Object^ sender, System::EventArgs^ e);
};
}
