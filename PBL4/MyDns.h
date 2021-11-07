#pragma once

namespace PBL4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyDns
	/// </summary>
	public ref class MyDns : public System::Windows::Forms::Form
	{
	public:
		MyDns(void)
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
		~MyDns()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Button^ Lookup;
	private: System::Windows::Forms::Label^ lb11;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ClDomainName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ClTTL;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ClClass;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ClType;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ClResult;
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->Lookup = (gcnew System::Windows::Forms::Button());
			this->lb11 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ClDomainName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ClTTL = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ClClass = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ClType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ClResult = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Lookup";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Host";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(61, 35);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(234, 21);
			this->comboBox1->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(301, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"DNS Server(s)";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(395, 35);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(174, 21);
			this->comboBox2->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(575, 40);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Type";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Location = System::Drawing::Point(618, 35);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(70, 21);
			this->comboBox3->TabIndex = 7;
			// 
			// Lookup
			// 
			this->Lookup->Location = System::Drawing::Point(708, 33);
			this->Lookup->Name = L"Lookup";
			this->Lookup->Size = System::Drawing::Size(75, 23);
			this->Lookup->TabIndex = 8;
			this->Lookup->Text = L"Lookup";
			this->Lookup->UseVisualStyleBackColor = true;
			// 
			// lb11
			// 
			this->lb11->AutoSize = true;
			this->lb11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb11->Location = System::Drawing::Point(12, 74);
			this->lb11->Name = L"lb11";
			this->lb11->Size = System::Drawing::Size(46, 16);
			this->lb11->TabIndex = 9;
			this->lb11->Text = L"Result";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->ClDomainName,
					this->ClTTL, this->ClClass, this->ClType, this->ClResult
			});
			this->dataGridView1->Location = System::Drawing::Point(15, 102);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(768, 267);
			this->dataGridView1->TabIndex = 10;
			// 
			// ClDomainName
			// 
			this->ClDomainName->HeaderText = L"Domain Name";
			this->ClDomainName->Name = L"ClDomainName";
			this->ClDomainName->ReadOnly = true;
			// 
			// ClTTL
			// 
			this->ClTTL->HeaderText = L"TTL";
			this->ClTTL->Name = L"ClTTL";
			this->ClTTL->ReadOnly = true;
			// 
			// ClClass
			// 
			this->ClClass->HeaderText = L"Class";
			this->ClClass->Name = L"ClClass";
			this->ClClass->ReadOnly = true;
			// 
			// ClType
			// 
			this->ClType->HeaderText = L"Type";
			this->ClType->Name = L"ClType";
			this->ClType->ReadOnly = true;
			// 
			// ClResult
			// 
			this->ClResult->HeaderText = L"Result";
			this->ClResult->Name = L"ClResult";
			this->ClResult->ReadOnly = true;
			// 
			// MyDns
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ClientSize = System::Drawing::Size(804, 381);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->lb11);
			this->Controls->Add(this->Lookup);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyDns";
			this->Text = L"MyDns";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
