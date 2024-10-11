#pragma once
#include "users.h"
namespace SarahaProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Button^  button3;
	public:
		String^ userid;

		
	private: System::Windows::Forms::Button^  SearchContact;
	private: System::Windows::Forms::Panel^  pn_seacrh_contact;
	private: System::Windows::Forms::Panel^  pn_after_search;
	private: System::Windows::Forms::Label^  ID_searched;
	private: System::Windows::Forms::Label^  Named_searched;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  search;
	private: System::Windows::Forms::TextBox^  ID_search_text;
	private: System::Windows::Forms::Label^  Search_id;
	private: System::Windows::Forms::Button^  ViewContacts;
	private: System::Windows::Forms::Panel^  pn_view_contact;
	private: System::Windows::Forms::Button^  previous;

	private: System::Windows::Forms::Button^  Next;
	private: System::Windows::Forms::Label^  contacts_id;
	private: System::Windows::Forms::Label^  contacts_name;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  ss;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label_recieved_messages;
	private: System::Windows::Forms::Label^  label_sent_messages;


	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  count_recieved;
	private: System::Windows::Forms::Label^  Contacts_count;

	private: System::Windows::Forms::PictureBox^  Contacts_pic;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;






	public:

			 int useriD;
		MyForm1(String^ name,int userID)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->username_label->Text= "Welcome : "+ name;
			this->userid = userID.ToString();
			useriD = userID;
			initail();
		
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel4;

	private: System::Windows::Forms::Panel^  pn_send_message;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  IDBox;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::RichTextBox^  MessageBox;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  username_label;
	private: System::ComponentModel::IContainer^  components;

	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->ViewContacts = (gcnew System::Windows::Forms::Button());
			this->SearchContact = (gcnew System::Windows::Forms::Button());
			this->username_label = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->Contacts_count = (gcnew System::Windows::Forms::Label());
			this->Contacts_pic = (gcnew System::Windows::Forms::PictureBox());
			this->count_recieved = (gcnew System::Windows::Forms::Label());
			this->label_recieved_messages = (gcnew System::Windows::Forms::Label());
			this->label_sent_messages = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pn_view_contact = (gcnew System::Windows::Forms::Panel());
			this->previous = (gcnew System::Windows::Forms::Button());
			this->Next = (gcnew System::Windows::Forms::Button());
			this->contacts_id = (gcnew System::Windows::Forms::Label());
			this->contacts_name = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->ss = (gcnew System::Windows::Forms::Label());
			this->pn_send_message = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->MessageBox = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->IDBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pn_seacrh_contact = (gcnew System::Windows::Forms::Panel());
			this->pn_after_search = (gcnew System::Windows::Forms::Panel());
			this->ID_searched = (gcnew System::Windows::Forms::Label());
			this->Named_searched = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->search = (gcnew System::Windows::Forms::Button());
			this->ID_search_text = (gcnew System::Windows::Forms::TextBox());
			this->Search_id = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Contacts_pic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->pn_view_contact->SuspendLayout();
			this->pn_send_message->SuspendLayout();
			this->pn_seacrh_contact->SuspendLayout();
			this->pn_after_search->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(6);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(884, 60);
			this->panel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->ViewContacts);
			this->panel2->Controls->Add(this->SearchContact);
			this->panel2->Controls->Add(this->username_label);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel2->Location = System::Drawing::Point(634, 60);
			this->panel2->Margin = System::Windows::Forms::Padding(6);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(250, 701);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm1::panel2_Paint);
			// 
			// button5
			// 
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->Location = System::Drawing::Point(0, 184);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(253, 43);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Home";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button4->Location = System::Drawing::Point(0, 0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(35, 32);
			this->button4->TabIndex = 5;
			this->button4->UseVisualStyleBackColor = true;
			// 
			// ViewContacts
			// 
			this->ViewContacts->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ViewContacts.Image")));
			this->ViewContacts->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ViewContacts->Location = System::Drawing::Point(0, 387);
			this->ViewContacts->Name = L"ViewContacts";
			this->ViewContacts->Size = System::Drawing::Size(253, 43);
			this->ViewContacts->TabIndex = 4;
			this->ViewContacts->Text = L"ViewAllContacts";
			this->ViewContacts->UseVisualStyleBackColor = true;
			// 
			// SearchContact
			// 
			this->SearchContact->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SearchContact.Image")));
			this->SearchContact->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->SearchContact->Location = System::Drawing::Point(0, 321);
			this->SearchContact->Name = L"SearchContact";
			this->SearchContact->Size = System::Drawing::Size(250, 43);
			this->SearchContact->TabIndex = 3;
			this->SearchContact->Text = L"SearchContact";
			this->SearchContact->UseVisualStyleBackColor = true;
			this->SearchContact->Click += gcnew System::EventHandler(this, &MyForm1::SearchContact_Click);
			// 
			// username_label
			// 
			this->username_label->AutoSize = true;
			this->username_label->Location = System::Drawing::Point(50, 153);
			this->username_label->Name = L"username_label";
			this->username_label->Size = System::Drawing::Size(0, 27);
			this->username_label->TabIndex = 2;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(37, 38);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(171, 104);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm1::pictureBox1_Click);
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button1->Location = System::Drawing::Point(0, 251);
			this->button1->Margin = System::Windows::Forms::Padding(6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(250, 47);
			this->button1->TabIndex = 0;
			this->button1->Text = L"SendMessage";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label13);
			this->panel3->Controls->Add(this->label12);
			this->panel3->Controls->Add(this->label11);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel3->Location = System::Drawing::Point(0, 611);
			this->panel3->Margin = System::Windows::Forms::Padding(6);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(634, 150);
			this->panel3->TabIndex = 2;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->Contacts_count);
			this->panel4->Controls->Add(this->Contacts_pic);
			this->panel4->Controls->Add(this->count_recieved);
			this->panel4->Controls->Add(this->label_recieved_messages);
			this->panel4->Controls->Add(this->label_sent_messages);
			this->panel4->Controls->Add(this->pictureBox3);
			this->panel4->Controls->Add(this->pictureBox2);
			this->panel4->Controls->Add(this->label5);
			this->panel4->Controls->Add(this->pn_view_contact);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel4->Location = System::Drawing::Point(0, 60);
			this->panel4->Margin = System::Windows::Forms::Padding(6);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(634, 551);
			this->panel4->TabIndex = 3;
			// 
			// Contacts_count
			// 
			this->Contacts_count->AutoSize = true;
			this->Contacts_count->Location = System::Drawing::Point(467, 177);
			this->Contacts_count->Name = L"Contacts_count";
			this->Contacts_count->Size = System::Drawing::Size(0, 27);
			this->Contacts_count->TabIndex = 9;
			this->Contacts_count->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Contacts_count->Click += gcnew System::EventHandler(this, &MyForm1::label7_Click);
			// 
			// Contacts_pic
			// 
			this->Contacts_pic->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Contacts_pic.Image")));
			this->Contacts_pic->Location = System::Drawing::Point(462, 85);
			this->Contacts_pic->Name = L"Contacts_pic";
			this->Contacts_pic->Size = System::Drawing::Size(116, 73);
			this->Contacts_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Contacts_pic->TabIndex = 8;
			this->Contacts_pic->TabStop = false;
			// 
			// count_recieved
			// 
			this->count_recieved->BackColor = System::Drawing::Color::Red;
			this->count_recieved->Location = System::Drawing::Point(97, 96);
			this->count_recieved->Name = L"count_recieved";
			this->count_recieved->Size = System::Drawing::Size(35, 22);
			this->count_recieved->TabIndex = 7;
			this->count_recieved->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_recieved_messages
			// 
			this->label_recieved_messages->AutoSize = true;
			this->label_recieved_messages->Location = System::Drawing::Point(24, 174);
			this->label_recieved_messages->Name = L"label_recieved_messages";
			this->label_recieved_messages->Size = System::Drawing::Size(0, 27);
			this->label_recieved_messages->TabIndex = 6;
			this->label_recieved_messages->Click += gcnew System::EventHandler(this, &MyForm1::label8_Click);
			// 
			// label_sent_messages
			// 
			this->label_sent_messages->AutoSize = true;
			this->label_sent_messages->Location = System::Drawing::Point(250, 174);
			this->label_sent_messages->Name = L"label_sent_messages";
			this->label_sent_messages->Size = System::Drawing::Size(0, 27);
			this->label_sent_messages->TabIndex = 5;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(250, 85);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(116, 73);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(29, 85);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(116, 73);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// label5
			// 
			this->label5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label5.Image")));
			this->label5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label5->Location = System::Drawing::Point(242, 6);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(150, 43);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Home";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// pn_view_contact
			// 
			this->pn_view_contact->Controls->Add(this->previous);
			this->pn_view_contact->Controls->Add(this->Next);
			this->pn_view_contact->Controls->Add(this->contacts_id);
			this->pn_view_contact->Controls->Add(this->contacts_name);
			this->pn_view_contact->Controls->Add(this->label6);
			this->pn_view_contact->Controls->Add(this->ss);
			this->pn_view_contact->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_view_contact->Location = System::Drawing::Point(0, 0);
			this->pn_view_contact->Name = L"pn_view_contact";
			this->pn_view_contact->Size = System::Drawing::Size(634, 551);
			this->pn_view_contact->TabIndex = 1;
			this->pn_view_contact->Visible = false;
			// 
			// previous
			// 
			this->previous->Location = System::Drawing::Point(144, 284);
			this->previous->Name = L"previous";
			this->previous->Size = System::Drawing::Size(103, 35);
			this->previous->TabIndex = 5;
			this->previous->Text = L"previous";
			this->previous->UseVisualStyleBackColor = true;
			// 
			// Next
			// 
			this->Next->Location = System::Drawing::Point(343, 284);
			this->Next->Name = L"Next";
			this->Next->Size = System::Drawing::Size(103, 35);
			this->Next->TabIndex = 4;
			this->Next->Text = L"Next";
			this->Next->UseVisualStyleBackColor = true;
			// 
			// contacts_id
			// 
			this->contacts_id->AutoSize = true;
			this->contacts_id->Location = System::Drawing::Point(247, 184);
			this->contacts_id->Name = L"contacts_id";
			this->contacts_id->Size = System::Drawing::Size(0, 27);
			this->contacts_id->TabIndex = 3;
			// 
			// contacts_name
			// 
			this->contacts_name->AutoSize = true;
			this->contacts_name->Location = System::Drawing::Point(257, 131);
			this->contacts_name->Name = L"contacts_name";
			this->contacts_name->Size = System::Drawing::Size(0, 27);
			this->contacts_name->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(106, 209);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(96, 27);
			this->label6->TabIndex = 1;
			this->label6->Text = L"ID:";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ss
			// 
			this->ss->Location = System::Drawing::Point(74, 147);
			this->ss->Name = L"ss";
			this->ss->Size = System::Drawing::Size(151, 27);
			this->ss->TabIndex = 0;
			this->ss->Text = L"Name:";
			this->ss->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pn_send_message
			// 
			this->pn_send_message->Controls->Add(this->button3);
			this->pn_send_message->Controls->Add(this->button2);
			this->pn_send_message->Controls->Add(this->MessageBox);
			this->pn_send_message->Controls->Add(this->label3);
			this->pn_send_message->Controls->Add(this->IDBox);
			this->pn_send_message->Controls->Add(this->label2);
			this->pn_send_message->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_send_message->Location = System::Drawing::Point(0, 60);
			this->pn_send_message->Margin = System::Windows::Forms::Padding(6);
			this->pn_send_message->Name = L"pn_send_message";
			this->pn_send_message->Size = System::Drawing::Size(634, 551);
			this->pn_send_message->TabIndex = 4;
			this->pn_send_message->Visible = false;
			this->pn_send_message->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm1::panel5_Paint);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(450, 409);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(81, 36);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Undo";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(179, 409);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(201, 36);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Send";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// MessageBox
			// 
			this->MessageBox->Location = System::Drawing::Point(156, 217);
			this->MessageBox->Name = L"MessageBox";
			this->MessageBox->Size = System::Drawing::Size(353, 147);
			this->MessageBox->TabIndex = 3;
			this->MessageBox->Text = L"";
			this->MessageBox->TextChanged += gcnew System::EventHandler(this, &MyForm1::richTextBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(41, 170);
			this->label3->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(204, 27);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Enter Your Message:";
			// 
			// IDBox
			// 
			this->IDBox->Location = System::Drawing::Point(191, 108);
			this->IDBox->Margin = System::Windows::Forms::Padding(6);
			this->IDBox->Name = L"IDBox";
			this->IDBox->Size = System::Drawing::Size(215, 34);
			this->IDBox->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(15, 108);
			this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(150, 30);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Enter ID:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pn_seacrh_contact
			// 
			this->pn_seacrh_contact->Controls->Add(this->pn_after_search);
			this->pn_seacrh_contact->Controls->Add(this->search);
			this->pn_seacrh_contact->Controls->Add(this->ID_search_text);
			this->pn_seacrh_contact->Controls->Add(this->Search_id);
			this->pn_seacrh_contact->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_seacrh_contact->Location = System::Drawing::Point(0, 60);
			this->pn_seacrh_contact->Name = L"pn_seacrh_contact";
			this->pn_seacrh_contact->Size = System::Drawing::Size(634, 551);
			this->pn_seacrh_contact->TabIndex = 5;
			this->pn_seacrh_contact->Visible = false;
			this->pn_seacrh_contact->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm1::pn_seacrh_contact_Paint);
			// 
			// pn_after_search
			// 
			this->pn_after_search->Controls->Add(this->ID_searched);
			this->pn_after_search->Controls->Add(this->Named_searched);
			this->pn_after_search->Controls->Add(this->label4);
			this->pn_after_search->Controls->Add(this->label1);
			this->pn_after_search->Location = System::Drawing::Point(99, 347);
			this->pn_after_search->Name = L"pn_after_search";
			this->pn_after_search->Size = System::Drawing::Size(427, 158);
			this->pn_after_search->TabIndex = 3;
			this->pn_after_search->Visible = false;
			this->pn_after_search->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm1::pn_after_search_Paint);
			// 
			// ID_searched
			// 
			this->ID_searched->AutoSize = true;
			this->ID_searched->Location = System::Drawing::Point(202, 94);
			this->ID_searched->Name = L"ID_searched";
			this->ID_searched->Size = System::Drawing::Size(0, 27);
			this->ID_searched->TabIndex = 3;
			// 
			// Named_searched
			// 
			this->Named_searched->AutoSize = true;
			this->Named_searched->Location = System::Drawing::Point(202, 40);
			this->Named_searched->Name = L"Named_searched";
			this->Named_searched->Size = System::Drawing::Size(0, 27);
			this->Named_searched->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(50, 94);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 27);
			this->label4->TabIndex = 1;
			this->label4->Text = L"ID:";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(53, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name:";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// search
			// 
			this->search->Location = System::Drawing::Point(212, 255);
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(165, 38);
			this->search->TabIndex = 2;
			this->search->Text = L"Search";
			this->search->UseVisualStyleBackColor = true;
			this->search->Click += gcnew System::EventHandler(this, &MyForm1::search_Click);
			// 
			// ID_search_text
			// 
			this->ID_search_text->Location = System::Drawing::Point(220, 153);
			this->ID_search_text->Name = L"ID_search_text";
			this->ID_search_text->Size = System::Drawing::Size(202, 34);
			this->ID_search_text->TabIndex = 1;
			// 
			// Search_id
			// 
			this->Search_id->Location = System::Drawing::Point(40, 148);
			this->Search_id->Name = L"Search_id";
			this->Search_id->Size = System::Drawing::Size(174, 43);
			this->Search_id->TabIndex = 0;
			this->Search_id->Text = L"Enter ID:";
			this->Search_id->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(24, 57);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(101, 27);
			this->label7->TabIndex = 0;
			this->label7->Text = L"OmarAdel";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(200, 17);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(141, 27);
			this->label8->TabIndex = 1;
			this->label8->Text = L"TeamMembers";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(408, 57);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(124, 27);
			this->label9->TabIndex = 2;
			this->label9->Text = L"AmiraAyman";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(200, 57);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(111, 27);
			this->label10->TabIndex = 3;
			this->label10->Text = L"AmrAhmed";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(200, 104);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(94, 27);
			this->label11->TabIndex = 4;
			this->label11->Text = L"Abo Bakr";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(408, 104);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(101, 27);
			this->label12->TabIndex = 5;
			this->label12->Text = L"AyaSobhy";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(24, 104);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(85, 27);
			this->label13->TabIndex = 6;
			this->label13->Text = L"EssraAli";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 27);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Aquamarine;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(884, 761);
			this->Controls->Add(this->pn_seacrh_contact);
			this->Controls->Add(this->pn_send_message);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Contacts_pic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->pn_view_contact->ResumeLayout(false);
			this->pn_view_contact->PerformLayout();
			this->pn_send_message->ResumeLayout(false);
			this->pn_send_message->PerformLayout();
			this->pn_seacrh_contact->ResumeLayout(false);
			this->pn_seacrh_contact->PerformLayout();
			this->pn_after_search->ResumeLayout(false);
			this->pn_after_search->PerformLayout();
			this->ResumeLayout(false);

		}
		
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->pn_send_message->Visible=true;
	this->pn_seacrh_contact->Visible=false;
	this->panel4->Visible = false;
	this->pn_view_contact->Visible = false;
}
private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void panel5_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ reciver_id, ^message;
	reciver_id = this->IDBox->Text;
	StreamReader fileid("LoginReg//IDS.txt", System::Text::Encoding::Default);
	String^ line;
	bool ID_found = false;
	while ((line=fileid.ReadLine()) != nullptr) {

		if (line == reciver_id && line!=userid) {
			message = this->MessageBox->Text;
			StreamWriter senderFile("sendingMessaging//"+ userid +".txt",true);
			senderFile.WriteLine(message);
			senderFile.Close();
			ID_found = true;
			MessageBox::Show("Your message has been sent :");
			this->MessageBox->Text=" ";
			this->IDBox->Text = " ";
			/* end of saving sending message*/

			/*begining of reviving saving message */
			StreamWriter recievedFile("Recivingmessage//" + reciver_id + ".txt", true);
			recievedFile.WriteLine(message);
			recievedFile.Close();
			break;
		}
	}
	if (ID_found == false)
		MessageBox::Show("Please Enter valid ID");
	fileid.Close();
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	users s;
	s.undoMessage(useriD);
	MessageBox::Show("done");

}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Logout_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void pn_after_search_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void pn_seacrh_contact_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void SearchContact_Click(System::Object^  sender, System::EventArgs^  e) {
	this->pn_seacrh_contact->Visible = true;
	this->pn_send_message->Hide();
	
	this->pn_after_search->Visible = false;
	this->panel4->Visible = false;
	this->pn_view_contact->Visible = false;
}
private: System::Void search_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ id = this->ID_search_text->Text;
	users s;
	int ID;
	ID = Convert::ToInt32(id);
	bool found =s.Search_contact(ID, useriD);
	if (found == true) {
		this->ID_search_text->Text = " ";
		this->pn_after_search->Show();
		StreamReader fileID("LoginReg//IDS.txt");
		StreamReader filename("LoginReg//users.txt");
		String ^lineid,^linename;
		lineid = fileID.ReadLine();
		linename = filename.ReadLine();

		while (fileID.ReadLine() != nullptr) {
			lineid = fileID.ReadLine();
			linename = filename.ReadLine();
			if (lineid == id) {
				break;
			}
		}
		this->Named_searched -> Text = linename;
		this->ID_searched->Text = id;
		fileID.Close();
		filename.Close();

	}
	else {
		MessageBox::Show("the contact Not Found");
	}
	
}
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	
	this->pn_seacrh_contact->Visible=false;
	this->pn_send_message->Visible=false;
	this->pn_view_contact->Visible=false;
	this->panel4->Visible=true;
	initail();
	
}
		 void initail() {
			 int count_send = 0, count_recieved = 0,count_contact=0;
			 StreamReader sentMessage("sendingMessaging//" + userid + ".txt");
			 StreamReader Contacts("userContacts//" + userid + ".txt");
			 StreamReader recievedMessage("Recivingmessage//" + userid + ".txt");
			 while (sentMessage.ReadLine() != nullptr) {
				 count_send++;
			 }

			 this->label_sent_messages->Text = "Sent Messages = " + count_send.ToString();

			 while (recievedMessage.ReadLine() != nullptr) {
				 count_recieved++;
			 }

			 this->label_recieved_messages->Text = "Recieved Messages = " + count_recieved.ToString();
			 this->count_recieved->Text = count_recieved.ToString();


			 while (Contacts.ReadLine() != nullptr) {
				 count_contact++;
			 }

			 this->Contacts_count->Text = "Your Contacts = " + count_contact.ToString();
			 sentMessage.Close();
			 Contacts.Close();
			 recievedMessage.Close();

		 }

private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
}
};

}
