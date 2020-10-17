#pragma once
#include <cmath>
#include <math.h>
namespace calc_exp {

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
	private: System::Windows::Forms::Label^ lblHead;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ inputField;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ lblSum;

	private: System::Windows::Forms::Label^ lblCount;
	private: System::Windows::Forms::Label^ lblResult;



	private: System::Windows::Forms::Label^ lblEps;

	private: System::Windows::Forms::Label^ lblStartX;
	private: System::Windows::Forms::Button^ button2;


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
			this->lblHead = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->inputField = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->lblSum = (gcnew System::Windows::Forms::Label());
			this->lblCount = (gcnew System::Windows::Forms::Label());
			this->lblResult = (gcnew System::Windows::Forms::Label());
			this->lblEps = (gcnew System::Windows::Forms::Label());
			this->lblStartX = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// lblHead
			// 
			this->lblHead->AutoSize = true;
			this->lblHead->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblHead->Location = System::Drawing::Point(24, 22);
			this->lblHead->Name = L"lblHead";
			this->lblHead->Size = System::Drawing::Size(357, 25);
			this->lblHead->TabIndex = 0;
			this->lblHead->Text = L"exp(x) = 1 + x^1/1! + x^2/2! + x^3/3! + ...";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->inputField);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(12, 57);
			this->groupBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox1->Size = System::Drawing::Size(383, 100);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ввод значенияХ (-13 <= X <= 20)";
			// 
			// inputField
			// 
			this->inputField->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->inputField->Location = System::Drawing::Point(55, 44);
			this->inputField->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->inputField->Name = L"inputField";
			this->inputField->Size = System::Drawing::Size(305, 27);
			this->inputField->TabIndex = 2;
			this->inputField->Text = L"1";
			this->inputField->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->inputField->TextChanged += gcnew System::EventHandler(this, &MyForm::inputField_CheckedChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 47);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"x = ";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton5);
			this->groupBox2->Controls->Add(this->radioButton6);
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(12, 165);
			this->groupBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBox2->Size = System::Drawing::Size(383, 100);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Ввод точности";
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(251, 60);
			this->radioButton5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(97, 24);
			this->radioButton5->TabIndex = 5;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"0,000001";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::RBtn_CheckedChanged);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(251, 30);
			this->radioButton6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(88, 24);
			this->radioButton6->TabIndex = 4;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"0,00001";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &MyForm::RBtn_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(131, 60);
			this->radioButton4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(79, 24);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"0,0001";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::RBtn_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(131, 30);
			this->radioButton3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(70, 24);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"0,001";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::RBtn_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(16, 60);
			this->radioButton2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(61, 24);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"0,01";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::RBtn_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(16, 30);
			this->radioButton1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(52, 24);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"0,1";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::RBtn_CheckedChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 274);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(383, 31);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Расчет exp(x)";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(0, 315);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(408, 23);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Результаты расчета";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(24, 350);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(162, 18);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Исходное значение = ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(24, 375);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(91, 18);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Точность = ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(24, 425);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(132, 18);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Число слагаемых";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(24, 400);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(188, 18);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Точное значение exp(x) = ";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(24, 450);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(154, 18);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Сумма ряда exp(x) = ";
			// 
			// lblSum
			// 
			this->lblSum->AutoSize = true;
			this->lblSum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblSum->Location = System::Drawing::Point(235, 450);
			this->lblSum->Name = L"lblSum";
			this->lblSum->Size = System::Drawing::Size(16, 18);
			this->lblSum->TabIndex = 14;
			this->lblSum->Text = L"1";
			// 
			// lblCount
			// 
			this->lblCount->AutoSize = true;
			this->lblCount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblCount->Location = System::Drawing::Point(235, 425);
			this->lblCount->Name = L"lblCount";
			this->lblCount->Size = System::Drawing::Size(16, 18);
			this->lblCount->TabIndex = 13;
			this->lblCount->Text = L"1";
			// 
			// lblResult
			// 
			this->lblResult->AutoSize = true;
			this->lblResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblResult->Location = System::Drawing::Point(235, 400);
			this->lblResult->Name = L"lblResult";
			this->lblResult->Size = System::Drawing::Size(16, 18);
			this->lblResult->TabIndex = 12;
			this->lblResult->Text = L"1";
			// 
			// lblEps
			// 
			this->lblEps->AutoSize = true;
			this->lblEps->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblEps->Location = System::Drawing::Point(235, 375);
			this->lblEps->Name = L"lblEps";
			this->lblEps->Size = System::Drawing::Size(28, 18);
			this->lblEps->TabIndex = 11;
			this->lblEps->Text = L"0.1";
			// 
			// lblStartX
			// 
			this->lblStartX->AutoSize = true;
			this->lblStartX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblStartX->Location = System::Drawing::Point(235, 350);
			this->lblStartX->Name = L"lblStartX";
			this->lblStartX->Size = System::Drawing::Size(16, 18);
			this->lblStartX->TabIndex = 10;
			this->lblStartX->Text = L"1";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(263, 491);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 28);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Закрыть";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(407, 534);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->lblSum);
			this->Controls->Add(this->lblCount);
			this->Controls->Add(this->lblResult);
			this->Controls->Add(this->lblEps);
			this->Controls->Add(this->lblStartX);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->lblHead);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Расчет экспоненты";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	double inputNumber, eps = 0.1, summa, result, newNumber, factorial, round;
	bool invalidInput = false;
	int countSum;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		invalidInput = false;
		try {
			inputNumber = Convert::ToDouble(inputField->Text);
			if (inputNumber < -13 || inputNumber > 20) {
				throw - 1;
			}
		}
		catch (...) {
			System::Windows::Forms::DialogResult result = MessageBox::Show("Неверное значение x", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			invalidInput = true;
		}
		if (!invalidInput) {
			result = exp(inputNumber);
			countSum = 1;
			factorial = 1;
			newNumber = 1;
			summa = 0;
			while (abs(result - summa) > eps/10) {

				summa += newNumber;
				newNumber = pow(inputNumber, countSum) / factorial;
				countSum += 1;
				factorial *= countSum;

			}
			round = 1 / eps ;
			summa = floor((summa * round) + 0.5) / round;
			result = floor(result * round) / round;
			lblResult->Text = Convert::ToString(result);
			lblStartX->Text = Convert::ToString(inputNumber);
			lblCount->Text = Convert::ToString(countSum);
			lblSum->Text = Convert::ToString(summa);
			/*String^ summa_string = Convert::ToString(summa);
			String^ result_string = Convert::ToString(result);
			for (int i = 0; i <= Convert::ToString(eps)->Length; i++) {
				if (i > summa_string->Length) 
					summa_string += '0';
				
			}
			lblStartX->Text = Convert::ToString(inputNumber);
			lblResult->Text = result_string->Substring(0, result_string->Length - 1);
			int sslen = result_string->Length;
			int roundnumber = Convert::ToInt32(summa_string[sslen - 3]);
			String^ fixnumber;
			if (summa_string[sslen - 1] > 4) {
				fixnumber  = Convert::ToString(roundnumber + 1);
			}
			else {
				fixnumber = Convert::ToString(roundnumber);
			}
			summa_string = summa_string->Substring(0, sslen) + fixnumber;
			if (inputNumber == 0) {
				lblHead->Text = "exp(x) = 1 + x/1!";
			}
			lblCount->Text = Convert::ToString(countSum);
			lblSum->Text = summa_string;
			*/
		}
	}
	private: System::Void RBtn_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		RadioButton^ Eps = safe_cast<RadioButton^>(sender);
		eps = Convert::ToDouble(Eps->Text);
		lblEps->Text = Eps->Text;
		lblResult->Text = "...";
		lblCount->Text = "...";
		lblSum->Text = "...";
	}
	private: System::Void inputField_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		lblStartX->Text = "...";
		lblResult->Text = "...";
		lblCount->Text = "...";
		lblSum->Text = "...";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
