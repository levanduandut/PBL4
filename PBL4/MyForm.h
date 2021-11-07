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
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ btnMyTracert;
	private: System::Windows::Forms::Button^ btnMyPing;
	private: System::Windows::Forms::Panel^ panelLogo;
	private: System::Windows::Forms::Panel^ panel1;
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
			this->panelLogo = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnMyPing = (gcnew System::Windows::Forms::Button());
			this->btnMyTracert = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->panelMenu->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelMenu
			// 
			this->panelMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(68)));
			this->panelMenu->Controls->Add(this->btnExit);
			this->panelMenu->Controls->Add(this->button4);
			this->panelMenu->Controls->Add(this->button3);
			this->panelMenu->Controls->Add(this->btnMyTracert);
			this->panelMenu->Controls->Add(this->btnMyPing);
			this->panelMenu->Controls->Add(this->panelLogo);
			this->panelMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelMenu->Location = System::Drawing::Point(0, 0);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(220, 541);
			this->panelMenu->TabIndex = 0;
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
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(220, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(853, 75);
			this->panel1->TabIndex = 1;
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
			// 
			// button3
			// 
			this->button3->Dock = System::Windows::Forms::DockStyle::Top;
			this->button3->Location = System::Drawing::Point(0, 244);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(220, 62);
			this->button3->TabIndex = 3;
			this->button3->Text = L"My DNS Quẻy";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Dock = System::Windows::Forms::DockStyle::Top;
			this->button4->Location = System::Drawing::Point(0, 306);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(220, 62);
			this->button4->TabIndex = 4;
			this->button4->Text = L"My Scan IP";
			this->button4->UseVisualStyleBackColor = true;
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
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1073, 541);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panelMenu);
			this->Name = L"MyForm";
			this->Text = L"My Basic Network Tools";
			this->panelMenu->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
