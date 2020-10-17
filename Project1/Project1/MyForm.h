#pragma once
#include <cmath>
namespace Project2 {

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
	protected:

	private: System::Windows::Forms::Button^ btnSbros;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ comments;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ btnReshit;

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
			this->btnSbros = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->comments = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->btnReshit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnClose
			// 
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnClose->Location = System::Drawing::Point(362, 201);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(100, 40);
			this->btnClose->TabIndex = 0;
			this->btnClose->Text = L"Закрыть";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &MyForm::btnClose_Click);
			// 
			// btnSbros
			// 
			this->btnSbros->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSbros->Location = System::Drawing::Point(53, 201);
			this->btnSbros->Name = L"btnSbros";
			this->btnSbros->Size = System::Drawing::Size(100, 40);
			this->btnSbros->TabIndex = 2;
			this->btnSbros->Text = L"Сброс";
			this->btnSbros->UseVisualStyleBackColor = true;
			this->btnSbros->Click += gcnew System::EventHandler(this, &MyForm::btnSbros_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(40, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(123, 17);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Коэффициенты";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(50, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"уравнения";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(272, 35);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(138, 17);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Корни уравнения";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(21, 78);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(26, 17);
			this->label4->TabIndex = 6;
			this->label4->Text = L"a=";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(21, 114);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(26, 17);
			this->label5->TabIndex = 7;
			this->label5->Text = L"b=";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(21, 148);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(25, 17);
			this->label6->TabIndex = 8;
			this->label6->Text = L"c=";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(53, 78);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 9;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(53, 114);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 10;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(53, 148);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 11;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(169, 78);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(33, 17);
			this->label7->TabIndex = 12;
			this->label7->Text = L"x1=";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(208, 78);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 13;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(323, 78);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(33, 17);
			this->label8->TabIndex = 14;
			this->label8->Text = L"x2=";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(362, 75);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 15;
			// 
			// comments
			// 
			this->comments->AutoSize = true;
			this->comments->Location = System::Drawing::Point(169, 117);
			this->comments->Name = L"comments";
			this->comments->Size = System::Drawing::Size(0, 17);
			this->comments->TabIndex = 16;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(180, 122);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(46, 17);
			this->label9->TabIndex = 17;
			this->label9->Text = L"label9";
			// 
			// btnReshit
			// 
			this->btnReshit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnReshit->Location = System::Drawing::Point(208, 201);
			this->btnReshit->Name = L"btnReshit";
			this->btnReshit->Size = System::Drawing::Size(100, 40);
			this->btnReshit->TabIndex = 1;
			this->btnReshit->Text = L"Решить";
			this->btnReshit->UseVisualStyleBackColor = true;
			this->btnReshit->Click += gcnew System::EventHandler(this, &MyForm::btnReshit_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(482, 253);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->comments);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnSbros);
			this->Controls->Add(this->btnReshit);
			this->Controls->Add(this->btnClose);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Решение квадратного уравнения";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnClose_Click(System::Object^ sender,

		System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnSbros_Click(System::Object^ sender, System::EventArgs^ e) {
		this->comments->Text = L"";
		this->textBox1->Text = L"";
		this->textBox2->Text = L"";
		this->textBox3->Text = L"";
		this->textBox4->Text = L"";
		this->textBox5->Text = L"";

	}
	private: System::Void btnReshit_Click(System::Object^ sender, System::EventArgs^ e) {
		this->label2->Text = L"";
		this->label9->Text = L"";
		this->textBox4->Text = L"";
		this->textBox5->Text = L"";
		try {
			double a, b, c, x1, x2, d;
			a = Convert::ToDouble(label4->Text);
			b = Convert::ToDouble(label5->Text);
			c = Convert::ToDouble(label6->Text);
			d = b * b - 4 * a * c;
			if (d < 0) {
				this->label7->Text = L"";
				this->label8->Text = L"";
				this->label9->Text = L"Дискриминант меньше 0";
			}
			else {
				if (d = 0) {
					this->label9->Text = L"Дискриминант равен 0";
					this->comments->Text = L"Корни равны";
					x1 = (-b + sqrt(d)) / (2 * a);
					x2 = x1;
					this->textBox4->Text = Convert::ToString(x1);
					this->textBox5->Text = Convert::ToString(x2);

				}
				else {
					if (d > 0) {
						this->label9->Text = L"Дискриминант больше 0";
						this->comments->Text = L"Два корня";
						x1 = (-b + sqrt(d)) / (2 * a);
						x2 = (-b - sqrt(d)) / (2 * a);
						this->textBox4->Text = Convert::ToString(x1);
						this->textBox5->Text = Convert::ToString(x2);
					}
				}
			}
		}
		catch (...)
		{
			this->label9->Text = L"";
			this->comments->Text = L"Данные введены неверно";
			this->textBox4->Text = L"";
			this->textBox5->Text = L"";
		}

	}
};
}