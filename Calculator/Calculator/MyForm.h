#pragma once
#include "string";
#include "data.h";
#include "frontendcontroler.h"
#include <msclr\marshal_cppstd.h>
#include <fstream>

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using System::Runtime::InteropServices::Marshal;
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
	
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button0;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ buttonOK;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonDelete;
	private: System::Windows::Forms::Button^ buttonPlus;
	private: System::Windows::Forms::Button^ buttonMinus;
	private: System::Windows::Forms::Button^ buttonDivide;
	private: System::Windows::Forms::Button^ buttonMultiply;
	private: System::Windows::Forms::Button^ buttonAC;
	private: System::Windows::Forms::Button^ buttonRBracket;
	private: System::Windows::Forms::Button^ buttonLBracket;
	private: System::Windows::Forms::Button^ buttonSqrt;
	private: System::Windows::Forms::Button^ buttonPower;
	private: System::Windows::Forms::Button^ buttonModulo;
	private: System::Windows::Forms::Button^ buttonToggle;
	private: System::Windows::Forms::Button^ buttonLogic;
	private: System::Windows::Forms::Button^ buttonNOT;
	private: System::Windows::Forms::Button^ buttonNumconvert;
	private: System::Windows::Forms::Button^ buttonConvert;
	private: System::Windows::Forms::TextBox^ textFrom;
	private: System::Windows::Forms::TextBox^ textBoxTo;
	private: System::Windows::Forms::TextBox^ textBoxConvert;
	private: System::Windows::Forms::Button^ buttonFromDec;
	private: System::Windows::Forms::Button^ buttonFromHex;
	private: System::Windows::Forms::Button^ buttonFromOct;
	private: System::Windows::Forms::Button^ buttonFromBin;
	private: System::Windows::Forms::Button^ buttonToDec;
	private: System::Windows::Forms::Button^ buttonToHex;
	private: System::Windows::Forms::Button^ buttonToOct;
	private: System::Windows::Forms::Button^ buttonToBin;
	private: System::Windows::Forms::Button^ buttonConvertAC;
	private: System::Windows::Forms::Button^ buttonAND;
	private: System::Windows::Forms::Button^ buttonNAND;
	private: System::Windows::Forms::Button^ buttonNOR;
	private: System::Windows::Forms::Button^ buttonOR;
	private: System::Windows::Forms::Button^ buttonXOR;
	private: System::Windows::Forms::Button^ buttonIMPLY;
	private: System::Windows::Forms::Button^ buttonXNOR;
	private: System::Windows::Forms::Button^ buttonLogicRbracket;
	private: System::Windows::Forms::Button^ buttonLogicLBracket;
	private: System::Windows::Forms::Button^ buttonLogicAC;
	private: System::Windows::Forms::Button^ buttonLogicDelete;
	private: System::Windows::Forms::Button^ buttonLogic0;
	private: System::Windows::Forms::Button^ buttonLogic1;
	private: System::Windows::Forms::Button^ buttonLogicOK;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ BTNShowFilesDialog;
	private: System::Windows::Forms::Button^ buttonAnalyse;
	private: System::Windows::Forms::Label^ labelPath;









	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->buttonOK = (gcnew System::Windows::Forms::Button());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->buttonPlus = (gcnew System::Windows::Forms::Button());
			this->buttonMinus = (gcnew System::Windows::Forms::Button());
			this->buttonDivide = (gcnew System::Windows::Forms::Button());
			this->buttonMultiply = (gcnew System::Windows::Forms::Button());
			this->buttonAC = (gcnew System::Windows::Forms::Button());
			this->buttonRBracket = (gcnew System::Windows::Forms::Button());
			this->buttonLBracket = (gcnew System::Windows::Forms::Button());
			this->buttonSqrt = (gcnew System::Windows::Forms::Button());
			this->buttonPower = (gcnew System::Windows::Forms::Button());
			this->buttonModulo = (gcnew System::Windows::Forms::Button());
			this->buttonToggle = (gcnew System::Windows::Forms::Button());
			this->buttonLogic = (gcnew System::Windows::Forms::Button());
			this->buttonNOT = (gcnew System::Windows::Forms::Button());
			this->buttonNumconvert = (gcnew System::Windows::Forms::Button());
			this->buttonConvert = (gcnew System::Windows::Forms::Button());
			this->textFrom = (gcnew System::Windows::Forms::TextBox());
			this->textBoxTo = (gcnew System::Windows::Forms::TextBox());
			this->textBoxConvert = (gcnew System::Windows::Forms::TextBox());
			this->buttonFromDec = (gcnew System::Windows::Forms::Button());
			this->buttonFromHex = (gcnew System::Windows::Forms::Button());
			this->buttonFromOct = (gcnew System::Windows::Forms::Button());
			this->buttonFromBin = (gcnew System::Windows::Forms::Button());
			this->buttonToDec = (gcnew System::Windows::Forms::Button());
			this->buttonToHex = (gcnew System::Windows::Forms::Button());
			this->buttonToOct = (gcnew System::Windows::Forms::Button());
			this->buttonToBin = (gcnew System::Windows::Forms::Button());
			this->buttonConvertAC = (gcnew System::Windows::Forms::Button());
			this->buttonAND = (gcnew System::Windows::Forms::Button());
			this->buttonNAND = (gcnew System::Windows::Forms::Button());
			this->buttonNOR = (gcnew System::Windows::Forms::Button());
			this->buttonOR = (gcnew System::Windows::Forms::Button());
			this->buttonXOR = (gcnew System::Windows::Forms::Button());
			this->buttonIMPLY = (gcnew System::Windows::Forms::Button());
			this->buttonXNOR = (gcnew System::Windows::Forms::Button());
			this->buttonLogicRbracket = (gcnew System::Windows::Forms::Button());
			this->buttonLogicLBracket = (gcnew System::Windows::Forms::Button());
			this->buttonLogicAC = (gcnew System::Windows::Forms::Button());
			this->buttonLogicDelete = (gcnew System::Windows::Forms::Button());
			this->buttonLogic0 = (gcnew System::Windows::Forms::Button());
			this->buttonLogic1 = (gcnew System::Windows::Forms::Button());
			this->buttonLogicOK = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->BTNShowFilesDialog = (gcnew System::Windows::Forms::Button());
			this->buttonAnalyse = (gcnew System::Windows::Forms::Button());
			this->labelPath = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.875F));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(22, 192);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 52);
			this->label1->TabIndex = 12;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(32, 446);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(118, 113);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(158, 446);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(118, 113);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(284, 446);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(118, 113);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Location = System::Drawing::Point(32, 567);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(118, 113);
			this->button4->TabIndex = 5;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button5->Location = System::Drawing::Point(158, 567);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(118, 113);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button6->Location = System::Drawing::Point(284, 567);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(118, 113);
			this->button6->TabIndex = 3;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button7->Location = System::Drawing::Point(32, 688);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(118, 113);
			this->button7->TabIndex = 8;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button8->Location = System::Drawing::Point(158, 688);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(118, 113);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button9->Location = System::Drawing::Point(290, 688);
			this->button9->Margin = System::Windows::Forms::Padding(4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(112, 113);
			this->button9->TabIndex = 6;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button0
			// 
			this->button0->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button0->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button0->Location = System::Drawing::Point(32, 810);
			this->button0->Margin = System::Windows::Forms::Padding(4);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(118, 113);
			this->button0->TabIndex = 11;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = false;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button11->Location = System::Drawing::Point(536, 810);
			this->button11->Margin = System::Windows::Forms::Padding(4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(118, 113);
			this->button11->TabIndex = 10;
			this->button11->Text = L".";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// buttonOK
			// 
			this->buttonOK->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonOK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonOK->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonOK->Location = System::Drawing::Point(158, 810);
			this->buttonOK->Margin = System::Windows::Forms::Padding(4);
			this->buttonOK->Name = L"buttonOK";
			this->buttonOK->Size = System::Drawing::Size(370, 113);
			this->buttonOK->TabIndex = 9;
			this->buttonOK->Text = L"ok";
			this->buttonOK->UseVisualStyleBackColor = false;
			this->buttonOK->Click += gcnew System::EventHandler(this, &MyForm::buttonOK_Click);
			// 
			// buttonDelete
			// 
			this->buttonDelete->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDelete->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonDelete->Location = System::Drawing::Point(410, 325);
			this->buttonDelete->Margin = System::Windows::Forms::Padding(4);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(118, 113);
			this->buttonDelete->TabIndex = 13;
			this->buttonDelete->Text = L"<-";
			this->buttonDelete->UseVisualStyleBackColor = false;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &MyForm::buttonDelete_Click);
			// 
			// buttonPlus
			// 
			this->buttonPlus->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPlus->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonPlus->Location = System::Drawing::Point(410, 446);
			this->buttonPlus->Margin = System::Windows::Forms::Padding(4);
			this->buttonPlus->Name = L"buttonPlus";
			this->buttonPlus->Size = System::Drawing::Size(118, 113);
			this->buttonPlus->TabIndex = 14;
			this->buttonPlus->Text = L"+";
			this->buttonPlus->UseVisualStyleBackColor = false;
			this->buttonPlus->Click += gcnew System::EventHandler(this, &MyForm::buttonPlus_Click);
			// 
			// buttonMinus
			// 
			this->buttonMinus->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonMinus->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonMinus->Location = System::Drawing::Point(410, 567);
			this->buttonMinus->Margin = System::Windows::Forms::Padding(4);
			this->buttonMinus->Name = L"buttonMinus";
			this->buttonMinus->Size = System::Drawing::Size(118, 113);
			this->buttonMinus->TabIndex = 15;
			this->buttonMinus->Text = L"-";
			this->buttonMinus->UseVisualStyleBackColor = false;
			this->buttonMinus->Click += gcnew System::EventHandler(this, &MyForm::buttonMinus_Click);
			// 
			// buttonDivide
			// 
			this->buttonDivide->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonDivide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDivide->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonDivide->Location = System::Drawing::Point(536, 567);
			this->buttonDivide->Margin = System::Windows::Forms::Padding(4);
			this->buttonDivide->Name = L"buttonDivide";
			this->buttonDivide->Size = System::Drawing::Size(118, 113);
			this->buttonDivide->TabIndex = 18;
			this->buttonDivide->Text = L"/";
			this->buttonDivide->UseVisualStyleBackColor = false;
			this->buttonDivide->Click += gcnew System::EventHandler(this, &MyForm::buttonDivide_Click);
			// 
			// buttonMultiply
			// 
			this->buttonMultiply->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonMultiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonMultiply->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonMultiply->Location = System::Drawing::Point(536, 446);
			this->buttonMultiply->Margin = System::Windows::Forms::Padding(4);
			this->buttonMultiply->Name = L"buttonMultiply";
			this->buttonMultiply->Size = System::Drawing::Size(118, 113);
			this->buttonMultiply->TabIndex = 17;
			this->buttonMultiply->Text = L"*";
			this->buttonMultiply->UseVisualStyleBackColor = false;
			this->buttonMultiply->Click += gcnew System::EventHandler(this, &MyForm::buttonMultiply_Click);
			// 
			// buttonAC
			// 
			this->buttonAC->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonAC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAC->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonAC->Location = System::Drawing::Point(536, 325);
			this->buttonAC->Margin = System::Windows::Forms::Padding(4);
			this->buttonAC->Name = L"buttonAC";
			this->buttonAC->Size = System::Drawing::Size(118, 113);
			this->buttonAC->TabIndex = 16;
			this->buttonAC->Text = L"AC";
			this->buttonAC->UseVisualStyleBackColor = false;
			this->buttonAC->Click += gcnew System::EventHandler(this, &MyForm::buttonAC_Click);
			// 
			// buttonRBracket
			// 
			this->buttonRBracket->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonRBracket->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonRBracket->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonRBracket->Location = System::Drawing::Point(158, 325);
			this->buttonRBracket->Margin = System::Windows::Forms::Padding(4);
			this->buttonRBracket->Name = L"buttonRBracket";
			this->buttonRBracket->Size = System::Drawing::Size(118, 113);
			this->buttonRBracket->TabIndex = 20;
			this->buttonRBracket->Tag = L"Layout1";
			this->buttonRBracket->Text = L")";
			this->buttonRBracket->UseVisualStyleBackColor = false;
			this->buttonRBracket->Click += gcnew System::EventHandler(this, &MyForm::buttonRBracket_Click);
			// 
			// buttonLBracket
			// 
			this->buttonLBracket->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonLBracket->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonLBracket->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonLBracket->Location = System::Drawing::Point(32, 325);
			this->buttonLBracket->Margin = System::Windows::Forms::Padding(4);
			this->buttonLBracket->Name = L"buttonLBracket";
			this->buttonLBracket->Size = System::Drawing::Size(118, 113);
			this->buttonLBracket->TabIndex = 19;
			this->buttonLBracket->Tag = L"Layout1";
			this->buttonLBracket->Text = L"(";
			this->buttonLBracket->UseVisualStyleBackColor = false;
			this->buttonLBracket->Click += gcnew System::EventHandler(this, &MyForm::buttonLBracket_Click);
			// 
			// buttonSqrt
			// 
			this->buttonSqrt->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonSqrt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSqrt->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonSqrt->Location = System::Drawing::Point(410, 688);
			this->buttonSqrt->Margin = System::Windows::Forms::Padding(4);
			this->buttonSqrt->Name = L"buttonSqrt";
			this->buttonSqrt->Size = System::Drawing::Size(118, 113);
			this->buttonSqrt->TabIndex = 23;
			this->buttonSqrt->Text = L"sqrt";
			this->buttonSqrt->UseVisualStyleBackColor = false;
			this->buttonSqrt->Click += gcnew System::EventHandler(this, &MyForm::buttonSqrt_Click);
			// 
			// buttonPower
			// 
			this->buttonPower->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonPower->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPower->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonPower->Location = System::Drawing::Point(284, 325);
			this->buttonPower->Margin = System::Windows::Forms::Padding(4);
			this->buttonPower->Name = L"buttonPower";
			this->buttonPower->Size = System::Drawing::Size(118, 113);
			this->buttonPower->TabIndex = 22;
			this->buttonPower->Text = L"^";
			this->buttonPower->UseVisualStyleBackColor = false;
			this->buttonPower->Click += gcnew System::EventHandler(this, &MyForm::buttonPower_Click);
			// 
			// buttonModulo
			// 
			this->buttonModulo->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonModulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonModulo->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonModulo->Location = System::Drawing::Point(536, 688);
			this->buttonModulo->Margin = System::Windows::Forms::Padding(4);
			this->buttonModulo->Name = L"buttonModulo";
			this->buttonModulo->Size = System::Drawing::Size(118, 113);
			this->buttonModulo->TabIndex = 21;
			this->buttonModulo->Text = L"%";
			this->buttonModulo->UseVisualStyleBackColor = false;
			this->buttonModulo->Click += gcnew System::EventHandler(this, &MyForm::buttonModulo_Click);
			// 
			// buttonToggle
			// 
			this->buttonToggle->Location = System::Drawing::Point(22, 21);
			this->buttonToggle->Margin = System::Windows::Forms::Padding(4);
			this->buttonToggle->Name = L"buttonToggle";
			this->buttonToggle->Size = System::Drawing::Size(202, 90);
			this->buttonToggle->TabIndex = 24;
			this->buttonToggle->Text = L"Standard\n\r\n";
			this->buttonToggle->UseVisualStyleBackColor = true;
			this->buttonToggle->Click += gcnew System::EventHandler(this, &MyForm::buttonToggle_Click);
			// 
			// buttonLogic
			// 
			this->buttonLogic->Location = System::Drawing::Point(450, 21);
			this->buttonLogic->Margin = System::Windows::Forms::Padding(4);
			this->buttonLogic->Name = L"buttonLogic";
			this->buttonLogic->Size = System::Drawing::Size(204, 90);
			this->buttonLogic->TabIndex = 25;
			this->buttonLogic->Text = L"Logic";
			this->buttonLogic->UseVisualStyleBackColor = true;
			this->buttonLogic->Click += gcnew System::EventHandler(this, &MyForm::buttonLogic_Click);
			// 
			// buttonNOT
			// 
			this->buttonNOT->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonNOT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->buttonNOT->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonNOT->Location = System::Drawing::Point(240, 446);
			this->buttonNOT->Margin = System::Windows::Forms::Padding(4);
			this->buttonNOT->Name = L"buttonNOT";
			this->buttonNOT->Size = System::Drawing::Size(202, 110);
			this->buttonNOT->TabIndex = 26;
			this->buttonNOT->Text = L"NOT";
			this->buttonNOT->UseVisualStyleBackColor = false;
			this->buttonNOT->Visible = false;
			this->buttonNOT->Click += gcnew System::EventHandler(this, &MyForm::buttonNOT_Click);
			// 
			// buttonNumconvert
			// 
			this->buttonNumconvert->Location = System::Drawing::Point(240, 21);
			this->buttonNumconvert->Margin = System::Windows::Forms::Padding(4);
			this->buttonNumconvert->Name = L"buttonNumconvert";
			this->buttonNumconvert->Size = System::Drawing::Size(202, 90);
			this->buttonNumconvert->TabIndex = 27;
			this->buttonNumconvert->Text = L"Num Convert";
			this->buttonNumconvert->UseVisualStyleBackColor = true;
			this->buttonNumconvert->Click += gcnew System::EventHandler(this, &MyForm::buttonNumconvert_Click);
			// 
			// buttonConvert
			// 
			this->buttonConvert->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonConvert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonConvert->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonConvert->Location = System::Drawing::Point(30, 794);
			this->buttonConvert->Margin = System::Windows::Forms::Padding(4);
			this->buttonConvert->Name = L"buttonConvert";
			this->buttonConvert->Size = System::Drawing::Size(624, 140);
			this->buttonConvert->TabIndex = 28;
			this->buttonConvert->Text = L"Convert";
			this->buttonConvert->UseVisualStyleBackColor = false;
			this->buttonConvert->Visible = false;
			this->buttonConvert->Click += gcnew System::EventHandler(this, &MyForm::buttonConvert_Click);
			// 
			// textFrom
			// 
			this->textFrom->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textFrom->Location = System::Drawing::Point(32, 683);
			this->textFrom->Margin = System::Windows::Forms::Padding(6);
			this->textFrom->Name = L"textFrom";
			this->textFrom->Size = System::Drawing::Size(240, 98);
			this->textFrom->TabIndex = 29;
			this->textFrom->Visible = false;
			this->textFrom->TextChanged += gcnew System::EventHandler(this, &MyForm::textFrom_TextChanged);
			// 
			// textBoxTo
			// 
			this->textBoxTo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxTo->Location = System::Drawing::Point(410, 683);
			this->textBoxTo->Margin = System::Windows::Forms::Padding(6);
			this->textBoxTo->Name = L"textBoxTo";
			this->textBoxTo->Size = System::Drawing::Size(240, 98);
			this->textBoxTo->TabIndex = 30;
			this->textBoxTo->Visible = false;
			this->textBoxTo->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxTo_TextChanged);
			// 
			// textBoxConvert
			// 
			this->textBoxConvert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->textBoxConvert->Location = System::Drawing::Point(32, 365);
			this->textBoxConvert->Margin = System::Windows::Forms::Padding(6);
			this->textBoxConvert->Name = L"textBoxConvert";
			this->textBoxConvert->Size = System::Drawing::Size(618, 57);
			this->textBoxConvert->TabIndex = 31;
			this->textBoxConvert->Visible = false;
			this->textBoxConvert->TextChanged += gcnew System::EventHandler(this, &MyForm::textBoxConvert_TextChanged);
			// 
			// buttonFromDec
			// 
			this->buttonFromDec->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonFromDec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F));
			this->buttonFromDec->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonFromDec->Location = System::Drawing::Point(32, 567);
			this->buttonFromDec->Margin = System::Windows::Forms::Padding(4);
			this->buttonFromDec->Name = L"buttonFromDec";
			this->buttonFromDec->Size = System::Drawing::Size(118, 113);
			this->buttonFromDec->TabIndex = 35;
			this->buttonFromDec->Text = L"DEC";
			this->buttonFromDec->UseVisualStyleBackColor = false;
			this->buttonFromDec->Visible = false;
			this->buttonFromDec->Click += gcnew System::EventHandler(this, &MyForm::buttonFromDec_Click);
			// 
			// buttonFromHex
			// 
			this->buttonFromHex->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonFromHex->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F));
			this->buttonFromHex->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonFromHex->Location = System::Drawing::Point(158, 567);
			this->buttonFromHex->Margin = System::Windows::Forms::Padding(4);
			this->buttonFromHex->Name = L"buttonFromHex";
			this->buttonFromHex->Size = System::Drawing::Size(118, 113);
			this->buttonFromHex->TabIndex = 34;
			this->buttonFromHex->Text = L"HEX";
			this->buttonFromHex->UseVisualStyleBackColor = false;
			this->buttonFromHex->Visible = false;
			this->buttonFromHex->Click += gcnew System::EventHandler(this, &MyForm::buttonFromHex_Click);
			// 
			// buttonFromOct
			// 
			this->buttonFromOct->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonFromOct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F));
			this->buttonFromOct->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonFromOct->Location = System::Drawing::Point(158, 446);
			this->buttonFromOct->Margin = System::Windows::Forms::Padding(4);
			this->buttonFromOct->Name = L"buttonFromOct";
			this->buttonFromOct->Size = System::Drawing::Size(118, 113);
			this->buttonFromOct->TabIndex = 33;
			this->buttonFromOct->Text = L"OCT";
			this->buttonFromOct->UseVisualStyleBackColor = false;
			this->buttonFromOct->Visible = false;
			this->buttonFromOct->Click += gcnew System::EventHandler(this, &MyForm::buttonFromOct_Click);
			// 
			// buttonFromBin
			// 
			this->buttonFromBin->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonFromBin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F));
			this->buttonFromBin->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonFromBin->Location = System::Drawing::Point(32, 446);
			this->buttonFromBin->Margin = System::Windows::Forms::Padding(4);
			this->buttonFromBin->Name = L"buttonFromBin";
			this->buttonFromBin->Size = System::Drawing::Size(118, 113);
			this->buttonFromBin->TabIndex = 32;
			this->buttonFromBin->Text = L"BIN";
			this->buttonFromBin->UseVisualStyleBackColor = false;
			this->buttonFromBin->Visible = false;
			this->buttonFromBin->Click += gcnew System::EventHandler(this, &MyForm::buttonFromBin_Click);
			// 
			// buttonToDec
			// 
			this->buttonToDec->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonToDec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonToDec->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonToDec->Location = System::Drawing::Point(410, 567);
			this->buttonToDec->Margin = System::Windows::Forms::Padding(4);
			this->buttonToDec->Name = L"buttonToDec";
			this->buttonToDec->Size = System::Drawing::Size(116, 113);
			this->buttonToDec->TabIndex = 39;
			this->buttonToDec->Text = L"DEC";
			this->buttonToDec->UseVisualStyleBackColor = false;
			this->buttonToDec->Visible = false;
			this->buttonToDec->Click += gcnew System::EventHandler(this, &MyForm::buttonToDec_Click);
			// 
			// buttonToHex
			// 
			this->buttonToHex->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonToHex->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonToHex->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonToHex->Location = System::Drawing::Point(536, 567);
			this->buttonToHex->Margin = System::Windows::Forms::Padding(4);
			this->buttonToHex->Name = L"buttonToHex";
			this->buttonToHex->Size = System::Drawing::Size(118, 113);
			this->buttonToHex->TabIndex = 38;
			this->buttonToHex->Text = L"HEX";
			this->buttonToHex->UseVisualStyleBackColor = false;
			this->buttonToHex->Visible = false;
			this->buttonToHex->Click += gcnew System::EventHandler(this, &MyForm::buttonToHex_Click);
			// 
			// buttonToOct
			// 
			this->buttonToOct->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonToOct->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonToOct->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonToOct->Location = System::Drawing::Point(536, 446);
			this->buttonToOct->Margin = System::Windows::Forms::Padding(4);
			this->buttonToOct->Name = L"buttonToOct";
			this->buttonToOct->Size = System::Drawing::Size(118, 113);
			this->buttonToOct->TabIndex = 37;
			this->buttonToOct->Text = L"OCT";
			this->buttonToOct->UseVisualStyleBackColor = false;
			this->buttonToOct->Visible = false;
			this->buttonToOct->Click += gcnew System::EventHandler(this, &MyForm::buttonToOct_Click);
			// 
			// buttonToBin
			// 
			this->buttonToBin->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonToBin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonToBin->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonToBin->Location = System::Drawing::Point(410, 446);
			this->buttonToBin->Margin = System::Windows::Forms::Padding(4);
			this->buttonToBin->Name = L"buttonToBin";
			this->buttonToBin->Size = System::Drawing::Size(118, 113);
			this->buttonToBin->TabIndex = 36;
			this->buttonToBin->Text = L"BIN";
			this->buttonToBin->UseVisualStyleBackColor = false;
			this->buttonToBin->Visible = false;
			this->buttonToBin->Click += gcnew System::EventHandler(this, &MyForm::buttonToBin_Click);
			// 
			// buttonConvertAC
			// 
			this->buttonConvertAC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonConvertAC->Location = System::Drawing::Point(284, 444);
			this->buttonConvertAC->Margin = System::Windows::Forms::Padding(4);
			this->buttonConvertAC->Name = L"buttonConvertAC";
			this->buttonConvertAC->Size = System::Drawing::Size(118, 113);
			this->buttonConvertAC->TabIndex = 40;
			this->buttonConvertAC->Text = L"AC";
			this->buttonConvertAC->UseVisualStyleBackColor = true;
			this->buttonConvertAC->Visible = false;
			this->buttonConvertAC->Click += gcnew System::EventHandler(this, &MyForm::buttonConvertAC_Click);
			// 
			// buttonAND
			// 
			this->buttonAND->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonAND->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->buttonAND->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonAND->Location = System::Drawing::Point(32, 446);
			this->buttonAND->Margin = System::Windows::Forms::Padding(4);
			this->buttonAND->Name = L"buttonAND";
			this->buttonAND->Size = System::Drawing::Size(200, 110);
			this->buttonAND->TabIndex = 41;
			this->buttonAND->Text = L"AND";
			this->buttonAND->UseVisualStyleBackColor = false;
			this->buttonAND->Visible = false;
			this->buttonAND->Click += gcnew System::EventHandler(this, &MyForm::buttonAND_Click);
			// 
			// buttonNAND
			// 
			this->buttonNAND->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonNAND->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->buttonNAND->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonNAND->Location = System::Drawing::Point(240, 681);
			this->buttonNAND->Margin = System::Windows::Forms::Padding(4);
			this->buttonNAND->Name = L"buttonNAND";
			this->buttonNAND->Size = System::Drawing::Size(202, 110);
			this->buttonNAND->TabIndex = 42;
			this->buttonNAND->Text = L"NAND";
			this->buttonNAND->UseVisualStyleBackColor = false;
			this->buttonNAND->Visible = false;
			this->buttonNAND->Click += gcnew System::EventHandler(this, &MyForm::buttonNAND_Click);
			// 
			// buttonNOR
			// 
			this->buttonNOR->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonNOR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->buttonNOR->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonNOR->Location = System::Drawing::Point(454, 563);
			this->buttonNOR->Margin = System::Windows::Forms::Padding(4);
			this->buttonNOR->Name = L"buttonNOR";
			this->buttonNOR->Size = System::Drawing::Size(200, 110);
			this->buttonNOR->TabIndex = 43;
			this->buttonNOR->Text = L"NOR";
			this->buttonNOR->UseVisualStyleBackColor = false;
			this->buttonNOR->Visible = false;
			this->buttonNOR->Click += gcnew System::EventHandler(this, &MyForm::buttonNOR_Click);
			// 
			// buttonOR
			// 
			this->buttonOR->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonOR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->buttonOR->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonOR->Location = System::Drawing::Point(454, 446);
			this->buttonOR->Margin = System::Windows::Forms::Padding(4);
			this->buttonOR->Name = L"buttonOR";
			this->buttonOR->Size = System::Drawing::Size(200, 110);
			this->buttonOR->TabIndex = 44;
			this->buttonOR->Text = L"OR";
			this->buttonOR->UseVisualStyleBackColor = false;
			this->buttonOR->Visible = false;
			this->buttonOR->Click += gcnew System::EventHandler(this, &MyForm::buttonOR_Click);
			// 
			// buttonXOR
			// 
			this->buttonXOR->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonXOR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->buttonXOR->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonXOR->Location = System::Drawing::Point(32, 563);
			this->buttonXOR->Margin = System::Windows::Forms::Padding(4);
			this->buttonXOR->Name = L"buttonXOR";
			this->buttonXOR->Size = System::Drawing::Size(200, 110);
			this->buttonXOR->TabIndex = 45;
			this->buttonXOR->Text = L"XOR";
			this->buttonXOR->UseVisualStyleBackColor = false;
			this->buttonXOR->Visible = false;
			this->buttonXOR->Click += gcnew System::EventHandler(this, &MyForm::buttonXOR_Click);
			// 
			// buttonIMPLY
			// 
			this->buttonIMPLY->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonIMPLY->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->buttonIMPLY->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonIMPLY->Location = System::Drawing::Point(32, 681);
			this->buttonIMPLY->Margin = System::Windows::Forms::Padding(4);
			this->buttonIMPLY->Name = L"buttonIMPLY";
			this->buttonIMPLY->Size = System::Drawing::Size(200, 110);
			this->buttonIMPLY->TabIndex = 46;
			this->buttonIMPLY->Text = L"IMPLY";
			this->buttonIMPLY->UseVisualStyleBackColor = false;
			this->buttonIMPLY->Visible = false;
			this->buttonIMPLY->Click += gcnew System::EventHandler(this, &MyForm::buttonIMPLY_Click);
			// 
			// buttonXNOR
			// 
			this->buttonXNOR->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonXNOR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.25F));
			this->buttonXNOR->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonXNOR->Location = System::Drawing::Point(240, 563);
			this->buttonXNOR->Margin = System::Windows::Forms::Padding(4);
			this->buttonXNOR->Name = L"buttonXNOR";
			this->buttonXNOR->Size = System::Drawing::Size(202, 110);
			this->buttonXNOR->TabIndex = 47;
			this->buttonXNOR->Text = L"XNOR";
			this->buttonXNOR->UseVisualStyleBackColor = false;
			this->buttonXNOR->Visible = false;
			this->buttonXNOR->Click += gcnew System::EventHandler(this, &MyForm::buttonXNOR_Click);
			// 
			// buttonLogicRbracket
			// 
			this->buttonLogicRbracket->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonLogicRbracket->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonLogicRbracket->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonLogicRbracket->Location = System::Drawing::Point(158, 325);
			this->buttonLogicRbracket->Margin = System::Windows::Forms::Padding(4);
			this->buttonLogicRbracket->Name = L"buttonLogicRbracket";
			this->buttonLogicRbracket->Size = System::Drawing::Size(118, 113);
			this->buttonLogicRbracket->TabIndex = 51;
			this->buttonLogicRbracket->Tag = L"Layout1";
			this->buttonLogicRbracket->Text = L")";
			this->buttonLogicRbracket->UseVisualStyleBackColor = false;
			this->buttonLogicRbracket->Click += gcnew System::EventHandler(this, &MyForm::buttonLogicRbracket_Click);
			// 
			// buttonLogicLBracket
			// 
			this->buttonLogicLBracket->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonLogicLBracket->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonLogicLBracket->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonLogicLBracket->Location = System::Drawing::Point(32, 325);
			this->buttonLogicLBracket->Margin = System::Windows::Forms::Padding(4);
			this->buttonLogicLBracket->Name = L"buttonLogicLBracket";
			this->buttonLogicLBracket->Size = System::Drawing::Size(118, 113);
			this->buttonLogicLBracket->TabIndex = 50;
			this->buttonLogicLBracket->Tag = L"Layout1";
			this->buttonLogicLBracket->Text = L"(";
			this->buttonLogicLBracket->UseVisualStyleBackColor = false;
			this->buttonLogicLBracket->Click += gcnew System::EventHandler(this, &MyForm::buttonLogicLBracket_Click);
			// 
			// buttonLogicAC
			// 
			this->buttonLogicAC->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonLogicAC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonLogicAC->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonLogicAC->Location = System::Drawing::Point(536, 325);
			this->buttonLogicAC->Margin = System::Windows::Forms::Padding(4);
			this->buttonLogicAC->Name = L"buttonLogicAC";
			this->buttonLogicAC->Size = System::Drawing::Size(118, 113);
			this->buttonLogicAC->TabIndex = 49;
			this->buttonLogicAC->Text = L"AC";
			this->buttonLogicAC->UseVisualStyleBackColor = false;
			this->buttonLogicAC->Click += gcnew System::EventHandler(this, &MyForm::buttonLogicAC_Click);
			// 
			// buttonLogicDelete
			// 
			this->buttonLogicDelete->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonLogicDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonLogicDelete->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonLogicDelete->Location = System::Drawing::Point(410, 325);
			this->buttonLogicDelete->Margin = System::Windows::Forms::Padding(4);
			this->buttonLogicDelete->Name = L"buttonLogicDelete";
			this->buttonLogicDelete->Size = System::Drawing::Size(118, 113);
			this->buttonLogicDelete->TabIndex = 48;
			this->buttonLogicDelete->Text = L"<-";
			this->buttonLogicDelete->UseVisualStyleBackColor = false;
			this->buttonLogicDelete->Click += gcnew System::EventHandler(this, &MyForm::buttonLogicDelete_Click);
			// 
			// buttonLogic0
			// 
			this->buttonLogic0->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonLogic0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24.25F));
			this->buttonLogic0->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonLogic0->Location = System::Drawing::Point(454, 689);
			this->buttonLogic0->Margin = System::Windows::Forms::Padding(4);
			this->buttonLogic0->Name = L"buttonLogic0";
			this->buttonLogic0->Size = System::Drawing::Size(200, 110);
			this->buttonLogic0->TabIndex = 52;
			this->buttonLogic0->Text = L"0";
			this->buttonLogic0->UseVisualStyleBackColor = false;
			this->buttonLogic0->Visible = false;
			this->buttonLogic0->Click += gcnew System::EventHandler(this, &MyForm::buttonLogic0_Click);
			// 
			// buttonLogic1
			// 
			this->buttonLogic1->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonLogic1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24.25F));
			this->buttonLogic1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonLogic1->Location = System::Drawing::Point(454, 798);
			this->buttonLogic1->Margin = System::Windows::Forms::Padding(4);
			this->buttonLogic1->Name = L"buttonLogic1";
			this->buttonLogic1->Size = System::Drawing::Size(200, 110);
			this->buttonLogic1->TabIndex = 53;
			this->buttonLogic1->Text = L"1";
			this->buttonLogic1->UseVisualStyleBackColor = false;
			this->buttonLogic1->Visible = false;
			this->buttonLogic1->Click += gcnew System::EventHandler(this, &MyForm::buttonLogic1_Click);
			// 
			// buttonLogicOK
			// 
			this->buttonLogicOK->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonLogicOK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24.25F));
			this->buttonLogicOK->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonLogicOK->Location = System::Drawing::Point(32, 798);
			this->buttonLogicOK->Margin = System::Windows::Forms::Padding(4);
			this->buttonLogicOK->Name = L"buttonLogicOK";
			this->buttonLogicOK->Size = System::Drawing::Size(410, 110);
			this->buttonLogicOK->TabIndex = 54;
			this->buttonLogicOK->Text = L"OK";
			this->buttonLogicOK->UseVisualStyleBackColor = false;
			this->buttonLogicOK->Visible = false;
			this->buttonLogicOK->Click += gcnew System::EventHandler(this, &MyForm::buttonLogicOK_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::openFileDialog1_FileOk);
			// 
			// BTNShowFilesDialog
			// 
			this->BTNShowFilesDialog->Location = System::Drawing::Point(32, 942);
			this->BTNShowFilesDialog->Name = L"BTNShowFilesDialog";
			this->BTNShowFilesDialog->Size = System::Drawing::Size(96, 75);
			this->BTNShowFilesDialog->TabIndex = 55;
			this->BTNShowFilesDialog->Text = L"Select File";
			this->BTNShowFilesDialog->UseVisualStyleBackColor = true;
			this->BTNShowFilesDialog->Click += gcnew System::EventHandler(this, &MyForm::buttonAnalyse_Click);
			// 
			// buttonAnalyse
			// 
			this->buttonAnalyse->Location = System::Drawing::Point(536, 942);
			this->buttonAnalyse->Name = L"buttonAnalyse";
			this->buttonAnalyse->Size = System::Drawing::Size(118, 75);
			this->buttonAnalyse->TabIndex = 56;
			this->buttonAnalyse->Text = L"Analyse";
			this->buttonAnalyse->UseVisualStyleBackColor = true;
			this->buttonAnalyse->Click += gcnew System::EventHandler(this, &MyForm::buttonAnalyse_Click_1);
			// 
			// labelPath
			// 
			this->labelPath->AutoSize = true;
			this->labelPath->Location = System::Drawing::Point(134, 942);
			this->labelPath->Name = L"labelPath";
			this->labelPath->Size = System::Drawing::Size(33, 25);
			this->labelPath->TabIndex = 57;
			this->labelPath->Text = L"C:";
			this->labelPath->Click += gcnew System::EventHandler(this, &MyForm::labelPath_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->ClientSize = System::Drawing::Size(680, 1029);
			this->Controls->Add(this->labelPath);
			this->Controls->Add(this->buttonAnalyse);
			this->Controls->Add(this->BTNShowFilesDialog);
			this->Controls->Add(this->buttonLogicOK);
			this->Controls->Add(this->buttonLogic1);
			this->Controls->Add(this->buttonLogic0);
			this->Controls->Add(this->buttonLogicRbracket);
			this->Controls->Add(this->buttonLogicLBracket);
			this->Controls->Add(this->buttonLogicAC);
			this->Controls->Add(this->buttonLogicDelete);
			this->Controls->Add(this->buttonXNOR);
			this->Controls->Add(this->buttonIMPLY);
			this->Controls->Add(this->buttonXOR);
			this->Controls->Add(this->buttonOR);
			this->Controls->Add(this->buttonNOR);
			this->Controls->Add(this->buttonNAND);
			this->Controls->Add(this->buttonAND);
			this->Controls->Add(this->buttonConvertAC);
			this->Controls->Add(this->buttonToDec);
			this->Controls->Add(this->buttonToHex);
			this->Controls->Add(this->buttonToOct);
			this->Controls->Add(this->buttonToBin);
			this->Controls->Add(this->buttonFromDec);
			this->Controls->Add(this->buttonFromHex);
			this->Controls->Add(this->buttonFromOct);
			this->Controls->Add(this->buttonFromBin);
			this->Controls->Add(this->textBoxConvert);
			this->Controls->Add(this->textBoxTo);
			this->Controls->Add(this->textFrom);
			this->Controls->Add(this->buttonConvert);
			this->Controls->Add(this->buttonNumconvert);
			this->Controls->Add(this->buttonNOT);
			this->Controls->Add(this->buttonLogic);
			this->Controls->Add(this->buttonToggle);
			this->Controls->Add(this->buttonSqrt);
			this->Controls->Add(this->buttonPower);
			this->Controls->Add(this->buttonModulo);
			this->Controls->Add(this->buttonRBracket);
			this->Controls->Add(this->buttonLBracket);
			this->Controls->Add(this->buttonDivide);
			this->Controls->Add(this->buttonMultiply);
			this->Controls->Add(this->buttonAC);
			this->Controls->Add(this->buttonMinus);
			this->Controls->Add(this->buttonPlus);
			this->Controls->Add(this->buttonDelete);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->buttonOK);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:  
		bool visibilityLayout1Toggle = true;
		bool visibilityLayout2Toggle = false;
		bool visibilityLayout3Toggle = false;
	void writeOut() {
		String^ currentDisplayConverted = gcnew String(currentDisplay.data());
		label1->Text = currentDisplayConverted;
	}
	static std::string toStandardString(System::String^ string)
	{
		System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
		char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
		std::string returnString(charPointer, string->Length);
		Marshal::FreeHGlobal(pointer);

		return returnString;
	}
	void toggleLayout1(bool shown) {
		this->button0->Visible = shown;
		this->button1->Visible = shown;
		this->button2->Visible = shown;
		this->button3->Visible = shown;
		this->button4->Visible = shown;
		this->button5->Visible = shown;
		this->button6->Visible = shown;
		this->button7->Visible = shown;
		this->button8->Visible = shown;
		this->button9->Visible = shown;
		this->button11->Visible = shown;
		this->buttonLBracket->Visible = shown;
		this->buttonRBracket->Visible = shown;
		this->buttonOK->Visible = shown;
		this->buttonDelete->Visible = shown;
		this->buttonAC->Visible = shown;
		this->buttonPlus->Visible = shown;
		this->buttonMinus->Visible = shown;
		this->buttonMultiply->Visible = shown;
		this->buttonModulo->Visible = shown;
		this->buttonPower->Visible = shown;
		this->buttonDivide->Visible = shown;
		this->buttonSqrt->Visible = shown;
	}
	void toggleLayout2(bool shown) {
		this->buttonNOT->Visible = shown;
		this->buttonAND->Visible = shown;
		this->buttonNAND->Visible = shown;
		this->buttonNOR->Visible = shown;
		this->buttonOR->Visible = shown;
		this->buttonXOR->Visible = shown;
		this->buttonIMPLY->Visible = shown;
		this->buttonXNOR->Visible = shown;
		this->buttonLogicLBracket->Visible = shown;
		this->buttonLogicRbracket->Visible = shown;
		this->buttonLogicDelete->Visible = shown;
		this->buttonLogicAC->Visible = shown;
		this->buttonLogic0->Visible = shown;
		this->buttonLogic1->Visible = shown;
		this->buttonLogicOK->Visible = shown;
	}
	void toggleLayout3(bool shown) {
		this->buttonConvert->Visible = shown;
		this->textFrom->Visible = shown;
		this->textBoxTo->Visible = shown;
		this->textBoxConvert->Visible = shown;
		this->buttonFromBin->Visible = shown;
		this->buttonFromOct->Visible = shown;
		this->buttonFromDec->Visible = shown;
		this->buttonFromHex->Visible = shown;
		this->buttonToBin->Visible = shown;
		this->buttonToOct->Visible = shown;
		this->buttonToDec->Visible = shown;
		this->buttonToHex->Visible = shown;
		this->buttonConvertAC->Visible = shown;
	}
	void shownLayout(int layout) {
		switch (layout) {
			case 1: 
				toggleLayout1(true); 
				toggleLayout2(false);
				toggleLayout3(false);
				break;
			case 2: 
				toggleLayout1(false); 
				toggleLayout2(true);
				toggleLayout3(false);
				break;
			case 3:
				toggleLayout1(false);
				toggleLayout2(false);
				toggleLayout3(true); 
				break;
		}
			
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		currentDisplay = currentDisplay + "1";
		writeOut();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		currentDisplay = currentDisplay + "2";
		writeOut();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		currentDisplay = currentDisplay + "3";
		writeOut();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		currentDisplay = currentDisplay + "4";
		writeOut();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		currentDisplay = currentDisplay + "5";
		writeOut();
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		currentDisplay = currentDisplay + "6";
		writeOut();
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		currentDisplay = currentDisplay + "7";
		writeOut();
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		currentDisplay = currentDisplay + "8";
		writeOut();
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		currentDisplay = currentDisplay + "9";
		writeOut();
	}
	private: System::Void button0_Click(System::Object^ sender, System::EventArgs^ e) {
		currentDisplay = currentDisplay + "0";
		writeOut();
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		currentDisplay = currentDisplay + ",";
		writeOut();
	}
	private: System::Void buttonOK_Click(System::Object^ sender, System::EventArgs^ e) {
		currentDisplay = currentDisplay + " ";
		execute(currentDisplay);
		writeOut();
	}
	private: System::Void buttonDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		deleteOne(currentDisplay);
		writeOut();
	}
	private: System::Void buttonPlus_Click(System::Object^ sender, System::EventArgs^ e) {
		currentDisplay = currentDisplay + "+";
		writeOut();
	}
	private: System::Void buttonMinus_Click(System::Object^ sender, System::EventArgs^ e) {
		currentDisplay = currentDisplay + "-";
		writeOut();
	}
	private: System::Void buttonMultiply_Click(System::Object^ sender, System::EventArgs^ e) {
		currentDisplay = currentDisplay + "*";
		writeOut();
	}
	private: System::Void buttonDivide_Click(System::Object^ sender, System::EventArgs^ e) {
		currentDisplay = currentDisplay + "/";
		writeOut();
	}
	private: System::Void buttonAC_Click(System::Object^ sender, System::EventArgs^ e) {
		currentDisplay = " ";
		writeOut();
	}
	private: System::Void buttonRBracket_Click(System::Object^ sender, System::EventArgs^ e) {
		currentDisplay = currentDisplay + ")";
		writeOut();
	}
	private: System::Void buttonLBracket_Click(System::Object^ sender, System::EventArgs^ e) {
		currentDisplay = currentDisplay + "(";
		writeOut();
	}
	private: System::Void buttonSqrt_Click(System::Object^ sender, System::EventArgs^ e) {
		currentDisplay = currentDisplay + "sqrt(";
		writeOut();
	}
	private: System::Void buttonPower_Click(System::Object^ sender, System::EventArgs^ e) {
		currentDisplay = currentDisplay + "^";
		writeOut();
	}
	private: System::Void buttonModulo_Click(System::Object^ sender, System::EventArgs^ e) {
		currentDisplay = currentDisplay + "%";
		writeOut();
	}
	private: System::Void buttonToggle_Click(System::Object^ sender, System::EventArgs^ e) {
		shownLayout(1);
		currentDisplay = " ";
		writeOut();
	}
	private: System::Void buttonLogic_Click(System::Object^ sender, System::EventArgs^ e) {
		shownLayout(2);
		currentDisplay = " "; 
		writeOut();
	}
	private: System::Void buttonNumconvert_Click(System::Object^ sender, System::EventArgs^ e) {
		shownLayout(3);
		currentDisplay = " ";
		writeOut();
	}
	private: System::Void buttonConvert_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string input = msclr::interop::marshal_as<std::string>(this->textBoxConvert->Text);
		convertInput = input;
		std::string from = msclr::interop::marshal_as<std::string>(this->textFrom->Text);
		convertFrom = "C0" + from;
		std::string to = msclr::interop::marshal_as<std::string>(this->textBoxTo->Text);
		convertTo = "C0" + to;
		convert();
		execute(currentDisplay);
		writeOut();
	}

	private: System::Void textFrom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
	}
	
	private: System::Void textBoxTo_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void textBoxConvert_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void buttonFromBin_Click(System::Object^ sender, System::EventArgs^ e) {
		convertFrom = "BIN";
		this->textFrom->Text = "BIN";
	}
	private: System::Void buttonFromOct_Click(System::Object^ sender, System::EventArgs^ e) {
		convertFrom = "OCT";
		this->textFrom->Text = "OCT";
	}
	private: System::Void buttonFromDec_Click(System::Object^ sender, System::EventArgs^ e) {
		convertFrom = "DEC";
		this->textFrom->Text = "DEC";
	}
	private: System::Void buttonFromHex_Click(System::Object^ sender, System::EventArgs^ e) {
		convertFrom = "HEX";
		this->textFrom->Text = "HEX";
	}
	private: System::Void buttonToBin_Click(System::Object^ sender, System::EventArgs^ e) {
		convertTo = "BIN";
		this->textBoxTo->Text = "BIN";
	}
	private: System::Void buttonToOct_Click(System::Object^ sender, System::EventArgs^ e) {
		convertTo = "OCT";
		this->textBoxTo->Text = "OCT";
	}
	private: System::Void buttonToDec_Click(System::Object^ sender, System::EventArgs^ e) {
		convertTo = "DEC";
		this->textBoxTo->Text = "DEC";
	}
	private: System::Void buttonToHex_Click(System::Object^ sender, System::EventArgs^ e) {
		convertTo = "HEX";
		this->textBoxTo->Text = "HEX";
	}
	private: System::Void buttonConvertAC_Click(System::Object^ sender, System::EventArgs^ e) {
		convertFrom = "";
		this->textFrom->Text = "";
		convertTo = "";
		this->textBoxTo->Text = "";
		convertInput = "";
		this->textBoxConvert->Text = "";
		currentDisplay = " ";
		writeOut();
	}
	private: System::Void buttonNOT_Click(System::Object^ sender, System::EventArgs^ e) {
		currentDisplay = currentDisplay + "NOT ";
		writeOut();
	}
	private: System::Void buttonAND_Click(System::Object^ sender, System::EventArgs^ e) {
		currentDisplay = currentDisplay + " AND ";
		writeOut();
	}
	private: System::Void buttonNAND_Click(System::Object^ sender, System::EventArgs^ e) {
		currentDisplay = currentDisplay + " NAND ";
		writeOut();
	}
	private: System::Void buttonNOR_Click(System::Object^ sender, System::EventArgs^ e) {
		currentDisplay = currentDisplay + " NOR ";
		writeOut();
	}
	private: System::Void buttonOR_Click(System::Object^ sender, System::EventArgs^ e) {
		currentDisplay = currentDisplay + " OR ";
		writeOut();
	}
	private: System::Void buttonXOR_Click(System::Object^ sender, System::EventArgs^ e) {
		currentDisplay = currentDisplay + " XOR ";
		writeOut();
	}
	private: System::Void buttonIMPLY_Click(System::Object^ sender, System::EventArgs^ e) {
		currentDisplay = currentDisplay + " IMPLY ";
		writeOut();
	}
	private: System::Void buttonXNOR_Click(System::Object^ sender, System::EventArgs^ e) {
		currentDisplay = currentDisplay + " XNOR ";
		writeOut();
	}
	private: System::Void buttonLogicLBracket_Click(System::Object^ sender, System::EventArgs^ e) {
		currentDisplay = currentDisplay + "( ";
		writeOut();
	}
	private: System::Void buttonLogicRbracket_Click(System::Object^ sender, System::EventArgs^ e) {
		currentDisplay = currentDisplay + " )";
		writeOut();
	}
	private: System::Void buttonLogicAC_Click(System::Object^ sender, System::EventArgs^ e) {
		currentDisplay = " ";
		writeOut();
	}
	private: System::Void buttonLogicDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		deleteOneLogic(currentDisplay);
		writeOut();
	}
	private: System::Void buttonLogic0_Click(System::Object^ sender, System::EventArgs^ e) {
		currentDisplay = currentDisplay + "0";
		writeOut();
	}
	private: System::Void buttonLogic1_Click(System::Object^ sender, System::EventArgs^ e) {
		currentDisplay = currentDisplay + "1";
		writeOut();
	}
	private: System::Void buttonLogicOK_Click(System::Object^ sender, System::EventArgs^ e) {
		compile(currentDisplay);
		writeOut();
	}

	private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	}
	private: System::Void buttonAnalyse_Click(System::Object^ sender, System::EventArgs^ e) {
		Stream^ Mystream;
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Title = "open files";
		openFileDialog1->Filter = "txt files (*.txt)|*.txt";
		openFileDialog1->FilterIndex = 2;
		openFileDialog1->Multiselect = false;
		openFileDialog1->RestoreDirectory = true;
		char Filename[10] = {};
		char pathFilename[1024] = {};

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			if ((Mystream = openFileDialog1->OpenFile()) != nullptr) {
				path = msclr::interop::marshal_as<std::string>(openFileDialog1->FileName);
				labelPath->Text = openFileDialog1->FileName;
				writeOut();

				Mystream->Close();
			}
			

		}
	}
	private: System::Void buttonAnalyse_Click_1(System::Object^ sender, System::EventArgs^ e) {
		fileHandler(path);
		writeOut();
	}
	private: System::Void labelPath_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
