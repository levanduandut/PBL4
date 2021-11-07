#pragma once

namespace PBL4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyScan
	/// </summary>
	public ref class MyScan : public System::Windows::Forms::Form
	{
	public:
		MyScan(void)
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
		~MyScan()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btnScan;
	private: System::Windows::Forms::Label^ lb11;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ClIpAddress;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ClHostname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ClByte;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ClTime;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ClTTL;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ClStatus;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnScan = (gcnew System::Windows::Forms::Button());
			this->lb11 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ClIpAddress = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ClHostname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ClByte = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ClTime = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ClTTL = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ClStatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->label1->Size = System::Drawing::Size(39, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Scan";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Host";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(72, 28);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(539, 21);
			this->comboBox1->TabIndex = 4;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(627, 27);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(30, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Go";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// btnScan
			// 
			this->btnScan->Location = System::Drawing::Point(663, 26);
			this->btnScan->Name = L"btnScan";
			this->btnScan->Size = System::Drawing::Size(129, 23);
			this->btnScan->TabIndex = 6;
			this->btnScan->Text = L"Scan";
			this->btnScan->UseVisualStyleBackColor = true;
			// 
			// lb11
			// 
			this->lb11->AutoSize = true;
			this->lb11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lb11->Location = System::Drawing::Point(12, 73);
			this->lb11->Name = L"lb11";
			this->lb11->Size = System::Drawing::Size(46, 16);
			this->lb11->TabIndex = 10;
			this->lb11->Text = L"Result";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->ClIpAddress,
					this->ClHostname, this->ClByte, this->ClTime, this->ClTTL, this->ClStatus
			});
			this->dataGridView1->Location = System::Drawing::Point(13, 93);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(779, 276);
			this->dataGridView1->TabIndex = 11;
			// 
			// ClIpAddress
			// 
			this->ClIpAddress->HeaderText = L"IP Address";
			this->ClIpAddress->Name = L"ClIpAddress";
			this->ClIpAddress->ReadOnly = true;
			// 
			// ClHostname
			// 
			this->ClHostname->HeaderText = L"Hostname";
			this->ClHostname->Name = L"ClHostname";
			this->ClHostname->ReadOnly = true;
			// 
			// ClByte
			// 
			this->ClByte->HeaderText = L"Bytes";
			this->ClByte->Name = L"ClByte";
			this->ClByte->ReadOnly = true;
			// 
			// ClTime
			// 
			this->ClTime->HeaderText = L"ClTime";
			this->ClTime->Name = L"ClTime";
			this->ClTime->ReadOnly = true;
			// 
			// ClTTL
			// 
			this->ClTTL->HeaderText = L"TTL";
			this->ClTTL->Name = L"ClTTL";
			this->ClTTL->ReadOnly = true;
			// 
			// ClStatus
			// 
			this->ClStatus->HeaderText = L"Status";
			this->ClStatus->Name = L"ClStatus";
			this->ClStatus->ReadOnly = true;
			// 
			// MyScan
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ClientSize = System::Drawing::Size(804, 381);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->lb11);
			this->Controls->Add(this->btnScan);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyScan";
			this->Text = L"MyScan";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
