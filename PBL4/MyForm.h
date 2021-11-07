#pragma once

namespace PBL4 {

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
	private: System::Windows::Forms::Panel^ panelMenu;
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Button^ btnMyScanIp;

	private: System::Windows::Forms::Button^ btnDnsQuery;

	private: System::Windows::Forms::Button^ btnMyTracert;
	private: System::Windows::Forms::Button^ btnMyPing;
	private: System::Windows::Forms::Panel^ panelLogo;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ labelTitle;
	private: System::Windows::Forms::Panel^ panel2;
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
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnMyScanIp = (gcnew System::Windows::Forms::Button());
			this->btnDnsQuery = (gcnew System::Windows::Forms::Button());
			this->btnMyTracert = (gcnew System::Windows::Forms::Button());
			this->btnMyPing = (gcnew System::Windows::Forms::Button());
			this->panelLogo = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->labelTitle = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panelMenu->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelMenu
			// 
			this->panelMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->panelMenu->Controls->Add(this->btnExit);
			this->panelMenu->Controls->Add(this->btnMyScanIp);
			this->panelMenu->Controls->Add(this->btnDnsQuery);
			this->panelMenu->Controls->Add(this->btnMyTracert);
			this->panelMenu->Controls->Add(this->btnMyPing);
			this->panelMenu->Controls->Add(this->panelLogo);
			this->panelMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelMenu->Location = System::Drawing::Point(0, 0);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(220, 541);
			this->panelMenu->TabIndex = 0;
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnExit->Location = System::Drawing::Point(84, 424);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(116, 44);
			this->btnExit->TabIndex = 5;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
			// 
			// btnMyScanIp
			// 
			this->btnMyScanIp->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnMyScanIp->Location = System::Drawing::Point(0, 306);
			this->btnMyScanIp->Name = L"btnMyScanIp";
			this->btnMyScanIp->Size = System::Drawing::Size(220, 62);
			this->btnMyScanIp->TabIndex = 4;
			this->btnMyScanIp->Text = L"My Scan IP";
			this->btnMyScanIp->UseVisualStyleBackColor = true;
			this->btnMyScanIp->Click += gcnew System::EventHandler(this, &MyForm::btnMyScanIp_Click);
			// 
			// btnDnsQuery
			// 
			this->btnDnsQuery->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnDnsQuery->Location = System::Drawing::Point(0, 244);
			this->btnDnsQuery->Name = L"btnDnsQuery";
			this->btnDnsQuery->Size = System::Drawing::Size(220, 62);
			this->btnDnsQuery->TabIndex = 3;
			this->btnDnsQuery->Text = L"My DNS Query";
			this->btnDnsQuery->UseVisualStyleBackColor = true;
			this->btnDnsQuery->Click += gcnew System::EventHandler(this, &MyForm::btnDnsQuery_Click);
			// 
			// btnMyTracert
			// 
			this->btnMyTracert->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnMyTracert->Location = System::Drawing::Point(0, 182);
			this->btnMyTracert->Name = L"btnMyTracert";
			this->btnMyTracert->Size = System::Drawing::Size(220, 62);
			this->btnMyTracert->TabIndex = 2;
			this->btnMyTracert->Text = L"My Tracert";
			this->btnMyTracert->UseVisualStyleBackColor = true;
			this->btnMyTracert->Click += gcnew System::EventHandler(this, &MyForm::btnMyTracert_Click);
			// 
			// btnMyPing
			// 
			this->btnMyPing->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnMyPing->Location = System::Drawing::Point(0, 120);
			this->btnMyPing->Name = L"btnMyPing";
			this->btnMyPing->Size = System::Drawing::Size(220, 62);
			this->btnMyPing->TabIndex = 1;
			this->btnMyPing->Text = L"My Ping";
			this->btnMyPing->UseVisualStyleBackColor = true;
			this->btnMyPing->Click += gcnew System::EventHandler(this, &MyForm::btnMyPing_Click);
			// 
			// panelLogo
			// 
			this->panelLogo->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelLogo->Location = System::Drawing::Point(0, 0);
			this->panelLogo->Name = L"panelLogo";
			this->panelLogo->Size = System::Drawing::Size(220, 120);
			this->panelLogo->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->panel1->Controls->Add(this->labelTitle);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(220, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(853, 75);
			this->panel1->TabIndex = 1;
			// 
			// labelTitle
			// 
			this->labelTitle->AutoSize = true;
			this->labelTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTitle->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->labelTitle->Location = System::Drawing::Point(54, 34);
			this->labelTitle->Name = L"labelTitle";
			this->labelTitle->Size = System::Drawing::Size(49, 16);
			this->labelTitle->TabIndex = 0;
			this->labelTitle->Text = L"Home";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::LawnGreen;
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(220, 75);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(853, 5);
			this->panel2->TabIndex = 2;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1073, 541);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panelMenu);
			this->Name = L"MyForm";
			this->Text = L"My Basic Network Tools";
			this->panelMenu->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnMyPing_Click(System::Object^ sender, System::EventArgs^ e) {
		labelTitle->Text = btnMyPing->Text;
	}
     private: System::Void btnMyTracert_Click(System::Object^ sender, System::EventArgs^ e) {
	    labelTitle->Text = btnMyTracert->Text;
    }
    private: System::Void btnDnsQuery_Click(System::Object^ sender, System::EventArgs^ e) {
		labelTitle->Text = btnDnsQuery->Text;
    }
    private: System::Void btnMyScanIp_Click(System::Object^ sender, System::EventArgs^ e) {
		labelTitle->Text = btnMyScanIp->Text;
    }
    private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("DO you really want to exit ?", "My Basic Network Tools",
			MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			Application::Exit();
		}
		{

		}

    }
};
}
