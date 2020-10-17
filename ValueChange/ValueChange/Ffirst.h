#pragma once
#include <math.h>
namespace ValueChange {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� Ffirst
	/// </summary>
	public ref class Ffirst : public System::Windows::Forms::Form
	{
	public:
		Ffirst(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~Ffirst()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ lblCurs;
	private: System::Windows::Forms::Label^ lblValue;
	protected:


	private: System::Windows::Forms::TextBox^ txtCurs;

	private: System::Windows::Forms::TextBox^ txtValue;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ lblStartValue;

	private: System::Windows::Forms::TextBox^ txtStartValue;

	private: System::Windows::Forms::TextBox^ txtResultValue;
	private: System::Windows::Forms::Label^ lblResultValue;




	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::RadioButton^ RbtnRubEvro;

	private: System::Windows::Forms::RadioButton^ RbtnEvroRub;

	private: System::Windows::Forms::RadioButton^ RbtnRubDol;

	private: System::Windows::Forms::RadioButton^ RbtnDolRub;

	private: System::Windows::Forms::Button^ btnConvert;
	private: System::Windows::Forms::Button^ btnClose;



	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->lblCurs = (gcnew System::Windows::Forms::Label());
			this->lblValue = (gcnew System::Windows::Forms::Label());
			this->txtCurs = (gcnew System::Windows::Forms::TextBox());
			this->txtValue = (gcnew System::Windows::Forms::TextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->txtResultValue = (gcnew System::Windows::Forms::TextBox());
			this->lblResultValue = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lblStartValue = (gcnew System::Windows::Forms::Label());
			this->txtStartValue = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->RbtnRubEvro = (gcnew System::Windows::Forms::RadioButton());
			this->RbtnEvroRub = (gcnew System::Windows::Forms::RadioButton());
			this->RbtnRubDol = (gcnew System::Windows::Forms::RadioButton());
			this->RbtnDolRub = (gcnew System::Windows::Forms::RadioButton());
			this->btnConvert = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->groupBox1->Controls->Add(this->lblCurs);
			this->groupBox1->Controls->Add(this->lblValue);
			this->groupBox1->Controls->Add(this->txtCurs);
			this->groupBox1->Controls->Add(this->txtValue);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(20, 18);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(400, 142);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"�������� ������";
			// 
			// lblCurs
			// 
			this->lblCurs->AutoSize = true;
			this->lblCurs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblCurs->Location = System::Drawing::Point(20, 100);
			this->lblCurs->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblCurs->Name = L"lblCurs";
			this->lblCurs->Size = System::Drawing::Size(182, 20);
			this->lblCurs->TabIndex = 3;
			this->lblCurs->Text = L"���� ������ (���./$):";
			// 
			// lblValue
			// 
			this->lblValue->AutoSize = true;
			this->lblValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblValue->Location = System::Drawing::Point(20, 49);
			this->lblValue->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblValue->Name = L"lblValue";
			this->lblValue->Size = System::Drawing::Size(182, 20);
			this->lblValue->TabIndex = 2;
			this->lblValue->Text = L"����� �����������:";
			// 
			// txtCurs
			// 
			this->txtCurs->BackColor = System::Drawing::SystemColors::Control;
			this->txtCurs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtCurs->Location = System::Drawing::Point(213, 96);
			this->txtCurs->Margin = System::Windows::Forms::Padding(4);
			this->txtCurs->Name = L"txtCurs";
			this->txtCurs->Size = System::Drawing::Size(172, 26);
			this->txtCurs->TabIndex = 1;
			this->txtCurs->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtCurs->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Ffirst::Input_KeyPress);
			// 
			// txtValue
			// 
			this->txtValue->BackColor = System::Drawing::SystemColors::Control;
			this->txtValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtValue->Location = System::Drawing::Point(213, 46);
			this->txtValue->Margin = System::Windows::Forms::Padding(4);
			this->txtValue->Name = L"txtValue";
			this->txtValue->Size = System::Drawing::Size(172, 26);
			this->txtValue->TabIndex = 0;
			this->txtValue->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtValue->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Ffirst::Input_KeyPress);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->groupBox2->Controls->Add(this->txtResultValue);
			this->groupBox2->Controls->Add(this->lblResultValue);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->lblStartValue);
			this->groupBox2->Controls->Add(this->txtStartValue);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(20, 167);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4);
			this->groupBox2->Size = System::Drawing::Size(400, 98);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"�������� ������";
			// 
			// txtResultValue
			// 
			this->txtResultValue->BackColor = System::Drawing::SystemColors::Control;
			this->txtResultValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtResultValue->Location = System::Drawing::Point(217, 49);
			this->txtResultValue->Margin = System::Windows::Forms::Padding(4);
			this->txtResultValue->Name = L"txtResultValue";
			this->txtResultValue->ReadOnly = true;
			this->txtResultValue->Size = System::Drawing::Size(119, 26);
			this->txtResultValue->TabIndex = 2;
			this->txtResultValue->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// lblResultValue
			// 
			this->lblResultValue->AutoSize = true;
			this->lblResultValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblResultValue->Location = System::Drawing::Point(340, 53);
			this->lblResultValue->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblResultValue->Name = L"lblResultValue";
			this->lblResultValue->Size = System::Drawing::Size(41, 20);
			this->lblResultValue->TabIndex = 6;
			this->lblResultValue->Text = L"���.";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(196, 53);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(19, 20);
			this->label4->TabIndex = 5;
			this->label4->Text = L"=";
			// 
			// lblStartValue
			// 
			this->lblStartValue->AutoSize = true;
			this->lblStartValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblStartValue->Location = System::Drawing::Point(145, 53);
			this->lblStartValue->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblStartValue->Name = L"lblStartValue";
			this->lblStartValue->Size = System::Drawing::Size(41, 20);
			this->lblStartValue->TabIndex = 4;
			this->lblStartValue->Text = L"���.";
			// 
			// txtStartValue
			// 
			this->txtStartValue->BackColor = System::Drawing::SystemColors::Control;
			this->txtStartValue->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtStartValue->Location = System::Drawing::Point(24, 49);
			this->txtStartValue->Margin = System::Windows::Forms::Padding(4);
			this->txtStartValue->Name = L"txtStartValue";
			this->txtStartValue->ReadOnly = true;
			this->txtStartValue->Size = System::Drawing::Size(119, 26);
			this->txtStartValue->TabIndex = 0;
			this->txtStartValue->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->RbtnRubEvro);
			this->groupBox3->Controls->Add(this->RbtnEvroRub);
			this->groupBox3->Controls->Add(this->RbtnRubDol);
			this->groupBox3->Controls->Add(this->RbtnDolRub);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->Location = System::Drawing::Point(440, 18);
			this->groupBox3->Margin = System::Windows::Forms::Padding(4);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(4);
			this->groupBox3->Size = System::Drawing::Size(307, 185);
			this->groupBox3->TabIndex = 5;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"����������� ����������";
			// 
			// RbtnRubEvro
			// 
			this->RbtnRubEvro->AutoSize = true;
			this->RbtnRubEvro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RbtnRubEvro->Location = System::Drawing::Point(13, 133);
			this->RbtnRubEvro->Margin = System::Windows::Forms::Padding(4);
			this->RbtnRubEvro->Name = L"RbtnRubEvro";
			this->RbtnRubEvro->Size = System::Drawing::Size(149, 28);
			this->RbtnRubEvro->TabIndex = 3;
			this->RbtnRubEvro->TabStop = true;
			this->RbtnRubEvro->Text = L"����� � ����";
			this->RbtnRubEvro->UseVisualStyleBackColor = true;
			this->RbtnRubEvro->CheckedChanged += gcnew System::EventHandler(this, &Ffirst::RbtnRubEvro_CheckedChanged);
			// 
			// RbtnEvroRub
			// 
			this->RbtnEvroRub->AutoSize = true;
			this->RbtnEvroRub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RbtnEvroRub->Location = System::Drawing::Point(13, 101);
			this->RbtnEvroRub->Margin = System::Windows::Forms::Padding(4);
			this->RbtnEvroRub->Name = L"RbtnEvroRub";
			this->RbtnEvroRub->Size = System::Drawing::Size(150, 28);
			this->RbtnEvroRub->TabIndex = 2;
			this->RbtnEvroRub->TabStop = true;
			this->RbtnEvroRub->Text = L"���� � �����";
			this->RbtnEvroRub->UseVisualStyleBackColor = true;
			this->RbtnEvroRub->CheckedChanged += gcnew System::EventHandler(this, &Ffirst::RbtnEvroRub_CheckedChanged);
			// 
			// RbtnRubDol
			// 
			this->RbtnRubDol->AutoSize = true;
			this->RbtnRubDol->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RbtnRubDol->Location = System::Drawing::Point(13, 69);
			this->RbtnRubDol->Margin = System::Windows::Forms::Padding(4);
			this->RbtnRubDol->Name = L"RbtnRubDol";
			this->RbtnRubDol->Size = System::Drawing::Size(182, 28);
			this->RbtnRubDol->TabIndex = 1;
			this->RbtnRubDol->TabStop = true;
			this->RbtnRubDol->Text = L"����� � �������";
			this->RbtnRubDol->UseVisualStyleBackColor = true;
			this->RbtnRubDol->CheckedChanged += gcnew System::EventHandler(this, &Ffirst::RbtnRubDol_CheckedChanged);
			// 
			// RbtnDolRub
			// 
			this->RbtnDolRub->AutoSize = true;
			this->RbtnDolRub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->RbtnDolRub->Location = System::Drawing::Point(13, 37);
			this->RbtnDolRub->Margin = System::Windows::Forms::Padding(4);
			this->RbtnDolRub->Name = L"RbtnDolRub";
			this->RbtnDolRub->Size = System::Drawing::Size(183, 28);
			this->RbtnDolRub->TabIndex = 0;
			this->RbtnDolRub->TabStop = true;
			this->RbtnDolRub->Text = L"������� � �����";
			this->RbtnDolRub->UseVisualStyleBackColor = true;
			this->RbtnDolRub->CheckedChanged += gcnew System::EventHandler(this, &Ffirst::RbtnDolRub_CheckedChanged);
			// 
			// btnConvert
			// 
			this->btnConvert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnConvert->Location = System::Drawing::Point(440, 220);
			this->btnConvert->Margin = System::Windows::Forms::Padding(4);
			this->btnConvert->Name = L"btnConvert";
			this->btnConvert->Size = System::Drawing::Size(193, 43);
			this->btnConvert->TabIndex = 6;
			this->btnConvert->Text = L"��������������";
			this->btnConvert->UseVisualStyleBackColor = true;
			this->btnConvert->Click += gcnew System::EventHandler(this, &Ffirst::btnConvert_Click);
			// 
			// btnClose
			// 
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnClose->Location = System::Drawing::Point(641, 220);
			this->btnClose->Margin = System::Windows::Forms::Padding(4);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(108, 43);
			this->btnClose->TabIndex = 7;
			this->btnClose->Text = L"�������";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &Ffirst::btnClose_Click);
			// 
			// Ffirst
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->ClientSize = System::Drawing::Size(765, 278);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->btnConvert);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->MaximizeBox = false;
			this->Name = L"Ffirst";
			this->Text = L"����� ������";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		const double RUB_TO_DOLLAR = 79.89, RUB_TO_EVRO = 93.58, EVRO_TO_RUB_CELL = 90.56, DOLLAR_TO_RUB_CELL = 77.14;
	double startValueNumber, resultValueNumber, curs;

	// ������� ��������� ������ �� ������ � �������� ���
	private: bool convertToDouble() {
		bool isRightInput = true;
		try {
			startValueNumber = Convert::ToDouble(txtValue->Text);
			curs = Convert::ToDouble(txtCurs->Text);
			
		}
		catch (...) {
			isRightInput = false;

		}
		return isRightInput;
	}

	private: System::Void btnConvert_Click(System::Object^ sender, System::EventArgs^ e) {
		if (convertToDouble()) {
			if (curs == RUB_TO_EVRO || curs == RUB_TO_DOLLAR) {
				resultValueNumber = floor(startValueNumber * (1 / curs) * 100) / 100;
			}
			else
				resultValueNumber = floor(startValueNumber * curs * 100) / 100;
			txtStartValue->Text = Convert::ToString(startValueNumber);
			txtResultValue->Text = Convert::ToString(resultValueNumber);
		}
		else {
			System::Windows::Forms::DialogResult result = MessageBox::Show("������� ����� ��� �����������", "������");
		}
	}

	private: System::Void clear_txtFields() {
		txtValue->Text = "";
		txtStartValue->Text = "";
		txtResultValue->Text = "";
	}

	private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void RbtnDolRub_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		clear_txtFields();
		txtCurs->Text = Convert::ToString(DOLLAR_TO_RUB_CELL);
		lblCurs->Text = "���� ������ ($/���.):";
		lblStartValue->Text = "$";
		lblResultValue->Text = "���.";		
	}

	private: System::Void RbtnRubDol_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		clear_txtFields();
		txtCurs->Text = Convert::ToString(RUB_TO_DOLLAR);
		lblCurs->Text = "���� ������ (���./$):";
		lblStartValue->Text = "���.";
		lblResultValue->Text = "$";		
	}

	private: System::Void RbtnEvroRub_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		clear_txtFields();
		txtCurs->Text = Convert::ToString(EVRO_TO_RUB_CELL);
		lblCurs->Text = "���� ������ (���./�):";
		lblStartValue->Text = "�";
		lblResultValue->Text = "���.";
	}

	private: System::Void RbtnRubEvro_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		clear_txtFields();
		txtCurs->Text = Convert::ToString(RUB_TO_EVRO);
		lblCurs->Text = "���� ������ (���./�):";
		lblStartValue->Text = "���.";
		lblResultValue->Text = "�";
	}

private: System::Void Input_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	TextBox^ TextBoxField = safe_cast<TextBox^>(sender);
	int len;
	len = TextBoxField->Text->Length;
	if (((e->KeyChar < 48 || e->KeyChar > 57) && (e->KeyChar > 44 || e->KeyChar < 44)) && e->KeyChar != '\b') {
		e->Handled = true;
	}
	if (e->KeyChar == 44 && (TextBoxField->Text->Contains(",") || len == 0)) {
		e->Handled = true;
	}
		
}
};
}
