#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Project1 {

	/// <summary>
	/// Сводка для ControlPanel
	/// </summary>
	public ref class ControlPanel : public System::Windows::Forms::UserControl
	{
	public:
		event EventHandler^ clickbutImagePlus;
		event EventHandler^ clickbutImageMinus;
		ControlPanel(void)
		{
			InitializeComponent();
			down->Start();
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~ControlPanel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ butImageMinus;
	private: System::Windows::Forms::Button^ butVolMinus;
	private: System::Windows::Forms::Button^ butClose;
	private: System::Windows::Forms::Button^ butMain;
	private: System::Windows::Forms::Button^ butSet;
	private: System::Windows::Forms::Button^ butVolPlus;
	private: System::Windows::Forms::Button^ butImagePlus;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::Timer^ up;
	private: System::Windows::Forms::Timer^ down;
	private: System::ComponentModel::IContainer^ components;
	protected:

	protected:


	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ControlPanel::typeid));
			this->butImageMinus = (gcnew System::Windows::Forms::Button());
			this->butVolMinus = (gcnew System::Windows::Forms::Button());
			this->butClose = (gcnew System::Windows::Forms::Button());
			this->butMain = (gcnew System::Windows::Forms::Button());
			this->butSet = (gcnew System::Windows::Forms::Button());
			this->butVolPlus = (gcnew System::Windows::Forms::Button());
			this->butImagePlus = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->up = (gcnew System::Windows::Forms::Timer(this->components));
			this->down = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// butImageMinus
			// 
			this->butImageMinus->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butImageMinus.BackgroundImage")));
			this->butImageMinus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->butImageMinus->FlatAppearance->BorderSize = 0;
			this->butImageMinus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->butImageMinus->Location = System::Drawing::Point(3, 3);
			this->butImageMinus->Name = L"butImageMinus";
			this->butImageMinus->Size = System::Drawing::Size(52, 52);
			this->butImageMinus->TabIndex = 7;
			this->toolTip1->SetToolTip(this->butImageMinus, L"Предыдущая картинка");
			this->butImageMinus->UseVisualStyleBackColor = true;
			this->butImageMinus->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &ControlPanel::butImageMinus_MouseClick);
			// 
			// butVolMinus
			// 
			this->butVolMinus->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butVolMinus.BackgroundImage")));
			this->butVolMinus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->butVolMinus->FlatAppearance->BorderSize = 0;
			this->butVolMinus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->butVolMinus->Location = System::Drawing::Point(61, 3);
			this->butVolMinus->Name = L"butVolMinus";
			this->butVolMinus->Size = System::Drawing::Size(52, 52);
			this->butVolMinus->TabIndex = 8;
			this->toolTip1->SetToolTip(this->butVolMinus, L"Звук -");
			this->butVolMinus->UseVisualStyleBackColor = true;
			// 
			// butClose
			// 
			this->butClose->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butClose.BackgroundImage")));
			this->butClose->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->butClose->FlatAppearance->BorderSize = 0;
			this->butClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->butClose->Location = System::Drawing::Point(119, 3);
			this->butClose->Name = L"butClose";
			this->butClose->Size = System::Drawing::Size(52, 52);
			this->butClose->TabIndex = 9;
			this->toolTip1->SetToolTip(this->butClose, L"Закрыть");
			this->butClose->UseVisualStyleBackColor = true;
			this->butClose->Click += gcnew System::EventHandler(this, &ControlPanel::butClose_Click);
			// 
			// butMain
			// 
			this->butMain->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butMain.BackgroundImage")));
			this->butMain->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->butMain->FlatAppearance->BorderSize = 0;
			this->butMain->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->butMain->Location = System::Drawing::Point(177, 3);
			this->butMain->Name = L"butMain";
			this->butMain->Size = System::Drawing::Size(52, 52);
			this->butMain->TabIndex = 10;
			this->toolTip1->SetToolTip(this->butMain, L"развернуть");
			this->butMain->UseVisualStyleBackColor = true;
			this->butMain->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &ControlPanel::butMain_MouseClick);
			// 
			// butSet
			// 
			this->butSet->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butSet.BackgroundImage")));
			this->butSet->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->butSet->FlatAppearance->BorderSize = 0;
			this->butSet->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->butSet->Location = System::Drawing::Point(235, 3);
			this->butSet->Name = L"butSet";
			this->butSet->Size = System::Drawing::Size(52, 52);
			this->butSet->TabIndex = 11;
			this->toolTip1->SetToolTip(this->butSet, L"Настройки");
			this->butSet->UseVisualStyleBackColor = true;
			// 
			// butVolPlus
			// 
			this->butVolPlus->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butVolPlus.BackgroundImage")));
			this->butVolPlus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->butVolPlus->FlatAppearance->BorderSize = 0;
			this->butVolPlus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->butVolPlus->Location = System::Drawing::Point(293, 3);
			this->butVolPlus->Name = L"butVolPlus";
			this->butVolPlus->Size = System::Drawing::Size(52, 52);
			this->butVolPlus->TabIndex = 12;
			this->toolTip1->SetToolTip(this->butVolPlus, L"Звук +");
			this->butVolPlus->UseVisualStyleBackColor = true;
			// 
			// butImagePlus
			// 
			this->butImagePlus->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"butImagePlus.BackgroundImage")));
			this->butImagePlus->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->butImagePlus->FlatAppearance->BorderSize = 0;
			this->butImagePlus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->butImagePlus->Location = System::Drawing::Point(351, 3);
			this->butImagePlus->Name = L"butImagePlus";
			this->butImagePlus->Size = System::Drawing::Size(52, 52);
			this->butImagePlus->TabIndex = 13;
			this->toolTip1->SetToolTip(this->butImagePlus, L"Следующая картинка");
			this->butImagePlus->UseVisualStyleBackColor = true;
			this->butImagePlus->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &ControlPanel::butImagePlus_MouseClick);
			// 
			// up
			// 
			this->up->Interval = 15;
			this->up->Tick += gcnew System::EventHandler(this, &ControlPanel::up_Tick);
			// 
			// down
			// 
			this->down->Interval = 15;
			this->down->Tick += gcnew System::EventHandler(this, &ControlPanel::down_Tick);
			// 
			// ControlPanel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->butMain);
			this->Controls->Add(this->butSet);
			this->Controls->Add(this->butClose);
			this->Controls->Add(this->butVolMinus);
			this->Controls->Add(this->butVolPlus);
			this->Controls->Add(this->butImagePlus);
			this->Controls->Add(this->butImageMinus);
			this->Name = L"ControlPanel";
			this->Size = System::Drawing::Size(410, 58);
			this->ResumeLayout(false);

		}
#pragma endregion
		bool clickBut = false;




	private: System::Void butClose_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void up_Tick(System::Object^ sender, System::EventArgs^ e);

private: System::Void down_Tick(System::Object^ sender, System::EventArgs^ e);

private: System::Void butMain_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);


private: System::Void butImageMinus_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
private: System::Void butImagePlus_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
};
}
