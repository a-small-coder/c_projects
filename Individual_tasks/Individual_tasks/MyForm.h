#pragma once
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include<time.h>
#include <msclr\marshal_cppstd.h>
#include <fstream>

namespace Individualtasks {

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace std;
using namespace System::IO;

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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ btn_generate;

	private: System::Windows::Forms::Label^ chetArr_lbl;

	private: System::Windows::Forms::TextBox^ chetArr;
	private: System::Windows::Forms::Label^ nechetArr_lbl;


	private: System::Windows::Forms::TextBox^ nechetArr;
	private: System::Windows::Forms::Button^ btn_run;


	private: System::Windows::Forms::Label^ inputArr_lbl;

	private: System::Windows::Forms::TextBox^ inputArr;

	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ txtMinNumber;
	private: System::Windows::Forms::TextBox^ txtMaxNumber;


	private: System::Windows::Forms::TextBox^ txtArraySize;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::TextBox^ inputN;

private: System::Windows::Forms::Button^ build_matrix;
private: System::Windows::Forms::Label^ labelS1;


private: System::Windows::Forms::TextBox^ textBoxS1;


private: System::Windows::Forms::Button^ btn_random;
private: System::Windows::Forms::Button^ btnS;


private: System::Windows::Forms::GroupBox^ groupBox2;
private: System::Windows::Forms::TextBox^ textBoxT;

private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::TextBox^ textBoxZ;

private: System::Windows::Forms::TextBox^ textBoxY;

private: System::Windows::Forms::TextBox^ textBoxX;
private: System::Windows::Forms::Button^ btn_clear1;
private: System::Windows::Forms::Button^ btn_clear2;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Button^ btn_get_words;
private: System::Windows::Forms::Button^ btn_text_generate;



private: System::Windows::Forms::Label^ labelS3;

private: System::Windows::Forms::TextBox^ textBoxS3;
private: System::Windows::Forms::Label^ labelS2;


private: System::Windows::Forms::TextBox^ textBoxS2;

private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::TextBox^ TextBoxN;
private: System::Windows::Forms::Label^ labelP2;



private: System::Windows::Forms::PictureBox^ pictureBox2;


private: System::Windows::Forms::PictureBox^ pictureBox3;

private: System::Windows::Forms::Label^ labelP3;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::RichTextBox^ Matrix;
private: System::Windows::Forms::PictureBox^ pictureBox4;
private: System::Windows::Forms::Label^ labelP1;
private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::PictureBox^ pictureBox7;
private: System::Windows::Forms::PictureBox^ pictureBox6;
private: System::Windows::Forms::PictureBox^ pictureBox5;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Button^ btnIn;
private: System::Windows::Forms::TextBox^ txtIn;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::TextBox^ txtSave;
private: System::Windows::Forms::Button^ btnSave;
private: System::Windows::Forms::Button^ btnClose;





private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::TextBox^ txtSave1;

private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::Button^ btnIn2;
private: System::Windows::Forms::TextBox^ txtIn2;


private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::TextBox^ txtSave2;

private: System::Windows::Forms::Button^ btnSave2;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ btnIn3;

private: System::Windows::Forms::TextBox^ txtIn3;

private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::TextBox^ txtSave3;
private: System::Windows::Forms::Button^ btnSave3;

















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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->btnIn = (gcnew System::Windows::Forms::Button());
			this->txtIn = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->txtSave = (gcnew System::Windows::Forms::TextBox());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtMinNumber = (gcnew System::Windows::Forms::TextBox());
			this->txtMaxNumber = (gcnew System::Windows::Forms::TextBox());
			this->txtArraySize = (gcnew System::Windows::Forms::TextBox());
			this->btn_generate = (gcnew System::Windows::Forms::Button());
			this->chetArr_lbl = (gcnew System::Windows::Forms::Label());
			this->chetArr = (gcnew System::Windows::Forms::TextBox());
			this->nechetArr_lbl = (gcnew System::Windows::Forms::Label());
			this->nechetArr = (gcnew System::Windows::Forms::TextBox());
			this->btn_run = (gcnew System::Windows::Forms::Button());
			this->inputArr_lbl = (gcnew System::Windows::Forms::Label());
			this->inputArr = (gcnew System::Windows::Forms::TextBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->txtSave1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->Matrix = (gcnew System::Windows::Forms::RichTextBox());
			this->build_matrix = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->inputN = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->btnIn2 = (gcnew System::Windows::Forms::Button());
			this->txtIn2 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->txtSave2 = (gcnew System::Windows::Forms::TextBox());
			this->btnSave2 = (gcnew System::Windows::Forms::Button());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->labelP1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->labelP3 = (gcnew System::Windows::Forms::Label());
			this->labelP2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->labelS3 = (gcnew System::Windows::Forms::Label());
			this->textBoxS3 = (gcnew System::Windows::Forms::TextBox());
			this->labelS2 = (gcnew System::Windows::Forms::Label());
			this->textBoxS2 = (gcnew System::Windows::Forms::TextBox());
			this->labelS1 = (gcnew System::Windows::Forms::Label());
			this->textBoxS1 = (gcnew System::Windows::Forms::TextBox());
			this->btn_random = (gcnew System::Windows::Forms::Button());
			this->btnS = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBoxT = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxZ = (gcnew System::Windows::Forms::TextBox());
			this->textBoxY = (gcnew System::Windows::Forms::TextBox());
			this->textBoxX = (gcnew System::Windows::Forms::TextBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnIn3 = (gcnew System::Windows::Forms::Button());
			this->txtIn3 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->txtSave3 = (gcnew System::Windows::Forms::TextBox());
			this->btnSave3 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->TextBoxN = (gcnew System::Windows::Forms::TextBox());
			this->btn_text_generate = (gcnew System::Windows::Forms::Button());
			this->btn_clear1 = (gcnew System::Windows::Forms::Button());
			this->btn_clear2 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->btn_get_words = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1045, 550);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->btnIn);
			this->tabPage1->Controls->Add(this->txtIn);
			this->tabPage1->Controls->Add(this->label19);
			this->tabPage1->Controls->Add(this->label20);
			this->tabPage1->Controls->Add(this->txtSave);
			this->tabPage1->Controls->Add(this->btnSave);
			this->tabPage1->Controls->Add(this->btnClose);
			this->tabPage1->Controls->Add(this->groupBox1);
			this->tabPage1->Controls->Add(this->btn_generate);
			this->tabPage1->Controls->Add(this->chetArr_lbl);
			this->tabPage1->Controls->Add(this->chetArr);
			this->tabPage1->Controls->Add(this->nechetArr_lbl);
			this->tabPage1->Controls->Add(this->nechetArr);
			this->tabPage1->Controls->Add(this->btn_run);
			this->tabPage1->Controls->Add(this->inputArr_lbl);
			this->tabPage1->Controls->Add(this->inputArr);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1037, 524);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Задание 37";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Layout += gcnew System::Windows::Forms::LayoutEventHandler(this, &MyForm::tabPage1345_Layout);
			// 
			// btnIn
			// 
			this->btnIn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnIn->Location = System::Drawing::Point(850, 63);
			this->btnIn->Margin = System::Windows::Forms::Padding(2);
			this->btnIn->Name = L"btnIn";
			this->btnIn->Size = System::Drawing::Size(170, 29);
			this->btnIn->TabIndex = 36;
			this->btnIn->Text = L"Ввод из файла";
			this->btnIn->UseVisualStyleBackColor = true;
			this->btnIn->Click += gcnew System::EventHandler(this, &MyForm::btnIn_Click);
			// 
			// txtIn
			// 
			this->txtIn->Location = System::Drawing::Point(850, 39);
			this->txtIn->Margin = System::Windows::Forms::Padding(2);
			this->txtIn->Name = L"txtIn";
			this->txtIn->ReadOnly = true;
			this->txtIn->Size = System::Drawing::Size(170, 20);
			this->txtIn->TabIndex = 35;
			this->txtIn->Click += gcnew System::EventHandler(this, &MyForm::txtIn_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(857, 16);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(151, 20);
			this->label19->TabIndex = 34;
			this->label19->Text = L"Имя файла ввода:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(857, 119);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(162, 20);
			this->label20->TabIndex = 33;
			this->label20->Text = L"Имя файла вывода:";
			// 
			// txtSave
			// 
			this->txtSave->Location = System::Drawing::Point(850, 146);
			this->txtSave->Margin = System::Windows::Forms::Padding(2);
			this->txtSave->Name = L"txtSave";
			this->txtSave->ReadOnly = true;
			this->txtSave->Size = System::Drawing::Size(170, 20);
			this->txtSave->TabIndex = 32;
			this->txtSave->Click += gcnew System::EventHandler(this, &MyForm::txtSave_Click);
			// 
			// btnSave
			// 
			this->btnSave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSave->Location = System::Drawing::Point(850, 170);
			this->btnSave->Margin = System::Windows::Forms::Padding(2);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(170, 28);
			this->btnSave->TabIndex = 31;
			this->btnSave->Text = L"Cохранить в файл";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &MyForm::btnSave_Click);
			// 
			// btnClose
			// 
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnClose->Location = System::Drawing::Point(850, 474);
			this->btnClose->Margin = System::Windows::Forms::Padding(2);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(170, 30);
			this->btnClose->TabIndex = 30;
			this->btnClose->Text = L"Закрыть";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &MyForm::btnClose_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->txtMinNumber);
			this->groupBox1->Controls->Add(this->txtMaxNumber);
			this->groupBox1->Controls->Add(this->txtArraySize);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(18, 36);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(344, 145);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Исходные данные";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(6, 113);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(187, 20);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Минимальный элемент";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(6, 80);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(194, 20);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Максимальный элемент";
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(6, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(188, 20);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Количество элементов";
			// 
			// txtMinNumber
			// 
			this->txtMinNumber->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtMinNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtMinNumber->Location = System::Drawing::Point(226, 110);
			this->txtMinNumber->Name = L"txtMinNumber";
			this->txtMinNumber->Size = System::Drawing::Size(112, 26);
			this->txtMinNumber->TabIndex = 11;
			this->txtMinNumber->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtMinNumber->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Input_KeyPress);
			// 
			// txtMaxNumber
			// 
			this->txtMaxNumber->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtMaxNumber->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtMaxNumber->Location = System::Drawing::Point(226, 77);
			this->txtMaxNumber->Name = L"txtMaxNumber";
			this->txtMaxNumber->Size = System::Drawing::Size(112, 26);
			this->txtMaxNumber->TabIndex = 10;
			this->txtMaxNumber->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtMaxNumber->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Input_KeyPress);
			// 
			// txtArraySize
			// 
			this->txtArraySize->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtArraySize->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtArraySize->Location = System::Drawing::Point(226, 45);
			this->txtArraySize->Name = L"txtArraySize";
			this->txtArraySize->Size = System::Drawing::Size(112, 26);
			this->txtArraySize->TabIndex = 9;
			this->txtArraySize->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->txtArraySize->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Input_KeyPress);
			// 
			// btn_generate
			// 
			this->btn_generate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_generate->Location = System::Drawing::Point(394, 36);
			this->btn_generate->Name = L"btn_generate";
			this->btn_generate->Size = System::Drawing::Size(256, 35);
			this->btn_generate->TabIndex = 7;
			this->btn_generate->Text = L"Сгенерировать массив";
			this->btn_generate->UseVisualStyleBackColor = true;
			this->btn_generate->Click += gcnew System::EventHandler(this, &MyForm::btnGeneration_Click);
			// 
			// chetArr_lbl
			// 
			this->chetArr_lbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->chetArr_lbl->AutoSize = true;
			this->chetArr_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->chetArr_lbl->Location = System::Drawing::Point(13, 386);
			this->chetArr_lbl->Name = L"chetArr_lbl";
			this->chetArr_lbl->Size = System::Drawing::Size(376, 24);
			this->chetArr_lbl->TabIndex = 6;
			this->chetArr_lbl->Text = L"Массив элементов с четными номерами";
			// 
			// chetArr
			// 
			this->chetArr->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->chetArr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->chetArr->Location = System::Drawing::Point(14, 413);
			this->chetArr->Name = L"chetArr";
			this->chetArr->ReadOnly = true;
			this->chetArr->Size = System::Drawing::Size(1006, 26);
			this->chetArr->TabIndex = 5;
			// 
			// nechetArr_lbl
			// 
			this->nechetArr_lbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->nechetArr_lbl->AutoSize = true;
			this->nechetArr_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nechetArr_lbl->Location = System::Drawing::Point(13, 300);
			this->nechetArr_lbl->Name = L"nechetArr_lbl";
			this->nechetArr_lbl->Size = System::Drawing::Size(398, 24);
			this->nechetArr_lbl->TabIndex = 4;
			this->nechetArr_lbl->Text = L"Массив элементов с нечетными номерами";
			// 
			// nechetArr
			// 
			this->nechetArr->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->nechetArr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->nechetArr->Location = System::Drawing::Point(14, 327);
			this->nechetArr->Name = L"nechetArr";
			this->nechetArr->ReadOnly = true;
			this->nechetArr->Size = System::Drawing::Size(1006, 26);
			this->nechetArr->TabIndex = 3;
			// 
			// btn_run
			// 
			this->btn_run->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_run->Location = System::Drawing::Point(395, 146);
			this->btn_run->Name = L"btn_run";
			this->btn_run->Size = System::Drawing::Size(255, 35);
			this->btn_run->TabIndex = 2;
			this->btn_run->Text = L"Разбить на два массива";
			this->btn_run->UseVisualStyleBackColor = true;
			this->btn_run->Click += gcnew System::EventHandler(this, &MyForm::btn_run_Click);
			// 
			// inputArr_lbl
			// 
			this->inputArr_lbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->inputArr_lbl->AutoSize = true;
			this->inputArr_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->inputArr_lbl->Location = System::Drawing::Point(13, 215);
			this->inputArr_lbl->Name = L"inputArr_lbl";
			this->inputArr_lbl->Size = System::Drawing::Size(158, 24);
			this->inputArr_lbl->TabIndex = 1;
			this->inputArr_lbl->Text = L"Входной массив";
			// 
			// inputArr
			// 
			this->inputArr->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->inputArr->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->inputArr->Location = System::Drawing::Point(14, 242);
			this->inputArr->MaxLength = 100;
			this->inputArr->Name = L"inputArr";
			this->inputArr->Size = System::Drawing::Size(1005, 26);
			this->inputArr->TabIndex = 0;
			this->inputArr->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Input_KeyPress);
			this->inputArr->Leave += gcnew System::EventHandler(this, &MyForm::inputArr_Leave);
			// 
			// tabPage2
			// 
			this->tabPage2->AutoScroll = true;
			this->tabPage2->AutoScrollMargin = System::Drawing::Size(5, 5);
			this->tabPage2->AutoScrollMinSize = System::Drawing::Size(5, 5);
			this->tabPage2->Controls->Add(this->label22);
			this->tabPage2->Controls->Add(this->txtSave1);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->Matrix);
			this->tabPage2->Controls->Add(this->build_matrix);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->inputN);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"GOST Common", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1037, 524);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Задание 97";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Layout += gcnew System::Windows::Forms::LayoutEventHandler(this, &MyForm::tabPage2_Layout);
			this->tabPage2->Resize += gcnew System::EventHandler(this, &MyForm::tabPage2_Resize);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->Location = System::Drawing::Point(520, 30);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(162, 20);
			this->label22->TabIndex = 40;
			this->label22->Text = L"Имя файла вывода:";
			// 
			// txtSave1
			// 
			this->txtSave1->Location = System::Drawing::Point(512, 52);
			this->txtSave1->Margin = System::Windows::Forms::Padding(2);
			this->txtSave1->Name = L"txtSave1";
			this->txtSave1->ReadOnly = true;
			this->txtSave1->Size = System::Drawing::Size(170, 26);
			this->txtSave1->TabIndex = 39;
			this->txtSave1->Click += gcnew System::EventHandler(this, &MyForm::txtSave_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(686, 49);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(170, 31);
			this->button2->TabIndex = 38;
			this->button2->Text = L"Cохранить в файл";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::btnSave1_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(860, 50);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(159, 30);
			this->button3->TabIndex = 37;
			this->button3->Text = L"Закрыть";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::btnClose_Click);
			// 
			// Matrix
			// 
			this->Matrix->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Matrix->Font = (gcnew System::Drawing::Font(L"Consolas", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Matrix->Location = System::Drawing::Point(24, 99);
			this->Matrix->Name = L"Matrix";
			this->Matrix->ReadOnly = true;
			this->Matrix->Size = System::Drawing::Size(995, 398);
			this->Matrix->TabIndex = 3;
			this->Matrix->Text = L"";
			this->Matrix->WordWrap = false;
			// 
			// build_matrix
			// 
			this->build_matrix->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->build_matrix->Location = System::Drawing::Point(232, 53);
			this->build_matrix->Name = L"build_matrix";
			this->build_matrix->Size = System::Drawing::Size(178, 30);
			this->build_matrix->TabIndex = 2;
			this->build_matrix->Text = L"Построить матрицу";
			this->build_matrix->UseVisualStyleBackColor = true;
			this->build_matrix->Click += gcnew System::EventHandler(this, &MyForm::build_matrix_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(20, 31);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(206, 20);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Введите размер матрицы";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// inputN
			// 
			this->inputN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->inputN->Location = System::Drawing::Point(24, 54);
			this->inputN->MaxLength = 40;
			this->inputN->Name = L"inputN";
			this->inputN->Size = System::Drawing::Size(202, 29);
			this->inputN->TabIndex = 0;
			this->inputN->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->inputN->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Input_KeyPress);
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button5);
			this->tabPage3->Controls->Add(this->btnIn2);
			this->tabPage3->Controls->Add(this->txtIn2);
			this->tabPage3->Controls->Add(this->label21);
			this->tabPage3->Controls->Add(this->label23);
			this->tabPage3->Controls->Add(this->txtSave2);
			this->tabPage3->Controls->Add(this->btnSave2);
			this->tabPage3->Controls->Add(this->label18);
			this->tabPage3->Controls->Add(this->label17);
			this->tabPage3->Controls->Add(this->label16);
			this->tabPage3->Controls->Add(this->pictureBox7);
			this->tabPage3->Controls->Add(this->pictureBox6);
			this->tabPage3->Controls->Add(this->pictureBox5);
			this->tabPage3->Controls->Add(this->pictureBox4);
			this->tabPage3->Controls->Add(this->labelP1);
			this->tabPage3->Controls->Add(this->pictureBox1);
			this->tabPage3->Controls->Add(this->labelP3);
			this->tabPage3->Controls->Add(this->labelP2);
			this->tabPage3->Controls->Add(this->pictureBox3);
			this->tabPage3->Controls->Add(this->pictureBox2);
			this->tabPage3->Controls->Add(this->labelS3);
			this->tabPage3->Controls->Add(this->textBoxS3);
			this->tabPage3->Controls->Add(this->labelS2);
			this->tabPage3->Controls->Add(this->textBoxS2);
			this->tabPage3->Controls->Add(this->labelS1);
			this->tabPage3->Controls->Add(this->textBoxS1);
			this->tabPage3->Controls->Add(this->btn_random);
			this->tabPage3->Controls->Add(this->btnS);
			this->tabPage3->Controls->Add(this->groupBox2);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(1037, 524);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Задание 153";
			this->tabPage3->UseVisualStyleBackColor = true;
			this->tabPage3->Layout += gcnew System::Windows::Forms::LayoutEventHandler(this, &MyForm::tabPage1345_Layout);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(806, 477);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(170, 30);
			this->button5->TabIndex = 43;
			this->button5->Text = L"Закрыть";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::btnClose_Click);
			// 
			// btnIn2
			// 
			this->btnIn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnIn2->Location = System::Drawing::Point(754, 84);
			this->btnIn2->Margin = System::Windows::Forms::Padding(2);
			this->btnIn2->Name = L"btnIn2";
			this->btnIn2->Size = System::Drawing::Size(250, 29);
			this->btnIn2->TabIndex = 42;
			this->btnIn2->Text = L"Ввод из файла";
			this->btnIn2->UseVisualStyleBackColor = true;
			this->btnIn2->Click += gcnew System::EventHandler(this, &MyForm::btnIn2_Click);
			// 
			// txtIn2
			// 
			this->txtIn2->Location = System::Drawing::Point(754, 60);
			this->txtIn2->Margin = System::Windows::Forms::Padding(2);
			this->txtIn2->Name = L"txtIn2";
			this->txtIn2->ReadOnly = true;
			this->txtIn2->Size = System::Drawing::Size(250, 20);
			this->txtIn2->TabIndex = 41;
			this->txtIn2->Click += gcnew System::EventHandler(this, &MyForm::txtIn_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(802, 26);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(151, 20);
			this->label21->TabIndex = 40;
			this->label21->Text = L"Имя файла ввода:";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->Location = System::Drawing::Point(802, 135);
			this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(162, 20);
			this->label23->TabIndex = 39;
			this->label23->Text = L"Имя файла вывода:";
			// 
			// txtSave2
			// 
			this->txtSave2->Location = System::Drawing::Point(754, 177);
			this->txtSave2->Margin = System::Windows::Forms::Padding(2);
			this->txtSave2->Name = L"txtSave2";
			this->txtSave2->ReadOnly = true;
			this->txtSave2->Size = System::Drawing::Size(250, 20);
			this->txtSave2->TabIndex = 38;
			this->txtSave2->Click += gcnew System::EventHandler(this, &MyForm::txtSave_Click);
			// 
			// btnSave2
			// 
			this->btnSave2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSave2->Location = System::Drawing::Point(754, 199);
			this->btnSave2->Margin = System::Windows::Forms::Padding(2);
			this->btnSave2->Name = L"btnSave2";
			this->btnSave2->Size = System::Drawing::Size(250, 28);
			this->btnSave2->TabIndex = 37;
			this->btnSave2->Text = L"Cохранить в файл";
			this->btnSave2->UseVisualStyleBackColor = true;
			this->btnSave2->Click += gcnew System::EventHandler(this, &MyForm::btnSave2_Click);
			// 
			// label18
			// 
			this->label18->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->Location = System::Drawing::Point(294, 449);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(47, 20);
			this->label18->TabIndex = 34;
			this->label18->Text = L"мм^2";
			this->label18->Visible = false;
			// 
			// label17
			// 
			this->label17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(294, 339);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(47, 20);
			this->label17->TabIndex = 33;
			this->label17->Text = L"мм^2";
			this->label17->Visible = false;
			// 
			// label16
			// 
			this->label16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(294, 233);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(47, 20);
			this->label16->TabIndex = 31;
			this->label16->Text = L"мм^2";
			this->label16->Visible = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.InitialImage")));
			this->pictureBox7->Location = System::Drawing::Point(529, 176);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(106, 113);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox7->TabIndex = 32;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Visible = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.InitialImage")));
			this->pictureBox6->Location = System::Drawing::Point(528, 177);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(106, 113);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox6->TabIndex = 31;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Visible = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.InitialImage")));
			this->pictureBox5->Location = System::Drawing::Point(530, 177);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(106, 105);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox5->TabIndex = 30;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Visible = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.InitialImage")));
			this->pictureBox4->Location = System::Drawing::Point(530, 177);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(96, 97);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox4->TabIndex = 29;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &MyForm::pictureBox4_Click);
			// 
			// labelP1
			// 
			this->labelP1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelP1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelP1->Location = System::Drawing::Point(418, 207);
			this->labelP1->Name = L"labelP1";
			this->labelP1->Size = System::Drawing::Size(106, 55);
			this->labelP1->TabIndex = 28;
			this->labelP1->Text = L"Вид фигуры:";
			this->labelP1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelP1->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(528, 177);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(98, 97);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 27;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// labelP3
			// 
			this->labelP3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelP3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelP3->Location = System::Drawing::Point(427, 423);
			this->labelP3->Name = L"labelP3";
			this->labelP3->Size = System::Drawing::Size(86, 55);
			this->labelP3->TabIndex = 26;
			this->labelP3->Text = L"Вид фигуры:";
			this->labelP3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelP3->Visible = false;
			// 
			// labelP2
			// 
			this->labelP2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelP2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelP2->Location = System::Drawing::Point(418, 313);
			this->labelP2->Name = L"labelP2";
			this->labelP2->Size = System::Drawing::Size(106, 55);
			this->labelP2->TabIndex = 25;
			this->labelP2->Text = L"Вид фигуры:";
			this->labelP2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelP2->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.InitialImage")));
			this->pictureBox3->Location = System::Drawing::Point(530, 407);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(96, 100);
			this->pictureBox3->TabIndex = 22;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.InitialImage")));
			this->pictureBox2->Location = System::Drawing::Point(530, 296);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(98, 97);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox2->TabIndex = 21;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// labelS3
			// 
			this->labelS3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelS3->AutoSize = true;
			this->labelS3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelS3->Location = System::Drawing::Point(9, 423);
			this->labelS3->Name = L"labelS3";
			this->labelS3->Size = System::Drawing::Size(279, 20);
			this->labelS3->TabIndex = 19;
			this->labelS3->Text = L"Площадь четырехугольника равна:";
			this->labelS3->Visible = false;
			// 
			// textBoxS3
			// 
			this->textBoxS3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxS3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxS3->Location = System::Drawing::Point(13, 446);
			this->textBoxS3->Name = L"textBoxS3";
			this->textBoxS3->ReadOnly = true;
			this->textBoxS3->Size = System::Drawing::Size(275, 26);
			this->textBoxS3->TabIndex = 20;
			this->textBoxS3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBoxS3->Visible = false;
			// 
			// labelS2
			// 
			this->labelS2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelS2->AutoSize = true;
			this->labelS2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelS2->Location = System::Drawing::Point(9, 313);
			this->labelS2->Name = L"labelS2";
			this->labelS2->Size = System::Drawing::Size(279, 20);
			this->labelS2->TabIndex = 17;
			this->labelS2->Text = L"Площадь четырехугольника равна:";
			this->labelS2->Visible = false;
			// 
			// textBoxS2
			// 
			this->textBoxS2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxS2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxS2->Location = System::Drawing::Point(13, 336);
			this->textBoxS2->Name = L"textBoxS2";
			this->textBoxS2->ReadOnly = true;
			this->textBoxS2->Size = System::Drawing::Size(275, 26);
			this->textBoxS2->TabIndex = 18;
			this->textBoxS2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBoxS2->Visible = false;
			// 
			// labelS1
			// 
			this->labelS1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->labelS1->AutoSize = true;
			this->labelS1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelS1->Location = System::Drawing::Point(9, 207);
			this->labelS1->Name = L"labelS1";
			this->labelS1->Size = System::Drawing::Size(279, 20);
			this->labelS1->TabIndex = 16;
			this->labelS1->Text = L"Площадь четырехугольника равна:";
			this->labelS1->Visible = false;
			// 
			// textBoxS1
			// 
			this->textBoxS1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxS1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxS1->Location = System::Drawing::Point(13, 230);
			this->textBoxS1->Name = L"textBoxS1";
			this->textBoxS1->ReadOnly = true;
			this->textBoxS1->Size = System::Drawing::Size(275, 26);
			this->textBoxS1->TabIndex = 16;
			this->textBoxS1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBoxS1->Visible = false;
			// 
			// btn_random
			// 
			this->btn_random->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_random->Location = System::Drawing::Point(211, 60);
			this->btn_random->Name = L"btn_random";
			this->btn_random->Size = System::Drawing::Size(256, 35);
			this->btn_random->TabIndex = 11;
			this->btn_random->Text = L"Случайные длины";
			this->btn_random->UseVisualStyleBackColor = true;
			this->btn_random->Click += gcnew System::EventHandler(this, &MyForm::btn_random_Click);
			// 
			// btnS
			// 
			this->btnS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnS->Location = System::Drawing::Point(211, 128);
			this->btnS->Name = L"btnS";
			this->btnS->Size = System::Drawing::Size(256, 35);
			this->btnS->TabIndex = 10;
			this->btnS->Text = L"Вычислить площадь";
			this->btnS->UseVisualStyleBackColor = true;
			this->btnS->Click += gcnew System::EventHandler(this, &MyForm::btnS_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->textBoxT);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->textBoxZ);
			this->groupBox2->Controls->Add(this->textBoxY);
			this->groupBox2->Controls->Add(this->textBoxX);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(15, 3);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(190, 160);
			this->groupBox2->TabIndex = 9;
			this->groupBox2->TabStop = false;
			// 
			// label15
			// 
			this->label15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(152, 122);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(31, 20);
			this->label15->TabIndex = 30;
			this->label15->Text = L"мм";
			// 
			// label13
			// 
			this->label13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(152, 90);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(31, 20);
			this->label13->TabIndex = 29;
			this->label13->Text = L"мм";
			// 
			// label12
			// 
			this->label12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(152, 57);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(31, 20);
			this->label12->TabIndex = 28;
			this->label12->Text = L"мм";
			// 
			// label9
			// 
			this->label9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(152, 26);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(31, 20);
			this->label9->TabIndex = 27;
			this->label9->Text = L"мм";
			// 
			// textBoxT
			// 
			this->textBoxT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxT->Location = System::Drawing::Point(29, 119);
			this->textBoxT->Name = L"textBoxT";
			this->textBoxT->Size = System::Drawing::Size(112, 26);
			this->textBoxT->TabIndex = 15;
			this->textBoxT->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBoxT->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxX_TextChanged);
			this->textBoxT->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBoxX_KeyPress);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(5, 122);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(18, 20);
			this->label8->TabIndex = 14;
			this->label8->Text = L"T";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(5, 90);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(19, 20);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Z";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(5, 57);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(20, 20);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Y";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(5, 25);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(20, 20);
			this->label7->TabIndex = 9;
			this->label7->Text = L"X";
			// 
			// textBoxZ
			// 
			this->textBoxZ->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxZ->Location = System::Drawing::Point(29, 87);
			this->textBoxZ->Name = L"textBoxZ";
			this->textBoxZ->Size = System::Drawing::Size(112, 26);
			this->textBoxZ->TabIndex = 11;
			this->textBoxZ->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBoxZ->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxX_TextChanged);
			this->textBoxZ->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBoxX_KeyPress);
			// 
			// textBoxY
			// 
			this->textBoxY->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxY->Location = System::Drawing::Point(29, 55);
			this->textBoxY->Name = L"textBoxY";
			this->textBoxY->Size = System::Drawing::Size(112, 26);
			this->textBoxY->TabIndex = 10;
			this->textBoxY->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBoxY->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxX_TextChanged);
			this->textBoxY->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBoxX_KeyPress);
			// 
			// textBoxX
			// 
			this->textBoxX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxX->Location = System::Drawing::Point(29, 23);
			this->textBoxX->Name = L"textBoxX";
			this->textBoxX->Size = System::Drawing::Size(112, 26);
			this->textBoxX->TabIndex = 9;
			this->textBoxX->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBoxX->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxX_TextChanged);
			this->textBoxX->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBoxX_KeyPress);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->button1);
			this->tabPage4->Controls->Add(this->btnIn3);
			this->tabPage4->Controls->Add(this->txtIn3);
			this->tabPage4->Controls->Add(this->label24);
			this->tabPage4->Controls->Add(this->label25);
			this->tabPage4->Controls->Add(this->txtSave3);
			this->tabPage4->Controls->Add(this->btnSave3);
			this->tabPage4->Controls->Add(this->label14);
			this->tabPage4->Controls->Add(this->TextBoxN);
			this->tabPage4->Controls->Add(this->btn_text_generate);
			this->tabPage4->Controls->Add(this->btn_clear1);
			this->tabPage4->Controls->Add(this->btn_clear2);
			this->tabPage4->Controls->Add(this->label11);
			this->tabPage4->Controls->Add(this->textBox2);
			this->tabPage4->Controls->Add(this->label10);
			this->tabPage4->Controls->Add(this->textBox1);
			this->tabPage4->Controls->Add(this->btn_get_words);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(1037, 524);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Задание 204";
			this->tabPage4->UseVisualStyleBackColor = true;
			this->tabPage4->Layout += gcnew System::Windows::Forms::LayoutEventHandler(this, &MyForm::tabPage4_Layout);
			this->tabPage4->Resize += gcnew System::EventHandler(this, &MyForm::tabPage4_Resize);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(852, 47);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(170, 30);
			this->button1->TabIndex = 50;
			this->button1->Text = L"Закрыть";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::btnClose_Click);
			// 
			// btnIn3
			// 
			this->btnIn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnIn3->Location = System::Drawing::Point(262, 59);
			this->btnIn3->Margin = System::Windows::Forms::Padding(2);
			this->btnIn3->Name = L"btnIn3";
			this->btnIn3->Size = System::Drawing::Size(250, 29);
			this->btnIn3->TabIndex = 49;
			this->btnIn3->Text = L"Ввод из файла";
			this->btnIn3->UseVisualStyleBackColor = true;
			this->btnIn3->Click += gcnew System::EventHandler(this, &MyForm::btnIn3_Click);
			// 
			// txtIn3
			// 
			this->txtIn3->Location = System::Drawing::Point(262, 35);
			this->txtIn3->Margin = System::Windows::Forms::Padding(2);
			this->txtIn3->Name = L"txtIn3";
			this->txtIn3->ReadOnly = true;
			this->txtIn3->Size = System::Drawing::Size(250, 20);
			this->txtIn3->TabIndex = 48;
			this->txtIn3->Click += gcnew System::EventHandler(this, &MyForm::txtIn_Click);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->Location = System::Drawing::Point(258, 12);
			this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(151, 20);
			this->label24->TabIndex = 47;
			this->label24->Text = L"Имя файла ввода:";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->Location = System::Drawing::Point(578, 13);
			this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(162, 20);
			this->label25->TabIndex = 46;
			this->label25->Text = L"Имя файла вывода:";
			// 
			// txtSave3
			// 
			this->txtSave3->Location = System::Drawing::Point(582, 38);
			this->txtSave3->Margin = System::Windows::Forms::Padding(2);
			this->txtSave3->Name = L"txtSave3";
			this->txtSave3->ReadOnly = true;
			this->txtSave3->Size = System::Drawing::Size(250, 20);
			this->txtSave3->TabIndex = 45;
			this->txtSave3->Click += gcnew System::EventHandler(this, &MyForm::txtSave_Click);
			// 
			// btnSave3
			// 
			this->btnSave3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSave3->Location = System::Drawing::Point(582, 60);
			this->btnSave3->Margin = System::Windows::Forms::Padding(2);
			this->btnSave3->Name = L"btnSave3";
			this->btnSave3->Size = System::Drawing::Size(250, 28);
			this->btnSave3->TabIndex = 44;
			this->btnSave3->Text = L"Cохранить в файл";
			this->btnSave3->UseVisualStyleBackColor = true;
			this->btnSave3->Click += gcnew System::EventHandler(this, &MyForm::btnSave3_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(22, 13);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(210, 20);
			this->label14->TabIndex = 26;
			this->label14->Text = L"Введите количество букв:";
			// 
			// TextBoxN
			// 
			this->TextBoxN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TextBoxN->Location = System::Drawing::Point(26, 46);
			this->TextBoxN->MaxLength = 40;
			this->TextBoxN->Name = L"TextBoxN";
			this->TextBoxN->Size = System::Drawing::Size(202, 29);
			this->TextBoxN->TabIndex = 25;
			this->TextBoxN->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->TextBoxN->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Input_KeyPress);
			// 
			// btn_text_generate
			// 
			this->btn_text_generate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_text_generate->Location = System::Drawing::Point(25, 251);
			this->btn_text_generate->Name = L"btn_text_generate";
			this->btn_text_generate->Size = System::Drawing::Size(256, 35);
			this->btn_text_generate->TabIndex = 24;
			this->btn_text_generate->Text = L"Cгенирировать текст";
			this->btn_text_generate->UseVisualStyleBackColor = true;
			this->btn_text_generate->Click += gcnew System::EventHandler(this, &MyForm::btn_text_generate_Click);
			// 
			// btn_clear1
			// 
			this->btn_clear1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_clear1->Location = System::Drawing::Point(766, 251);
			this->btn_clear1->Name = L"btn_clear1";
			this->btn_clear1->Size = System::Drawing::Size(256, 35);
			this->btn_clear1->TabIndex = 23;
			this->btn_clear1->Text = L"Очистить";
			this->btn_clear1->UseVisualStyleBackColor = true;
			this->btn_clear1->Click += gcnew System::EventHandler(this, &MyForm::btn_clear1_Click);
			// 
			// btn_clear2
			// 
			this->btn_clear2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_clear2->Location = System::Drawing::Point(766, 486);
			this->btn_clear2->Name = L"btn_clear2";
			this->btn_clear2->Size = System::Drawing::Size(256, 35);
			this->btn_clear2->TabIndex = 22;
			this->btn_clear2->Text = L"Очистить";
			this->btn_clear2->UseVisualStyleBackColor = true;
			this->btn_clear2->Click += gcnew System::EventHandler(this, &MyForm::btn_clear2_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(21, 318);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(212, 20);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Слова, содержащие n букв";
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(25, 341);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox2->Size = System::Drawing::Size(997, 133);
			this->textBox2->TabIndex = 20;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(21, 89);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(138, 20);
			this->label10->TabIndex = 19;
			this->label10->Text = L"Исходная строка";
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(25, 112);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(997, 133);
			this->textBox1->TabIndex = 18;
			// 
			// btn_get_words
			// 
			this->btn_get_words->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_get_words->Location = System::Drawing::Point(25, 480);
			this->btn_get_words->Name = L"btn_get_words";
			this->btn_get_words->Size = System::Drawing::Size(256, 35);
			this->btn_get_words->TabIndex = 17;
			this->btn_get_words->Text = L"Получить слова с n буквами";
			this->btn_get_words->UseVisualStyleBackColor = true;
			this->btn_get_words->Click += gcnew System::EventHandler(this, &MyForm::btn_get_words_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1045, 550);
			this->Controls->Add(this->tabControl1);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Индивидуальные задания";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	// settings
	const int MAXARRAYSIZE = 20, MAXVALUE = 1000, MINVALUE = -1000, MAXN = 250;
	double  average;
	int min_value, max_value, array_size, input_array_size, summa;
	int min_number, max_number, chet_count, nechet_count;
	bool is_array_input, is_array_values_generated, is_ready_to_work, is_right_generation_data;
	String^ chet_numbers_str;
	String^ nechet_numbers_str;
	String^ array_str;
	String^ result_str;
	// функция для генерации случайного числа

int rrand(int range_min, int range_max) {
return rand() % (range_max - range_min + 1) + range_min;
}

// проверка наличия введенного массива
bool IsArrayInput() {
bool check;
if (inputArr->Text->Length > 0) {
	check = true;
	array_str = inputArr->Text + " ";
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

bool IsArrayInput2(String^ input) {
	bool check;
	if (input->Length > 0) {
		check = true;
		array_str = input + " ";
		// определение размера введенного массива
		input_array_size = 0;
		for (int i = 0; i < array_str->Length; i++) {
			if (array_str[i] == ' ' || array_str[i] == '\t' || array_str[i] == '\n') {
				input_array_size += 1;
			}
		}
		array_size = input_array_size;
		if (array_size < 3 && array_size > 5)
			check = false;
	}
	else {
		check = false;
	}
	return check;
}

void misstake_alert(String^ text_alert) {
	System::Windows::Forms::DialogResult result = MessageBox::Show(text_alert, "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
}

void update_generation_data() {
	// определение характеристик массива
	if (txtArraySize->Text != "" && txtMinNumber->Text != "" && txtMaxNumber->Text != "") {
		array_size = Convert::ToInt32(txtArraySize->Text);
		min_value = Convert::ToInt32(txtMinNumber->Text);
		max_value = Convert::ToInt32(txtMaxNumber->Text);
	}
	get_arr();
		
}

void get_arr() {
	String^ text_message = "";
	// проверка на наличие массива
	is_array_input = IsArrayInput();
	// чтение массива из textbox
	if (is_array_input) {
		array_str = inputArr->Text;

		int* arr = new int[array_size];
		int start_i = 0, end_i = 0, count_numbers = 0;
		is_ready_to_work = true;
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
			if (array_str[i] != ' ' && !(i < array_str->Length && array_str[i + 1] == '-' && (array_str[i] == '-' || array_str[i] == ' '))) {
				end_i += 1;
			}
			else {
				if ((i > 0 && array_str[i - 1] == ' ') || (i > 0 && array_str[i - 1] == '-' && array_str[i] == '-')){
					start_i = i + 1;
					end_i = start_i;
				}
				else {
					try {
						arr[count_numbers] = Convert::ToDouble(array_str->Substring(start_i, end_i - start_i));
						count_numbers += 1;

					}
					catch (...) {
							
					}
					start_i = i + 1;
					end_i = start_i;
				}
					

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
			for (int i = 0; i < count_numbers; i++) {
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
			txtArraySize->Text = Convert::ToString(count_numbers);
			txtMaxNumber->Text = Convert::ToString(max_number);
			txtMinNumber->Text = Convert::ToString(min_number);
		}
		// ошибки при чтении массива
		else {
			misstake_alert("Неверный ввод массива" + text_message);
		}
		inputArr->Text = "";
		for (int i = 0; i < count_numbers; i++) {
			inputArr->Text += Convert::ToString(arr[i]) + " ";
		}

		delete[] arr;
	}
}

private: System::Void btnGeneration_Click(System::Object^ sender, System::EventArgs^ e) {
srand(static_cast<unsigned int>(time(NULL)));
inputArr->Text = "";
String^ text;
// считывание или генерация характеристик массива
if (txtArraySize->Text->Length > 0) {
	try {
		if (txtMaxNumber->Text->Length == 0 || txtMinNumber->Text->Length == 0) {
			is_right_generation_data = false;
			text = "Не все значения для генерации заданы";
		}
		else {
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
		}					
	}
	catch (...) {
		is_right_generation_data = false;
	}
}
else {
	if (txtArraySize->Text->Length == 0 || txtMaxNumber->Text->Length == 0 || txtMinNumber->Text->Length == 0) {
		is_right_generation_data = false;
		text = "Задайте значения для генерации";
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
	inputArr->Text = array_str;
	delete[] arr;
}
else {
	text = "Неверные данные для генерации\n" + text;
	misstake_alert(text);
}

}

private: System::Void Input_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
TextBox^ TextBoxField = safe_cast<TextBox^>(sender);
int len = TextBoxField->Text->Length;
int ikey = e->KeyChar;
char ckey = e->KeyChar;
if (TextBoxField->Name != "inputArr") {
	if (ckey != '\b' && (((ikey < 48 || ikey > 57) && ckey != '-') || (len == 5 && TextBoxField->Text->Contains("-")) || (len == 4 && !TextBoxField->Text->Contains("-")))) {
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
// here
	   String^ prefRez1;
	   String^ prefRez2;
	   String^ prefRez3;
	   boolean prefRez4;
	   int schet = 0;
	   bool changes = false;
private: System::Void inputArr_Leave(System::Object^ sender, System::EventArgs^ e) {
update_generation_data();
}
private: System::Void btn_run_Click(System::Object^ sender, System::EventArgs^ e) {
String^ text_message = "";
// проверка на наличие массива
if (inputArr->Text->Length == 0) {
	misstake_alert("Введите или сгенерируйте массив");
	return;
}
is_array_input = IsArrayInput();
// чтение массива из textbox
if (is_array_input) {
	array_str = inputArr->Text;

	int* arr = new int[array_size];
	int start_i = 0, end_i = 0, count_numbers = 0;
	is_ready_to_work = true;
	for (int i = array_str->Length - 1; i > 0; i--) {
		if (array_str[i] != ' ' && !(i < array_str->Length && array_str[i + 1] == '-' && (array_str[i] == '-' || array_str[i] == ' '))) {
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
			if ((i > 0 && array_str[i - 1] == ' ') || (i > 0 && array_str[i - 1] == '-' && array_str[i] == '-')) {
				start_i = i + 1;
				end_i = start_i;
			}
				
			else {
				try {
					arr[count_numbers] = Convert::ToInt32(array_str->Substring(start_i, end_i - start_i));
					count_numbers += 1;

				}
				catch (...) {
						
						
				}
				start_i = i + 1;
				end_i = start_i;
			}


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
		int chet_numbers = count_numbers / 2;
		int nechet_numbers = count_numbers / 2 + count_numbers % 2;
		String^ chet_arr = "";
		String^ nechet_arr = "";
		for (int i = 0; i < count_numbers; i++) {
			if (i % 2 == 1) {
				chet_arr += arr[i] + " ";
			}
			else {
				nechet_arr += arr[i] + " ";
			}
		}

		chetArr->Text = chet_arr;
		nechetArr->Text = nechet_arr;
		changes = true;
	}
	// ошибки при чтении массива
	else {
		misstake_alert("Неверный ввод массива" + text_message);
	}

	delete[] arr;
}
}

private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
	//path = "c:\\Users\\Данил\\Desktop\\massivy.txt";
	try {
		String^ path;
		if (txtSave->Text == "")
		{
			// Создание объекта диалогового окна OpenFileDialog
			OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
			// Настройка свойств диалогового окна
			openFileDialog1->Title = "Открытие файла";
			openFileDialog1->InitialDirectory = "c:\\";
			openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
			openFileDialog1->FilterIndex = 1;
			openFileDialog1->ShowReadOnly = true;
			openFileDialog1->RestoreDirectory = true;
			// Открытие диалогового окна и запись полного имени выбранного в окне файла в текстовое поле
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				txtSave->Text = openFileDialog1->FileName;
				// Операции открытия файла, чтения из него и закрытия
			}
			else
				txtSave->Text = "";
			return;
		}

		path = txtSave->Text;
		// Создание файла для записи, если он не существовал.
		
		if (!File::Exists(path)) {
			StreamWriter^ sw = File::CreateText(path);
			sw->WriteLine(" ");
			sw->Close(); // Закрытие файла
		}
		StreamWriter^ sa = File::AppendText(path);
		
		if (prefRez1 != nechetArr->Text && nechetArr->Text != "") {
			String^ s = "- Нечетные элементы: ";
			sa->WriteLine(s + nechetArr->Text + " "); // Запись в файл

		}
		if (prefRez2 != chetArr->Text && chetArr->Text != "") {
			String^ s = "- Четные элементы: ";
			sa->WriteLine(s + chetArr->Text + " "); // Запись в файл

		}
		prefRez1 = this->nechetArr->Text;
		prefRez2 = this->chetArr->Text;
		changes = false;
		sa->Close();

	}
	catch (...) {
		System::Windows::Forms::DialogResult result = MessageBox::Show("Введите корректный путь до файла ", \
			"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
	private: System::Void btnIn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtIn->Text == "")
		{
			// Создание объекта диалогового окна OpenFileDialog
			OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
			// Настройка свойств диалогового окна
			openFileDialog1->Title = "Открытие файла";
			openFileDialog1->InitialDirectory = "c:\\";
			openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
			openFileDialog1->FilterIndex = 1;
			openFileDialog1->ShowReadOnly = true;
			openFileDialog1->RestoreDirectory = true;
			// Открытие диалогового окна и запись полного имени выбранного в окне файла в текстовое поле
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				this->Text = openFileDialog1->FileName;
				// Операции открытия файла, чтения из него и закрытия
			}
			else
				txtIn->Text = "";

		}
		String^ path = txtIn->Text;
		String^ line;



		// Файловые операции в выбранной папке


		inputArr->Text = "";
		StreamReader^ sr = File::OpenText(path);
		while (line = sr->ReadLine()) // Чтение строк из файла
			inputArr->Text += (line)+" "; // Вывод считанных строк
		sr->Close(); // Закрытие файла
		is_array_input = IsArrayInput();
		if (is_array_input) {
			array_str = inputArr->Text;

			for (int i = 0; i < array_str->Length; i++) {
				boolean a1 = array_str[i] != ' ';
				boolean a2 = array_str[i] != '0';
				boolean a3 = array_str[i] != '1';
				boolean a4 = array_str[i] != '2';
				boolean a5 = array_str[i] != '3';
				boolean a6 = array_str[i] != '4';
				boolean a7 = array_str[i] != '5';
				boolean a8 = array_str[i] != '6';
				boolean a9 = array_str[i] != '7';
				boolean a10 = array_str[i] != '8';
				boolean a11 = array_str[i] != '9';
				boolean a12 = array_str[i] != '-';
				if (a1 && a2 && a3 && a4 && a5 && a6 && a7 && a8 && a9 && a10 && a11 && a12)
				{

					array_str = array_str->Remove(i, 1);
					array_str = array_str->Insert(i, " ");
					if (array_str[0] == ' ') {
						array_str = array_str->Remove(0, 1);
						i--;
					}
					if (i > 0)
						i--;

				}
			}
			for (int i = 0; i < array_str->Length; i++) {
				if (array_str[0] == ' ') {
					array_str = array_str->Remove(0, 1);
					i--;
				}
			}
			inputArr->Text = array_str;

			int* arr = new int[array_size];
			int start_i = 0, end_i = 0, count_numbers = 0;
			is_ready_to_work = true;

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
					if (i > 0 && array_str[i - 1] == ' ') {
						start_i = i + 1;
						end_i = start_i;
					}
					else {
						try {
							arr[count_numbers] = Convert::ToInt32(array_str->Substring(start_i, end_i - start_i));
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
			}
			// массив успешно прочитан
			// подстановка характеристик, если массив введен пользователем
			for (int i = 0; i < count_numbers; i++) {
				summa += arr[i];
				if (arr[i] > max_number)
					max_number = arr[i];
				if (arr[i] < min_number)
					min_number = arr[i];
			}
			txtArraySize->Text = Convert::ToString(count_numbers);
			txtMaxNumber->Text = Convert::ToString(max_number);
			txtMinNumber->Text = Convert::ToString(min_number);
			if (is_ready_to_work) {
				inputArr->Text = "";

				for (int i = 0; i < count_numbers; i++) {
					inputArr->Text += Convert::ToString(arr[i]) + " ";
				}
			}
			// ошибки при чтении массива
			else {
				System::Windows::Forms::DialogResult result = MessageBox::Show("Неверный ввод массива", \
					"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}



			delete[] arr;
		}

	}
	private: System::Void txtSave_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::TextBox^ textBox = (TextBox^)sender;
		// Создание объекта диалогового окна FolderBrowserDialog
		{
			// Создание объекта диалогового окна OpenFileDialog
			OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
			// Настройка свойств диалогового окна
			openFileDialog1->Title = "Открытие файла";
			openFileDialog1->InitialDirectory = "c:\\";
			openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
			openFileDialog1->FilterIndex = 1;
			openFileDialog1->ShowReadOnly = true;
			openFileDialog1->RestoreDirectory = true;
			// Открытие диалогового окна и запись полного имени выбранного в окне файла в текстовое поле
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				textBox->Text = openFileDialog1->FileName;
				// Операции открытия файла, чтения из него и закрытия
			}
			else
				textBox->Text = "";
			return;
		}


	}
	private: System::Void txtIn_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::TextBox^ textBox = (TextBox^)sender;
		// Создание объекта диалогового окна OpenFileDialog
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		// Настройка свойств диалогового окна
		openFileDialog1->Title = "Открытие файла";
		openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		openFileDialog1->FilterIndex = 1;
		openFileDialog1->ShowReadOnly = true;
		openFileDialog1->RestoreDirectory = true;
		// Открытие диалогового окна и запись полного имени выбранного в окне файла в текстовое поле
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			textBox->Text = openFileDialog1->FileName;
			// Операции открытия файла, чтения из него и закрытия
		}
		else
			textBox->Text = "";
	}




private: System::Void GenerateN_Click(System::Object^ sender, System::EventArgs^ e) {
srand(static_cast<unsigned int>(time(NULL)));
int n = rrand(1, MAXN);
inputN->Text = Convert::ToString(n);
}

	   bool changes1 = false;
	   bool changes2 = false;
	   bool changes3 = false;
private: System::Void build_matrix_Click(System::Object^ sender, System::EventArgs^ e) {
if (inputN->Text->Length == 0) {
	String^ text = "Введите размер матрицы";
	misstake_alert(text);
	return;
}
int const a = Convert::ToInt32(inputN->Text);
if (a <= 0 || a > MAXN) {
	String^ text = "Недопустимый размер матрицы \n Введите размер матрицы\n от 1 до " + Convert::ToString(MAXN);
	misstake_alert(text);
}
else {
	int const n = Convert::ToInt32(inputN->Text);
	int a[250][250] = { 0 };
	int i = 0, j, k = 0, p = 1;

	while (i < n * n) /*Цикл по номеру витка*/
	{
		k++;
		for (j = k - 1; j < n - k + 1; j++)
		{
			a[k - 1][j] = p++;
			i++;
		}   /*Определение значений верхнего гор столбца*/

		for (j = k; j < n - k + 1; j++)
		{
			a[j][n - k] = p++;
			i++;
		}   /* --//-- По правому вертикальному столбцу*/

		for (j = n - k - 1; j >= k - 1; j--)
		{
			a[n - k][j] = p++;
			i++;
		}   /* --//-- по нижнему горизонтальному столбцу*/

		for (j = n - k - 1; j >= k; j--)
		{
			a[j][k - 1] = p++;
			i++;
		}   /* --//-- по левому вертикальному столбцу*/

	}
	String^ answer = "";
	int number = 0;
	int max_number_length, spaces;
	int max_row_length, max_col_length, x, y;

	max_number_length = Convert::ToString(n * n)->Length;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			String^ new_number_in_str = Convert::ToString(a[i][j]);
			spaces = max_number_length - new_number_in_str->Length;
			for (int i = 0; i < spaces; i++) {
				answer += " ";
			}
			answer += new_number_in_str + " ";
		}
		answer += "\r\n";
	}
	int wx, wy;
	wx = this->Width - 24;
	wy = this->Height - 217;
	max_row_length = (max_number_length + 1) * n * 10;
	x = 24 + (wx - max_row_length) / 2;
	max_col_length = n * 2 * 10;
	y = 117 + (wy - max_col_length) / 2;
	if (max_row_length > wx) {
		x = 24;
	}
	if (max_col_length > wy) {
		y = 117;
	}
	Matrix->Text = answer;
	changes1 = true;
}
}

private: System::Void btnSave1_Click(System::Object^ sender, System::EventArgs^ e) {
	//path = "c:\\Users\\Данил\\Desktop\\massivy.txt";
	int n;
	if (inputN->Text != "") {
		n = Convert::ToInt32(inputN->Text);
	}
	else {
		n = 0;
		misstake_alert("Размерность матрицы не указана!");
		return;
	}
	if (Matrix->Text == "") {
		misstake_alert("Вы пытаетесь сохранить несозданную матрицу");
		return;
	}
	try {
		String^ path;
		if (txtSave1->Text == "")
		{
			// Создание объекта диалогового окна OpenFileDialog
			OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
			// Настройка свойств диалогового окна
			openFileDialog1->Title = "Открытие файла";
			openFileDialog1->InitialDirectory = "c:\\";
			openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
			openFileDialog1->FilterIndex = 1;
			openFileDialog1->ShowReadOnly = true;
			openFileDialog1->RestoreDirectory = true;
			// Открытие диалогового окна и запись полного имени выбранного в окне файла в текстовое поле
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				txtSave1->Text = openFileDialog1->FileName;
				// Операции открытия файла, чтения из него и закрытия
			}
			else
				txtSave1->Text = "";
			return;
		}

		path = txtSave1->Text;
		// Создание файла для записи, если он не существовал.

		if (!File::Exists(path)) {
			StreamWriter^ sw = File::CreateText(path);
			sw->Close(); // Закрытие файла
		}
		StreamWriter^ sa = File::AppendText(path);
		if (n > 0 && changes1) {
			sa->WriteLine(" ");
			sa->WriteLine("- Размерность матрицы: " + inputN->Text);
		}
		if (prefRez1 != Matrix->Text && Matrix->Text != "") {
			String^ s = "- Матрица: \n";
			sa->WriteLine(s + Matrix->Text + " "); // Запись в файл

		}
		prefRez1 = this->Matrix->Text;
		changes1 = false;
		sa->Close();

	}
	catch (...) {
		System::Windows::Forms::DialogResult result = MessageBox::Show("Введите корректный путь до файла ", \
			"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}




private: System::Void btnS_Click(System::Object^ sender, System::EventArgs^ e) {
textBoxS1->Text = "";
textBoxS2->Text = "";
textBoxS3->Text = "";
bool is_generated = false;
get_S(is_generated);
}

private: System::Void shadow() {
labelP1->Visible = false;
labelP2->Visible = false;
labelP3->Visible = false;
pictureBox1->Visible = false;
pictureBox2->Visible = false;
pictureBox3->Visible = false;
pictureBox4->Visible = false;
pictureBox5->Visible = false;
pictureBox6->Visible = false;
pictureBox7->Visible = false;
textBoxS1->Visible = false;
labelS1->Visible = false;
textBoxS2->Visible = false;
labelS2->Visible = false;
textBoxS3->Visible = false;
labelS3->Visible = false;
label16->Visible = false;
label17->Visible = false;
label18->Visible = false;
}

private: System::Void clear_output() {
textBoxS1->Text = "";
textBoxS2->Text = "";
textBoxS3->Text = "";
}

void get_S(bool is_generated){
double x, y, z, t;
int x_len, y_len, z_len, t_len;
shadow();
x_len = textBoxX->Text->Length;
y_len = textBoxY->Text->Length;
z_len = textBoxZ->Text->Length;
t_len = textBoxT->Text->Length;
if (x_len == 0 || y_len == 0 || z_len == 0 || t_len == 0) {
	System::Windows::Forms::DialogResult result = MessageBox::Show("Остались пустые поля. \nВведите все длины сторон.", \
		"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	return;
}
x = Convert::ToDouble(textBoxX->Text);
y = Convert::ToDouble(textBoxY->Text);
z = Convert::ToDouble(textBoxZ->Text);
t = Convert::ToDouble(textBoxT->Text);
if (x == 0 || y == 0 || z == 0 || t == 0) {
	System::Windows::Forms::DialogResult result = MessageBox::Show("Введите длины сторон > 0", \
		"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	return;
}
	
if (!is_generated) {
	if (!is_existed(x,y,z,t)) {
		labelS1->Text = "Четырехугольника не существует";
		labelS1->Visible = true;
		pictureBox4->Visible = true;
		return;
	}

	double saxy, sxoy, p1, xy, s1, s2, s3, temp;
	bool right_s = false;
	s3 = 0;
	sxoy = x * y / 2;
	xy = sqrt(x * x + y * y);
	p1 = (xy + z + t) / 2;
	temp = p1 * (p1 - xy) * (p1 - z) * (p1 - t);

	if (temp == 0) {
		s2 = sxoy;
		labelS1->Text = "Площадь треугольника равна:";
		pictureBox6->Visible = true;
	}
	else {
		labelS1->Text = "Площадь четырехугольника равна:";
		saxy = sqrt(temp);
		s1 = sxoy - saxy;
		s2 = sxoy + saxy;
		s1 = floor(s1 * 100000) / 100000;
		if ((z > x && t > y) || (z > y && t > x)) {
			s3 = saxy - sxoy;
			s3 = floor(s3 * 100000) / 100000;
		}
	}

	if (s2 > 0) {
		label16->Visible = true;
		textBoxS1->Visible = true;
		labelS1->Visible = true;
		textBoxS1->Text = Convert::ToString(s2);
		labelP1->Visible = true;
		if (!pictureBox6->Visible) {
			if (x == y && x == z && x == t)
				pictureBox7->Visible = true;
			else if ((x == t && y == z) || (x == z && y == t))
				pictureBox5->Visible = true;
			else
				pictureBox1->Visible = true;
		}
			
	}
	if (s1 > 0) {
		label17->Visible = true;
		textBoxS2->Visible = true;
		labelS2->Visible = true;
		textBoxS2->Text = Convert::ToString(s1);
		labelP2->Visible = true;
		pictureBox2->Visible = true;
	}
	if (s3 > 0) {
		label18->Visible = true;
		textBoxS3->Visible = true;
		labelS3->Visible = true;
		textBoxS3->Text = Convert::ToString(s3);
		labelP3->Visible = true;
		pictureBox3->Visible = true;
	}
	if (s1 > 0 || s2 > 0 || s3 > 0) {
		right_s = true;
	}
	else  {
		labelS1->Text = "Четырехугольника не существует";
		labelS1->Visible = true;
		pictureBox4->Visible = true;
	}
	changes2 = true;
}
	
}

private: System::Void textBoxX_TextChanged(System::Object^ sender, System::EventArgs^ e) {
labelS1->Text = "Площадь четырехугольника(выпуклого) равна:";
clear_output();
}

private: System::Boolean is_existed(double x, double y, double z, double t) {
bool t1, t2, t3, t4;
double xy, p1, temp;
t1 = (x <= y + z + t);
t2 = (y <= x + z + t);
t3 = (z <= y + x + t);
t4 = (t <= y + z + x);
xy = sqrt(x * x + y * y);
p1 = (xy + z + t) / 2;
temp = p1 * (p1 - xy) * (p1 - z) * (p1 - t);
if (t1 && t2 && t3 && t4 && temp >= 0) {
	return true;
}
else {
	return false;
}
}

private: System::Void btn_random_Click(System::Object^ sender, System::EventArgs^ e) {
srand(static_cast<unsigned int>(time(NULL)));
double x=0, y=0, z=0, t=100;
bool isgenerated = true;
	
clear_output();
shadow();
while (!is_existed(x,y,z,t)) {
	x = rrand(1, 100) * 0.064 + 1.59;
	y = rrand(1, 100) * 0.051 + 1.37;
	z = rrand(1, 100) * 0.034 + 1.74;
	t = rrand(1, 100) * 0.083 + 1.96;

		
	textBoxX->Text = Convert::ToString(x);
	textBoxY->Text = Convert::ToString(y);
	textBoxZ->Text = Convert::ToString(z);
	textBoxT->Text = Convert::ToString(t);
}
}
private: System::Void textBoxX_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
TextBox^ TextBoxField = safe_cast<TextBox^>(sender);
if (Convert::ToInt32(e->KeyChar) < 48 || Convert::ToInt32(e->KeyChar) > 57)
{
	e->Handled = true;
}
else e->Handled = false;//если нажатая кнопка не цифровая то ввод запрещен, иначе разрешен
if (e->KeyChar == 8 && TextBoxField->Text != "")
{
	e->Handled = false;
}//если нажат бэкспейс и строка не пустая, то ввод разрешен
if (e->KeyChar == 8 && TextBoxField->Text == "")
{
	e->Handled = true;
}//если нажат бэкспейс и строка пустая, то ввод запрещен
if (TextBoxField->Text->IndexOf(",") == -1 && e->KeyChar == 44 && TextBoxField->Text != "") {
	e->Handled = false;
}//если запятая не стоит, строка не пустая и нажата клавиша запятой, то ввод разрешен
}


private: System::Void btnSave2_Click(System::Object^ sender, System::EventArgs^ e) {
	double x, y, z, t;
	int x_len, y_len, z_len, t_len;
	x_len = textBoxX->Text->Length;
	y_len = textBoxY->Text->Length;
	z_len = textBoxZ->Text->Length;
	t_len = textBoxT->Text->Length;
	if (x_len == 0 || y_len == 0 || z_len == 0 || t_len == 0) {
		misstake_alert("Остались пустые поля. \nВведите все длины сторон.");
		return;
	}
	x = Convert::ToDouble(textBoxX->Text);
	y = Convert::ToDouble(textBoxY->Text);
	z = Convert::ToDouble(textBoxZ->Text);
	t = Convert::ToDouble(textBoxT->Text);
	if (x == 0 || y == 0 || z == 0 || t == 0) {
		misstake_alert("Введите длины сторон > 0");
		return;
	}
	try {
		String^ path;
		if (txtSave2->Text == "")
		{
			// Создание объекта диалогового окна OpenFileDialog
			OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
			// Настройка свойств диалогового окна
			openFileDialog1->Title = "Открытие файла";
			openFileDialog1->InitialDirectory = "c:\\";
			openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
			openFileDialog1->FilterIndex = 1;
			openFileDialog1->ShowReadOnly = true;
			openFileDialog1->RestoreDirectory = true;
			// Открытие диалогового окна и запись полного имени выбранного в окне файла в текстовое поле
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				txtSave2->Text = openFileDialog1->FileName;
				// Операции открытия файла, чтения из него и закрытия
			}
			else
				txtSave2->Text = "";
			return;
		}

		path = txtSave2->Text;
		// Создание файла для записи, если он не существовал.

		if (!File::Exists(path)) {
			StreamWriter^ sw = File::CreateText(path);
			sw->Close(); // Закрытие файла
		}
		StreamWriter^ sa = File::AppendText(path);
		if (changes2 && (textBoxS1->Visible || textBoxS2->Visible || textBoxS3->Visible)) {
			sa->WriteLine(" ");
			sa->WriteLine("- сторона X : " + textBoxX->Text);
			sa->WriteLine("- сторона Y : " + textBoxY->Text);
			sa->WriteLine("- сторона Z : " + textBoxZ->Text);
			sa->WriteLine("- сторона T : " + textBoxT->Text);
		}
		String^ figure_type = "";
		String^ s = "- ";
		if (prefRez1 != textBoxS1->Text && textBoxS1->Visible) {
			if (pictureBox7->Visible) {
				figure_type = "Площадь квадрата равна: ";
			}
			if (pictureBox6->Visible) {
				figure_type = "Площадь треугольника равна: ";
			}
			if (pictureBox5->Visible) {
				figure_type = "Площадь прямоугольника равна: ";
			}
			if (pictureBox1->Visible) {
				figure_type = "Площадь четырехугольника (выпуклого) равна: ";
			}
			if (pictureBox4->Visible) {
				figure_type = "Четырехугольника c такими сторонами не существует";
				sa->WriteLine(s + figure_type + " "); // Запись в файл
			}
			else {
				sa->WriteLine(s + figure_type + label16->Text + " "); // Запись в файл
			}
			
		}
		if (prefRez2 != textBoxS2->Text && textBoxS2->Visible) {
			sa->WriteLine(s + "Площадь четырехугольника (невыпуклого тип2) равна: " + textBoxS2->Text + " " + label16->Text + " "); // Запись в файл

		}
		if (prefRez3 != textBoxS3->Text && textBoxS3->Visible) {
			sa->WriteLine(s + "Площадь четырехугольника (невыпуклого тип2) равна: " + textBoxS3->Text + " " + label16->Text + " "); // Запись в файл

		}
		prefRez1 = textBoxS1->Text;
		prefRez2 = textBoxS2->Text;
		prefRez3 = textBoxS3->Text;
		changes2 = false;
		sa->Close();

	}
	catch (...) {
		System::Windows::Forms::DialogResult result = MessageBox::Show("Введите корректный путь до файла ", \
			"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
private: System::Void btnIn2_Click(System::Object^ sender, System::EventArgs^ e) {
	shadow();
	if (txtIn2->Text == "")
	{
		// Создание объекта диалогового окна OpenFileDialog
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		// Настройка свойств диалогового окна
		openFileDialog1->Title = "Открытие файла";
		openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		openFileDialog1->FilterIndex = 1;
		openFileDialog1->ShowReadOnly = true;
		openFileDialog1->RestoreDirectory = true;
		// Открытие диалогового окна и запись полного имени выбранного в окне файла в текстовое поле
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			txtIn2->Text = openFileDialog1->FileName;
			// Операции открытия файла, чтения из него и закрытия
		}
		else
			txtIn2->Text = "";

	}
	String^ path = txtIn2->Text;
	String^ line;



	// Файловые операции в выбранной папке


	String^ input = "";
	StreamReader^ sr = File::OpenText(path);
	while (line = sr->ReadLine()) // Чтение строк из файла
		input += (line)+" "; // Вывод считанных строк
	sr->Close(); // Закрытие файла
	int a1 = input->Length - 1;
	if (input->Substring(a1, 1) == " ") {
		input = input->Substring(0, input->Length - 1);
	}
	is_array_input = IsArrayInput2(input);
	if (is_array_input) {
		array_str = input;

		for (int i = 0; i < array_str->Length; i++) {
			boolean a1 = array_str[i] != ' ';
			boolean a2 = array_str[i] != '0';
			boolean a3 = array_str[i] != '1';
			boolean a4 = array_str[i] != '2';
			boolean a5 = array_str[i] != '3';
			boolean a6 = array_str[i] != '4';
			boolean a7 = array_str[i] != '5';
			boolean a8 = array_str[i] != '6';
			boolean a9 = array_str[i] != '7';
			boolean a10 = array_str[i] != '8';
			boolean a11 = array_str[i] != '9';
			boolean a12 = array_str[i] != ',';
			if (a1 && a2 && a3 && a4 && a5 && a6 && a7 && a8 && a9 && a10 && a11 && a12)
			{

				array_str = array_str->Remove(i, 1);
				array_str = array_str->Insert(i, " ");
				if (array_str[0] == ' ') {
					array_str = array_str->Remove(0, 1);
					i--;
				}
				if (i > 0)
					i--;

			}
		}
		for (int i = 0; i < array_str->Length; i++) {
			if (array_str[0] == ' ') {
				array_str = array_str->Remove(0, 1);
				i--;
			}
		}
		input = array_str;

		double* arr = new double[array_size];
		int start_i = 0, end_i = 0, count_numbers = 0;
		is_ready_to_work = true;

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
				if (i > 0 && array_str[i - 1] == ' ') {
					start_i = i + 1;
					end_i = start_i;
				}
				else {
					try {
						arr[count_numbers] = Convert::ToDouble(array_str->Substring(start_i, end_i - start_i));
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
		}
		// массив успешно прочитан
		// подстановка характеристик, если массив введен пользователем

		if (is_ready_to_work && count_numbers == 4) {
			textBoxX->Text = Convert::ToString(arr[0]);
			textBoxY->Text = Convert::ToString(arr[1]);
			textBoxZ->Text = Convert::ToString(arr[2]);
			textBoxT->Text = Convert::ToString(arr[3]);
		}
		// ошибки при чтении массива
		else {
			System::Windows::Forms::DialogResult result = MessageBox::Show("Неверный ввод", \
				"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}



		delete[] arr;
	}
	else {
		System::Windows::Forms::DialogResult result = MessageBox::Show("Неверный ввод", \
			"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}

}


private: System::Void btn_get_words_Click(System::Object^ sender, System::EventArgs^ e) {
String^ text = textBox1->Text;
String^ answer = "";
String^ buffer = "";
int n = 0;
if (TextBoxN->Text->Length > 0) {
	n = Convert::ToInt16(TextBoxN->Text);
}
else {
	System::Windows::Forms::DialogResult result = MessageBox::Show("Введите число в поле", \
		"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	return;
}
if (n <= 0) {
	System::Windows::Forms::DialogResult result = MessageBox::Show("Введите число больше 0", \
		"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	return;
}
if (textBox1->Text == "") {
	System::Windows::Forms::DialogResult result = MessageBox::Show("Введите или сгенерируйте текст", \
		"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	return;
}
int dot_number = text->Length;
text = text->Substring(0, dot_number-1) + " ";
if (dot_number == -1) {
	dot_number = text->Length;
}
int start_i = 0, end_i = 0, count_numbers = 0;
for (int i = 0; i < dot_number; i++) {
	if (text[i] != ' ') {
		end_i += 1;
	}
	else {
		if (i > 0 && text[i - 1] == ' ') {
			start_i = i + 1;
			end_i = start_i;
		}
		else {
			buffer = text->Substring(start_i, end_i - start_i);
			count_numbers += 1;
			int bf_dl = buffer->Length - 1;
			String^ alphavit = "abcdefghijklmnopqrstuvwxyzйцукенгшщзхъфывапролджэячсмитьбю";
			if (buffer->Length > 1) {
				while (buffer[bf_dl] == ',' || buffer[bf_dl] == '.' || buffer[bf_dl] == '!' || buffer[bf_dl] == '?'\
					|| buffer[bf_dl] == ':' || buffer[bf_dl] == '-' || buffer[bf_dl] == '"'\
					|| buffer[bf_dl] == ';' || buffer[bf_dl] == '(' || buffer[bf_dl] == ')') {
					buffer = buffer->Substring(0, bf_dl);
					bf_dl = buffer->Length - 1;
					if (buffer->Length == 0)
						break;
				}
				bool is_n = false;
				int counter_num = 0;
				int counter_el = 0;
				String^ mb_answer = "";
				for (int i = 0; i < buffer->Length; i++) {
					String^ numb = buffer->Substring(i, 1);
					counter_num++;
					if (alphavit->Contains(numb->ToLower())) {
						counter_el++;
						mb_answer += numb;
					}
					int bf_dl = i;
					if ((buffer[bf_dl] == ',' || buffer[bf_dl] == '.' || buffer[bf_dl] == '!' || buffer[bf_dl] == '?'\
						|| buffer[bf_dl] == ':' || buffer[bf_dl] == '-' || buffer[bf_dl] == '"'\
						|| buffer[bf_dl] == ';' || buffer[bf_dl] == '(' || buffer[bf_dl] == ')')) {
						counter_num--;
					}
					if (counter_el > n) {
						break;
					}
				}
				if (counter_num == n && counter_el == n) {
					answer += mb_answer + " ";
				}

			}
			start_i = i + 1;
			end_i = start_i;
		}


	}
}
if (answer == "") {
	System::Windows::Forms::DialogResult result = MessageBox::Show("Исходный текст не содержит слов с " + Convert::ToString(n) + " буквами", \
		"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
}
changes3 = true;
textBox2->Text = answer;
}

private: System::Void btn_text_generate_Click(System::Object^ sender, System::EventArgs^ e) {
textBox1->Text = "";
srand(static_cast<unsigned int>(time(NULL)));
int const N = 42;
int const M = 60;
int word_len, symbol_number;
String^ alphavit = "abcdefghijklmnopqrstuvwxyz";
String^ word = "";
int words_count = rrand(5, M);
while (--words_count >= 0)
{
	word = "";
	word_len = rrand(1, 7);
	for (int i = 0; i < word_len; i++) {
		symbol_number = rrand(0, alphavit->Length-1);
		word += alphavit[symbol_number];
	}
	textBox1->Text += word;
	if (words_count >= 1) {
		textBox1->Text += " ";
	}
}
textBox1->Text += ". ";
	
}
private: System::Void btn_clear1_Click(System::Object^ sender, System::EventArgs^ e) {
textBox1->Text = "";
}

private: System::Void btnIn3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtIn3->Text == "")
	{
		// Создание объекта диалогового окна OpenFileDialog
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		// Настройка свойств диалогового окна
		openFileDialog1->Title = "Открытие файла";
		openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
		openFileDialog1->FilterIndex = 1;
		openFileDialog1->ShowReadOnly = true;
		openFileDialog1->RestoreDirectory = true;
		// Открытие диалогового окна и запись полного имени выбранного в окне файла в текстовое поле
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			txtIn3->Text = openFileDialog1->FileName;
			// Операции открытия файла, чтения из него и закрытия
		}
		else
			txtIn3->Text = "";

	}
	String^ path = txtIn3->Text;
	String^ line;



	// Файловые операции в выбранной папке


	String^ input = "";
	StreamReader^ sr = File::OpenText(path);
	while (line = sr->ReadLine()) // Чтение строк из файла
		input += (line)+" "; // Вывод считанных строк
	sr->Close(); // Закрытие файла
	textBox1->Text = input + " ";
}

private: System::Void btnSave3_Click(System::Object^ sender, System::EventArgs^ e) {
	int n;
	if (TextBoxN->Text->Length > 0) {
		n = Convert::ToInt16(TextBoxN->Text);
	}
	else {
		System::Windows::Forms::DialogResult result = MessageBox::Show("Введите число в поле", \
			"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	if (textBox1->Text == "") {
		System::Windows::Forms::DialogResult result = MessageBox::Show("Введите или сгенерируйте текст", \
			"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	try {
		String^ path;
		if (txtSave3->Text == "")
		{
			// Создание объекта диалогового окна OpenFileDialog
			OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
			// Настройка свойств диалогового окна
			openFileDialog1->Title = "Открытие файла";
			openFileDialog1->InitialDirectory = "c:\\";
			openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
			openFileDialog1->FilterIndex = 1;
			openFileDialog1->ShowReadOnly = true;
			openFileDialog1->RestoreDirectory = true;
			// Открытие диалогового окна и запись полного имени выбранного в окне файла в текстовое поле
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				txtSave3->Text = openFileDialog1->FileName;
				// Операции открытия файла, чтения из него и закрытия
			}
			else
				txtSave3->Text = "";
			return;
		}

		path = txtSave3->Text;
		// Создание файла для записи, если он не существовал.

		if (!File::Exists(path)) {
			StreamWriter^ sw = File::CreateText(path);
			sw->Close(); // Закрытие файла
		}

		StreamWriter^ sa = File::AppendText(path);
		if (textBox1->Text != "" && changes3) {
			sa->WriteLine(" ");
			sa->WriteLine("- Исходный текст: " + textBox1->Text);
		}
		if (prefRez1 != textBox2->Text) {
			String^ answer = "- Слова состоящие из " + Convert::ToString(n) + " букв: " + textBox2->Text + " ";
			if (textBox2->Text == "") {
				answer = "- Исходный текст не содержит слов с " + Convert::ToString(n) + " буквами ";
			}
			sa->WriteLine(answer); // Запись в файл

		}
		prefRez1 = textBox2->Text;
		changes3 = false;
		sa->Close();

	}
	catch (...) {
		System::Windows::Forms::DialogResult result = MessageBox::Show("Введите корректный путь до файла ", \
			"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}

private: System::Void btn_clear2_Click(System::Object^ sender, System::EventArgs^ e) {
textBox2->Text = "";
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void tabPage2_Resize(System::Object^ sender, System::EventArgs^ e) {
	if (inputN->Text->Length > 0) {
		int const n = Convert::ToInt32(inputN->Text);
		int a[250][250] = { 0 };
		int i = 0, j, k = 0, p = 1;

		while (i < n * n) /*Цикл по номеру витка*/
		{
			k++;
			for (j = k - 1; j < n - k + 1; j++)
			{
				a[k - 1][j] = p++;
				i++;
			}   /*Определение значений верхнего гор столбца*/

			for (j = k; j < n - k + 1; j++)
			{
				a[j][n - k] = p++;
				i++;
			}   /* --//-- По правому вертикальному столбцу*/

			for (j = n - k - 1; j >= k - 1; j--)
			{
				a[n - k][j] = p++;
				i++;
			}   /* --//-- по нижнему горизонтальному столбцу*/

			for (j = n - k - 1; j >= k; j--)
			{
				a[j][k - 1] = p++;
				i++;
			}   /* --//-- по левому вертикальному столбцу*/

		}
		String^ answer = "";
		int number = 0;
		int max_number_length, spaces;
		int max_row_length, max_col_length, x, y;

		max_number_length = Convert::ToString(n * n)->Length;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				String^ new_number_in_str = Convert::ToString(a[i][j]);
				spaces = max_number_length - new_number_in_str->Length;
				for (int i = 0; i < spaces; i++) {
					answer += " ";
				}
				answer += new_number_in_str + " ";
			}
			answer += "\r\n";
		}
		int wx, wy;
		wx = this->Width - 24;
		wy = this->Height - 217;
		max_row_length = (max_number_length + 1) * n * 10;
		x = 24 + (wx - max_row_length) / 2;
		max_col_length = n * 2 * 10;
		y = 117 + (wy - max_col_length) / 2;
		if (max_row_length > wx) {
			x = 24;
		}
		if (max_col_length > wy) {
			y = 117;
		}
		Matrix->Size = System::Drawing::Size(this->Width - 72, this->Height - 217);
		Matrix->Text = answer;

	}
	
}
private: System::Void tabPage4_Resize(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Size = System::Drawing::Size(this->Width - 72, 400);
	textBox2->Size = System::Drawing::Size(this->Width - 72, 200);
	btn_text_generate->Location = System::Drawing::Point(25, 525);
	btn_clear1->Location = System::Drawing::Point(this->Width - 300, 525);
	label11->Location = System::Drawing::Point(25, 665);
	textBox2->Location = System::Drawing::Point(25, 685);
	btn_get_words->Location = System::Drawing::Point(25, 900);
	btn_clear2->Location = System::Drawing::Point(this->Width - 300, 900);
	if (this->Width < 1300) {
		textBox1->Size = System::Drawing::Size(this->Width - 72, 133);
		textBox2->Size = System::Drawing::Size(this->Width - 72, 133);
		btn_text_generate->Location = System::Drawing::Point(25, 251);
		btn_clear1->Location = System::Drawing::Point(this->Width - 300, 251);
		label11->Location = System::Drawing::Point(25, 318);
		textBox2->Location = System::Drawing::Point(25, 341);
		btn_get_words->Location = System::Drawing::Point(25, 480);
		btn_clear2->Location = System::Drawing::Point(this->Width - 300, 480);
	}
}

private: System::Void tabPage2_Layout(System::Object^ sender, System::Windows::Forms::LayoutEventArgs^ e) {
	this->MaximizeBox = true;
}
private: System::Void tabPage1345_Layout(System::Object^ sender, System::Windows::Forms::LayoutEventArgs^ e) {
	this->MaximizeBox = false;
	if (this->WindowState == System::Windows::Forms::FormWindowState::Maximized) {
		this->WindowState = System::Windows::Forms::FormWindowState::Normal;
	}
}
private: System::Void labelP2_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void tabPage4_Layout(System::Object^ sender, System::Windows::Forms::LayoutEventArgs^ e) {
	this->MaximizeBox = true;
	if (this->Width < 1000) {
		textBox1->Size = System::Drawing::Size(this->Width - 72, 133);
		textBox2->Size = System::Drawing::Size(this->Width - 72, 133);
		btn_text_generate->Location = System::Drawing::Point(25, 251);
		btn_clear1->Location = System::Drawing::Point(this->Width - 300, 251);
		label11->Location = System::Drawing::Point(25, 318);
		textBox2->Location = System::Drawing::Point(25, 341);
		btn_get_words->Location = System::Drawing::Point(25, 480);
		btn_clear2->Location = System::Drawing::Point(this->Width - 300, 480);
	}
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}

