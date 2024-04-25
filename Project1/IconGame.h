#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Project1 {

	/// <summary>
	/// —водка дл€ IconGame
	/// </summary>
	public ref class IconGame : public System::Windows::Forms::UserControl
	{
	public:
		IconGame(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
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
	private: System::Windows::Forms::PictureBox^ Icon;
	private: System::Windows::Forms::Label^ NameGame;

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
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->Icon = (gcnew System::Windows::Forms::PictureBox());
			this->NameGame = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icon))->BeginInit();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->Icon, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->NameGame, 0, 1);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 82.03883F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 17.96116F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(175, 206);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// Icon
			// 
			this->Icon->Dock = System::Windows::Forms::DockStyle::Fill;
			this->Icon->Location = System::Drawing::Point(3, 3);
			this->Icon->Name = L"Icon";
			this->Icon->Size = System::Drawing::Size(169, 163);
			this->Icon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Icon->TabIndex = 0;
			this->Icon->TabStop = false;
			// 
			// NameGame
			// 
			this->NameGame->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->NameGame->AutoSize = true;
			this->NameGame->BackColor = System::Drawing::Color::Transparent;
			this->NameGame->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->NameGame->ForeColor = System::Drawing::Color::Silver;
			this->NameGame->Location = System::Drawing::Point(6, 177);
			this->NameGame->Name = L"NameGame";
			this->NameGame->Size = System::Drawing::Size(162, 20);
			this->NameGame->TabIndex = 1;
			this->NameGame->Text = L"12345678901234567";
			// 
			// IconGame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Transparent;
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"IconGame";
			this->Size = System::Drawing::Size(175, 206);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Icon))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	};
}
