#pragma once
#include <cmath>
#include <time.h>
#include <cstdlib>
#include <stdlib.h>

namespace array {

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
		System::ComponentModel::Container ^components;

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
			this->groupBox1->Location = System::Drawing::Point(15, 20);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(449, 140);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Исходные данные";
			// 
			// txtMinNumber
			// 
			this->txtMinNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtMinNumber->Location = System::Drawing::Point(270, 102);
			this->txtMinNumber->Name = L"txtMinNumber";
			this->txtMinNumber->Size = System::Drawing::Size(168, 22);
			this->txtMinNumber->TabIndex = 5;
			this->txtMinNumber->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtMaxNumber
			// 
			this->txtMaxNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtMaxNumber->Location = System::Drawing::Point(270, 69);
			this->txtMaxNumber->Name = L"txtMaxNumber";
			this->txtMaxNumber->Size = System::Drawing::Size(168, 22);
			this->txtMaxNumber->TabIndex = 4;
			this->txtMaxNumber->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtArraySize
			// 
			this->txtArraySize->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtArraySize->Location = System::Drawing::Point(270, 32);
			this->txtArraySize->Name = L"txtArraySize";
			this->txtArraySize->Size = System::Drawing::Size(168, 22);
			this->txtArraySize->TabIndex = 3;
			this->txtArraySize->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(6, 105);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(241, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Минимальное значение диапазона";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(7, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(247, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Максимальное значение диапазона";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(8, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(218, 17);
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
			this->groupBox2->Location = System::Drawing::Point(15, 235);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(449, 140);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Операции с массивом";
			// 
			// rbtnSortdown
			// 
			this->rbtnSortdown->AutoSize = true;
			this->rbtnSortdown->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rbtnSortdown->Location = System::Drawing::Point(216, 103);
			this->rbtnSortdown->Name = L"rbtnSortdown";
			this->rbtnSortdown->Size = System::Drawing::Size(197, 21);
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
			this->rbtnSortup->Location = System::Drawing::Point(216, 76);
			this->rbtnSortup->Name = L"rbtnSortup";
			this->rbtnSortup->Size = System::Drawing::Size(217, 21);
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
			this->rbtnNechet->Location = System::Drawing::Point(216, 49);
			this->rbtnNechet->Name = L"rbtnNechet";
			this->rbtnNechet->Size = System::Drawing::Size(165, 21);
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
			this->rbtnChet->Location = System::Drawing::Point(217, 22);
			this->rbtnChet->Name = L"rbtnChet";
			this->rbtnChet->Size = System::Drawing::Size(149, 21);
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
			this->rbtnMax->Location = System::Drawing::Point(6, 103);
			this->rbtnMax->Name = L"rbtnMax";
			this->rbtnMax->Size = System::Drawing::Size(187, 21);
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
			this->rbtnMin->Location = System::Drawing::Point(6, 76);
			this->rbtnMin->Name = L"rbtnMin";
			this->rbtnMin->Size = System::Drawing::Size(181, 21);
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
			this->rbtnAverage->Location = System::Drawing::Point(6, 49);
			this->rbtnAverage->Name = L"rbtnAverage";
			this->rbtnAverage->Size = System::Drawing::Size(153, 21);
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
			this->rbtnSum->Location = System::Drawing::Point(7, 22);
			this->rbtnSum->Name = L"rbtnSum";
			this->rbtnSum->Size = System::Drawing::Size(145, 21);
			this->rbtnSum->TabIndex = 0;
			this->rbtnSum->TabStop = true;
			this->rbtnSum->Text = L"Сумма элементов";
			this->rbtnSum->UseVisualStyleBackColor = true;
			this->rbtnSum->CheckedChanged += gcnew System::EventHandler(this, &MyForm::rbtnChange);
			// 
			// txtArray
			// 
			this->txtArray->Location = System::Drawing::Point(15, 195);
			this->txtArray->Name = L"txtArray";
			this->txtArray->Size = System::Drawing::Size(449, 22);
			this->txtArray->TabIndex = 6;
			// 
			// txtResult
			// 
			this->txtResult->Location = System::Drawing::Point(15, 405);
			this->txtResult->Name = L"txtResult";
			this->txtResult->ReadOnly = true;
			this->txtResult->Size = System::Drawing::Size(449, 22);
			this->txtResult->TabIndex = 7;
			// 
			// btnGeneration
			// 
			this->btnGeneration->Location = System::Drawing::Point(475, 20);
			this->btnGeneration->Name = L"btnGeneration";
			this->btnGeneration->Size = System::Drawing::Size(125, 30);
			this->btnGeneration->TabIndex = 8;
			this->btnGeneration->Text = L"Генерация";
			this->btnGeneration->UseVisualStyleBackColor = true;
			this->btnGeneration->Click += gcnew System::EventHandler(this, &MyForm::btnGeneration_Click);
			// 
			// btnDoIt
			// 
			this->btnDoIt->Location = System::Drawing::Point(475, 190);
			this->btnDoIt->Name = L"btnDoIt";
			this->btnDoIt->Padding = System::Windows::Forms::Padding(3);
			this->btnDoIt->Size = System::Drawing::Size(125, 30);
			this->btnDoIt->TabIndex = 9;
			this->btnDoIt->Text = L"Выполнить";
			this->btnDoIt->UseVisualStyleBackColor = true;
			this->btnDoIt->Click += gcnew System::EventHandler(this, &MyForm::btnDoIt_Click);
			// 
			// btnClose
			// 
			this->btnClose->Location = System::Drawing::Point(475, 400);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(125, 30);
			this->btnClose->TabIndex = 10;
			this->btnClose->Text = L"Закрыть";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &MyForm::btnClose_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(15, 175);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(127, 17);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Исходный массив:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 385);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(148, 17);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Результат операции:";
			// 
			// btnReset
			// 
			this->btnReset->Location = System::Drawing::Point(475, 85);
			this->btnReset->Name = L"btnReset";
			this->btnReset->Size = System::Drawing::Size(125, 30);
			this->btnReset->TabIndex = 14;
			this->btnReset->Text = L"Сброс";
			this->btnReset->UseVisualStyleBackColor = true;
			this->btnReset->Click += gcnew System::EventHandler(this, &MyForm::btnReset_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(607, 443);
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
	String^ array_str;
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
	// проверка наличия введенного массива
	bool IsArrayInput() {
		bool check;
		if (txtArray->Text->Length > 0) {
			check = true;
			array_str = txtArray->Text;
			// определение размера введенного массива
			input_array_size = 0;
			for (int i = 0; i < array_str->Length; i++) {
				if (array_str[i] == ' ' || array_str[i] == ';') {
					input_array_size += 1;
				}
			}
			array_size = input_array_size;
		}
		else {
			check = false;
		}
		return check;
	}

	private: System::Void btnDoIt_Click(System::Object^ sender, System::EventArgs^ e) {
		txtResult->Text = "";
		// определение характеристик массива
		try {
			array_size = Convert::ToInt32(txtArraySize->Text);
			min_value = Convert::ToInt32(txtMinNumber->Text);
			max_value = Convert::ToInt32(txtMaxNumber->Text);
			is_array_values_generated = true;
		}
		catch (...) {
			is_array_values_generated = false;
		}
		// проверка на наличие массива
		is_array_input = IsArrayInput();
		// чтение массива из textbox
		if (is_array_input) {
			array_str = txtArray->Text;
	
			int* arr = new int[array_size];
			int start_i = 0, end_i = 0, count_numbers = 0;
			is_ready_to_work = true;
			for (int i = 0; i < array_str->Length; i++) {
				if (array_str[i] != ' ') {
					end_i += 1;
				}
				else {
					try {
						arr[count_numbers] = Convert::ToInt32(array_str->Substring(start_i, end_i-start_i));
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
			// массив успешно прочитан
			if (is_ready_to_work) {
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
				// подстановка характеристик, если массив введен пользователем
				if (!is_array_values_generated) {
					txtArraySize->Text = Convert::ToString(array_size);
					txtMaxNumber->Text = Convert::ToString(max_number + 1);
					txtMinNumber->Text = Convert::ToString(min_number - 1);
				}

				if (command_str == "Sum") {
					txtResult->Text = Convert::ToString(summa);
				}
				else if (command_str == "Average"){
					average = float(1.0 * summa / (array_size * 1.0) * 100.0)/100.0;
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
				// сортировка по возрастанию
				else if (command_str == "Sortup") {
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
				// сортировка по убыванию
				else if (command_str == "Sortdown") {
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
			}
			// ошибки при чтении массива
			else {
				System::Windows::Forms::DialogResult result = MessageBox::Show("Неверный ввод массива", \
					"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			

			delete[] arr;
		}
		else {
			System::Windows::Forms::DialogResult result = MessageBox::Show("Массив не ввееден \n Сгенерируйте или введите массив", \
				"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}

	private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void rbtnChange(System::Object^ sender, System::EventArgs^ e) {
		txtResult->Text = "";
		RadioButton^ ButtonCommand = safe_cast<RadioButton^>(sender);
		command_str = ButtonCommand->Name->Substring(4);
	}

	private: System::Void btnGeneration_Click(System::Object^ sender, System::EventArgs^ e) {
		srand(static_cast<unsigned int>(time(NULL)));
		txtResult->Text = "";
		String^ text;
		// считывание или генерация характеристик массива
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
			// генерация массива
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
		}
		
	}

	private: System::Void btnReset_Click(System::Object^ sender, System::EventArgs^ e) {
		txtArraySize->Text = "";
		txtMaxNumber->Text = "";
		txtMinNumber->Text = "";
		txtArray->Text = "";
		txtResult->Text = "";
		average = 0;
		min_value = MINVALUE, max_value = MAXVALUE, array_size = 0;
		array_str = "";
		result_str = "";
	}
};
}
