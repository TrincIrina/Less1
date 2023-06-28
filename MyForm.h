#pragma once

namespace Less1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Label^ label_result;
	private: System::Windows::Forms::Button^ button_AC;


	private: System::Windows::Forms::Button^ button_znak;



	private: System::Windows::Forms::Button^ button_percent;


	private: System::Windows::Forms::Button^ button_division;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button_multip;

	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button_minus;

	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button_plus;

	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button_point;


	private: System::Windows::Forms::Button^ button_equally;
	private: float first_num;
	private: char user_action = ' ';
	private: bool is_equal = false;
	protected:

	protected:


	protected:


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->label_result = (gcnew System::Windows::Forms::Label());
			this->button_AC = (gcnew System::Windows::Forms::Button());
			this->button_znak = (gcnew System::Windows::Forms::Button());
			this->button_percent = (gcnew System::Windows::Forms::Button());
			this->button_division = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button_multip = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button_minus = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button_plus = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button_point = (gcnew System::Windows::Forms::Button());
			this->button_equally = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::Red;
			this->button_exit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_exit->ForeColor = System::Drawing::Color::White;
			this->button_exit->Location = System::Drawing::Point(3, 9);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(25, 25);
			this->button_exit->TabIndex = 0;
			this->button_exit->Text = L"X";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &MyForm::button_exit_Click);
			// 
			// label_result
			// 
			this->label_result->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_result->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label_result->Location = System::Drawing::Point(3, 9);
			this->label_result->Name = L"label_result";
			this->label_result->Size = System::Drawing::Size(278, 46);
			this->label_result->TabIndex = 1;
			this->label_result->Text = L"0";
			this->label_result->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button_AC
			// 
			this->button_AC->BackColor = System::Drawing::Color::Silver;
			this->button_AC->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_AC->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_AC->ForeColor = System::Drawing::Color::Black;
			this->button_AC->Location = System::Drawing::Point(3, 64);
			this->button_AC->Name = L"button_AC";
			this->button_AC->Size = System::Drawing::Size(65, 55);
			this->button_AC->TabIndex = 2;
			this->button_AC->Text = L"AC";
			this->button_AC->UseVisualStyleBackColor = false;
			this->button_AC->Click += gcnew System::EventHandler(this, &MyForm::button_AC_Click);
			// 
			// button_znak
			// 
			this->button_znak->BackColor = System::Drawing::Color::Silver;
			this->button_znak->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_znak->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_znak->ForeColor = System::Drawing::Color::Black;
			this->button_znak->Location = System::Drawing::Point(74, 64);
			this->button_znak->Name = L"button_znak";
			this->button_znak->Size = System::Drawing::Size(65, 55);
			this->button_znak->TabIndex = 3;
			this->button_znak->Text = L"+/-";
			this->button_znak->UseVisualStyleBackColor = false;
			this->button_znak->Click += gcnew System::EventHandler(this, &MyForm::button_znak_Click);
			// 
			// button_percent
			// 
			this->button_percent->BackColor = System::Drawing::Color::Silver;
			this->button_percent->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_percent->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_percent->ForeColor = System::Drawing::Color::Black;
			this->button_percent->Location = System::Drawing::Point(145, 64);
			this->button_percent->Name = L"button_percent";
			this->button_percent->Size = System::Drawing::Size(65, 55);
			this->button_percent->TabIndex = 4;
			this->button_percent->Text = L"%";
			this->button_percent->UseVisualStyleBackColor = false;
			this->button_percent->Click += gcnew System::EventHandler(this, &MyForm::button_percent_Click);
			// 
			// button_division
			// 
			this->button_division->BackColor = System::Drawing::Color::Gold;
			this->button_division->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_division->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_division->ForeColor = System::Drawing::Color::Black;
			this->button_division->Location = System::Drawing::Point(216, 64);
			this->button_division->Name = L"button_division";
			this->button_division->Size = System::Drawing::Size(65, 55);
			this->button_division->TabIndex = 5;
			this->button_division->Text = L"/";
			this->button_division->UseVisualStyleBackColor = false;
			this->button_division->Click += gcnew System::EventHandler(this, &MyForm::button_division_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Black;
			this->button5->Location = System::Drawing::Point(3, 125);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(65, 55);
			this->button5->TabIndex = 6;
			this->button5->Text = L"7";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Black;
			this->button6->Location = System::Drawing::Point(74, 125);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(65, 55);
			this->button6->TabIndex = 7;
			this->button6->Text = L"8";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(145, 125);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(65, 55);
			this->button7->TabIndex = 8;
			this->button7->Text = L"9";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button_multip
			// 
			this->button_multip->BackColor = System::Drawing::Color::Gold;
			this->button_multip->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_multip->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_multip->ForeColor = System::Drawing::Color::Black;
			this->button_multip->Location = System::Drawing::Point(216, 125);
			this->button_multip->Name = L"button_multip";
			this->button_multip->Size = System::Drawing::Size(65, 55);
			this->button_multip->TabIndex = 9;
			this->button_multip->Text = L"*";
			this->button_multip->UseVisualStyleBackColor = false;
			this->button_multip->Click += gcnew System::EventHandler(this, &MyForm::button_multip_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::Color::Black;
			this->button9->Location = System::Drawing::Point(3, 186);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(65, 55);
			this->button9->TabIndex = 10;
			this->button9->Text = L"4";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::Color::Black;
			this->button10->Location = System::Drawing::Point(74, 186);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(65, 55);
			this->button10->TabIndex = 11;
			this->button10->Text = L"5";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::Color::Black;
			this->button11->Location = System::Drawing::Point(145, 186);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(65, 55);
			this->button11->TabIndex = 12;
			this->button11->Text = L"6";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button_minus
			// 
			this->button_minus->BackColor = System::Drawing::Color::Gold;
			this->button_minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_minus->ForeColor = System::Drawing::Color::Black;
			this->button_minus->Location = System::Drawing::Point(215, 186);
			this->button_minus->Name = L"button_minus";
			this->button_minus->Size = System::Drawing::Size(65, 55);
			this->button_minus->TabIndex = 13;
			this->button_minus->Text = L"-";
			this->button_minus->UseVisualStyleBackColor = false;
			this->button_minus->Click += gcnew System::EventHandler(this, &MyForm::button_minus_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::Black;
			this->button13->Location = System::Drawing::Point(3, 247);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(65, 55);
			this->button13->TabIndex = 14;
			this->button13->Text = L"1";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::Black;
			this->button14->Location = System::Drawing::Point(74, 247);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(65, 55);
			this->button14->TabIndex = 15;
			this->button14->Text = L"2";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::Color::Black;
			this->button15->Location = System::Drawing::Point(145, 247);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(65, 55);
			this->button15->TabIndex = 16;
			this->button15->Text = L"3";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button_plus
			// 
			this->button_plus->BackColor = System::Drawing::Color::Gold;
			this->button_plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_plus->ForeColor = System::Drawing::Color::Black;
			this->button_plus->Location = System::Drawing::Point(215, 247);
			this->button_plus->Name = L"button_plus";
			this->button_plus->Size = System::Drawing::Size(65, 55);
			this->button_plus->TabIndex = 17;
			this->button_plus->Text = L"+";
			this->button_plus->UseVisualStyleBackColor = false;
			this->button_plus->Click += gcnew System::EventHandler(this, &MyForm::button_plus_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::Color::Black;
			this->button17->Location = System::Drawing::Point(3, 308);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(136, 55);
			this->button17->TabIndex = 18;
			this->button17->Text = L"0";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::buttonNumber_Click);
			// 
			// button_point
			// 
			this->button_point->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->button_point->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_point->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_point->ForeColor = System::Drawing::Color::Black;
			this->button_point->Location = System::Drawing::Point(145, 308);
			this->button_point->Name = L"button_point";
			this->button_point->Size = System::Drawing::Size(65, 55);
			this->button_point->TabIndex = 20;
			this->button_point->Text = L".";
			this->button_point->UseVisualStyleBackColor = false;
			this->button_point->Click += gcnew System::EventHandler(this, &MyForm::button_point_Click);
			// 
			// button_equally
			// 
			this->button_equally->BackColor = System::Drawing::Color::Gold;
			this->button_equally->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button_equally->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_equally->ForeColor = System::Drawing::Color::Black;
			this->button_equally->Location = System::Drawing::Point(216, 308);
			this->button_equally->Name = L"button_equally";
			this->button_equally->Size = System::Drawing::Size(65, 55);
			this->button_equally->TabIndex = 21;
			this->button_equally->Text = L"=";
			this->button_equally->UseVisualStyleBackColor = false;
			this->button_equally->Click += gcnew System::EventHandler(this, &MyForm::button_equally_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Snow;
			this->ClientSize = System::Drawing::Size(287, 376);
			this->Controls->Add(this->button_equally);
			this->Controls->Add(this->button_point);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button_plus);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button_minus);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button_multip);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button_division);
			this->Controls->Add(this->button_percent);
			this->Controls->Add(this->button_znak);
			this->Controls->Add(this->button_AC);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->label_result);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор";
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void buttonNumber_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label_result->ForeColor = Color::Black;
		Button^ button = safe_cast<Button^>(sender);

		if (this->label_result->Text == "0" || is_equal) {
			this->label_result->Text = button->Text;
			this->is_equal = false;
		}
		else
			this->label_result->Text = this->label_result->Text + button->Text;
	}
	private: System::Void button_plus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('+');
	}
    private: System::Void button_minus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('-');
	}
    private: System::Void button_multip_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('*');
	}
    private: System::Void button_division_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('/');
	}
	private: System::Void math_action(char action) {
		this->first_num = System::Convert::ToDouble(this->label_result->Text);
		this->user_action = action;
		this->label_result->Text = "0";
	}
    private: System::Void button_equally_Click(System::Object^ sender, System::EventArgs^ e) {
		if (user_action == ' ')
			return;
		float second = System::Convert::ToDouble(this->label_result->Text);
		float result;
		switch (this->user_action) {
		case'%':result = this->first_num * second / 100; break;
		case'+':result = this->first_num + second; break;
		case'-':result = this->first_num - second; break;
		case'*':result = this->first_num * second; break;
		case'/':
			if (second == 0) {
				result = 0;
				this->label_result->ForeColor = Color::DarkRed;
				MessageBox::Show(this, "Действие не может быть выполнено", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
				result = this->first_num / second; 
			break;
		}
		this->is_equal = true;
		this->label_result->Text = System::Convert::ToString(result);
	}
    private: System::Void button_AC_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label_result->Text = "0";
		this->label_result->ForeColor = Color::Black;
		this->first_num = 0;
		this->user_action = ' ';
		this->is_equal = false;
	}
    private: System::Void button_znak_Click(System::Object^ sender, System::EventArgs^ e) {
		int num = System::Convert::ToDouble(this->label_result->Text);
		num *= -1;
		this->label_result->Text = System::Convert::ToString(num);
    }
    private: System::Void button_percent_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('%');
    }
    private: System::Void button_point_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ text = this->label_result->Text;
		if (!text->Contains(","))
			this->label_result->Text = text + ",";
    }
};
}
