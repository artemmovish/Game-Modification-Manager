#pragma once
#include <vcclr.h>
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Launcher
	/// </summary>
	public ref class Launcher : public System::Windows::Forms::Form
	{
	public:
		Launcher(void)
		{
			InitializeComponent();
			PanelGameMod->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Launcher()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::FlowLayoutPanel^ PanelGame;
	private: System::Windows::Forms::FlowLayoutPanel^ PanelGameMod;
	private: System::Windows::Forms::TableLayoutPanel^ PanelPrew;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button4;



	private: System::Windows::Forms::TableLayoutPanel^ PanelDict;
	private: System::Windows::Forms::TextBox^ textDict;
	private: System::Windows::Forms::TableLayoutPanel^ PanelManegement;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button9;





	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Launcher::typeid));
			this->PanelGame = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->PanelGameMod = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->PanelPrew = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->PanelDict = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textDict = (gcnew System::Windows::Forms::TextBox());
			this->PanelManegement = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->PanelGame->SuspendLayout();
			this->PanelGameMod->SuspendLayout();
			this->PanelPrew->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->PanelDict->SuspendLayout();
			this->SuspendLayout();
			// 
			// PanelGame
			// 
			this->PanelGame->AutoScroll = true;
			this->PanelGame->Controls->Add(this->button1);
			this->PanelGame->Controls->Add(this->button2);
			this->PanelGame->Controls->Add(this->button3);
			this->PanelGame->Controls->Add(this->button8);
			this->PanelGame->Controls->Add(this->button10);
			this->PanelGame->Dock = System::Windows::Forms::DockStyle::Left;
			this->PanelGame->Location = System::Drawing::Point(0, 0);
			this->PanelGame->Name = L"PanelGame";
			this->PanelGame->Size = System::Drawing::Size(200, 666);
			this->PanelGame->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(3, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 170);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(3, 179);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(170, 170);
			this->button2->TabIndex = 1;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(3, 355);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(170, 170);
			this->button3->TabIndex = 2;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(3, 531);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(170, 170);
			this->button8->TabIndex = 3;
			this->button8->Text = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(3, 707);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(170, 170);
			this->button10->TabIndex = 4;
			this->button10->Text = L"button10";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// PanelGameMod
			// 
			this->PanelGameMod->AutoScroll = true;
			this->PanelGameMod->Controls->Add(this->button4);
			this->PanelGameMod->Controls->Add(this->button5);
			this->PanelGameMod->Controls->Add(this->button6);
			this->PanelGameMod->Controls->Add(this->button7);
			this->PanelGameMod->Controls->Add(this->button9);
			this->PanelGameMod->Dock = System::Windows::Forms::DockStyle::Right;
			this->PanelGameMod->FlowDirection = System::Windows::Forms::FlowDirection::RightToLeft;
			this->PanelGameMod->Location = System::Drawing::Point(914, 0);
			this->PanelGameMod->Name = L"PanelGameMod";
			this->PanelGameMod->Size = System::Drawing::Size(200, 666);
			this->PanelGameMod->TabIndex = 2;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button4->Location = System::Drawing::Point(10, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(170, 170);
			this->button4->TabIndex = 1;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button5->Location = System::Drawing::Point(10, 179);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(170, 170);
			this->button5->TabIndex = 2;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button6->Location = System::Drawing::Point(10, 355);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(170, 170);
			this->button6->TabIndex = 3;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button7->Location = System::Drawing::Point(10, 531);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(170, 170);
			this->button7->TabIndex = 4;
			this->button7->Text = L"button7";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button9->Location = System::Drawing::Point(10, 707);
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
			this->PanelPrew->Size = System::Drawing::Size(714, 666);
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
			this->pictureBox1->Size = System::Drawing::Size(708, 391);
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
			this->PanelDict->Controls->Add(this->textDict, 0, 0);
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
			// textDict
			// 
			this->textDict->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->textDict->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textDict->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textDict->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(149)), static_cast<System::Int32>(static_cast<System::Byte>(149)),
				static_cast<System::Int32>(static_cast<System::Byte>(149)));
			this->textDict->Location = System::Drawing::Point(4, 4);
			this->textDict->Multiline = true;
			this->textDict->Name = L"textDict";
			this->textDict->Size = System::Drawing::Size(512, 199);
			this->textDict->TabIndex = 0;
			this->textDict->Text = L"вфывыффывывпф вап \r\nрыпррпаырапырпарапрврапррв\r\nрапвррапрапрапрапрв";
			// 
			// PanelManegement
			// 
			this->PanelManegement->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->PanelManegement->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
			this->PanelManegement->ColumnCount = 3;
			this->PanelManegement->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				31.25F)));
			this->PanelManegement->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				37.5F)));
			this->PanelManegement->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				31.25F)));
			this->PanelManegement->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->PanelManegement->Location = System::Drawing::Point(200, 609);
			this->PanelManegement->Name = L"PanelManegement";
			this->PanelManegement->RowCount = 1;
			this->PanelManegement->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->PanelManegement->Size = System::Drawing::Size(714, 57);
			this->PanelManegement->TabIndex = 4;
			// 
			// Launcher
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(58)),
				static_cast<System::Int32>(static_cast<System::Byte>(58)));
			this->ClientSize = System::Drawing::Size(1114, 666);
			this->Controls->Add(this->PanelManegement);
			this->Controls->Add(this->PanelPrew);
			this->Controls->Add(this->PanelGameMod);
			this->Controls->Add(this->PanelGame);
			this->Name = L"Launcher";
			this->Text = L"Launcher";
			this->Resize += gcnew System::EventHandler(this, &Launcher::Launcher_Resize);
			this->PanelGame->ResumeLayout(false);
			this->PanelGameMod->ResumeLayout(false);
			this->PanelPrew->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->PanelDict->ResumeLayout(false);
			this->PanelDict->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Launcher_Resize(System::Object^ sender, System::EventArgs^ e) {
		//PanelGame->Size = System::Drawing::Size(205, this->Height / 0.915);
		
	}




};
}
