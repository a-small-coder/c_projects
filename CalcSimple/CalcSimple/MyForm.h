#pragma once

namespace CalcSimple {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnClose;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::Label^ lblOper;
	private: System::Windows::Forms::Label^ lbl1;
	private: System::Windows::Forms::Label^ lbl2;
	private: System::Windows::Forms::Label^ lblResult;
	private: System::Windows::Forms::TextBox^ txt1;
	private: System::Windows::Forms::TextBox^ txt2;
	private: System::Windows::Forms::TextBox^ txtResult;
	private: System::Windows::Forms::Button^ btnSplit;
	private: System::Windows::Forms::Button^ btnMultiply;
	private: System::Windows::Forms::Button^ btnSubtract;
	private: System::Windows::Forms::Label^ Result;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->lblOper = (gcnew System::Windows::Forms::Label());
			this->lbl1 = (gcnew System::Windows::Forms::Label());
			this->lbl2 = (gcnew System::Windows::Forms::Label());
			this->lblResult = (gcnew System::Windows::Forms::Label());
			this->txt1 = (gcnew System::Windows::Forms::TextBox());
			this->txt2 = (gcnew System::Windows::Forms::TextBox());
			this->txtResult = (gcnew System::Windows::Forms::TextBox());
			this->btnSplit = (gcnew System::Windows::Forms::Button());
			this->btnMultiply = (gcnew System::Windows::Forms::Button());
			this->btnSubtract = (gcnew System::Windows::Forms::Button());
			this->Result = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// btnClose
			// 
			this->btnClose->Location = System::Drawing::Point(249, 185);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(100, 30);
			this->btnClose->TabIndex = 0;
			this->btnClose->Text = L"Закрыть";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &MyForm::btnClose_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(249, 6);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(100, 30);
			this->btnAdd->TabIndex = 1;
			this->btnAdd->Text = L"Сложить";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::btnAdd_Click);
			// 
			// btnReset
			// 
			this->btnReset->Location = System::Drawing::Point(249, 149);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(100, 30);
			this->btnReset->TabIndex = 2;
			this->btnReset->Text = L"Сброс";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::btnReset_Click);
			// 
			// lblOper
			// 
			this->lblOper->AutoSize = true;
			this->lblOper->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblOper->Location = System::Drawing::Point(110, 10);
			this->lblOper->Name = L"lblOper";
			this->lblOper->Size = System::Drawing::Size(0, 20);
			this->lblOper->TabIndex = 3;
			this->lblOper->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbl1
			// 
			this->lbl1->AutoSize = true;
			this->lbl1->Location = System::Drawing::Point(10, 60);
			this->lbl1->Name = L"lbl1";
			this->lbl1->Size = System::Drawing::Size(61, 17);
			this->lbl1->TabIndex = 4;
			this->lbl1->Text = L"Первое ";
			this->lbl1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lbl2
			// 
			this->lbl2->AutoSize = true;
			this->lbl2->Location = System::Drawing::Point(10, 90);
			this->lbl2->Name = L"lbl2";
			this->lbl2->Size = System::Drawing::Size(103, 17);
			this->lbl2->TabIndex = 5;
			this->lbl2->Text = L"Второе число:";
			this->lbl2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lblResult
			// 
			this->lblResult->AutoSize = true;
			this->lblResult->Location = System::Drawing::Point(10, 120);
			this->lblResult->Name = L"lblResult";
			this->lblResult->Size = System::Drawing::Size(80, 17);
			this->lblResult->TabIndex = 6;
			this->lblResult->Text = L"Результат:";
			this->lblResult->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// txt1
			// 
			this->txt1->Location = System::Drawing::Point(110, 60);
			this->txt1->Name = L"txt1";
			this->txt1->Size = System::Drawing::Size(90, 22);
			this->txt1->TabIndex = 7;
			this->txt1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txt2
			// 
			this->txt2->Location = System::Drawing::Point(110, 90);
			this->txt2->Name = L"txt2";
			this->txt2->Size = System::Drawing::Size(90, 22);
			this->txt2->TabIndex = 8;
			this->txt2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtResult
			// 
			this->txtResult->Location = System::Drawing::Point(110, 120);
			this->txtResult->Name = L"txtResult";
			this->txtResult->ReadOnly = true;
			this->txtResult->Size = System::Drawing::Size(90, 22);
			this->txtResult->TabIndex = 9;
			this->txtResult->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtResult->TextChanged += gcnew System::EventHandler(this, &MyForm::txtResult_TextChanged);
			// 
			// btnSplit
			// 
			this->btnSplit->Location = System::Drawing::Point(249, 113);
			this->btnSplit->Name = L"btnSplit";
			this->btnSplit->Size = System::Drawing::Size(100, 30);
			this->btnSplit->TabIndex = 10;
			this->btnSplit->Text = L"Разделить";
			this->btnSplit->UseVisualStyleBackColor = true;
			this->btnSplit->Click += gcnew System::EventHandler(this, &MyForm::btnSplit_Click);
			// 
			// btnMultiply
			// 
			this->btnMultiply->Location = System::Drawing::Point(249, 77);
			this->btnMultiply->Name = L"btnMultiply";
			this->btnMultiply->Size = System::Drawing::Size(100, 30);
			this->btnMultiply->TabIndex = 11;
			this->btnMultiply->Text = L"Умножить";
			this->btnMultiply->UseVisualStyleBackColor = true;
			this->btnMultiply->Click += gcnew System::EventHandler(this, &MyForm::btnMultiply_Click);
			// 
			// btnSubtract
			// 
			this->btnSubtract->Location = System::Drawing::Point(249, 42);
			this->btnSubtract->Name = L"btnSubtract";
			this->btnSubtract->Size = System::Drawing::Size(100, 30);
			this->btnSubtract->TabIndex = 12;
			this->btnSubtract->Text = L"Вычесть";
			this->btnSubtract->UseVisualStyleBackColor = true;
			this->btnSubtract->Click += gcnew System::EventHandler(this, &MyForm::btnSubtract_Click);
			// 
			// Result
			// 
			this->Result->AutoSize = true;
			this->Result->Location = System::Drawing::Point(16, 168);
			this->Result->Name = L"Result";
			this->Result->Size = System::Drawing::Size(0, 17);
			this->Result->TabIndex = 13;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(361, 213);
			this->Controls->Add(this->Result);
			this->Controls->Add(this->btnSubtract);
			this->Controls->Add(this->btnMultiply);
			this->Controls->Add(this->btnSplit);
			this->Controls->Add(this->txtResult);
			this->Controls->Add(this->txt2);
			this->Controls->Add(this->txt1);
			this->Controls->Add(this->lblResult);
			this->Controls->Add(this->lbl2);
			this->Controls->Add(this->lbl1);
			this->Controls->Add(this->lblOper);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnClose);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Calc";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->txtResult->Text = L"";
		this->Result->Text = L"";
	}
	private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txtResult->Text = L"";
		this->Result->Text = L"";
		try {
			double i1, i2, i3;
			this->lblOper->Text = L"Сложение";
			i1 = Convert::ToDouble(txt1->Text);
			i2 = Convert::ToDouble(txt2->Text);
			i3 = i1 + i2;
			this->txtResult->Text = Convert::ToString(i3);
		}
		catch (...)
		{
			this->txtResult->Text = L"";
			this->Result->Text = L"Данные введены неверно";
		}

	}
	private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
		this->lblOper->Text = L"";
		this->txt1->Text = L"";
		this->txt2->Text = L"";
		this->txtResult->Text = L"";
		this->Result->Text = L"";
	}
	private: System::Void btnSplit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txtResult->Text = L"";
		this->Result->Text = L"";
		try {
			double i1, i2, i3;
			this->Result->Text = L"";
			this->lblOper->Text = L"Деление";
			i1 = Convert::ToDouble(txt1->Text);
			i2 = Convert::ToDouble(txt2->Text);
			if (i2 == 0) {
				this->Result->Text = L"На ноль делить нельзя";
				this->txtResult->Text = L"";
			}
			else {
				i3 = i1 / i2;
				this->txtResult->Text = Convert::ToString(i3);
			}

		}
		catch (...)
		{
			this->txtResult->Text = L"";
			this->Result->Text = L"Данные введены неверно";
		}
	}
	private: System::Void btnMultiply_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txtResult->Text = L"";
		this->Result->Text = L"";
		try {
			double i1, i2, i3;
			this->Result->Text = L"";
			this->lblOper->Text = L"Умножение";
			i1 = Convert::ToDouble(txt1->Text);
			i2 = Convert::ToDouble(txt2->Text);
			i3 = i1 * i2;
			this->txtResult->Text = Convert::ToString(i3);
		}
		catch (...)
		{
			this->txtResult->Text = L"";
			this->Result->Text = L"Данные введены неверно";
		}
	}
	private: System::Void btnSubtract_Click(System::Object^ sender, System::EventArgs^ e) {
		this->txtResult->Text = L"";
		this->Result->Text = L"";
		try {
			double i1, i2, i3;
			this->Result->Text = L"";
			this->lblOper->Text = L"Вычитание";
			i1 = Convert::ToDouble(txt1->Text);
			i2 = Convert::ToDouble(txt2->Text);
			i3 = i1 - i2;
			this->txtResult->Text = Convert::ToString(i3);
		}
		catch (...)
		{
			this->txtResult->Text = L"";
			this->Result->Text = L"Данные введены неверно";
		}
	}
	private: System::Void txtResult_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
