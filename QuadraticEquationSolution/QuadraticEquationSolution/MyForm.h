#pragma once
#include <cmath>
namespace QuadraticEquationSolution {

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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txta;
	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtb;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtc;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtx1;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtx2;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ lblDescription;

	private: System::Windows::Forms::Button^ btnReset;
	private: System::Windows::Forms::Button^ btnSolution;
	private: System::Windows::Forms::Button^ btnClose;





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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txta = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtb = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtc = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtx1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtx2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->lblDescription = (gcnew System::Windows::Forms::Label());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->btnSolution = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(29, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(151, 55);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Коэффициенты уравнения";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txta
			// 
			this->txta->BackColor = System::Drawing::Color::LightGray;
			this->txta->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txta->Location = System::Drawing::Point(60, 90);
			this->txta->Name = L"txta";
			this->txta->Size = System::Drawing::Size(120, 22);
			this->txta->TabIndex = 1;
			this->txta->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(25, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"a =";
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(25, 140);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"b =";
			// 
			// txtb
			// 
			this->txtb->BackColor = System::Drawing::Color::LightGray;
			this->txtb->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtb->Location = System::Drawing::Point(60, 140);
			this->txtb->Name = L"txtb";
			this->txtb->Size = System::Drawing::Size(120, 22);
			this->txtb->TabIndex = 3;
			this->txtb->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(25, 190);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"c =";
			// 
			// txtc
			// 
			this->txtc->BackColor = System::Drawing::Color::LightGray;
			this->txtc->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtc->Location = System::Drawing::Point(60, 190);
			this->txtc->Name = L"txtc";
			this->txtc->Size = System::Drawing::Size(120, 22);
			this->txtc->TabIndex = 5;
			this->txtc->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::Black;
			this->label5->Location = System::Drawing::Point(215, 90);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(50, 25);
			this->label5->TabIndex = 8;
			this->label5->Text = L"x1 =";
			// 
			// txtx1
			// 
			this->txtx1->BackColor = System::Drawing::Color::LightGray;
			this->txtx1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtx1->Location = System::Drawing::Point(255, 90);
			this->txtx1->Name = L"txtx1";
			this->txtx1->ReadOnly = true;
			this->txtx1->Size = System::Drawing::Size(120, 22);
			this->txtx1->TabIndex = 7;
			this->txtx1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::Black;
			this->label6->Location = System::Drawing::Point(410, 90);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(50, 25);
			this->label6->TabIndex = 10;
			this->label6->Text = L"x2 =";
			// 
			// txtx2
			// 
			this->txtx2->BackColor = System::Drawing::Color::LightGray;
			this->txtx2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtx2->Location = System::Drawing::Point(450, 90);
			this->txtx2->Name = L"txtx2";
			this->txtx2->ReadOnly = true;
			this->txtx2->Size = System::Drawing::Size(120, 22);
			this->txtx2->TabIndex = 9;
			this->txtx2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(219, 44);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(351, 26);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Корни уравнения";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblDescription
			// 
			this->lblDescription->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblDescription->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->lblDescription->Location = System::Drawing::Point(236, 140);
			this->lblDescription->Name = L"lblDescription";
			this->lblDescription->Size = System::Drawing::Size(335, 72);
			this->lblDescription->TabIndex = 12;
			this->lblDescription->Text = L"Введите значения коэффицентов и нажмите кнопку \"Решить\"\r\n";
			// 
			// btnReset
			// 
			this->btnReset->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnReset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnReset->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnReset->Location = System::Drawing::Point(60, 231);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(120, 40);
			this->btnReset->TabIndex = 13;
			this->btnReset->Text = L"Сброс";
			this->btnReset->UseVisualStyleBackColor = false;
			this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::btnReset_Click);
			// 
			// btnSolution
			// 
			this->btnSolution->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnSolution->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSolution->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnSolution->Location = System::Drawing::Point(255, 231);
			this->btnSolution->Name = L"btnSolution";
			this->btnSolution->Size = System::Drawing::Size(120, 40);
			this->btnSolution->TabIndex = 14;
			this->btnSolution->Text = L"Решить";
			this->btnSolution->UseVisualStyleBackColor = false;
			this->btnSolution->Click += gcnew System::EventHandler(this, &MyForm::btnSolution_Click);
			// 
			// btnClose
			// 
			this->btnClose->BackColor = System::Drawing::Color::WhiteSmoke;
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnClose->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnClose->Location = System::Drawing::Point(450, 231);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(120, 40);
			this->btnClose->TabIndex = 15;
			this->btnClose->Text = L"Закрыть";
			this->btnClose->UseVisualStyleBackColor = false;
			this->btnClose->Click += gcnew System::EventHandler(this, &MyForm::btnClose_Click);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::LightGray;
			this->ClientSize = System::Drawing::Size(584, 281);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->btnSolution);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->lblDescription);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->txtx2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->txtx1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtc);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtb);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txta);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Решение квадратного уравнения";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	double a, b, c, x1, x2, D;
	bool is_a = false, is_b = false, is_c = false;
	private: bool convertToDouble(String^ s1, String^ s2, String^ s3) {
		bool isRightInput = true;
		try {
			a = Convert::ToDouble(s1);
			b = Convert::ToDouble(s2);
			c = Convert::ToDouble(s3);
		}
		catch (...) {
			isRightInput = false;
		}	
		return isRightInput;
	}

	private: System::Void btnSolution_Click(System::Object^ sender, System::EventArgs^ e) {
		if (convertToDouble(txta->Text, txtb->Text, txtc->Text)) {
			if (a != 0) {
				if (c == 0) {
					x1 = 0;
					x2 = floor(-b/a * 10000) / 10000;
					if (x1 == x2) {
						txtx1->Text = Convert::ToString(x1);
						lblDescription->Text = "c и b равны 0 - уравнение имеет единственный корень.";
					}
					else {
						txtx1->Text = Convert::ToString(x1);
						txtx2->Text = Convert::ToString(x2);
						lblDescription->Text = "Свободный коэффициент равен 0 - уравнение имеет два корня.";
					}			
				}
				else {
					D = b * b - 4 * a * c;
					if (D > 0) {
						x1 = (-1 * b + sqrt(D)) / (2 * a);
						x2 = (-1 * b - sqrt(D)) / (2 * a);
						txtx1->Text = Convert::ToString(x1);
						txtx2->Text = Convert::ToString(x2);
						lblDescription->Text = "Дискриминант больше 0. Уравнение имеет два корня.";
					}
					else if (D == 0) {
						x1 = (-1 * b) / (2 * a);
						txtx1->Text = Convert::ToString(x1);
						txtx2->Text = txtx1->Text;
						lblDescription->Text = "Дискриминант равен 0. Уравнение имеет два одинаковых корня.";
					}
					else {
						txtx1->Text = "";
						txtx2->Text = "";
						lblDescription->Text = "Дискриминант меньше 0. Уравнение не имеет действительных корней.";
					}
				}
				
			}
			else if (b != 0){
				x1 = -1 * c / b;
				txtx1->Text = Convert::ToString(x1);
				txtx2->Text = "";
				lblDescription->Text = "Коэфициент а равен 0. Уравнение сводится к линейному и имеет один корень.";
			}
			else if (b == 0 && c != 0) {
				txtx1->Text = "";
				txtx2->Text = "";
				lblDescription->Text = "Коэфициенты а и b равны 0. Тождество неверно";
			}
			else if (b == 0 && c == 0) {
				txtx1->Text = "";
				txtx2->Text = "";
				lblDescription->Text = "Все коэфициенты равны 0. Тождество верно";
			}
			
		}
		else {
			txtx1->Text = "";
			txtx2->Text = "";
			lblDescription->Text = "Ошибка. Введите числовые значения коэфицентов";
		}
	}

	private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
		txta->Text = "";
		txtb->Text = "";
		txtc->Text = "";
		txtx1->Text = "";
		txtx2->Text = "";
		lblDescription->Text = "Введите значения коэффицентов и нажмите кнопку \"Решить\" ";
	}

	private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

};
}
