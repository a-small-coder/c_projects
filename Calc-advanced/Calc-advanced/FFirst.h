#pragma once
#include <math.h>
namespace Calcadvanced {

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
	private: System::Windows::Forms::Button^ btnNegate;
	protected:

	protected:

	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::Button^ btnDot;
	private: System::Windows::Forms::Button^ btnResult;



	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btnSum;




	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ BtnSubstraction;
	private: System::Windows::Forms::Button^ btnDeleteOne;








	private: System::Windows::Forms::Button^ btnCE;




	private: System::Windows::Forms::Button^ btnDivision;
	private: System::Windows::Forms::Button^ btnSqrt;
	private: System::Windows::Forms::Button^ btnPower;
	private: System::Windows::Forms::Button^ btnOpposite;







	private: System::Windows::Forms::Button^ btnMultiply;

	private: System::Windows::Forms::Button^ btn9;

	private: System::Windows::Forms::Button^ btn8;

	private: System::Windows::Forms::Button^ btn7;


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ lblWarning;









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
			this->btnNegate = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnDot = (gcnew System::Windows::Forms::Button());
			this->btnResult = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btnSum = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->BtnSubstraction = (gcnew System::Windows::Forms::Button());
			this->btnDeleteOne = (gcnew System::Windows::Forms::Button());
			this->btnCE = (gcnew System::Windows::Forms::Button());
			this->btnDivision = (gcnew System::Windows::Forms::Button());
			this->btnSqrt = (gcnew System::Windows::Forms::Button());
			this->btnPower = (gcnew System::Windows::Forms::Button());
			this->btnOpposite = (gcnew System::Windows::Forms::Button());
			this->btnMultiply = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->lblWarning = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnNegate
			// 
			this->btnNegate->BackColor = System::Drawing::Color::White;
			this->btnNegate->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnNegate->FlatAppearance->BorderColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnNegate->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnNegate->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnNegate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnNegate->Location = System::Drawing::Point(2, 405);
			this->btnNegate->Margin = System::Windows::Forms::Padding(0);
			this->btnNegate->Name = L"btnNegate";
			this->btnNegate->Size = System::Drawing::Size(84, 55);
			this->btnNegate->TabIndex = 0;
			this->btnNegate->Text = L"±\r\n";
			this->btnNegate->UseVisualStyleBackColor = false;
			this->btnNegate->Click += gcnew System::EventHandler(this, &MyForm::PlusMinus);
			// 
			// btn0
			// 
			this->btn0->BackColor = System::Drawing::Color::White;
			this->btn0->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btn0->FlatAppearance->BorderSize = 0;
			this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn0->Location = System::Drawing::Point(84, 405);
			this->btn0->Margin = System::Windows::Forms::Padding(0);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(84, 55);
			this->btn0->TabIndex = 1;
			this->btn0->Text = L"0";
			this->btn0->UseMnemonic = false;
			this->btn0->UseVisualStyleBackColor = false;
			this->btn0->Click += gcnew System::EventHandler(this, &MyForm::addNumber_Click);
			// 
			// btnDot
			// 
			this->btnDot->BackColor = System::Drawing::Color::White;
			this->btnDot->FlatAppearance->BorderSize = 0;
			this->btnDot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDot->Location = System::Drawing::Point(166, 405);
			this->btnDot->Margin = System::Windows::Forms::Padding(0);
			this->btnDot->Name = L"btnDot";
			this->btnDot->Size = System::Drawing::Size(84, 55);
			this->btnDot->TabIndex = 2;
			this->btnDot->Text = L",";
			this->btnDot->UseVisualStyleBackColor = false;
			this->btnDot->Click += gcnew System::EventHandler(this, &MyForm::EnterDot);
			// 
			// btnResult
			// 
			this->btnResult->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnResult->FlatAppearance->BorderSize = 0;
			this->btnResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnResult->Location = System::Drawing::Point(248, 405);
			this->btnResult->Margin = System::Windows::Forms::Padding(0);
			this->btnResult->Name = L"btnResult";
			this->btnResult->Size = System::Drawing::Size(84, 55);
			this->btnResult->TabIndex = 3;
			this->btnResult->Text = L"=";
			this->btnResult->UseVisualStyleBackColor = true;
			this->btnResult->Click += gcnew System::EventHandler(this, &MyForm::btnResult_Click);
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::Color::White;
			this->btn1->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn1->FlatAppearance->BorderSize = 0;
			this->btn1->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn1->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn1->Location = System::Drawing::Point(2, 352);
			this->btn1->Margin = System::Windows::Forms::Padding(0);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(84, 55);
			this->btn1->TabIndex = 4;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &MyForm::addNumber_Click);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::Color::White;
			this->btn2->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn2->FlatAppearance->BorderSize = 0;
			this->btn2->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn2->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn2->Location = System::Drawing::Point(84, 352);
			this->btn2->Margin = System::Windows::Forms::Padding(0);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(84, 55);
			this->btn2->TabIndex = 5;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &MyForm::addNumber_Click);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::Color::White;
			this->btn3->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn3->FlatAppearance->BorderSize = 0;
			this->btn3->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn3->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn3->Location = System::Drawing::Point(166, 352);
			this->btn3->Margin = System::Windows::Forms::Padding(0);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(84, 55);
			this->btn3->TabIndex = 6;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &MyForm::addNumber_Click);
			// 
			// btnSum
			// 
			this->btnSum->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnSum->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnSum->FlatAppearance->BorderSize = 0;
			this->btnSum->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnSum->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnSum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSum->Location = System::Drawing::Point(248, 352);
			this->btnSum->Margin = System::Windows::Forms::Padding(0);
			this->btnSum->Name = L"btnSum";
			this->btnSum->Size = System::Drawing::Size(84, 55);
			this->btnSum->TabIndex = 7;
			this->btnSum->Text = L"+";
			this->btnSum->UseVisualStyleBackColor = true;
			this->btnSum->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::Color::White;
			this->btn4->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn4->FlatAppearance->BorderSize = 0;
			this->btn4->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn4->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn4->Location = System::Drawing::Point(2, 299);
			this->btn4->Margin = System::Windows::Forms::Padding(0);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(84, 55);
			this->btn4->TabIndex = 8;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &MyForm::addNumber_Click);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::Color::White;
			this->btn5->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn5->FlatAppearance->BorderSize = 0;
			this->btn5->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn5->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn5->Location = System::Drawing::Point(84, 299);
			this->btn5->Margin = System::Windows::Forms::Padding(0);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(84, 55);
			this->btn5->TabIndex = 9;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &MyForm::addNumber_Click);
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::Color::White;
			this->btn6->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn6->FlatAppearance->BorderSize = 0;
			this->btn6->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn6->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn6->Location = System::Drawing::Point(166, 299);
			this->btn6->Margin = System::Windows::Forms::Padding(0);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(84, 55);
			this->btn6->TabIndex = 10;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &MyForm::addNumber_Click);
			// 
			// BtnSubstraction
			// 
			this->BtnSubstraction->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->BtnSubstraction->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlLightLight;
			this->BtnSubstraction->FlatAppearance->BorderSize = 0;
			this->BtnSubstraction->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ControlLightLight;
			this->BtnSubstraction->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlLightLight;
			this->BtnSubstraction->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->BtnSubstraction->Location = System::Drawing::Point(248, 299);
			this->BtnSubstraction->Margin = System::Windows::Forms::Padding(0);
			this->BtnSubstraction->Name = L"BtnSubstraction";
			this->BtnSubstraction->Size = System::Drawing::Size(84, 55);
			this->BtnSubstraction->TabIndex = 11;
			this->BtnSubstraction->Text = L"-";
			this->BtnSubstraction->UseVisualStyleBackColor = true;
			this->BtnSubstraction->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnDeleteOne
			// 
			this->btnDeleteOne->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnDeleteOne->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnDeleteOne->FlatAppearance->BorderSize = 0;
			this->btnDeleteOne->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnDeleteOne->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnDeleteOne->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDeleteOne->Location = System::Drawing::Point(166, 140);
			this->btnDeleteOne->Margin = System::Windows::Forms::Padding(0);
			this->btnDeleteOne->Name = L"btnDeleteOne";
			this->btnDeleteOne->Size = System::Drawing::Size(166, 55);
			this->btnDeleteOne->TabIndex = 23;
			this->btnDeleteOne->Text = L"delete";
			this->btnDeleteOne->UseVisualStyleBackColor = true;
			this->btnDeleteOne->Click += gcnew System::EventHandler(this, &MyForm::btnSpace);
			// 
			// btnCE
			// 
			this->btnCE->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnCE->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnCE->FlatAppearance->BorderSize = 0;
			this->btnCE->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnCE->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnCE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnCE->Location = System::Drawing::Point(2, 140);
			this->btnCE->Margin = System::Windows::Forms::Padding(0);
			this->btnCE->Name = L"btnCE";
			this->btnCE->Size = System::Drawing::Size(166, 55);
			this->btnCE->TabIndex = 21;
			this->btnCE->Text = L"CE";
			this->btnCE->UseVisualStyleBackColor = true;
			this->btnCE->Click += gcnew System::EventHandler(this, &MyForm::Dropping);
			// 
			// btnDivision
			// 
			this->btnDivision->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnDivision->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnDivision->FlatAppearance->BorderSize = 0;
			this->btnDivision->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnDivision->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnDivision->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDivision->Location = System::Drawing::Point(248, 193);
			this->btnDivision->Margin = System::Windows::Forms::Padding(0);
			this->btnDivision->Name = L"btnDivision";
			this->btnDivision->Size = System::Drawing::Size(84, 55);
			this->btnDivision->TabIndex = 19;
			this->btnDivision->Text = L"/";
			this->btnDivision->UseVisualStyleBackColor = true;
			this->btnDivision->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnSqrt
			// 
			this->btnSqrt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnSqrt->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnSqrt->FlatAppearance->BorderSize = 0;
			this->btnSqrt->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnSqrt->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnSqrt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSqrt->Location = System::Drawing::Point(166, 193);
			this->btnSqrt->Margin = System::Windows::Forms::Padding(0);
			this->btnSqrt->Name = L"btnSqrt";
			this->btnSqrt->Size = System::Drawing::Size(84, 55);
			this->btnSqrt->TabIndex = 18;
			this->btnSqrt->Text = L"sqrt";
			this->btnSqrt->UseVisualStyleBackColor = true;
			this->btnSqrt->Click += gcnew System::EventHandler(this, &MyForm::btnSqrt_Click);
			// 
			// btnPower
			// 
			this->btnPower->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnPower->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnPower->FlatAppearance->BorderSize = 0;
			this->btnPower->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnPower->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnPower->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnPower->Location = System::Drawing::Point(84, 193);
			this->btnPower->Margin = System::Windows::Forms::Padding(0);
			this->btnPower->Name = L"btnPower";
			this->btnPower->Size = System::Drawing::Size(84, 55);
			this->btnPower->TabIndex = 17;
			this->btnPower->Text = L"power";
			this->btnPower->UseVisualStyleBackColor = true;
			this->btnPower->Click += gcnew System::EventHandler(this, &MyForm::btnPower_Click);
			// 
			// btnOpposite
			// 
			this->btnOpposite->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnOpposite->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnOpposite->FlatAppearance->BorderSize = 0;
			this->btnOpposite->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnOpposite->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnOpposite->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnOpposite->Location = System::Drawing::Point(2, 193);
			this->btnOpposite->Margin = System::Windows::Forms::Padding(0);
			this->btnOpposite->Name = L"btnOpposite";
			this->btnOpposite->Size = System::Drawing::Size(84, 55);
			this->btnOpposite->TabIndex = 16;
			this->btnOpposite->Text = L"1/x";
			this->btnOpposite->UseVisualStyleBackColor = true;
			this->btnOpposite->Click += gcnew System::EventHandler(this, &MyForm::btnOpposite_Click);
			// 
			// btnMultiply
			// 
			this->btnMultiply->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnMultiply->FlatAppearance->BorderSize = 0;
			this->btnMultiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnMultiply->Location = System::Drawing::Point(248, 246);
			this->btnMultiply->Margin = System::Windows::Forms::Padding(0);
			this->btnMultiply->Name = L"btnMultiply";
			this->btnMultiply->Size = System::Drawing::Size(84, 55);
			this->btnMultiply->TabIndex = 15;
			this->btnMultiply->Text = L"*";
			this->btnMultiply->UseVisualStyleBackColor = true;
			this->btnMultiply->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::Color::White;
			this->btn9->FlatAppearance->BorderSize = 0;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn9->Location = System::Drawing::Point(166, 246);
			this->btn9->Margin = System::Windows::Forms::Padding(0);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(84, 55);
			this->btn9->TabIndex = 14;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &MyForm::addNumber_Click);
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::Color::White;
			this->btn8->FlatAppearance->BorderSize = 0;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn8->Location = System::Drawing::Point(84, 246);
			this->btn8->Margin = System::Windows::Forms::Padding(0);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(84, 55);
			this->btn8->TabIndex = 13;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &MyForm::addNumber_Click);
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::Color::White;
			this->btn7->FlatAppearance->BorderColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn7->FlatAppearance->BorderSize = 0;
			this->btn7->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn7->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn7->Location = System::Drawing::Point(2, 246);
			this->btn7->Margin = System::Windows::Forms::Padding(0);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(84, 55);
			this->btn7->TabIndex = 12;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &MyForm::addNumber_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Silver;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(12, 65);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(310, 29);
			this->textBox1->TabIndex = 26;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// lblWarning
			// 
			this->lblWarning->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblWarning->Location = System::Drawing::Point(2, 32);
			this->lblWarning->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblWarning->Name = L"lblWarning";
			this->lblWarning->Size = System::Drawing::Size(330, 20);
			this->lblWarning->TabIndex = 27;
			this->lblWarning->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(334, 461);
			this->Controls->Add(this->lblWarning);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->btnDeleteOne);
			this->Controls->Add(this->btnCE);
			this->Controls->Add(this->btnDivision);
			this->Controls->Add(this->btnSqrt);
			this->Controls->Add(this->btnPower);
			this->Controls->Add(this->btnOpposite);
			this->Controls->Add(this->btnMultiply);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->BtnSubstraction);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btnSum);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btnResult);
			this->Controls->Add(this->btnDot);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btnNegate);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	double Number, result, save;
	int input_length;
	String^ oper;
	String^ str_answer;
	double around = 10000000000.0;
	bool cleanNumber = false, swap = false, buttons_lock = false;

	private: System::Void swapping() {
		int temp = save;
		save = Number;
		Number = temp;
		swap = false;
	}
	
	private: System::Void lock_buttons() {
		btnMultiply->Enabled = false;
		btnOpposite->Enabled = false;
		btnSum->Enabled = false;
		btnDivision->Enabled = false;
		btnPower->Enabled = false;
		btnSqrt->Enabled = false;
		BtnSubstraction->Enabled = false;
		btnResult->Enabled = false;
		btnNegate->Enabled = false;
		btnDot->Enabled = false;
		btnDeleteOne->Enabled = false;
		buttons_lock = true;
	}

	private: System::Void UnlockAndClear() {
		btnMultiply->Enabled = true;
		btnOpposite->Enabled = true;
		btnSum->Enabled = true;
		btnDivision->Enabled = true;
		btnPower->Enabled = true;
		btnSqrt->Enabled = true;
		BtnSubstraction->Enabled = true;
		btnResult->Enabled = true;
		btnNegate->Enabled = true;
		btnDot->Enabled = true;
		btnDeleteOne->Enabled = true;

		lblWarning->Text = "";
		textBox1->Text = "0";
		Number = 0;
		save = 0;
		oper = "+";
		buttons_lock = false;
	}

	private: System::Void get_result() {
		str_answer = Convert::ToString(Number * Number); // переполнение при умножении и сложении
		if (str_answer->Length < 21) {
			if (oper == "+") {
				result = save + Number;
				textBox1->Text = Convert::ToString(result);
				Number = result;
			}
			if (oper == "-") {
				result = save - Number;
				textBox1->Text = Convert::ToString(result);
				Number = result;
			}
			if (oper == "*") {
				result = Number * save;
				textBox1->Text = Convert::ToString(result);
				Number = result;
			}
			if (oper == "/") {
				if (Number != 0) {
					result = save / Number;
					textBox1->Text = Convert::ToString(result);
					Number = result;
				}
				else {
					lblWarning->Text = "Деление на ноль невозможно";
					textBox1->Text = "";
					lock_buttons();
				}
			}
		}
		else {
			lblWarning->Text = "Превышено максимально допустимое значение числа";
			lock_buttons();
		}
	}
	private: System::Void addNumber_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ Numbers = safe_cast<Button^>(sender);
		lblWarning->Text = "";
		if (buttons_lock) {
			UnlockAndClear();
		}

		if (textBox1->Text->Length < 19) {
			if (textBox1->Text == "0" || cleanNumber) {
				textBox1->Text = Numbers->Text;
				cleanNumber = false;
			}
			else {
				textBox1->Text += Numbers->Text;
			}
		}
		else {
			lblWarning->Text = "Переполнение";
		}

		Number = Convert::ToDouble(textBox1->Text);
	}

	private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {
		Button^ NumbersOperator = safe_cast<Button^>(sender);
		lblWarning->Text = "";
		oper = NumbersOperator->Text;
		cleanNumber = true;
		swapping();
		save = Convert::ToDouble(textBox1->Text);

	}

	private: System::Void EnterDot(System::Object^ sender, System::EventArgs^ e) {
		lblWarning->Text = "";

		if (!textBox1->Text->Contains(",") ) {
			textBox1->Text += ",";
		}
	}

	private: System::Void btnResult_Click(System::Object^ sender, System::EventArgs^ e) {
		lblWarning->Text = "";
	
		get_result();
	}

	private: System::Void Dropping(System::Object^ sender, System::EventArgs^ e) {
		UnlockAndClear();
	}
	private: System::Void PlusMinus(System::Object^ sender, System::EventArgs^ e) {
		lblWarning->Text = "";

		if (textBox1->Text->Substring(0,1) == "-") {
			textBox1->Text = textBox1->Text->Remove(0, 1);
		}
		else if (!(textBox1->Text == "0" || textBox1->Text == "0,")) {
			textBox1->Text = "-" + textBox1->Text;
		}

		Number = Convert::ToDouble(textBox1->Text);
	}

	private: System::Void btnSpace(System::Object^ sender, System::EventArgs^ e) {
		lblWarning->Text = "";
		if (textBox1->Text->Length > 0) {
			input_length = textBox1->Text->Length;
			if (textBox1->Text->Contains("E")) {
				if (input_length > 5) {
					textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length - 5, 1);
				}
				else {
					textBox1->Text = "";
				}
			}
			else if (textBox1->Text->Contains("-") && input_length == 2) {
				textBox1->Text = "";
			}
			else {
				textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length - 1, 1);
			}
		}
		if (textBox1->Text == "") {
			textBox1->Text = "0";
		}
		Number = Convert::ToDouble(textBox1->Text);
	}
	private: System::Void btnOpposite_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text->Length > 0) {
			if (Number != 0) {
				result = 1 / Number;
				result = floor(result * around) / around;
				textBox1->Text = Convert::ToString(result);
				Number = result;
				lblWarning->Text = "";
			}
			else {
				lblWarning->Text = "Деление на ноль невозможно";
				textBox1->Text = "";
				lock_buttons();
			}
		}
		else {
			lblWarning->Text = "Введите число";
			textBox1->Text = "0";
		}
		
	}
	private: System::Void btnPower_Click(System::Object^ sender, System::EventArgs^ e) {
		input_length = textBox1->Text->Length;
		if (input_length > 0) {	
			result = floor(Number * Number * around) / around;
			str_answer = Convert::ToString(result);
			if (str_answer->Length > 20 ) {
				lblWarning->Text = "Превышено максимально допустимое значение числа";
				str_answer = Convert::ToString(floor(Number * around) / around);
				lock_buttons();
			}
			else if (str_answer->Contains("E") && (str_answer->Length > 3)) {
				oper = str_answer->Substring(str_answer->Length - 4, 1);
				if (oper == "-" || oper == "+") {
					lblWarning->Text = "Превышено максимально допустимое значение числа";
					str_answer = Convert::ToString(floor(Number * around) / around);
					lock_buttons();
				}
				else {
					Number = result;
					lblWarning->Text = "";
				}
			}
			else {
				Number = result;
				lblWarning->Text = "";
			}
			textBox1->Text = str_answer;
		}
		else {
			lblWarning->Text = "Введите число";
			textBox1->Text = "0";
		}	
	}
	private: System::Void btnSqrt_Click(System::Object^ sender, System::EventArgs^ e) {
		lblWarning->Text = "";

		if (textBox1->Text->Length > 0) {
			if (Number >= 0) {
				result = sqrt(Number);
				result = floor(result * around) / around;
				textBox1->Text = Convert::ToString(result);
				Number = result;
			}
			else {
				lblWarning->Text = "Введены невеные данные";
				textBox1->Text = "0";
			}
		}
		else {
			lblWarning->Text = "Введите число";
			textBox1->Text = "0";
		}
	}
};
}
