#pragma once

namespace SarahaProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for SignUpForm
	/// </summary>
	public ref class SignUpForm : public System::Windows::Forms::Form
	{
	public:
		SignUpForm(void)
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
		~SignUpForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  UserName;

	private: System::Windows::Forms::TextBox^  Passwod;



	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  PasswordC;


	private: System::Windows::Forms::Button^  button1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SignUpForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->UserName = (gcnew System::Windows::Forms::TextBox());
			this->Passwod = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->PasswordC = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(193, 213);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(150, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"EnterYouName:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(193, 271);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(190, 27);
			this->label2->TabIndex = 1;
			this->label2->Text = L"EnterYourPassword:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &SignUpForm::label2_Click);
			// 
			// UserName
			// 
			this->UserName->Location = System::Drawing::Point(437, 210);
			this->UserName->Name = L"UserName";
			this->UserName->Size = System::Drawing::Size(189, 34);
			this->UserName->TabIndex = 2;
			// 
			// Passwod
			// 
			this->Passwod->Location = System::Drawing::Point(437, 264);
			this->Passwod->Name = L"Passwod";
			this->Passwod->PasswordChar = '*';
			this->Passwod->Size = System::Drawing::Size(189, 34);
			this->Passwod->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(193, 327);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(210, 27);
			this->label3->TabIndex = 4;
			this->label3->Text = L"ConfirmYourPassword:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// PasswordC
			// 
			this->PasswordC->Location = System::Drawing::Point(437, 320);
			this->PasswordC->Name = L"PasswordC";
			this->PasswordC->PasswordChar = '*';
			this->PasswordC->Size = System::Drawing::Size(189, 34);
			this->PasswordC->TabIndex = 5;
			this->PasswordC->TextChanged += gcnew System::EventHandler(this, &SignUpForm::textBox3_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(329, 398);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(158, 47);
			this->button1->TabIndex = 6;
			this->button1->Text = L"SignUp";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &SignUpForm::button1_Click);
			// 
			// SignUpForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 27);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(884, 761);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->PasswordC);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->Passwod);
			this->Controls->Add(this->UserName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"SignUpForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SignUpForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^name, ^pass1, ^pass2;
	name = UserName->Text;
	pass1 = Passwod->Text;
	pass2 = PasswordC->Text;
	// to read from files
	
	
	// to convert it into int then add 1 then back it again into string to add it in file

	String  ^NameLine;
	bool is_used = false;
	if (name == "" || pass1 == "" || pass2 == "") {
		MessageBox::Show("Please Enter valid data");
	}
	else {
		StreamReader filename("LoginReg//users.txt", System::Text::Encoding::Default);
		while ((NameLine = filename.ReadLine()) != nullptr) {
			if (NameLine == name) {
				MessageBox::Show("This name is used Choose another one");
				is_used = true;
				break;
			}
		}
		filename.Close();

		if (is_used == false) {
			if (pass1 == pass2) {
				StreamReader fileid("LoginReg//IDS.txt", System::Text::Encoding::Default); // to get the next id from file






				String ^line;
				line = fileid.ReadLine();
				while (fileid.ReadLine() != nullptr) // to get the next id for the user
					line = fileid.ReadLine();

				int ID;
				ID = Convert::ToInt32(line) ;
				/*if (ID == 0)*/
					ID = ID + 1;
				/*else if(ID==1)
					ID = ID + 2;*/

				String ^ newID;
				newID = ID.ToString();

				fileid.Close();





				StreamWriter filePasswords("LoginReg//passwords.txt",true);
				StreamWriter fileName("LoginReg//users.txt", true);
				StreamWriter fileIDS("LoginReg//IDS.txt", true);
				filePasswords.WriteLine(pass1);
				filePasswords.Close();

				fileName.WriteLine(name);
				fileName.Close();

				fileIDS.WriteLine(newID);
				fileIDS.Close();
				MessageBox::Show("Registertion Successfully:");
				StreamWriter fileSender("sendingMessaging//" + newID + ".txt");
				fileSender.Close();

				StreamWriter userContact("userContacts//" + newID + ".txt");
				userContact.Close();
				

				StreamWriter fileRecieve("Recivingmessage//" + newID + ".txt");
				fileRecieve.Close();
				this->Close();
			}
			else {
				MessageBox::Show("Wrong Password");
			}
		}
		

	}

	
	}
};
}
