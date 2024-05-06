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
	/// —водка дл€ IconGame
	/// </summary>
	/// 
	public delegate void SendGameName(String^ str);
	
	public ref class IconGame : public System::Windows::Forms::UserControl
	{
	public:
		event SendGameName^ clickIconGame;
		IconGame(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~IconGame()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	public: System::Windows::Forms::PictureBox^ Icon;
	public: System::Windows::Forms::TextBox^ NameGame;





	protected:




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(IconGame::typeid));
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->NameGame = (gcnew System::Windows::Forms::TextBox());
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
			this->tableLayoutPanel1->Controls->Add(this->NameGame, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->Icon, 0, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 83.24873F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.75127F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(175, 193);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// NameGame
			// 
			this->NameGame->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->NameGame->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->NameGame->Dock = System::Windows::Forms::DockStyle::Fill;
			this->NameGame->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NameGame->ForeColor = System::Drawing::Color::Silver;
			this->NameGame->Location = System::Drawing::Point(3, 163);
			this->NameGame->Name = L"NameGame";
			this->NameGame->ReadOnly = true;
			this->NameGame->Size = System::Drawing::Size(169, 27);
			this->NameGame->TabIndex = 1;
			this->NameGame->Text = L"Ўаблон";
			// 
			// Icon
			// 
			this->Icon->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Icon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Icon.Image")));
			this->Icon->Location = System::Drawing::Point(3, 3);
			this->Icon->Name = L"Icon";
			this->Icon->Size = System::Drawing::Size(169, 154);
			this->Icon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Icon->TabIndex = 0;
			this->Icon->TabStop = false;
			this->Icon->Click += gcnew System::EventHandler(this, &IconGame::Icon_Click);
			// 
			// IconGame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Transparent;
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"IconGame";
			this->Size = System::Drawing::Size(175, 193);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icon))->EndInit();
			this->ResumeLayout(false);

		}


#pragma endregion

		public:
			void LoadGame(String^ name)
			{
				// ”становка названи€ игры в элемент управлени€ NameGame
				NameGame->Text = name;
				if (name != "Ўаблон")
				{
					try
					{
						Icon->Image = Image::FromFile("Game\\" + name + "\\iconOld.png");
					}
					catch (System::IO::FileNotFoundException^)
					{
						try
						{
							Icon->Image = Image::FromFile("Game\\" + name + "\\iconOld.gif");
						}
						catch (System::IO::FileNotFoundException^)
						{
							Icon->Image = Image::FromFile("Game\\" + name + "\\iconOld.jpg");
						}
					}
				}
			}
			void loadImage(String^ path)
			{
				Icon->Image = Image::FromFile(path);
			}
			  Image^ getIcon()
			  {
				  return Icon->Image;
			  }
			  void setName(String^ name)
			  {
				  NameGame->Text = name;
			  }

private: System::Void Icon_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ str = NameGame->Text;
	clickIconGame(NameGame->Text);
}
};
}
