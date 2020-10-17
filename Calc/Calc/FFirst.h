#pragma once
#include <math.h>
namespace Calc {

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
	private: System::Windows::Forms::Button^ btnClose;
	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnSubstract;
	private: System::Windows::Forms::Button^ btnMultiply;
	private: System::Windows::Forms::Button^ btnDivide;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ labelResult;

	private: System::Windows::Forms::TextBox^ txt1;
	private: System::Windows::Forms::TextBox^ txt2;
	private: System::Windows::Forms::TextBox^ txtResult;
	private: System::Windows::Forms::Label^ lblOper;
	private: System::Windows::Forms::Label^ lblCallback;


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
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnSubstract = (gcnew System::Windows::Forms::Button());
			this->btnMultiply = (gcnew System::Windows::Forms::Button());
			this->btnDivide = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->labelResult = (gcnew System::Windows::Forms::Label());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->txt2 = (gcnew System::Windows::Forms::TextBox());
			this->txtResult = (gcnew System::Windows::Forms::TextBox());
			this->lblOper = (gcnew System::Windows::Forms::Label());
			this->lblCallback = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnClose
			// 
			this->btnClose->Location = System::Drawing::Point(320, 228);
			this->btnClose->Margin = System::Windows::Forms::Padding(4);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(133, 37);
			this->btnClose->TabIndex = 0;
			this->btnClose->Text = L"Закрыть";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &MyForm::btnClose_Click);
			// 
			// btnReset
			// 
			this->btnReset->Location = System::Drawing::Point(320, 185);
			this->btnReset->Margin = System::Windows::Forms::Padding(4);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(133, 37);
			this->btnReset->TabIndex = 1;
			this->btnReset->Text = L"Сброс";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::btnReset_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(320, 12);
			this->btnAdd->Margin = System::Windows::Forms::Padding(4);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(133, 37);
			this->btnAdd->TabIndex = 2;
			this->btnAdd->Text = L"Сложить";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::btnAdd_Click);
			// 
			// btnSubstract
			// 
			this->btnSubstract->Location = System::Drawing::Point(320, 55);
			this->btnSubstract->Margin = System::Windows::Forms::Padding(4);
			this->btnSubstract->Name = L"btnSubstract";
			this->btnSubstract->Size = System::Drawing::Size(133, 37);
			this->btnSubstract->TabIndex = 3;
			this->btnSubstract->Text = L"Вычесть";
			this->btnSubstract->UseVisualStyleBackColor = true;
			this->btnSubstract->Click += gcnew System::EventHandler(this, &MyForm::btnSubstract_Click);
			// 
			// btnMultiply
			// 
			this->btnMultiply->Location = System::Drawing::Point(320, 98);
			this->btnMultiply->Margin = System::Windows::Forms::Padding(4);
			this->btnMultiply->Name = L"btnMultiply";
			this->btnMultiply->Size = System::Drawing::Size(133, 37);
			this->btnMultiply->TabIndex = 4;
			this->btnMultiply->Text = L"Умножить";
			this->btnMultiply->UseVisualStyleBackColor = true;
			this->btnMultiply->Click += gcnew System::EventHandler(this, &MyForm::btnMultiply_Click);
			// 
			// btnDivide
			// 
			this->btnDivide->Location = System::Drawing::Point(320, 142);
			this->btnDivide->Margin = System::Windows::Forms::Padding(4);
			this->btnDivide->Name = L"btnDivide";
			this->btnDivide->Size = System::Drawing::Size(133, 37);
			this->btnDivide->TabIndex = 5;
			this->btnDivide->Text = L"Разделить";
			this->btnDivide->UseVisualStyleBackColor = true;
			this->btnDivide->Click += gcnew System::EventHandler(this, &MyForm::btnDivide_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 74);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 17);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Первое число:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 111);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(103, 17);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Второе число:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelResult
			// 
			this->labelResult->AutoSize = true;
			this->labelResult->Location = System::Drawing::Point(13, 148);
			this->labelResult->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelResult->Name = L"labelResult";
			this->labelResult->Size = System::Drawing::Size(80, 17);
			this->labelResult->TabIndex = 8;
			this->labelResult->Text = L"Результат:";
			this->labelResult->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt1
			// 
			this->txt1->Location = System::Drawing::Point(129, 74);
			this->txt1->Margin = System::Windows::Forms::Padding(4);
			this->txt1->MaxLength = 13;
			this->txt1->Name = L"txt1";
			this->txt1->Size = System::Drawing::Size(160, 22);
			this->txt1->TabIndex = 9;
			this->txt1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txt2
			// 
			this->txt2->Location = System::Drawing::Point(129, 111);
			this->txt2->Margin = System::Windows::Forms::Padding(4);
			this->txt2->MaxLength = 13;
			this->txt2->Name = L"txt2";
			this->txt2->Size = System::Drawing::Size(160, 22);
			this->txt2->TabIndex = 10;
			this->txt2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtResult
			// 
			this->txtResult->BackColor = System::Drawing::Color::White;
			this->txtResult->Location = System::Drawing::Point(129, 148);
			this->txtResult->Margin = System::Windows::Forms::Padding(4);
			this->txtResult->MaxLength = 13;
			this->txtResult->Name = L"txtResult";
			this->txtResult->ReadOnly = true;
			this->txtResult->Size = System::Drawing::Size(160, 22);
			this->txtResult->TabIndex = 11;
			this->txtResult->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// lblOper
			// 
			this->lblOper->AutoSize = true;
			this->lblOper->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblOper->Location = System::Drawing::Point(13, 12);
			this->lblOper->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblOper->Name = L"lblOper";
			this->lblOper->Size = System::Drawing::Size(0, 20);
			this->lblOper->TabIndex = 12;
			this->lblOper->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblCallback
			// 
			this->lblCallback->AutoSize = true;
			this->lblCallback->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblCallback->Location = System::Drawing::Point(13, 185);
			this->lblCallback->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblCallback->Name = L"lblCallback";
			this->lblCallback->Size = System::Drawing::Size(0, 17);
			this->lblCallback->TabIndex = 13;
			this->lblCallback->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(459, 272);
			this->Controls->Add(this->lblCallback);
			this->Controls->Add(this->lblOper);
			this->Controls->Add(this->txtResult);
			this->Controls->Add(this->txt2);
			this->Controls->Add(this->txt1);
			this->Controls->Add(this->labelResult);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnDivide);
			this->Controls->Add(this->btnMultiply);
			this->Controls->Add(this->btnSubstract);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->btnClose);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	double firstNumber, secondNumber, answer;
	// перевод введенных данных из строки в числовой тип
	private: bool convertToDouble() {
		bool isRightInput = true;
		try {
			firstNumber = Convert::ToDouble(txt1->Text);
			secondNumber = Convert::ToDouble(txt2->Text);
		}
		catch (...) {
			isRightInput = false;
		}
		return isRightInput;
	}
	// обработчик кнопки Закрыть
	private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: void misstake() {
		if (txt1->Text == "" || txt2->Text == "")
			this->lblCallback->Text = L"Пустое поле - введите число";
		else
			this->lblCallback->Text = L"Неверный ввод";
		this->txtResult->Text = "";
	}
	// обработчик кнопки Сложение
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		this->lblOper->Text = L"Сложение";
		if (convertToDouble()) { 
			answer = firstNumber + secondNumber;
			this->txtResult->Text = Convert::ToString(answer);
			this->lblCallback->Text = L"";
		}
		else {
			misstake();
		}
		
	}
	// обработчик кнопки Вычитание
	private: System::Void btnSubstract_Click(System::Object^ sender, System::EventArgs^ e) {
		this->lblOper->Text = L"Вычитание";
		if (convertToDouble()) {
			answer = firstNumber - secondNumber;
			this->txtResult->Text = Convert::ToString(answer);
			this->lblCallback->Text = L"";
		}
		else {
			misstake();
		}
	}
	// обработчик кнопки Умножение
	private: System::Void btnMultiply_Click(System::Object^ sender, System::EventArgs^ e) {
		this->lblOper->Text = L"Умножение";
		if (convertToDouble()) {
			answer = firstNumber * secondNumber;
			this->txtResult->Text = Convert::ToString(answer);
			this->lblCallback->Text = L"";
		}
		else {
			misstake();
		}
	}
	// обработчик кнопки Деление
	private: System::Void btnDivide_Click(System::Object^ sender, System::EventArgs^ e) {
		this->lblOper->Text = L"Деление";
		convertToDouble();

		if (convertToDouble()) {
			if (secondNumber == 0) {
				this->lblCallback->Text = L"На ноль делить нельзя";
				this->txtResult->Text = "";
			}
			else {
				answer = floor(firstNumber / secondNumber * 1000)/1000;
				this->txtResult->Text = Convert::ToString(answer);
				this->lblCallback->Text = L"";
			}
		}
		else {
			misstake();
		}
		
	}
	// обработчик кнопки Сброс
	private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
		this->lblOper->Text = L"";
		this->txt1->Text = L"";
		this->txt2->Text = L"";
		this->txtResult->Text = L"";
		this->lblCallback->Text = L"";
		String^ alfavit = "1234567890.,";
		String^ input = txt1->Text;
		for (int i = 0; i < input->Length; i++) {
			if (!alfavit->IndexOf(input[i] > 0)) {
				lblCallback->Text = "Неверный ввод";
				break;
			}
		}
	}
		   
};
}
