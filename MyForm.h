#include <math.h>
#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// This GUI allows the user to perform 5 basic calculator functions on two inputs
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			
		}

	protected:
		
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	protected: 
	private: System::Windows::Forms::TextBox^  inputBox1;
	private: System::Windows::Forms::TextBox^  inputBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label5;

	private:

		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code

		void InitializeComponent(void)
		{
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->inputBox1 = (gcnew System::Windows::Forms::TextBox());
			this->inputBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->AllowDrop = true;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"-", L"%", L"/", L"+", L"x"});
			this->comboBox1->Location = System::Drawing::Point(211, 181);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(134, 31);
			this->comboBox1->Sorted = true;
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// inputBox1
			// 
			this->inputBox1->Location = System::Drawing::Point(31, 181);
			this->inputBox1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->inputBox1->Name = L"inputBox1";
			this->inputBox1->Size = System::Drawing::Size(148, 28);
			this->inputBox1->TabIndex = 1;
			// 
			// inputBox2
			// 
			this->inputBox2->Location = System::Drawing::Point(376, 184);
			this->inputBox2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->inputBox2->Name = L"inputBox2";
			this->inputBox2->Size = System::Drawing::Size(148, 28);
			this->inputBox2->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 139);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 23);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Number 1";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(206, 139);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 23);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Operation";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(371, 139);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 23);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Number 2";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(109, 41);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(201, 23);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Your calculation equals:";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(114, 262);
			this->button1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(385, 114);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(344, 28);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 23);
			this->label5->TabIndex = 8;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 23);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(610, 423);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->inputBox2);
			this->Controls->Add(this->inputBox1);
			this->Controls->Add(this->comboBox1);
			this->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::Desktop;
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"MyForm";
			this->Text = L"Calculator Widget";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 String ^ num1 = inputBox1 -> Text;
			 String ^ num2 = inputBox2 -> Text;
			 try{
			 if(comboBox1 -> Text == "+"){
				label5 -> Text = System::Convert::ToString(System::Convert::ToDouble(num1)+System::Convert::ToDouble(num2));
			 }
			 if(comboBox1 -> Text == "-"){
				label5 -> Text = System::Convert::ToString(System::Convert::ToDouble(num1)-System::Convert::ToDouble(num2));
			 }
			 if(comboBox1 -> Text == "*"){
				label5 -> Text = System::Convert::ToString(System::Convert::ToDouble(num1)*System::Convert::ToDouble(num2));
			 }
			 if(comboBox1 -> Text == "/"){
				label5 -> Text = System::Convert::ToString(System::Convert::ToDouble(num1)/System::Convert::ToDouble(num2));
			 }
			 if(comboBox1 -> Text == "%"){
				 label5 -> Text = System::Convert::ToString(System::Convert::ToInt64(num1) % System::Convert::ToInt64(num2));
			 }
			 }
			 catch(...)
			 {
				 //catches any exceptions caused by input errors
				 label5 -> Text = "Your inputs caused an error. Try again";
			 }
			 
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
