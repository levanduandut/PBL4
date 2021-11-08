#pragma once
#include "MyPing.h"
#include "MyDns.h"
#include "MyScan.h"
#include "MyTracert.h"

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
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panelDesktop;


	private: Form^ currentChildForm;

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
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnMyScanIp = (gcnew System::Windows::Forms::Button());
			this->btnDnsQuery = (gcnew System::Windows::Forms::Button());
			this->btnMyTracert = (gcnew System::Windows::Forms::Button());
			this->btnMyPing = (gcnew System::Windows::Forms::Button());
			this->panelLogo = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->labelTitle = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panelDesktop = (gcnew System::Windows::Forms::Panel());
			this->panelMenu->SuspendLayout();
			this->panelLogo->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
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
			this->btnMyScanIp->BackColor = System::Drawing::Color::LightSeaGreen;
			this->btnMyScanIp->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnMyScanIp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMyScanIp->Location = System::Drawing::Point(0, 306);
			this->btnMyScanIp->Name = L"btnMyScanIp";
			this->btnMyScanIp->Size = System::Drawing::Size(220, 62);
			this->btnMyScanIp->TabIndex = 4;
			this->btnMyScanIp->Text = L"My Scan IP";
			this->btnMyScanIp->UseVisualStyleBackColor = false;
			this->btnMyScanIp->Click += gcnew System::EventHandler(this, &MyForm::btnMyScanIp_Click);
			// 
			// btnDnsQuery
			// 
			this->btnDnsQuery->BackColor = System::Drawing::Color::LightSeaGreen;
			this->btnDnsQuery->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnDnsQuery->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDnsQuery->Location = System::Drawing::Point(0, 244);
			this->btnDnsQuery->Name = L"btnDnsQuery";
			this->btnDnsQuery->Size = System::Drawing::Size(220, 62);
			this->btnDnsQuery->TabIndex = 3;
			this->btnDnsQuery->Text = L"My DNS Query";
			this->btnDnsQuery->UseVisualStyleBackColor = false;
			this->btnDnsQuery->Click += gcnew System::EventHandler(this, &MyForm::btnDnsQuery_Click);
			// 
			// btnMyTracert
			// 
			this->btnMyTracert->BackColor = System::Drawing::Color::LightSeaGreen;
			this->btnMyTracert->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnMyTracert->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMyTracert->Location = System::Drawing::Point(0, 182);
			this->btnMyTracert->Name = L"btnMyTracert";
			this->btnMyTracert->Size = System::Drawing::Size(220, 62);
			this->btnMyTracert->TabIndex = 2;
			this->btnMyTracert->Text = L"My Tracert";
			this->btnMyTracert->UseVisualStyleBackColor = false;
			this->btnMyTracert->Click += gcnew System::EventHandler(this, &MyForm::btnMyTracert_Click);
			// 
			// btnMyPing
			// 
			this->btnMyPing->BackColor = System::Drawing::Color::LightSeaGreen;
			this->btnMyPing->Dock = System::Windows::Forms::DockStyle::Top;
			this->btnMyPing->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMyPing->Location = System::Drawing::Point(0, 120);
			this->btnMyPing->Name = L"btnMyPing";
			this->btnMyPing->Size = System::Drawing::Size(220, 62);
			this->btnMyPing->TabIndex = 1;
			this->btnMyPing->Text = L"My Ping";
			this->btnMyPing->UseVisualStyleBackColor = false;
			this->btnMyPing->Click += gcnew System::EventHandler(this, &MyForm::btnMyPing_Click);
			// 
			// panelLogo
			// 
			this->panelLogo->Controls->Add(this->pictureBox1);
			this->panelLogo->Dock = System::Windows::Forms::DockStyle::Top;
			this->panelLogo->Location = System::Drawing::Point(0, 0);
			this->panelLogo->Name = L"panelLogo";
			this->panelLogo->Size = System::Drawing::Size(220, 120);
			this->panelLogo->TabIndex = 0;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(40, 17);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(145, 63);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
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
			// panelDesktop
			// 
			this->panelDesktop->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panelDesktop->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelDesktop->Location = System::Drawing::Point(220, 80);
			this->panelDesktop->Name = L"panelDesktop";
			this->panelDesktop->Size = System::Drawing::Size(853, 461);
			this->panelDesktop->TabIndex = 3;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1073, 541);
			this->Controls->Add(this->panelDesktop);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panelMenu);
			this->ForeColor = System::Drawing::Color::Red;
			this->Name = L"MyForm";
			this->Text = L"My Basic Network Tools";
			this->panelMenu->ResumeLayout(false);
			this->panelLogo->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnMyPing_Click(System::Object^ sender, System::EventArgs^ e) {
		labelTitle->Text = btnMyPing->Text;
		btnMyPing->BackColor = Color::Aqua;
		btnMyTracert->BackColor = Color::LightSeaGreen;
		btnDnsQuery->BackColor = Color::LightSeaGreen;
		btnMyScanIp->BackColor = Color::LightSeaGreen;

		MyPing^ frm1 = gcnew MyPing;
		OpenChildForm(frm1);
		

	}
    private: System::Void btnMyTracert_Click(System::Object^ sender, System::EventArgs^ e) {
	    labelTitle->Text = btnMyTracert->Text;
		btnMyTracert->BackColor = Color::Aqua;
		btnDnsQuery->BackColor = Color::LightSeaGreen;
		btnMyScanIp->BackColor = Color::LightSeaGreen;
		btnMyPing->BackColor = Color::LightSeaGreen;

		MyTracert^ frm4 = gcnew MyTracert;
		OpenChildForm(frm4);


    }
    private: System::Void btnDnsQuery_Click(System::Object^ sender, System::EventArgs^ e) {
		labelTitle->Text = btnDnsQuery->Text;
		btnDnsQuery->BackColor = Color::Aqua;
		btnMyScanIp->BackColor = Color::LightSeaGreen;
		btnMyPing->BackColor = Color::LightSeaGreen;
		btnMyTracert->BackColor = Color::LightSeaGreen;

		MyDns^ frm2 = gcnew MyDns;
		OpenChildForm(frm2);

    }
    private: System::Void btnMyScanIp_Click(System::Object^ sender, System::EventArgs^ e) {
		labelTitle->Text = btnMyScanIp->Text;
		btnMyScanIp->BackColor = Color::Aqua;
		btnMyPing->BackColor = Color::LightSeaGreen;
		btnMyTracert->BackColor = Color::LightSeaGreen;
		btnDnsQuery->BackColor = Color::LightSeaGreen;


		MyScan^ frm3 = gcnew MyScan;
		OpenChildForm(frm3);
		

    }
    private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		if (MessageBox::Show("DO you really want to exit ?", "My Basic Network Tools",
			MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
			Application::Exit();
		}
    }
	private: 
		void OpenChildForm(Form^ childForm) {
			
			if (currentChildForm) {
				currentChildForm->Close();
			}
			currentChildForm = childForm;
			childForm->TopLevel = false;
			childForm->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			childForm->Dock = System::Windows::Forms::DockStyle::Fill;
			panelDesktop->Controls->Add(childForm);
			panelDesktop->Tag = childForm;
			childForm->BringToFront();
			childForm->Show();
			labelTitle->Text = childForm->Text;

	}

};
}
