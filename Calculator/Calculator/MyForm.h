#pragma once
#include "string";
#include "data.h";

namespace Calculator {

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
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.875F));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(11, 15);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 29);
			this->label1->TabIndex = 12;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(12, 196);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(45, 47);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(60, 196);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(45, 47);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(108, 196);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(45, 47);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Location = System::Drawing::Point(12, 246);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(45, 47);
			this->button4->TabIndex = 5;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button5->Location = System::Drawing::Point(60, 246);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(45, 47);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button6->Location = System::Drawing::Point(108, 246);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(45, 47);
			this->button6->TabIndex = 3;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button7->Location = System::Drawing::Point(12, 296);
			this->button7->Margin = System::Windows::Forms::Padding(2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(45, 47);
			this->button7->TabIndex = 8;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button8->Location = System::Drawing::Point(60, 296);
			this->button8->Margin = System::Windows::Forms::Padding(2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(45, 47);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button9->Location = System::Drawing::Point(108, 296);
			this->button9->Margin = System::Windows::Forms::Padding(2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(45, 47);
			this->button9->TabIndex = 6;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button0
			// 
			this->button0->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button0->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button0->Location = System::Drawing::Point(12, 346);
			this->button0->Margin = System::Windows::Forms::Padding(2);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(45, 47);
			this->button0->TabIndex = 11;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = false;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button11->Location = System::Drawing::Point(60, 346);
			this->button11->Margin = System::Windows::Forms::Padding(2);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(45, 47);
			this->button11->TabIndex = 10;
			this->button11->Text = L".";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// buttonOK
			// 
			this->buttonOK->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonOK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonOK->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonOK->Location = System::Drawing::Point(108, 346);
			this->buttonOK->Margin = System::Windows::Forms::Padding(2);
			this->buttonOK->Name = L"buttonOK";
			this->buttonOK->Size = System::Drawing::Size(141, 47);
			this->buttonOK->TabIndex = 9;
			this->buttonOK->Text = L"ok";
			this->buttonOK->UseVisualStyleBackColor = false;
			this->buttonOK->Click += gcnew System::EventHandler(this, &MyForm::buttonOK_Click);
			// 
			// buttonDelete
			// 
			this->buttonDelete->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDelete->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonDelete->Location = System::Drawing::Point(156, 146);
			this->buttonDelete->Margin = System::Windows::Forms::Padding(2);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(45, 47);
			this->buttonDelete->TabIndex = 13;
			this->buttonDelete->Text = L"<-";
			this->buttonDelete->UseVisualStyleBackColor = false;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &MyForm::buttonDelete_Click);
			// 
			// buttonPlus
			// 
			this->buttonPlus->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonPlus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPlus->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonPlus->Location = System::Drawing::Point(156, 196);
			this->buttonPlus->Margin = System::Windows::Forms::Padding(2);
			this->buttonPlus->Name = L"buttonPlus";
			this->buttonPlus->Size = System::Drawing::Size(45, 47);
			this->buttonPlus->TabIndex = 14;
			this->buttonPlus->Text = L"+";
			this->buttonPlus->UseVisualStyleBackColor = false;
			this->buttonPlus->Click += gcnew System::EventHandler(this, &MyForm::buttonPlus_Click);
			// 
			// buttonMinus
			// 
			this->buttonMinus->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonMinus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonMinus->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonMinus->Location = System::Drawing::Point(156, 246);
			this->buttonMinus->Margin = System::Windows::Forms::Padding(2);
			this->buttonMinus->Name = L"buttonMinus";
			this->buttonMinus->Size = System::Drawing::Size(45, 47);
			this->buttonMinus->TabIndex = 15;
			this->buttonMinus->Text = L"-";
			this->buttonMinus->UseVisualStyleBackColor = false;
			this->buttonMinus->Click += gcnew System::EventHandler(this, &MyForm::buttonMinus_Click);
			// 
			// buttonDivide
			// 
			this->buttonDivide->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonDivide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonDivide->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonDivide->Location = System::Drawing::Point(204, 246);
			this->buttonDivide->Margin = System::Windows::Forms::Padding(2);
			this->buttonDivide->Name = L"buttonDivide";
			this->buttonDivide->Size = System::Drawing::Size(45, 47);
			this->buttonDivide->TabIndex = 18;
			this->buttonDivide->Text = L"/";
			this->buttonDivide->UseVisualStyleBackColor = false;
			this->buttonDivide->Click += gcnew System::EventHandler(this, &MyForm::buttonDivide_Click);
			// 
			// buttonMultiply
			// 
			this->buttonMultiply->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonMultiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonMultiply->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonMultiply->Location = System::Drawing::Point(204, 196);
			this->buttonMultiply->Margin = System::Windows::Forms::Padding(2);
			this->buttonMultiply->Name = L"buttonMultiply";
			this->buttonMultiply->Size = System::Drawing::Size(45, 47);
			this->buttonMultiply->TabIndex = 17;
			this->buttonMultiply->Text = L"*";
			this->buttonMultiply->UseVisualStyleBackColor = false;
			this->buttonMultiply->Click += gcnew System::EventHandler(this, &MyForm::buttonMultiply_Click);
			// 
			// buttonAC
			// 
			this->buttonAC->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonAC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.125F));
			this->buttonAC->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonAC->Location = System::Drawing::Point(204, 146);
			this->buttonAC->Margin = System::Windows::Forms::Padding(2);
			this->buttonAC->Name = L"buttonAC";
			this->buttonAC->Size = System::Drawing::Size(45, 47);
			this->buttonAC->TabIndex = 16;
			this->buttonAC->Text = L"AC";
			this->buttonAC->UseVisualStyleBackColor = false;
			this->buttonAC->Click += gcnew System::EventHandler(this, &MyForm::buttonAC_Click);
			// 
			// buttonRBracket
			// 
			this->buttonRBracket->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonRBracket->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonRBracket->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonRBracket->Location = System::Drawing::Point(60, 146);
			this->buttonRBracket->Margin = System::Windows::Forms::Padding(2);
			this->buttonRBracket->Name = L"buttonRBracket";
			this->buttonRBracket->Size = System::Drawing::Size(45, 47);
			this->buttonRBracket->TabIndex = 20;
			this->buttonRBracket->Text = L")";
			this->buttonRBracket->UseVisualStyleBackColor = false;
			this->buttonRBracket->Click += gcnew System::EventHandler(this, &MyForm::buttonRBracket_Click);
			// 
			// buttonLBracket
			// 
			this->buttonLBracket->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonLBracket->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonLBracket->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonLBracket->Location = System::Drawing::Point(12, 146);
			this->buttonLBracket->Margin = System::Windows::Forms::Padding(2);
			this->buttonLBracket->Name = L"buttonLBracket";
			this->buttonLBracket->Size = System::Drawing::Size(45, 47);
			this->buttonLBracket->TabIndex = 19;
			this->buttonLBracket->Text = L"(";
			this->buttonLBracket->UseVisualStyleBackColor = false;
			this->buttonLBracket->Click += gcnew System::EventHandler(this, &MyForm::buttonLBracket_Click);
			// 
			// buttonSqrt
			// 
			this->buttonSqrt->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonSqrt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSqrt->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonSqrt->Location = System::Drawing::Point(156, 296);
			this->buttonSqrt->Margin = System::Windows::Forms::Padding(2);
			this->buttonSqrt->Name = L"buttonSqrt";
			this->buttonSqrt->Size = System::Drawing::Size(45, 47);
			this->buttonSqrt->TabIndex = 23;
			this->buttonSqrt->Text = L"sqrt";
			this->buttonSqrt->UseVisualStyleBackColor = false;
			this->buttonSqrt->Click += gcnew System::EventHandler(this, &MyForm::buttonSqrt_Click);
			// 
			// buttonPower
			// 
			this->buttonPower->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonPower->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonPower->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonPower->Location = System::Drawing::Point(108, 146);
			this->buttonPower->Margin = System::Windows::Forms::Padding(2);
			this->buttonPower->Name = L"buttonPower";
			this->buttonPower->Size = System::Drawing::Size(45, 47);
			this->buttonPower->TabIndex = 22;
			this->buttonPower->Text = L"^";
			this->buttonPower->UseVisualStyleBackColor = false;
			this->buttonPower->Click += gcnew System::EventHandler(this, &MyForm::buttonPower_Click);
			// 
			// buttonModulo
			// 
			this->buttonModulo->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->buttonModulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.125F));
			this->buttonModulo->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->buttonModulo->Location = System::Drawing::Point(204, 294);
			this->buttonModulo->Margin = System::Windows::Forms::Padding(2);
			this->buttonModulo->Name = L"buttonModulo";
			this->buttonModulo->Size = System::Drawing::Size(45, 47);
			this->buttonModulo->TabIndex = 21;
			this->buttonModulo->Text = L"%";
			this->buttonModulo->UseVisualStyleBackColor = false;
			this->buttonModulo->Click += gcnew System::EventHandler(this, &MyForm::buttonModulo_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->ClientSize = System::Drawing::Size(520, 417);
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
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	void writeOut() {
		String^ currentDisplayConverted = gcnew String(currentDisplay.data());
		label1->Text = currentDisplayConverted;
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
	};
	
}
