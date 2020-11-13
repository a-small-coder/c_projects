#pragma once
#include <cmath>
#include <time.h>
#include <cstdlib>
#include <stdlib.h>

namespace workwitharray {

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
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ txtMinNumber;
	protected:

	private: System::Windows::Forms::TextBox^ txtMaxNumber;
	private: System::Windows::Forms::TextBox^ txtArraySize;




	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ rbtnSortdown;

	private: System::Windows::Forms::RadioButton^ rbtnSortup;

	private: System::Windows::Forms::RadioButton^ rbtnNechet;

	private: System::Windows::Forms::RadioButton^ rbtnChet;
	private: System::Windows::Forms::RadioButton^ rbtnMax;



	private: System::Windows::Forms::RadioButton^ rbtnMin;

	private: System::Windows::Forms::RadioButton^ rbtnAverage;

	private: System::Windows::Forms::RadioButton^ rbtnSum;

	private: System::Windows::Forms::TextBox^ txtArray;

	private: System::Windows::Forms::TextBox^ txtResult;

	private: System::Windows::Forms::Button^ btnGeneration;
	private: System::Windows::Forms::Button^ btnDoIt;
	private: System::Windows::Forms::Button^ btnClose;



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ btnReset;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtMinNumber = (gcnew System::Windows::Forms::TextBox());
			this->txtMaxNumber = (gcnew System::Windows::Forms::TextBox());
			this->txtArraySize = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->rbtnSortdown = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnSortup = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnNechet = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnChet = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnMax = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnMin = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnAverage = (gcnew System::Windows::Forms::RadioButton());
			this->rbtnSum = (gcnew System::Windows::Forms::RadioButton());
			this->txtArray = (gcnew System::Windows::Forms::TextBox());
			this->txtResult = (gcnew System::Windows::Forms::TextBox());
			this->btnGeneration = (gcnew System::Windows::Forms::Button());
			this->btnDoIt = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btnReset = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txtMinNumber);
			this->groupBox1->Controls->Add(this->txtMaxNumber);
			this->groupBox1->Controls->Add(this->txtArraySize);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(11, 16);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(337, 114);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Исходные данные";
			// 
			// txtMinNumber
			// 
			this->txtMinNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtMinNumber->Location = System::Drawing::Point(202, 83);
			this->txtMinNumber->Margin = System::Windows::Forms::Padding(2);
			this->txtMinNumber->Name = L"txtMinNumber";
			this->txtMinNumber->Size = System::Drawing::Size(127, 19);
			this->txtMinNumber->TabIndex = 5;
			this->txtMinNumber->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtMinNumber->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Input_KeyPress);
			// 
			// txtMaxNumber
			// 
			this->txtMaxNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtMaxNumber->Location = System::Drawing::Point(202, 56);
			this->txtMaxNumber->Margin = System::Windows::Forms::Padding(2);
			this->txtMaxNumber->Name = L"txtMaxNumber";
			this->txtMaxNumber->Size = System::Drawing::Size(127, 19);
			this->txtMaxNumber->TabIndex = 4;
			this->txtMaxNumber->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtMaxNumber->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Input_KeyPress);
			// 
			// txtArraySize
			// 
			this->txtArraySize->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtArraySize->Location = System::Drawing::Point(202, 26);
			this->txtArraySize->Margin = System::Windows::Forms::Padding(2);
			this->txtArraySize->Name = L"txtArraySize";
			this->txtArraySize->Size = System::Drawing::Size(127, 19);
			this->txtArraySize->TabIndex = 3;
			this->txtArraySize->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtArraySize->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Input_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(4, 85);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(185, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Минимальное значение диапазона";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(5, 56);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(191, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Максимальное значение диапазона";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(6, 28);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(171, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Количество элементов массива";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->rbtnSortdown);
			this->groupBox2->Controls->Add(this->rbtnSortup);
			this->groupBox2->Controls->Add(this->rbtnNechet);
			this->groupBox2->Controls->Add(this->rbtnChet);
			this->groupBox2->Controls->Add(this->rbtnMax);
			this->groupBox2->Controls->Add(this->rbtnMin);
			this->groupBox2->Controls->Add(this->rbtnAverage);
			this->groupBox2->Controls->Add(this->rbtnSum);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->groupBox2->Location = System::Drawing::Point(11, 191);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2);
			this->groupBox2->Size = System::Drawing::Size(337, 114);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Операции с массивом";
			// 
			// rbtnSortdown
			// 
			this->rbtnSortdown->AutoSize = true;
			this->rbtnSortdown->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rbtnSortdown->Location = System::Drawing::Point(162, 84);
			this->rbtnSortdown->Margin = System::Windows::Forms::Padding(2);
			this->rbtnSortdown->Name = L"rbtnSortdown";
			this->rbtnSortdown->Size = System::Drawing::Size(154, 17);
			this->rbtnSortdown->TabIndex = 8;
			this->rbtnSortdown->Text = L"Сортировка по убыванию";
			this->rbtnSortdown->UseVisualStyleBackColor = true;
			this->rbtnSortdown->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtnChange);
			// 
			// rbtnSortup
			// 
			this->rbtnSortup->AutoSize = true;
			this->rbtnSortup->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rbtnSortup->Location = System::Drawing::Point(162, 62);
			this->rbtnSortup->Margin = System::Windows::Forms::Padding(2);
			this->rbtnSortup->Name = L"rbtnSortup";
			this->rbtnSortup->Size = System::Drawing::Size(170, 17);
			this->rbtnSortup->TabIndex = 7;
			this->rbtnSortup->Text = L"Сортировка по возростанию";
			this->rbtnSortup->UseVisualStyleBackColor = true;
			this->rbtnSortup->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtnChange);
			// 
			// rbtnNechet
			// 
			this->rbtnNechet->AutoSize = true;
			this->rbtnNechet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rbtnNechet->Location = System::Drawing::Point(162, 40);
			this->rbtnNechet->Margin = System::Windows::Forms::Padding(2);
			this->rbtnNechet->Name = L"rbtnNechet";
			this->rbtnNechet->Size = System::Drawing::Size(129, 17);
			this->rbtnNechet->TabIndex = 6;
			this->rbtnNechet->Text = L"Нечетные элементы";
			this->rbtnNechet->UseVisualStyleBackColor = true;
			this->rbtnNechet->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtnChange);
			// 
			// rbtnChet
			// 
			this->rbtnChet->AutoSize = true;
			this->rbtnChet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rbtnChet->Location = System::Drawing::Point(163, 18);
			this->rbtnChet->Margin = System::Windows::Forms::Padding(2);
			this->rbtnChet->Name = L"rbtnChet";
			this->rbtnChet->Size = System::Drawing::Size(118, 17);
			this->rbtnChet->TabIndex = 5;
			this->rbtnChet->Text = L"Четные элементы";
			this->rbtnChet->UseVisualStyleBackColor = true;
			this->rbtnChet->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtnChange);
			// 
			// rbtnMax
			// 
			this->rbtnMax->AutoSize = true;
			this->rbtnMax->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rbtnMax->Location = System::Drawing::Point(4, 84);
			this->rbtnMax->Margin = System::Windows::Forms::Padding(2);
			this->rbtnMax->Name = L"rbtnMax";
			this->rbtnMax->Size = System::Drawing::Size(150, 17);
			this->rbtnMax->TabIndex = 4;
			this->rbtnMax->Text = L"Максимальный элемент";
			this->rbtnMax->UseVisualStyleBackColor = true;
			this->rbtnMax->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtnChange);
			// 
			// rbtnMin
			// 
			this->rbtnMin->AutoSize = true;
			this->rbtnMin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rbtnMin->Location = System::Drawing::Point(4, 62);
			this->rbtnMin->Margin = System::Windows::Forms::Padding(2);
			this->rbtnMin->Name = L"rbtnMin";
			this->rbtnMin->Size = System::Drawing::Size(144, 17);
			this->rbtnMin->TabIndex = 3;
			this->rbtnMin->Text = L"Минимальный элемент";
			this->rbtnMin->UseVisualStyleBackColor = true;
			this->rbtnMin->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtnChange);
			// 
			// rbtnAverage
			// 
			this->rbtnAverage->AutoSize = true;
			this->rbtnAverage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rbtnAverage->Location = System::Drawing::Point(4, 40);
			this->rbtnAverage->Margin = System::Windows::Forms::Padding(2);
			this->rbtnAverage->Name = L"rbtnAverage";
			this->rbtnAverage->Size = System::Drawing::Size(118, 17);
			this->rbtnAverage->TabIndex = 1;
			this->rbtnAverage->Text = L"Среднее значение";
			this->rbtnAverage->UseVisualStyleBackColor = true;
			this->rbtnAverage->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtnChange);
			// 
			// rbtnSum
			// 
			this->rbtnSum->AutoSize = true;
			this->rbtnSum->Checked = true;
			this->rbtnSum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rbtnSum->Location = System::Drawing::Point(5, 18);
			this->rbtnSum->Margin = System::Windows::Forms::Padding(2);
			this->rbtnSum->Name = L"rbtnSum";
			this->rbtnSum->Size = System::Drawing::Size(117, 17);
			this->rbtnSum->TabIndex = 0;
			this->rbtnSum->TabStop = true;
			this->rbtnSum->Text = L"Сумма элементов";
			this->rbtnSum->UseVisualStyleBackColor = true;
			this->rbtnSum->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtnChange);
			// 
			// txtArray
			// 
			this->txtArray->Location = System::Drawing::Point(11, 158);
			this->txtArray->Margin = System::Windows::Forms::Padding(2);
			this->txtArray->Name = L"txtArray";
			this->txtArray->Size = System::Drawing::Size(338, 20);
			this->txtArray->TabIndex = 6;
			this->txtArray->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Input_KeyPress);
			// 
			// txtResult
			// 
			this->txtResult->Location = System::Drawing::Point(11, 329);
			this->txtResult->Margin = System::Windows::Forms::Padding(2);
			this->txtResult->Name = L"txtResult";
			this->txtResult->ReadOnly = true;
			this->txtResult->Size = System::Drawing::Size(338, 20);
			this->txtResult->TabIndex = 7;
			// 
			// btnGeneration
			// 
			this->btnGeneration->Location = System::Drawing::Point(356, 16);
			this->btnGeneration->Margin = System::Windows::Forms::Padding(2);
			this->btnGeneration->Name = L"btnGeneration";
			this->btnGeneration->Size = System::Drawing::Size(94, 24);
			this->btnGeneration->TabIndex = 8;
			this->btnGeneration->Text = L"Генерация";
			this->btnGeneration->UseVisualStyleBackColor = true;
			this->btnGeneration->Click += gcnew System::EventHandler(this, &MyForm::btnGeneration_Click);
			// 
			// btnDoIt
			// 
			this->btnDoIt->Location = System::Drawing::Point(356, 154);
			this->btnDoIt->Margin = System::Windows::Forms::Padding(2);
			this->btnDoIt->Name = L"btnDoIt";
			this->btnDoIt->Padding = System::Windows::Forms::Padding(2);
			this->btnDoIt->Size = System::Drawing::Size(94, 24);
			this->btnDoIt->TabIndex = 9;
			this->btnDoIt->Text = L"Выполнить";
			this->btnDoIt->UseVisualStyleBackColor = true;
			this->btnDoIt->Click += gcnew System::EventHandler(this, &MyForm::btnDoIt_Click);
			// 
			// btnClose
			// 
			this->btnClose->Location = System::Drawing::Point(356, 325);
			this->btnClose->Margin = System::Windows::Forms::Padding(2);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(94, 24);
			this->btnClose->TabIndex = 10;
			this->btnClose->Text = L"Закрыть";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &MyForm::btnClose_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(11, 142);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(102, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Исходный массив:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(9, 313);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(113, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Результат операции:";
			// 
			// btnReset
			// 
			this->btnReset->Location = System::Drawing::Point(356, 69);
			this->btnReset->Margin = System::Windows::Forms::Padding(2);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(94, 24);
			this->btnReset->TabIndex = 14;
			this->btnReset->Text = L"Сброс";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::btnReset_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(455, 360);
			this->Controls->Add(this->btnReset);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->btnDoIt);
			this->Controls->Add(this->btnGeneration);
			this->Controls->Add(this->txtResult);
			this->Controls->Add(this->txtArray);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// settings
	const int MAXARRAYSIZE = 15, MAXVALUE = 100, MINVALUE = -100;
	double  average;
	int min_value, max_value, array_size, input_array_size, summa;
	int min_number, max_number, chet_count, nechet_count;
	bool is_array_input, is_array_values_generated, is_ready_to_work, is_right_generation_data;
	String^ chet_numbers_str;
	String^ nechet_numbers_str;
	String^ command_str = "Sum"; // стартовое значение операции с массивом (сумма всех элементов)
	String^ result_str;

	//функция для сортировки по возрастанию
	int CompUp(const void* a, const void* b)
	{
		return (*(int*)a - *(int*)b);
	}

	//функция для сортировки по убыванию
	int CompDown(const void* a, const void* b)
	{
		return (*(int*)b - *(int*)a);
	}
	// функция для генерации случайного числа
	int rrand(int range_min, int range_max) {
		return rand() % (range_max - range_min + 1) + range_min;
	}
	bool sub_cikl(String^ str1, String^ str2, int i) {
		for (int j = 0; j < str1->Length; j++) {
			if (str2[i] == str1[j]) {
				break;
				return true;
			}
		}
		return false;
	}
	// проверка наличия введенного массива
	bool IsArrayInput() {
		if (txtArray->Text->Length > 0) {
			String^ array_str;
			array_str = txtArray->Text + " ";
			array_size = 0;
			for (int i = 0; i < array_str->Length; i++) {
				if (array_str[i] == ' ' || array_str[i] == ';') {
					array_size += 1;
				}
			}
			if (array_size == 0) {
				return false;
			}
			else {
				return true;
			}
		}
		else {
			return false;
		}
	}
	
	void misstake_alert(String^ text_alert) {
		System::Windows::Forms::DialogResult result = MessageBox::Show(text_alert, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}

	private: System::Void btnGeneration_Click(System::Object^ sender, System::EventArgs^ e) {
		srand(static_cast<unsigned int>(time(NULL)));
		txtResult->Text = "";
		String^ text = "Неверные данные для генерации\n";
		if (txtArraySize->Text->Length == 0 || txtMaxNumber->Text->Length == 0 || txtMinNumber->Text->Length == 0) {
			text = "Заполните все три поля";
			misstake_alert(text);
			return;
		}
		array_size = Convert::ToInt32(txtArraySize->Text);
		min_value = Convert::ToInt32(txtMinNumber->Text);
		max_value = Convert::ToInt32(txtMaxNumber->Text);
		if (array_size < 1) {
			text = "Количество элементов массива\nдолжно быть больше 0";
			misstake_alert(text);
			return;
		}
		if (array_size > MAXARRAYSIZE) {
			text = "Количество элементов массива\nдолжно быть меньше " + Convert::ToString(MAXARRAYSIZE);
			misstake_alert(text);
			return;
		}
		if (min_value > max_value) {
			text = "Минимальное значение\nдолжно быть меньше максимального";
			misstake_alert(text);
			return;

		}
		if (min_value < MINVALUE) {
			text = "Минимальное значение\nне должно быть меньше " + Convert::ToString(MINVALUE);
			misstake_alert(text);
			return;
		}

		if (max_value > MAXVALUE) {
			text = "Максимальное значение\nне должно быть больше " + Convert::ToString(MAXVALUE);
			misstake_alert(text);
			return;
		}

		int* arr = new int[array_size];
		String^ array_str = "";
		for (int i = 0; i < array_size; i++) {
			arr[i] = rrand(min_value, max_value);
			array_str += Convert::ToString(arr[i]) + " ";
		}
		txtArray->Text = array_str;
		delete[] arr;

		/*String^ text;
		if (txtArraySize->Text->Length > 0) {
			try {
				array_size = Convert::ToInt32(txtArraySize->Text);
				min_value = Convert::ToInt32(txtMinNumber->Text);
				max_value = Convert::ToInt32(txtMaxNumber->Text);

				is_right_generation_data = true;
				if (array_size < 1) {
					is_right_generation_data = false;
					text = "Количество элементов массива\nдолжно быть больше 0";
				}
				if (array_size > MAXARRAYSIZE) {
					is_right_generation_data = false;
					text = "Количество элементов массива\nдолжно быть меньше " + Convert::ToString(MAXARRAYSIZE);
				}
				if (min_value > max_value) {
					is_right_generation_data = false;
					text = "Минимальное значение\nдолжно быть меньше максимального";

				}
				if (min_value < MINVALUE) {
					is_right_generation_data = false;
					text = "Минимальное значение\nне должно быть меньше " + Convert::ToString(MINVALUE);
				}

				if (max_value > MAXVALUE) {
					is_right_generation_data = false;
					text = "Максимальное значение\nне должно быть больше " + Convert::ToString(MAXVALUE);
				}
				if (txtArraySize->Text->Length == 0 || txtMaxNumber->Text->Length == 0 || txtMinNumber->Text->Length == 0) {
					is_right_generation_data = false;
					text = "Значения для генерации не заданы";
				}

			}
			catch (...) {
				is_right_generation_data = false;
			}
		}
		else {
			if (txtArraySize->Text->Length == 0 || txtMaxNumber->Text->Length == 0 || txtMinNumber->Text->Length == 0) {
				is_right_generation_data = false;
				text = "Значения для генерации не заданы";
			}
			else {
				array_size = rrand(1, MAXARRAYSIZE);
				min_value = rrand(MINVALUE, 0);
				max_value = rrand(0, MAXVALUE);
				txtArraySize->Text = Convert::ToString(array_size);
				txtMaxNumber->Text = Convert::ToString(max_value);
				txtMinNumber->Text = Convert::ToString(min_value);
				is_right_generation_data = true;
			}
		}

		if (is_right_generation_data) {
			int* arr = new int[array_size];
			array_str = "";
			for (int i = 0; i < array_size; i++) {
				arr[i] = rrand(min_value, max_value);
				array_str += Convert::ToString(arr[i]) + " ";
			}
			txtArray->Text = array_str;
			delete[] arr;
		}
		else {
			text = "Неверные данные для генерации\n" + text;
			System::Windows::Forms::DialogResult result = MessageBox::Show(text, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}*/

	}

	private: System::Void btnDoIt_Click(System::Object^ sender, System::EventArgs^ e) {
		txtResult->Text = "";
		String^ array_str = txtArray->Text;
		String^ text_message = "";
		if (IsArrayInput()) {
			misstake_alert("Массив не введен\nВведите или сгенерируйте массив" + "\n" + array_str + "\n" + Convert::ToString(array_size));
		}
		else {
			int* arr = new int[array_size];
			int start_i = 0, count_numbers = 0;
			int end_i = 0;
			int i = 0, first_number = array_str->Length;
			for (int i = array_str->Length - 1; i > 0; i--) {
				if (array_str[i] == ' ') {
					array_str = array_str->Substring(0, i);
				}
				else {
					break;
				}
			}
			array_str += " ";
			for (int i = 0; i < array_str->Length; i++) {
				if (array_str[i] != ' ') {
					end_i += 1;
				}
				else {
					try {
						arr[count_numbers] = Convert::ToInt32(array_str->Substring(start_i, end_i - start_i));
						if (arr[count_numbers] > MAXVALUE || arr[count_numbers] < MINVALUE) {
							is_ready_to_work = false;
							text_message += "Значения элементов массива выходят \nза рамки допустимых значений.";
						}
						count_numbers += 1;

					}
					catch (...) {
						is_ready_to_work = false;
						break;
					}
					start_i = i + 1;
					end_i = start_i;

				}
			}

			summa = 0;
			chet_count = 0;
			nechet_count = 0;
			min_number = MAXVALUE;
			max_number = MINVALUE;
			chet_numbers_str = "";
			nechet_numbers_str = "";
			for (int i = 0; i < array_size; i++) {
				summa += arr[i];
				if (arr[i] > max_number)
					max_number = arr[i];
				if (arr[i] < min_number)
					min_number = arr[i];
				if (arr[i] % 2 == 0) {
					chet_count += 1;
					chet_numbers_str += Convert::ToString(arr[i]) + " ";
				}
				else {
					nechet_count += 1;
					nechet_numbers_str += Convert::ToString(arr[i]) + " ";
				}
			}

			//if (!is_array_values_generated) {  // подстановка характеристик, если массив введен пользователем
			//	txtArraySize->Text = Convert::ToString(array_size);
			//	txtMaxNumber->Text = Convert::ToString(max_number + 1);
			//	txtMinNumber->Text = Convert::ToString(min_number - 1);
			//}

			if (command_str == "Sum") {
				txtResult->Text = Convert::ToString(summa);
			}
			else if (command_str == "Average") {
				average = float(1.0 * summa / (array_size * 1.0) * 100.0) / 100.0;
				txtResult->Text = Convert::ToString(average);
			}
			else if (command_str == "Min") {
				txtResult->Text = Convert::ToString(min_number);
			}
			else if (command_str == "Max") {
				txtResult->Text = Convert::ToString(max_number);
			}
			else if (command_str == "Chet") {
				if (chet_count == 0)
					txtResult->Text = "В массиве нет четных элементов";
				else
					txtResult->Text = chet_numbers_str;
			}
			else if (command_str == "Nechet") {
				if (nechet_count == 0)
					txtResult->Text = "В массиве нет нечетных элементов";
				else
					txtResult->Text = nechet_numbers_str;
			}

			else if (command_str == "Sortup") {  // сортировка по возрастанию
				for (int i = 0; i < array_size; i++) {
					for (int j = 1; j < (array_size - i); j++) {
						if ((arr[j] < arr[j - 1])) {

							int prev;
							prev = arr[j - 1];
							arr[j - 1] = arr[j];
							arr[j] = prev;
						}
					}
				}
				result_str = "";
				for (int i = 0; i < array_size; i++) {
					result_str += Convert::ToString(arr[i]) + " ";
				}
				txtResult->Text = result_str;
			}

			else if (command_str == "Sortdown") {  // сортировка по убыванию
				for (int i = 0; i < array_size; i++) {
					for (int j = 1; j < (array_size - i); j++) {
						if ((arr[j] > arr[j - 1])) {

							int prev;
							prev = arr[j - 1];
							arr[j - 1] = arr[j];
							arr[j] = prev;
						}
					}
				}
				result_str = "";
				for (int i = 0; i < array_size; i++) {
					result_str += Convert::ToString(arr[i]) + " ";
				}
				txtResult->Text = result_str;
			}
			delete[] arr;
		}
		//try {  // определение характеристик массива
		//	array_size = Convert::ToInt32(txtArraySize->Text);
		//	min_value = Convert::ToInt32(txtMinNumber->Text);
		//	max_value = Convert::ToInt32(txtMaxNumber->Text);
		//	is_array_values_generated = true;
		//}
		//catch (...) {
		//	is_array_values_generated = false;
		//}
		//
		//is_array_input = IsArrayInput();  // проверка на наличие массива
		//
		//if (is_array_input) {  // чтение массива из textbox
		//	array_str = txtArray->Text;

		//	int* arr = new int[array_size];
		//	int start_i = 0, end_i = 0, count_numbers = 0;
		//	is_ready_to_work = true;
		//	for (int i = 0; i < array_str->Length; i++) {
		//		if (array_str[i] != ' ') {
		//			end_i += 1;
		//		}
		//		else {
		//			try {
		//				arr[count_numbers] = Convert::ToInt32(array_str->Substring(start_i, end_i - start_i));
		//				count_numbers += 1;

		//			}
		//			catch (...) {
		//				is_ready_to_work = false;
		//				break;
		//			}
		//			start_i = i + 1;
		//			end_i = start_i;

		//		}
		//	}
		//	
		//	if (is_ready_to_work) {  // массив успешно прочитан
		//		summa = 0;
		//		chet_count = 0;
		//		nechet_count = 0;
		//		min_number = MAXVALUE;
		//		max_number = MINVALUE;
		//		chet_numbers_str = "";
		//		nechet_numbers_str = "";
		//		for (int i = 0; i < array_size; i++) {
		//			summa += arr[i];
		//			if (arr[i] > max_number)
		//				max_number = arr[i];
		//			if (arr[i] < min_number)
		//				min_number = arr[i];
		//			if (arr[i] % 2 == 0) {
		//				chet_count += 1;
		//				chet_numbers_str += Convert::ToString(arr[i]) + " ";
		//			}
		//			else {
		//				nechet_count += 1;
		//				nechet_numbers_str += Convert::ToString(arr[i]) + " ";
		//			}
		//		}
		//		
		//		if (!is_array_values_generated) {  // подстановка характеристик, если массив введен пользователем
		//			txtArraySize->Text = Convert::ToString(array_size);
		//			txtMaxNumber->Text = Convert::ToString(max_number + 1);
		//			txtMinNumber->Text = Convert::ToString(min_number - 1);
		//		}

		//		if (command_str == "Sum") {
		//			txtResult->Text = Convert::ToString(summa);
		//		}
		//		else if (command_str == "Average") {
		//			average = float(1.0 * summa / (array_size * 1.0) * 100.0) / 100.0;
		//			txtResult->Text = Convert::ToString(average);
		//		}
		//		else if (command_str == "Min") {
		//			txtResult->Text = Convert::ToString(min_number);
		//		}
		//		else if (command_str == "Max") {
		//			txtResult->Text = Convert::ToString(max_number);
		//		}
		//		else if (command_str == "Chet") {
		//			if (chet_count == 0)
		//				txtResult->Text = "В массиве нет четных элементов";
		//			else
		//				txtResult->Text = chet_numbers_str;
		//		}
		//		else if (command_str == "Nechet") {
		//			if (nechet_count == 0)
		//				txtResult->Text = "В массиве нет нечетных элементов";
		//			else
		//				txtResult->Text = nechet_numbers_str;
		//		}
		//		
		//		else if (command_str == "Sortup") {  // сортировка по возрастанию
		//			for (int i = 0; i < array_size; i++) {
		//				for (int j = 1; j < (array_size - i); j++) {
		//					if ((arr[j] < arr[j - 1])) {

		//						int prev;
		//						prev = arr[j - 1];
		//						arr[j - 1] = arr[j];
		//						arr[j] = prev;
		//					}
		//				}
		//			}
		//			result_str = "";
		//			for (int i = 0; i < array_size; i++) {
		//				result_str += Convert::ToString(arr[i]) + " ";
		//			}
		//			txtResult->Text = result_str;
		//		}
		//		
		//		else if (command_str == "Sortdown") {  // сортировка по убыванию
		//			for (int i = 0; i < array_size; i++) {
		//				for (int j = 1; j < (array_size - i); j++) {
		//					if ((arr[j] > arr[j - 1])) {

		//						int prev;
		//						prev = arr[j - 1];
		//						arr[j - 1] = arr[j];
		//						arr[j] = prev;
		//					}
		//				}
		//			}
		//			result_str = "";
		//			for (int i = 0; i < array_size; i++) {
		//				result_str += Convert::ToString(arr[i]) + " ";
		//			}
		//			txtResult->Text = result_str;
		//		}
		//	}
		//	
		//	else {  // ошибки при чтении массива
		//		misstake_alert("Неверный ввод массива");
		//	}

		//	delete[] arr;
		//}
		//else {
		//	misstake_alert("Массив не ввееден \n Сгенерируйте или введите массив");
		//}
	}

	private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void rbtnChange(System::Object^ sender, System::EventArgs^ e) {
		txtResult->Text = "";
		RadioButton^ ButtonCommand = safe_cast<RadioButton^>(sender);
		command_str = ButtonCommand->Name->Substring(4);
	}

	private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
		txtArraySize->Text = "";
		txtMaxNumber->Text = "";
		txtMinNumber->Text = "";
		txtArray->Text = "";
		txtResult->Text = "";
		average = 0;
		min_value = MINVALUE, max_value = MAXVALUE, array_size = 0;
		result_str = "";
	}

	private: System::Void Input_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		TextBox^ TextBoxField = safe_cast<TextBox^>(sender);
		int len;
		len = TextBoxField->Text->Length;
		int ikey = e->KeyChar;
		char ckey = e->KeyChar;
		if (TextBoxField->Name != "txtArray") {
			if (ckey != '\b' && (((ikey < 48 || ikey > 57) && ckey != '-') || (len == 3 && TextBoxField->Text->Contains("-")) || (len == 2 && !TextBoxField->Text->Contains("-")))) {
				e->Handled = true;
			}
			if (ckey == '-' && TextBoxField->Text->Contains("-") || (len != 0 && ckey == '-')) {
				e->Handled = true;
			}
			if (ckey != '\b' && (TextBoxField->Name == "txtArraySize" && (ckey == '-' || len == 2))) {
				e->Handled = true;
			}
		}
		else {
			if (ckey != '\b' && ckey != '-' && ckey != ' ' && ckey != ';' && ckey != ',' && (ikey < 48 || ikey > 57)) {
				e->Handled = true;
			}
		}

	}
	};

}
