#pragma once
#include "FolderMod.h"
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	using namespace System::IO;
	using namespace System::Runtime::InteropServices;
	/// <summary>
	/// Ñâîäêà äëÿ AddMod
	/// </summary>
	public ref class AddMod : public System::Windows::Forms::Form
	{
	public:
		AddMod(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
			butAddGameMod->Enabled = false;
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
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
	public: System::Windows::Forms::PictureBox^ Prew;
	public: System::Windows::Forms::TableLayoutPanel^ PanelDict;
	public: System::Windows::Forms::TextBox^ textExe;
	public: System::Windows::Forms::TextBox^ textDict;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	public: System::Windows::Forms::TextBox^ textName;
	public: System::Windows::Forms::Button^ butStart;
	private:






	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	public: System::Windows::Forms::Button^ butSave;
	public: System::Windows::Forms::Button^ butAddGameMod;
	private:





	private: System::Windows::Forms::FlowLayoutPanel^ panelFolders;


	private: System::Windows::Forms::Panel^ panel1;
	public: System::Windows::Forms::PictureBox^ Icon;
	private: System::Windows::Forms::OpenFileDialog^ DialogImage;
	private: System::Windows::Forms::ContextMenuStrip^ MenuStripPrew;
	private: System::Windows::Forms::ToolStripMenuItem^ èçìåíèòüPrewToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ èçìåíèòüIconToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	public: System::Windows::Forms::Button^ butDel;
	private:

	private: System::Windows::Forms::Button^ button1;
	private: System::ComponentModel::IContainer^ components;



	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddMod::typeid));
			this->PanelPrew = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Prew = (gcnew System::Windows::Forms::PictureBox());
			this->MenuStripPrew = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->èçìåíèòüPrewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->èçìåíèòüIconToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->PanelDict = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textExe = (gcnew System::Windows::Forms::TextBox());
			this->textDict = (gcnew System::Windows::Forms::TextBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->butDel = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->butSave = (gcnew System::Windows::Forms::Button());
			this->textName = (gcnew System::Windows::Forms::TextBox());
			this->butStart = (gcnew System::Windows::Forms::Button());
			this->butAddGameMod = (gcnew System::Windows::Forms::Button());
			this->panelFolders = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Icon = (gcnew System::Windows::Forms::PictureBox());
			this->DialogImage = (gcnew System::Windows::Forms::OpenFileDialog());
			this->PanelPrew->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Prew))->BeginInit();
			this->MenuStripPrew->SuspendLayout();
			this->PanelDict->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->panelFolders->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icon))->BeginInit();
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
			this->PanelPrew->Size = System::Drawing::Size(746, 666);
			this->PanelPrew->TabIndex = 4;
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
			this->Prew->Size = System::Drawing::Size(740, 391);
			this->Prew->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Prew->TabIndex = 0;
			this->Prew->TabStop = false;
			// 
			// MenuStripPrew
			// 
			this->MenuStripPrew->BackColor = System::Drawing::Color::DimGray;
			this->MenuStripPrew->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->èçìåíèòüPrewToolStripMenuItem,
					this->èçìåíèòüIconToolStripMenuItem
			});
			this->MenuStripPrew->Name = L"contextMenuStrip1";
			this->MenuStripPrew->ShowImageMargin = false;
			this->MenuStripPrew->Size = System::Drawing::Size(133, 48);
			// 
			// èçìåíèòüPrewToolStripMenuItem
			// 
			this->èçìåíèòüPrewToolStripMenuItem->Name = L"èçìåíèòüPrewToolStripMenuItem";
			this->èçìåíèòüPrewToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->èçìåíèòüPrewToolStripMenuItem->Text = L"Èçìåíèòü Prew";
			this->èçìåíèòüPrewToolStripMenuItem->Click += gcnew System::EventHandler(this, &AddMod::èçìåíèòüPrewToolStripMenuItem_Click);
			// 
			// èçìåíèòüIconToolStripMenuItem
			// 
			this->èçìåíèòüIconToolStripMenuItem->Name = L"èçìåíèòüIconToolStripMenuItem";
			this->èçìåíèòüIconToolStripMenuItem->Size = System::Drawing::Size(132, 22);
			this->èçìåíèòüIconToolStripMenuItem->Text = L"Èçìåíèòü Icon";
			this->èçìåíèòüIconToolStripMenuItem->Click += gcnew System::EventHandler(this, &AddMod::èçìåíèòüIconToolStripMenuItem_Click);
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
			this->PanelDict->Size = System::Drawing::Size(740, 263);
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
			this->textExe->Size = System::Drawing::Size(535, 49);
			this->textExe->TabIndex = 1;
			this->textExe->Text = L"ÏÓÒÜ Ê .EXE";
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
			this->textDict->Size = System::Drawing::Size(535, 199);
			this->textDict->TabIndex = 0;
			this->textDict->Text = L"ÎÏÈÑÀÍÈÅ";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->tableLayoutPanel2, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->textName, 0, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(546, 4);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 84.84849F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 15.15152F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 66)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(190, 199);
			this->tableLayoutPanel1->TabIndex = 2;
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
			this->tableLayoutPanel2->Controls->Add(this->butDel, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->button1, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->butSave, 0, 0);
			this->tableLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel2->Location = System::Drawing::Point(3, 135);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(184, 61);
			this->tableLayoutPanel2->TabIndex = 3;
			// 
			// butDel
			// 
			this->butDel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butDel.BackgroundImage")));
			this->butDel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->butDel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->butDel->Enabled = false;
			this->butDel->FlatAppearance->BorderSize = 0;
			this->butDel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->butDel->Location = System::Drawing::Point(125, 3);
			this->butDel->Name = L"butDel";
			this->butDel->Size = System::Drawing::Size(56, 55);
			this->butDel->TabIndex = 18;
			this->butDel->UseVisualStyleBackColor = true;
			this->butDel->Click += gcnew System::EventHandler(this, &AddMod::butDel_Click);
			// 
			// button1
			// 
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->button1->Enabled = false;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(64, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(55, 55);
			this->button1->TabIndex = 17;
			this->button1->UseVisualStyleBackColor = true;
			// 
			// butSave
			// 
			this->butSave->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butSave.BackgroundImage")));
			this->butSave->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->butSave->Dock = System::Windows::Forms::DockStyle::Fill;
			this->butSave->FlatAppearance->BorderSize = 0;
			this->butSave->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->butSave->Location = System::Drawing::Point(3, 3);
			this->butSave->Name = L"butSave";
			this->butSave->Size = System::Drawing::Size(55, 55);
			this->butSave->TabIndex = 12;
			this->butSave->UseVisualStyleBackColor = true;
			this->butSave->Click += gcnew System::EventHandler(this, &AddMod::butSave_Click);
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
			this->textName->Size = System::Drawing::Size(184, 106);
			this->textName->TabIndex = 1;
			this->textName->Text = L"ÍÀÇÂÀÍÈÅ ÌÎÄÀ";
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
			this->butStart->Location = System::Drawing::Point(553, 217);
			this->butStart->Name = L"butStart";
			this->butStart->Size = System::Drawing::Size(175, 35);
			this->butStart->TabIndex = 3;
			this->butStart->UseVisualStyleBackColor = true;
			this->butStart->Click += gcnew System::EventHandler(this, &AddMod::butStart_Click);
			// 
			// butAddGameMod
			// 
			this->butAddGameMod->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butAddGameMod.BackgroundImage")));
			this->butAddGameMod->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->butAddGameMod->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->butAddGameMod->FlatAppearance->BorderSize = 0;
			this->butAddGameMod->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->butAddGameMod->Location = System::Drawing::Point(746, 610);
			this->butAddGameMod->Name = L"butAddGameMod";
			this->butAddGameMod->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->butAddGameMod->Size = System::Drawing::Size(368, 56);
			this->butAddGameMod->TabIndex = 5;
			this->butAddGameMod->UseVisualStyleBackColor = true;
			this->butAddGameMod->Click += gcnew System::EventHandler(this, &AddMod::butAddGameMod_Click);
			// 
			// panelFolders
			// 
			this->panelFolders->AutoScroll = true;
			this->panelFolders->Controls->Add(this->panel1);
			this->panelFolders->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelFolders->Location = System::Drawing::Point(746, 0);
			this->panelFolders->Name = L"panelFolders";
			this->panelFolders->Size = System::Drawing::Size(368, 610);
			this->panelFolders->TabIndex = 6;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->Icon);
			this->panel1->Location = System::Drawing::Point(3, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(353, 172);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Silver;
			this->label1->Location = System::Drawing::Point(189, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(156, 52);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Èêîíêà \r\nìîäèôèêàöèè\r\n";
			// 
			// Icon
			// 
			this->Icon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Icon.Image")));
			this->Icon->Location = System::Drawing::Point(3, 3);
			this->Icon->Name = L"Icon";
			this->Icon->Size = System::Drawing::Size(180, 169);
			this->Icon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Icon->TabIndex = 0;
			this->Icon->TabStop = false;
			// 
			// DialogImage
			// 
			this->DialogImage->Filter = L"\"Èçîáğàæåíèÿ (*.jpg; *.png; *.gif)|*.jpg;*.png;*.gif|Âñå ôàéëû (*.*)|*.*\";";
			// 
			// AddMod
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->ClientSize = System::Drawing::Size(1114, 666);
			this->Controls->Add(this->panelFolders);
			this->Controls->Add(this->butAddGameMod);
			this->Controls->Add(this->PanelPrew);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"AddMod";
			this->Text = L"AddMod";
			this->PanelPrew->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Prew))->EndInit();
			this->MenuStripPrew->ResumeLayout(false);
			this->PanelDict->ResumeLayout(false);
			this->PanelDict->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->panelFolders->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icon))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		public: String^ nameGame;
				bool StatusChange = false;
				
private: System::Void butAddGameMod_Click(System::Object^ sender, System::EventArgs^ e)
{
	FolderMod^ butFolder = gcnew FolderMod();
	butFolder->ModName = textName->Text;
	butFolder->GameName = nameGame;
	panelFolders->Controls->Add(butFolder);
	return System::Void();
}
private: System::Void butSave_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void èçìåíèòüPrewToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void èçìåíèòüIconToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void butDel_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void butStart_Click(System::Object^ sender, System::EventArgs^ e);
};
}
