#pragma once

namespace Project4 {

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
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	protected:
	private: System::Windows::Forms::ToolStripButton^ newToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ openToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ saveToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ printToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator;
	private: System::Windows::Forms::ToolStripButton^ cutToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ copyToolStripButton;
	private: System::Windows::Forms::ToolStripButton^ pasteToolStripButton;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripButton^ helpToolStripButton;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton2;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton3;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton4;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton5;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton6;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton7;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton8;
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel2;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ïåğåãëÿäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïàíåë³ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ğÿäîêÑòàíóToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïàíåëü²íñòğóìåíò³âToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñòâîğèòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ â³äêğèòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çáåğåãòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çáåğåãòèßêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ äğóêToolStripMenuItem;


	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::FontDialog^ fontDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;



	private: System::Windows::Forms::ToolStripMenuItem^ ïğàâêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ êîï³şâàòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âèğ³çàòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âñòàâèòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ôîğìàòToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ øğèôòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ äèçàéíToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ôîíToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ äîâ³äêàToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ âèğ³çàòèToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ âñòàâèòèToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ êîï³şâàòèToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ øğèôòToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ñèí³éToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÷åğâîíèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çåëåíèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÷îğíèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ øğèôòToolStripMenuItem2;








	private: System::ComponentModel::IContainer^ components;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->newToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->openToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->saveToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->printToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->cutToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->copyToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->pasteToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->helpToolStripButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton5 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton6 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripButton7 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton8 = (gcnew System::Windows::Forms::ToolStripButton());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñòâîğèòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->â³äêğèòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çáåğåãòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çáåğåãòèßêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äğóêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïåğåãëÿäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïàíåë³ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğÿäîêÑòàíóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïàíåëü²íñòğóìåíò³âToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğàâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êîï³şâàòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèğ³çàòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âñòàâèòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ôîğìàòToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->øğèôòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äèçàéíToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ôîíToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñèí³éToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->÷åğâîíèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çåëåíèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->÷îğíèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->øğèôòToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äîâ³äêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->âèğ³çàòèToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âñòàâèòèToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êîï³şâàòèToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->øğèôòToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(20) {
				this->newToolStripButton,
					this->openToolStripButton, this->saveToolStripButton, this->printToolStripButton, this->toolStripSeparator, this->cutToolStripButton,
					this->copyToolStripButton, this->pasteToolStripButton, this->toolStripSeparator1, this->helpToolStripButton, this->toolStripButton1,
					this->toolStripButton2, this->toolStripButton3, this->toolStripSeparator2, this->toolStripButton4, this->toolStripButton5, this->toolStripButton6,
					this->toolStripSeparator3, this->toolStripButton7, this->toolStripButton8
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 28);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(857, 27);
			this->toolStrip1->TabIndex = 0;
			this->toolStrip1->Text = L"toolStrip1";
			this->toolStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::toolStrip1_ItemClicked);
			// 
			// newToolStripButton
			// 
			this->newToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->newToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"newToolStripButton.Image")));
			this->newToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->newToolStripButton->Name = L"newToolStripButton";
			this->newToolStripButton->Size = System::Drawing::Size(29, 24);
			this->newToolStripButton->Text = L"&New";
			// 
			// openToolStripButton
			// 
			this->openToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->openToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"openToolStripButton.Image")));
			this->openToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->openToolStripButton->Name = L"openToolStripButton";
			this->openToolStripButton->Size = System::Drawing::Size(29, 24);
			this->openToolStripButton->Text = L"&Open";
			// 
			// saveToolStripButton
			// 
			this->saveToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->saveToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"saveToolStripButton.Image")));
			this->saveToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->saveToolStripButton->Name = L"saveToolStripButton";
			this->saveToolStripButton->Size = System::Drawing::Size(29, 24);
			this->saveToolStripButton->Text = L"&Save";
			this->saveToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripButton_Click);
			// 
			// printToolStripButton
			// 
			this->printToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->printToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"printToolStripButton.Image")));
			this->printToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->printToolStripButton->Name = L"printToolStripButton";
			this->printToolStripButton->Size = System::Drawing::Size(29, 24);
			this->printToolStripButton->Text = L"&Print";
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(6, 27);
			// 
			// cutToolStripButton
			// 
			this->cutToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->cutToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cutToolStripButton.Image")));
			this->cutToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->cutToolStripButton->Name = L"cutToolStripButton";
			this->cutToolStripButton->Size = System::Drawing::Size(29, 24);
			this->cutToolStripButton->Text = L"C&ut";
			this->cutToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::cutToolStripButton_Click);
			// 
			// copyToolStripButton
			// 
			this->copyToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->copyToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"copyToolStripButton.Image")));
			this->copyToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->copyToolStripButton->Name = L"copyToolStripButton";
			this->copyToolStripButton->Size = System::Drawing::Size(29, 24);
			this->copyToolStripButton->Text = L"&Copy";
			this->copyToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::copyToolStripButton_Click);
			// 
			// pasteToolStripButton
			// 
			this->pasteToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->pasteToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pasteToolStripButton.Image")));
			this->pasteToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->pasteToolStripButton->Name = L"pasteToolStripButton";
			this->pasteToolStripButton->Size = System::Drawing::Size(29, 24);
			this->pasteToolStripButton->Text = L"&Paste";
			this->pasteToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::pasteToolStripButton_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(6, 27);
			// 
			// helpToolStripButton
			// 
			this->helpToolStripButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->helpToolStripButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"helpToolStripButton.Image")));
			this->helpToolStripButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->helpToolStripButton->Name = L"helpToolStripButton";
			this->helpToolStripButton->Size = System::Drawing::Size(29, 24);
			this->helpToolStripButton->Text = L"He&lp";
			this->helpToolStripButton->Click += gcnew System::EventHandler(this, &MyForm::helpToolStripButton_Click);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(29, 24);
			this->toolStripButton1->Text = L"toolStripButton1";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton1_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(29, 24);
			this->toolStripButton2->Text = L"toolStripButton2";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton2_Click);
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(29, 24);
			this->toolStripButton3->Text = L"toolStripButton3";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton3_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(6, 27);
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton4.Image")));
			this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->Size = System::Drawing::Size(29, 24);
			this->toolStripButton4->Text = L"toolStripButton4";
			this->toolStripButton4->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton4_Click);
			// 
			// toolStripButton5
			// 
			this->toolStripButton5->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton5.Image")));
			this->toolStripButton5->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton5->Name = L"toolStripButton5";
			this->toolStripButton5->Size = System::Drawing::Size(29, 24);
			this->toolStripButton5->Text = L"toolStripButton5";
			this->toolStripButton5->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton5_Click);
			// 
			// toolStripButton6
			// 
			this->toolStripButton6->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton6.Image")));
			this->toolStripButton6->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton6->Name = L"toolStripButton6";
			this->toolStripButton6->Size = System::Drawing::Size(29, 24);
			this->toolStripButton6->Text = L"toolStripButton6";
			this->toolStripButton6->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton6_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(6, 27);
			// 
			// toolStripButton7
			// 
			this->toolStripButton7->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton7.Image")));
			this->toolStripButton7->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton7->Name = L"toolStripButton7";
			this->toolStripButton7->Size = System::Drawing::Size(29, 24);
			this->toolStripButton7->Text = L"toolStripButton7";
			this->toolStripButton7->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton7_Click);
			// 
			// toolStripButton8
			// 
			this->toolStripButton8->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton8.Image")));
			this->toolStripButton8->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton8->Name = L"toolStripButton8";
			this->toolStripButton8->Size = System::Drawing::Size(29, 24);
			this->toolStripButton8->Text = L"toolStripButton8";
			this->toolStripButton8->Click += gcnew System::EventHandler(this, &MyForm::toolStripButton8_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Location = System::Drawing::Point(0, 55);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(857, 484);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// statusStrip1
			// 
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripStatusLabel1,
					this->toolStripStatusLabel2
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 513);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(857, 26);
			this->statusStrip1->TabIndex = 2;
			this->statusStrip1->Text = L"statusStrip1";
			this->statusStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::statusStrip1_ItemClicked);
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(151, 20);
			this->toolStripStatusLabel1->Text = L"toolStripStatusLabel1";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(151, 20);
			this->toolStripStatusLabel2->Text = L"toolStripStatusLabel2";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->ôàéëToolStripMenuItem,
					this->ïåğåãëÿäToolStripMenuItem, this->ïğàâêàToolStripMenuItem, this->ôîğìàòToolStripMenuItem1, this->äèçàéíToolStripMenuItem,
					this->äîâ³äêàToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(857, 28);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::menuStrip1_ItemClicked);
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->ñòâîğèòèToolStripMenuItem,
					this->â³äêğèòèToolStripMenuItem, this->çáåğåãòèToolStripMenuItem, this->çáåğåãòèßêToolStripMenuItem, this->äğóêToolStripMenuItem
			});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
			// 
			// ñòâîğèòèToolStripMenuItem
			// 
			this->ñòâîğèòèToolStripMenuItem->Name = L"ñòâîğèòèToolStripMenuItem";
			this->ñòâîğèòèToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->ñòâîğèòèToolStripMenuItem->Text = L"Ñòâîğèòè";
			// 
			// â³äêğèòèToolStripMenuItem
			// 
			this->â³äêğèòèToolStripMenuItem->Name = L"â³äêğèòèToolStripMenuItem";
			this->â³äêğèòèToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->â³äêğèòèToolStripMenuItem->Text = L"Â³äêğèòè";
			this->â³äêğèòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::â³äêğèòèToolStripMenuItem_Click);
			// 
			// çáåğåãòèToolStripMenuItem
			// 
			this->çáåğåãòèToolStripMenuItem->Name = L"çáåğåãòèToolStripMenuItem";
			this->çáåğåãòèToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->çáåğåãòèToolStripMenuItem->Text = L"Çáåğåãòè";
			this->çáåğåãòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::çáåğåãòèToolStripMenuItem_Click);
			// 
			// çáåğåãòèßêToolStripMenuItem
			// 
			this->çáåğåãòèßêToolStripMenuItem->Name = L"çáåğåãòèßêToolStripMenuItem";
			this->çáåğåãòèßêToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->çáåğåãòèßêToolStripMenuItem->Text = L"Çáåğåãòè ÿê";
			// 
			// äğóêToolStripMenuItem
			// 
			this->äğóêToolStripMenuItem->Name = L"äğóêToolStripMenuItem";
			this->äğóêToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->äğóêToolStripMenuItem->Text = L"Äğóê";
			// 
			// ïåğåãëÿäToolStripMenuItem
			// 
			this->ïåğåãëÿäToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ïàíåë³ToolStripMenuItem });
			this->ïåğåãëÿäToolStripMenuItem->Name = L"ïåğåãëÿäToolStripMenuItem";
			this->ïåğåãëÿäToolStripMenuItem->Size = System::Drawing::Size(89, 24);
			this->ïåğåãëÿäToolStripMenuItem->Text = L"Ïåğåãëÿä";
			this->ïåğåãëÿäToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïåğåãëÿäToolStripMenuItem_Click);
			// 
			// ïàíåë³ToolStripMenuItem
			// 
			this->ïàíåë³ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ğÿäîêÑòàíóToolStripMenuItem,
					this->ïàíåëü²íñòğóìåíò³âToolStripMenuItem
			});
			this->ïàíåë³ToolStripMenuItem->Name = L"ïàíåë³ToolStripMenuItem";
			this->ïàíåë³ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->ïàíåë³ToolStripMenuItem->Text = L"Ïàíåë³";
			this->ïàíåë³ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïàíåë³ToolStripMenuItem_Click);
			// 
			// ğÿäîêÑòàíóToolStripMenuItem
			// 
			this->ğÿäîêÑòàíóToolStripMenuItem->Name = L"ğÿäîêÑòàíóToolStripMenuItem";
			this->ğÿäîêÑòàíóToolStripMenuItem->Size = System::Drawing::Size(236, 26);
			this->ğÿäîêÑòàíóToolStripMenuItem->Text = L"Ğÿäîê ñòàíó";
			this->ğÿäîêÑòàíóToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ğÿäîêÑòàíóToolStripMenuItem_Click);
			// 
			// ïàíåëü²íñòğóìåíò³âToolStripMenuItem
			// 
			this->ïàíåëü²íñòğóìåíò³âToolStripMenuItem->Name = L"ïàíåëü²íñòğóìåíò³âToolStripMenuItem";
			this->ïàíåëü²íñòğóìåíò³âToolStripMenuItem->Size = System::Drawing::Size(236, 26);
			this->ïàíåëü²íñòğóìåíò³âToolStripMenuItem->Text = L"Ïàíåëü ³íñòğóìåíò³â";
			this->ïàíåëü²íñòğóìåíò³âToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïàíåëü²íñòğóìåíò³âToolStripMenuItem_Click);
			// 
			// ïğàâêàToolStripMenuItem
			// 
			this->ïğàâêàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->êîï³şâàòèToolStripMenuItem,
					this->âèğ³çàòèToolStripMenuItem, this->âñòàâèòèToolStripMenuItem
			});
			this->ïğàâêàToolStripMenuItem->Name = L"ïğàâêàToolStripMenuItem";
			this->ïğàâêàToolStripMenuItem->Size = System::Drawing::Size(74, 24);
			this->ïğàâêàToolStripMenuItem->Text = L"Ïğàâêà";
			// 
			// êîï³şâàòèToolStripMenuItem
			// 
			this->êîï³şâàòèToolStripMenuItem->Name = L"êîï³şâàòèToolStripMenuItem";
			this->êîï³şâàòèToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->êîï³şâàòèToolStripMenuItem->Text = L"Êîï³şâàòè";
			// 
			// âèğ³çàòèToolStripMenuItem
			// 
			this->âèğ³çàòèToolStripMenuItem->Name = L"âèğ³çàòèToolStripMenuItem";
			this->âèğ³çàòèToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->âèğ³çàòèToolStripMenuItem->Text = L"Âèğ³çàòè";
			// 
			// âñòàâèòèToolStripMenuItem
			// 
			this->âñòàâèòèToolStripMenuItem->Name = L"âñòàâèòèToolStripMenuItem";
			this->âñòàâèòèToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->âñòàâèòèToolStripMenuItem->Text = L"Âñòàâèòè";
			// 
			// ôîğìàòToolStripMenuItem1
			// 
			this->ôîğìàòToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->øğèôòToolStripMenuItem });
			this->ôîğìàòToolStripMenuItem1->Name = L"ôîğìàòToolStripMenuItem1";
			this->ôîğìàòToolStripMenuItem1->Size = System::Drawing::Size(77, 24);
			this->ôîğìàòToolStripMenuItem1->Text = L"Ôîğìàò";
			// 
			// øğèôòToolStripMenuItem
			// 
			this->øğèôòToolStripMenuItem->Name = L"øğèôòToolStripMenuItem";
			this->øğèôòToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->øğèôòToolStripMenuItem->Text = L"Øğèôò";
			// 
			// äèçàéíToolStripMenuItem
			// 
			this->äèçàéíToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ôîíToolStripMenuItem,
					this->øğèôòToolStripMenuItem2
			});
			this->äèçàéíToolStripMenuItem->Name = L"äèçàéíToolStripMenuItem";
			this->äèçàéíToolStripMenuItem->Size = System::Drawing::Size(75, 24);
			this->äèçàéíToolStripMenuItem->Text = L"Äèçàéí";
			// 
			// ôîíToolStripMenuItem
			// 
			this->ôîíToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->ñèí³éToolStripMenuItem,
					this->÷åğâîíèéToolStripMenuItem, this->çåëåíèéToolStripMenuItem, this->÷îğíèéToolStripMenuItem
			});
			this->ôîíToolStripMenuItem->Name = L"ôîíToolStripMenuItem";
			this->ôîíToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->ôîíToolStripMenuItem->Text = L"Ôîí";
			// 
			// ñèí³éToolStripMenuItem
			// 
			this->ñèí³éToolStripMenuItem->Name = L"ñèí³éToolStripMenuItem";
			this->ñèí³éToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->ñèí³éToolStripMenuItem->Text = L"Ñèí³é";
			this->ñèí³éToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñèí³éToolStripMenuItem_Click);
			// 
			// ÷åğâîíèéToolStripMenuItem
			// 
			this->÷åğâîíèéToolStripMenuItem->Name = L"÷åğâîíèéToolStripMenuItem";
			this->÷åğâîíèéToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->÷åğâîíèéToolStripMenuItem->Text = L"×åğâîíèé";
			this->÷åğâîíèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::÷åğâîíèéToolStripMenuItem_Click);
			// 
			// çåëåíèéToolStripMenuItem
			// 
			this->çåëåíèéToolStripMenuItem->Name = L"çåëåíèéToolStripMenuItem";
			this->çåëåíèéToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->çåëåíèéToolStripMenuItem->Text = L"Çåëåíèé";
			this->çåëåíèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::çåëåíèéToolStripMenuItem_Click);
			// 
			// ÷îğíèéToolStripMenuItem
			// 
			this->÷îğíèéToolStripMenuItem->Name = L"÷îğíèéToolStripMenuItem";
			this->÷îğíèéToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->÷îğíèéToolStripMenuItem->Text = L"×îğíèé ";
			this->÷îğíèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::÷îğíèéToolStripMenuItem_Click);
			// 
			// øğèôòToolStripMenuItem2
			// 
			this->øğèôòToolStripMenuItem2->Name = L"øğèôòToolStripMenuItem2";
			this->øğèôòToolStripMenuItem2->Size = System::Drawing::Size(224, 26);
			this->øğèôòToolStripMenuItem2->Text = L"Øğèôò";
			this->øğèôòToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MyForm::øğèôòToolStripMenuItem2_Click);
			// 
			// äîâ³äêàToolStripMenuItem
			// 
			this->äîâ³äêàToolStripMenuItem->Name = L"äîâ³äêàToolStripMenuItem";
			this->äîâ³äêàToolStripMenuItem->Size = System::Drawing::Size(77, 24);
			this->äîâ³äêàToolStripMenuItem->Text = L"Äîâ³äêà";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->âèğ³çàòèToolStripMenuItem1,
					this->âñòàâèòèToolStripMenuItem1, this->êîï³şâàòèToolStripMenuItem1, this->øğèôòToolStripMenuItem1
			});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(153, 100);
			// 
			// âèğ³çàòèToolStripMenuItem1
			// 
			this->âèğ³çàòèToolStripMenuItem1->Name = L"âèğ³çàòèToolStripMenuItem1";
			this->âèğ³çàòèToolStripMenuItem1->Size = System::Drawing::Size(152, 24);
			this->âèğ³çàòèToolStripMenuItem1->Text = L"Âèğ³çàòè";
			// 
			// âñòàâèòèToolStripMenuItem1
			// 
			this->âñòàâèòèToolStripMenuItem1->Name = L"âñòàâèòèToolStripMenuItem1";
			this->âñòàâèòèToolStripMenuItem1->Size = System::Drawing::Size(152, 24);
			this->âñòàâèòèToolStripMenuItem1->Text = L"Âñòàâèòè";
			// 
			// êîï³şâàòèToolStripMenuItem1
			// 
			this->êîï³şâàòèToolStripMenuItem1->Name = L"êîï³şâàòèToolStripMenuItem1";
			this->êîï³şâàòèToolStripMenuItem1->Size = System::Drawing::Size(152, 24);
			this->êîï³şâàòèToolStripMenuItem1->Text = L"Êîï³şâàòè";
			// 
			// øğèôòToolStripMenuItem1
			// 
			this->øğèôòToolStripMenuItem1->Name = L"øğèôòToolStripMenuItem1";
			this->øğèôòToolStripMenuItem1->Size = System::Drawing::Size(152, 24);
			this->øğèôòToolStripMenuItem1->Text = L"Øğèôò";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(857, 539);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void copyToolStripButton_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Copy();
		toolStripStatusLabel1->Text = "Ñêîï³éîâàíî";
	}
	private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->SelectionAlignment = HorizontalAlignment::Left;
		toolStripStatusLabel1->Text = "Âèğ³âíşâàííÿ ïî ë³âîìó êğàş";
	}
	private: System::Void toolStripButton2_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->SelectionAlignment = HorizontalAlignment::Center;
		toolStripStatusLabel1->Text = "Âèğ³âíşâàííÿ ïî öåíòğó";
	}
	private: System::Void toolStripButton3_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->SelectionAlignment = HorizontalAlignment::Right;
		toolStripStatusLabel1->Text = "Âèğ³âíşâàííÿ ïî ïğàâîìó êğàş";
	}
	private: System::Void toolStripButton4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (richTextBox1->SelectionFont->Bold)
			richTextBox1->Font = gcnew System::Drawing::Font(richTextBox1->SelectionFont, richTextBox1->SelectionFont->Style & ~FontStyle::Bold);

		else
			richTextBox1->Font = gcnew System::Drawing::Font(richTextBox1->SelectionFont, richTextBox1->SelectionFont->Style | FontStyle::Bold);
	}
	private: System::Void toolStripButton5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (richTextBox1->SelectionFont->Italic)
			richTextBox1->Font = gcnew System::Drawing::Font(richTextBox1->SelectionFont, richTextBox1->SelectionFont->Style & ~FontStyle::Italic);

		else
			richTextBox1->Font = gcnew System::Drawing::Font(richTextBox1->SelectionFont, richTextBox1->SelectionFont->Style | FontStyle::Italic);
	}
	private: System::Void toolStripButton6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (richTextBox1->SelectionFont->Underline)
			richTextBox1->Font = gcnew System::Drawing::Font(richTextBox1->SelectionFont, richTextBox1->SelectionFont->Style & ~FontStyle::Underline);

		else
			richTextBox1->Font = gcnew System::Drawing::Font(richTextBox1->SelectionFont, richTextBox1->SelectionFont->Style | FontStyle::Underline);
	}
	private: System::Void toolStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {

	}
	private: System::Void toolStripButton7_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Redo();
	};
	private: System::Void toolStripButton8_Click(System::Object^ sender, System::EventArgs^ e) {
		richTextBox1->Undo();
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	statusStrip1->Visible = true;
	toolStrip1->Visible = true;
}
private: System::Void ïåğåãëÿäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void ïàíåë³ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ğÿäîêÑòàíóToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	statusStrip1->Visible = !(statusStrip1->Visible);
}
private: System::Void ïàíåëü²íñòğóìåíò³âToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	toolStrip1->Visible = !(toolStrip1->Visible);
}
private: System::Void cutToolStripButton_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Cut();
	toolStripStatusLabel1->Text = "Âèğ³çàíî";
}
private: System::Void helpToolStripButton_Click(System::Object^ sender, System::EventArgs^ e) {
	toolStripStatusLabel1->Text = "Äîïîìîãà";
	MessageBox::Show("Äîïîìîãà", "Äîïîìîãà", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void pasteToolStripButton_Click(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->Paste();
	toolStripStatusLabel1->Text = "Âñòàâëåíî";
}
private: System::Void statusStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
private: System::Void â³äêğèòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		System::Text::Encoding^ kod = System::Text::Encoding::GetEncoding(1251);
		auto read = gcnew IO::StreamReader(openFileDialog1->FileName, kod);
		richTextBox1->Text = read->ReadToEnd();
	}
	this->Text += (openFileDialog1->FileName);
}
private: System::Void çáåğåãòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	saveFileDialog1->FileName = openFileDialog1->FileName;
	if (saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK)
	{
		auto file_zap = gcnew IO::StreamWriter(saveFileDialog1->FileName, false,
			System::Text::Encoding::GetEncoding(1251));
		file_zap->Write(richTextBox1->Text);
		file_zap->Close();
		richTextBox1->Modified = false;
	}
}
private: System::Void ñèí³éToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	BackColor = Color::Blue;
}
private: System::Void saveToolStripButton_Click(System::Object^ sender, System::EventArgs^ e) {
	saveFileDialog1->FileName = openFileDialog1->FileName;
	if (saveFileDialog1->ShowDialog() == Windows::Forms::DialogResult::OK)
	{
		auto file_zap = gcnew IO::StreamWriter(saveFileDialog1->FileName, false,
			System::Text::Encoding::GetEncoding(1251));
		file_zap->Write(richTextBox1->Text);
		file_zap->Close();
		richTextBox1->Modified = false;
	}
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	statusStrip1->Items[1]->Text = DateTime::Now.ToLongDateString();
}
private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
private: System::Void ÷åğâîíèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	BackColor = Color::Red;
}
private: System::Void çåëåíèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	BackColor = Color::DarkGreen;
}
private: System::Void ÷îğíèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	BackColor = Color::Black;
}
private: System::Void øğèôòToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	fontDialog1->ShowDialog();
	richTextBox1->SelectionFont = fontDialog1->Font;

}
};
}