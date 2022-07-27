#pragma once

namespace cpPoS {

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
			panord->Hide();
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
	private: System::Windows::Forms::Panel^ panel1;
	protected:


	private: System::Windows::Forms::Button^ button4;



	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;



	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ dell;
	private: System::Windows::Forms::Button^ print;





	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ orders;
	private: System::Windows::Forms::Label^ lbltax;























	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ lblCash;
	private: System::Windows::Forms::Panel^ head;
	private: System::Windows::Forms::Label^ four;

	private: System::Windows::Forms::Label^ six;





	private: System::Windows::Forms::Label^ five;
	private: System::Windows::Forms::Label^ nine;


	private: System::Windows::Forms::Label^ eight;

	private: System::Windows::Forms::Label^ seven;
	private: System::Windows::Forms::Label^ three;


	private: System::Windows::Forms::Label^ two;


	private: System::Windows::Forms::Label^ one;



	private: System::Windows::Forms::Label^ label18;




	private: System::Windows::Forms::Panel^ sw;
	private: System::Windows::Forms::Panel^ ord;


	private: System::Windows::Forms::Panel^ sm;
	private: System::Windows::Forms::Panel^ laun;
	private: System::Windows::Forms::Panel^ pizza;



private: System::Windows::Forms::Panel^ sop;

private: System::Windows::Forms::Panel^ tag;
private: System::Windows::Forms::Panel^ dif;
private: System::Windows::Forms::Panel^ salat;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::Button^ button37;






private: System::Windows::Forms::Button^ button36;

private: System::Windows::Forms::Button^ button35;
private: System::Windows::Forms::Button^ button34;






private: System::Windows::Forms::Button^ button33;

private: System::Windows::Forms::Button^ button32;




private: System::Windows::Forms::Button^ button31;
private: System::Windows::Forms::Button^ button30;
private: System::Windows::Forms::Button^ button29;
private: System::Windows::Forms::Button^ button28;
private: System::Windows::Forms::Button^ button27;
private: System::Windows::Forms::Button^ button26;
private: System::Windows::Forms::Button^ button25;
private: System::Windows::Forms::Button^ button24;
private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::Button^ button22;
private: System::Windows::Forms::Button^ button21;
private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::Button^ button17;




private: System::Windows::Forms::Button^ button39;
private: System::Windows::Forms::Button^ button38;
private: System::Windows::Forms::Button^ button44;
private: System::Windows::Forms::Button^ button43;

private: System::Windows::Forms::Button^ button41;
private: System::Windows::Forms::Button^ button40;
private: System::Windows::Forms::Button^ button45;
private: System::Windows::Forms::Button^ button42;

private: System::Windows::Forms::Label^ lblTotal;

private: System::Windows::Forms::Label^ label2;



private: System::Windows::Forms::ComboBox^ cboPayment;

private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog1;
private: System::Drawing::Printing::PrintDocument^ printDocument1;



private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::TextBox^ pass;
private: System::Windows::Forms::Panel^ panord;

private: System::Windows::Forms::DataGridView^ dataGridView2;



private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Button^ button46;

private: System::Windows::Forms::Button^ button14;



private: System::Drawing::Printing::PrintDocument^ printDocument2;
private: System::Windows::Forms::PrintPreviewDialog^ printPreviewDialog2;
private: System::Windows::Forms::Button^ button47;




private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;




private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Panel^ addd;

private: System::Windows::Forms::Button^ button49;
private: System::Windows::Forms::Button^ button51;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;



















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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pass = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cboPayment = (gcnew System::Windows::Forms::ComboBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->lblTotal = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->orders = (gcnew System::Windows::Forms::Button());
			this->lbltax = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lblCash = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dell = (gcnew System::Windows::Forms::Button());
			this->print = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->head = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->four = (gcnew System::Windows::Forms::Label());
			this->six = (gcnew System::Windows::Forms::Label());
			this->pizza = (gcnew System::Windows::Forms::Panel());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->sop = (gcnew System::Windows::Forms::Panel());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->dif = (gcnew System::Windows::Forms::Panel());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->addd = (gcnew System::Windows::Forms::Panel());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->sw = (gcnew System::Windows::Forms::Panel());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->five = (gcnew System::Windows::Forms::Label());
			this->tag = (gcnew System::Windows::Forms::Panel());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->sm = (gcnew System::Windows::Forms::Panel());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->laun = (gcnew System::Windows::Forms::Panel());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->nine = (gcnew System::Windows::Forms::Label());
			this->ord = (gcnew System::Windows::Forms::Panel());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->salat = (gcnew System::Windows::Forms::Panel());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->eight = (gcnew System::Windows::Forms::Label());
			this->seven = (gcnew System::Windows::Forms::Label());
			this->three = (gcnew System::Windows::Forms::Label());
			this->two = (gcnew System::Windows::Forms::Label());
			this->one = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->panord = (gcnew System::Windows::Forms::Panel());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->printDocument2 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog2 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->head->SuspendLayout();
			this->pizza->SuspendLayout();
			this->sop->SuspendLayout();
			this->dif->SuspendLayout();
			this->addd->SuspendLayout();
			this->sw->SuspendLayout();
			this->tag->SuspendLayout();
			this->sm->SuspendLayout();
			this->laun->SuspendLayout();
			this->ord->SuspendLayout();
			this->salat->SuspendLayout();
			this->panord->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->button10);
			this->panel1->Controls->Add(this->button11);
			this->panel1->Controls->Add(this->button12);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Location = System::Drawing::Point(25, 12);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(362, 440);
			this->panel1->TabIndex = 0;
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(2, 334);
			this->button10->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(104, 82);
			this->button10->TabIndex = 13;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(127, 334);
			this->button11->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(104, 82);
			this->button11->TabIndex = 12;
			this->button11->Text = L".";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(250, 334);
			this->button12->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(104, 82);
			this->button12->TabIndex = 11;
			this->button12->Text = L"C";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(2, 225);
			this->button7->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(104, 82);
			this->button7->TabIndex = 10;
			this->button7->Text = L"1";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(127, 225);
			this->button8->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(104, 82);
			this->button8->TabIndex = 9;
			this->button8->Text = L"2";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(250, 225);
			this->button9->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(104, 82);
			this->button9->TabIndex = 8;
			this->button9->Text = L"3";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(2, 114);
			this->button3->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(104, 82);
			this->button3->TabIndex = 7;
			this->button3->Text = L"4";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(127, 114);
			this->button5->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(104, 82);
			this->button5->TabIndex = 6;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(250, 114);
			this->button6->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(104, 82);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(2, 3);
			this->button2->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 82);
			this->button2->TabIndex = 4;
			this->button2->Text = L"7";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(127, 3);
			this->button1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 82);
			this->button1->TabIndex = 3;
			this->button1->Text = L"8";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(250, 3);
			this->button4->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(104, 82);
			this->button4->TabIndex = 2;
			this->button4->Text = L"9";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::NumbersOnly);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Controls->Add(this->panel3);
			this->panel4->Location = System::Drawing::Point(10, 472);
			this->panel4->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1348, 207);
			this->panel4->TabIndex = 3;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel4_Paint);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->pass);
			this->panel3->Controls->Add(this->label5);
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->cboPayment);
			this->panel3->Controls->Add(this->button13);
			this->panel3->Controls->Add(this->lblTotal);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->orders);
			this->panel3->Controls->Add(this->lbltax);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->lblCash);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Controls->Add(this->dell);
			this->panel3->Controls->Add(this->print);
			this->panel3->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->panel3->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel3->Location = System::Drawing::Point(24, 18);
			this->panel3->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1317, 165);
			this->panel3->TabIndex = 0;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel3_Paint);
			// 
			// pass
			// 
			this->pass->Location = System::Drawing::Point(568, 125);
			this->pass->Name = L"pass";
			this->pass->PasswordChar = '*';
			this->pass->Size = System::Drawing::Size(212, 26);
			this->pass->TabIndex = 14;
			this->pass->UseSystemPasswordChar = true;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::White;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(358, 119);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(196, 42);
			this->label5->TabIndex = 13;
			this->label5->Text = L"باسورد اوردرات اليوم";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click_1);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::White;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(386, 12);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(145, 37);
			this->label4->TabIndex = 12;
			this->label4->Text = L"وسيله الدفع";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// cboPayment
			// 
			this->cboPayment->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cboPayment->FormattingEnabled = true;
			this->cboPayment->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"cash" });
			this->cboPayment->Location = System::Drawing::Point(568, 16);
			this->cboPayment->Name = L"cboPayment";
			this->cboPayment->Size = System::Drawing::Size(212, 33);
			this->cboPayment->TabIndex = 11;
			this->cboPayment->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::Color::Black;
			this->button13->Location = System::Drawing::Point(930, 78);
			this->button13->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(182, 66);
			this->button13->TabIndex = 10;
			this->button13->Text = L"دفع";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click_2);
			// 
			// lblTotal
			// 
			this->lblTotal->BackColor = System::Drawing::Color::White;
			this->lblTotal->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTotal->Location = System::Drawing::Point(568, 62);
			this->lblTotal->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblTotal->Name = L"lblTotal";
			this->lblTotal->Size = System::Drawing::Size(212, 42);
			this->lblTotal->TabIndex = 9;
			this->lblTotal->Click += gcnew System::EventHandler(this, &MyForm::lblTotal_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::White;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(402, 63);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(113, 42);
			this->label2->TabIndex = 8;
			this->label2->Text = L"الاجمالي";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click_1);
			// 
			// orders
			// 
			this->orders->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->orders->ForeColor = System::Drawing::Color::Blue;
			this->orders->Location = System::Drawing::Point(928, 6);
			this->orders->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->orders->Name = L"orders";
			this->orders->Size = System::Drawing::Size(182, 66);
			this->orders->TabIndex = 7;
			this->orders->Text = L"اوردرات اليوم";
			this->orders->UseVisualStyleBackColor = true;
			this->orders->Click += gcnew System::EventHandler(this, &MyForm::orders_Click);
			// 
			// lbltax
			// 
			this->lbltax->BackColor = System::Drawing::Color::White;
			this->lbltax->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lbltax->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbltax->Location = System::Drawing::Point(132, 97);
			this->lbltax->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbltax->Name = L"lbltax";
			this->lbltax->Size = System::Drawing::Size(212, 42);
			this->lbltax->TabIndex = 6;
			this->lbltax->Click += gcnew System::EventHandler(this, &MyForm::lbltax_Click);
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::White;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(19, 97);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(107, 42);
			this->label3->TabIndex = 5;
			this->label3->Text = L"الباقي";
			// 
			// lblCash
			// 
			this->lblCash->BackColor = System::Drawing::Color::White;
			this->lblCash->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblCash->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblCash->Location = System::Drawing::Point(132, 12);
			this->lblCash->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblCash->Name = L"lblCash";
			this->lblCash->Size = System::Drawing::Size(212, 42);
			this->lblCash->TabIndex = 4;
			this->lblCash->Click += gcnew System::EventHandler(this, &MyForm::lblCash_Click);
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(13, 12);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(113, 42);
			this->label1->TabIndex = 3;
			this->label1->Text = L"المدفوع";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_3);
			// 
			// dell
			// 
			this->dell->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dell->ForeColor = System::Drawing::Color::Red;
			this->dell->Location = System::Drawing::Point(1129, 6);
			this->dell->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->dell->Name = L"dell";
			this->dell->Size = System::Drawing::Size(176, 66);
			this->dell->TabIndex = 2;
			this->dell->Text = L"مسح الطلبات";
			this->dell->UseVisualStyleBackColor = true;
			this->dell->Click += gcnew System::EventHandler(this, &MyForm::dell_Click);
			// 
			// print
			// 
			this->print->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->print->ForeColor = System::Drawing::Color::Green;
			this->print->Location = System::Drawing::Point(1129, 78);
			this->print->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->print->Name = L"print";
			this->print->Size = System::Drawing::Size(176, 66);
			this->print->TabIndex = 1;
			this->print->Text = L"طبع الطلب";
			this->print->UseVisualStyleBackColor = true;
			this->print->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleRight;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->Format = L"F";
			dataGridViewCellStyle1->NullValue = L"تاريخ";
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column7
			});
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle6->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle6->Format = L"f";
			dataGridViewCellStyle6->NullValue = nullptr;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle6->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::GrayText;
			this->dataGridView1->Location = System::Drawing::Point(391, 7);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(501, 440);
			this->dataGridView1->TabIndex = 4;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// head
			// 
			this->head->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->head->Controls->Add(this->label7);
			this->head->Controls->Add(this->four);
			this->head->Controls->Add(this->six);
			this->head->Controls->Add(this->pizza);
			this->head->Controls->Add(this->sop);
			this->head->Controls->Add(this->dif);
			this->head->Controls->Add(this->addd);
			this->head->Controls->Add(this->sw);
			this->head->Controls->Add(this->five);
			this->head->Controls->Add(this->tag);
			this->head->Controls->Add(this->sm);
			this->head->Controls->Add(this->laun);
			this->head->Controls->Add(this->nine);
			this->head->Controls->Add(this->ord);
			this->head->Controls->Add(this->salat);
			this->head->Controls->Add(this->eight);
			this->head->Controls->Add(this->seven);
			this->head->Controls->Add(this->three);
			this->head->Controls->Add(this->two);
			this->head->Controls->Add(this->one);
			this->head->Controls->Add(this->label18);
			this->head->Location = System::Drawing::Point(896, 7);
			this->head->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->head->Name = L"head";
			this->head->Size = System::Drawing::Size(477, 445);
			this->head->TabIndex = 13;
			this->head->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel5_Paint);
			// 
			// label7
			// 
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(384, 395);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(83, 43);
			this->label7->TabIndex = 19;
			this->label7->Text = L"اضافات";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// four
			// 
			this->four->BackColor = System::Drawing::Color::Transparent;
			this->four->Cursor = System::Windows::Forms::Cursors::Hand;
			this->four->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->four->Location = System::Drawing::Point(378, 153);
			this->four->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->four->Name = L"four";
			this->four->Size = System::Drawing::Size(90, 43);
			this->four->TabIndex = 15;
			this->four->Text = L"الطلبات";
			this->four->Click += gcnew System::EventHandler(this, &MyForm::label21_Click);
			// 
			// six
			// 
			this->six->BackColor = System::Drawing::Color::Transparent;
			this->six->Cursor = System::Windows::Forms::Cursors::Hand;
			this->six->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->six->Location = System::Drawing::Point(378, 194);
			this->six->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->six->Name = L"six";
			this->six->Size = System::Drawing::Size(90, 43);
			this->six->TabIndex = 14;
			this->six->Text = L"الشوربه";
			this->six->Click += gcnew System::EventHandler(this, &MyForm::label20_Click);
			// 
			// pizza
			// 
			this->pizza->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pizza->Controls->Add(this->button37);
			this->pizza->Controls->Add(this->button36);
			this->pizza->Controls->Add(this->button35);
			this->pizza->Controls->Add(this->button34);
			this->pizza->Controls->Add(this->button33);
			this->pizza->Controls->Add(this->button32);
			this->pizza->Location = System::Drawing::Point(14, 49);
			this->pizza->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->pizza->Name = L"pizza";
			this->pizza->Size = System::Drawing::Size(320, 389);
			this->pizza->TabIndex = 17;
			// 
			// button37
			// 
			this->button37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button37->Location = System::Drawing::Point(178, 37);
			this->button37->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(122, 68);
			this->button37->TabIndex = 7;
			this->button37->Text = L"مشكل جبن 50ج";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::button37_Click);
			// 
			// button36
			// 
			this->button36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button36->Location = System::Drawing::Point(18, 259);
			this->button36->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(128, 66);
			this->button36->TabIndex = 6;
			this->button36->Text = L"سي فوود 80 ج";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::button36_Click);
			// 
			// button35
			// 
			this->button35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button35->Location = System::Drawing::Point(178, 259);
			this->button35->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(122, 66);
			this->button35->TabIndex = 5;
			this->button35->Text = L"جمبري 70ج";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
			// 
			// button34
			// 
			this->button34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button34->Location = System::Drawing::Point(22, 37);
			this->button34->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(121, 68);
			this->button34->TabIndex = 4;
			this->button34->Text = L"مشكل لحوم 60ج";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click);
			// 
			// button33
			// 
			this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button33->Location = System::Drawing::Point(22, 144);
			this->button33->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(125, 66);
			this->button33->TabIndex = 3;
			this->button33->Text = L"سوسيس 60ج";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
			// 
			// button32
			// 
			this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32->Location = System::Drawing::Point(178, 144);
			this->button32->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(122, 66);
			this->button32->TabIndex = 2;
			this->button32->Text = L"بسطرمه 60ج";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// sop
			// 
			this->sop->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->sop->Controls->Add(this->button39);
			this->sop->Controls->Add(this->button38);
			this->sop->Location = System::Drawing::Point(14, 49);
			this->sop->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->sop->Name = L"sop";
			this->sop->Size = System::Drawing::Size(320, 389);
			this->sop->TabIndex = 17;
			// 
			// button39
			// 
			this->button39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button39->Location = System::Drawing::Point(55, 196);
			this->button39->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(206, 76);
			this->button39->TabIndex = 3;
			this->button39->Text = L"شوربه جمبري بطارخ 60ج";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::button39_Click);
			// 
			// button38
			// 
			this->button38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button38->Location = System::Drawing::Point(55, 45);
			this->button38->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(206, 72);
			this->button38->TabIndex = 2;
			this->button38->Text = L"شوربه سي فوود 45ج";
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::button38_Click);
			// 
			// dif
			// 
			this->dif->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->dif->Controls->Add(this->button45);
			this->dif->Controls->Add(this->button42);
			this->dif->Location = System::Drawing::Point(14, 49);
			this->dif->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->dif->Name = L"dif";
			this->dif->Size = System::Drawing::Size(320, 389);
			this->dif->TabIndex = 17;
			this->dif->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::dif_Paint);
			// 
			// button45
			// 
			this->button45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button45->Location = System::Drawing::Point(18, 37);
			this->button45->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(124, 80);
			this->button45->TabIndex = 3;
			this->button45->Text = L"مياه معدنيه 4ج";
			this->button45->UseVisualStyleBackColor = true;
			this->button45->Click += gcnew System::EventHandler(this, &MyForm::button45_Click);
			// 
			// button42
			// 
			this->button42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button42->Location = System::Drawing::Point(179, 37);
			this->button42->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(120, 80);
			this->button42->TabIndex = 2;
			this->button42->Text = L"كولا 6ج";
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Click += gcnew System::EventHandler(this, &MyForm::button42_Click);
			// 
			// addd
			// 
			this->addd->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->addd->Controls->Add(this->button49);
			this->addd->Controls->Add(this->button51);
			this->addd->Location = System::Drawing::Point(14, 49);
			this->addd->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->addd->Name = L"addd";
			this->addd->Size = System::Drawing::Size(320, 385);
			this->addd->TabIndex = 18;
			// 
			// button49
			// 
			this->button49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button49->Location = System::Drawing::Point(35, 190);
			this->button49->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(257, 66);
			this->button49->TabIndex = 5;
			this->button49->Text = L"اضافه 10ج";
			this->button49->UseVisualStyleBackColor = true;
			this->button49->Click += gcnew System::EventHandler(this, &MyForm::button49_Click);
			// 
			// button51
			// 
			this->button51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button51->Location = System::Drawing::Point(35, 47);
			this->button51->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(257, 66);
			this->button51->TabIndex = 3;
			this->button51->Text = L"اضافه 20ج";
			this->button51->UseVisualStyleBackColor = true;
			this->button51->Click += gcnew System::EventHandler(this, &MyForm::button51_Click);
			// 
			// sw
			// 
			this->sw->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->sw->Controls->Add(this->button18);
			this->sw->Controls->Add(this->button17);
			this->sw->Controls->Add(this->button16);
			this->sw->Location = System::Drawing::Point(14, 49);
			this->sw->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->sw->Name = L"sw";
			this->sw->Size = System::Drawing::Size(320, 389);
			this->sw->TabIndex = 16;
			this->sw->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint_1);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(26, 116);
			this->button18->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(266, 54);
			this->button18->TabIndex = 2;
			this->button18->Text = L"مشكل 20ج";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->Location = System::Drawing::Point(26, 13);
			this->button17->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(118, 54);
			this->button17->TabIndex = 1;
			this->button17->Text = L"جمبري 15ج";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(190, 13);
			this->button16->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(104, 54);
			this->button16->TabIndex = 0;
			this->button16->Text = L"سيبيا 15ج";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// five
			// 
			this->five->BackColor = System::Drawing::Color::Transparent;
			this->five->Cursor = System::Windows::Forms::Cursors::Hand;
			this->five->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->five->Location = System::Drawing::Point(378, 237);
			this->five->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->five->Name = L"five";
			this->five->Size = System::Drawing::Size(90, 43);
			this->five->TabIndex = 13;
			this->five->Text = L"الطواجن";
			this->five->Click += gcnew System::EventHandler(this, &MyForm::label19_Click);
			// 
			// tag
			// 
			this->tag->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tag->Controls->Add(this->button28);
			this->tag->Controls->Add(this->button27);
			this->tag->Controls->Add(this->button26);
			this->tag->Controls->Add(this->button25);
			this->tag->Location = System::Drawing::Point(14, 49);
			this->tag->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->tag->Name = L"tag";
			this->tag->Size = System::Drawing::Size(320, 389);
			this->tag->TabIndex = 17;
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->Location = System::Drawing::Point(13, 144);
			this->button28->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(133, 76);
			this->button28->TabIndex = 5;
			this->button28->Text = L"طاجن ارز سي فوود 30ج";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->Location = System::Drawing::Point(166, 144);
			this->button27->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(134, 76);
			this->button27->TabIndex = 4;
			this->button27->Text = L"طاجن مكرونه سي فوود 60ج";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->Location = System::Drawing::Point(13, 37);
			this->button26->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(133, 80);
			this->button26->TabIndex = 3;
			this->button26->Text = L"طاجن ميكس سي فوود 120ج";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->Location = System::Drawing::Point(166, 37);
			this->button25->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(134, 80);
			this->button25->TabIndex = 2;
			this->button25->Text = L"طاجن بطارخ 100ج";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// sm
			// 
			this->sm->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->sm->Controls->Add(this->button22);
			this->sm->Controls->Add(this->button21);
			this->sm->Controls->Add(this->button20);
			this->sm->Controls->Add(this->button19);
			this->sm->Location = System::Drawing::Point(14, 49);
			this->sm->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->sm->Name = L"sm";
			this->sm->Size = System::Drawing::Size(320, 389);
			this->sm->TabIndex = 17;
			this->sm->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::sm_Paint);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->Location = System::Drawing::Point(13, 114);
			this->button22->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(118, 74);
			this->button22->TabIndex = 4;
			this->button22->Text = L"برجر جمبري 25ج";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(185, 111);
			this->button21->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(122, 77);
			this->button21->TabIndex = 3;
			this->button21->Text = L"مشكل 25ج";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(13, 19);
			this->button20->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(118, 76);
			this->button20->TabIndex = 2;
			this->button20->Text = L"جمبري20ج";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(185, 19);
			this->button19->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(122, 71);
			this->button19->TabIndex = 1;
			this->button19->Text = L"سيبيا 20ج";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// laun
			// 
			this->laun->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->laun->Controls->Add(this->button24);
			this->laun->Controls->Add(this->button23);
			this->laun->Location = System::Drawing::Point(14, 49);
			this->laun->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->laun->Name = L"laun";
			this->laun->Size = System::Drawing::Size(320, 389);
			this->laun->TabIndex = 17;
			this->laun->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::laun_Paint);
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->Location = System::Drawing::Point(26, 159);
			this->button24->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(266, 79);
			this->button24->TabIndex = 3;
			this->button24->Text = L"وجبه ميكس سي فوود 200ج";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->Location = System::Drawing::Point(26, 28);
			this->button23->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(266, 80);
			this->button23->TabIndex = 2;
			this->button23->Text = L"وجبه كافيار 150ج";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// nine
			// 
			this->nine->BackColor = System::Drawing::Color::Transparent;
			this->nine->Cursor = System::Windows::Forms::Cursors::Hand;
			this->nine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nine->Location = System::Drawing::Point(394, 361);
			this->nine->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->nine->Name = L"nine";
			this->nine->Size = System::Drawing::Size(73, 43);
			this->nine->TabIndex = 12;
			this->nine->Text = L"متنوع";
			this->nine->Click += gcnew System::EventHandler(this, &MyForm::nine_Click);
			// 
			// ord
			// 
			this->ord->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ord->Controls->Add(this->button31);
			this->ord->Controls->Add(this->button30);
			this->ord->Controls->Add(this->button29);
			this->ord->Location = System::Drawing::Point(14, 49);
			this->ord->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->ord->Name = L"ord";
			this->ord->Size = System::Drawing::Size(320, 389);
			this->ord->TabIndex = 17;
			// 
			// button31
			// 
			this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button31->Location = System::Drawing::Point(22, 114);
			this->button31->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(286, 65);
			this->button31->TabIndex = 4;
			this->button31->Text = L"طلب مشكل 60ج";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// button30
			// 
			this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button30->Location = System::Drawing::Point(13, 15);
			this->button30->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(130, 65);
			this->button30->TabIndex = 3;
			this->button30->Text = L"طلب سيبيا 50ج";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button29->Location = System::Drawing::Point(166, 15);
			this->button29->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(142, 65);
			this->button29->TabIndex = 2;
			this->button29->Text = L"طلب جمبري 50ج";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// salat
			// 
			this->salat->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->salat->Controls->Add(this->button44);
			this->salat->Controls->Add(this->button43);
			this->salat->Controls->Add(this->button41);
			this->salat->Controls->Add(this->button40);
			this->salat->Location = System::Drawing::Point(14, 49);
			this->salat->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->salat->Name = L"salat";
			this->salat->Size = System::Drawing::Size(320, 389);
			this->salat->TabIndex = 18;
			// 
			// button44
			// 
			this->button44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button44->Location = System::Drawing::Point(166, 28);
			this->button44->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(134, 63);
			this->button44->TabIndex = 6;
			this->button44->Text = L"سلطة بلدي 5ج";
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &MyForm::button44_Click);
			// 
			// button43
			// 
			this->button43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button43->Location = System::Drawing::Point(13, 126);
			this->button43->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(286, 54);
			this->button43->TabIndex = 5;
			this->button43->Text = L"سلطة توميه 5ج";
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &MyForm::button43_Click);
			// 
			// button41
			// 
			this->button41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button41->Location = System::Drawing::Point(13, 211);
			this->button41->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(286, 56);
			this->button41->TabIndex = 3;
			this->button41->Text = L"سلطة كلوسلو 7ج";
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &MyForm::button41_Click);
			// 
			// button40
			// 
			this->button40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button40->Location = System::Drawing::Point(13, 28);
			this->button40->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(137, 63);
			this->button40->TabIndex = 2;
			this->button40->Text = L"سلطة طحينه 5ج";
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &MyForm::button40_Click);
			// 
			// eight
			// 
			this->eight->BackColor = System::Drawing::Color::Transparent;
			this->eight->Cursor = System::Windows::Forms::Cursors::Hand;
			this->eight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->eight->Location = System::Drawing::Point(381, 323);
			this->eight->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->eight->Name = L"eight";
			this->eight->Size = System::Drawing::Size(90, 43);
			this->eight->TabIndex = 11;
			this->eight->Text = L"سلاطات";
			this->eight->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// seven
			// 
			this->seven->BackColor = System::Drawing::Color::Transparent;
			this->seven->Cursor = System::Windows::Forms::Cursors::Hand;
			this->seven->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->seven->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->seven->Location = System::Drawing::Point(395, 280);
			this->seven->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->seven->Name = L"seven";
			this->seven->Size = System::Drawing::Size(72, 43);
			this->seven->TabIndex = 10;
			this->seven->Text = L"البيتزا";
			this->seven->Click += gcnew System::EventHandler(this, &MyForm::label11_Click);
			// 
			// three
			// 
			this->three->BackColor = System::Drawing::Color::Transparent;
			this->three->Cursor = System::Windows::Forms::Cursors::Hand;
			this->three->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->three->Location = System::Drawing::Point(374, 110);
			this->three->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->three->Name = L"three";
			this->three->Size = System::Drawing::Size(96, 43);
			this->three->TabIndex = 6;
			this->three->Text = L"الواجبات";
			this->three->Click += gcnew System::EventHandler(this, &MyForm::three_Click);
			// 
			// two
			// 
			this->two->BackColor = System::Drawing::Color::Transparent;
			this->two->Cursor = System::Windows::Forms::Cursors::Hand;
			this->two->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->two->Location = System::Drawing::Point(339, 67);
			this->two->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->two->Name = L"two";
			this->two->Size = System::Drawing::Size(132, 43);
			this->two->TabIndex = 5;
			this->two->Text = L"س عيش مارين";
			this->two->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->two->Click += gcnew System::EventHandler(this, &MyForm::label16_Click);
			// 
			// one
			// 
			this->one->BackColor = System::Drawing::Color::Transparent;
			this->one->Cursor = System::Windows::Forms::Cursors::Hand;
			this->one->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->one->Location = System::Drawing::Point(353, 28);
			this->one->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->one->Name = L"one";
			this->one->Size = System::Drawing::Size(108, 43);
			this->one->TabIndex = 4;
			this->one->Text = L"س عيش ابيض";
			this->one->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->one->Click += gcnew System::EventHandler(this, &MyForm::label17_Click);
			// 
			// label18
			// 
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(49, 3);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(359, 35);
			this->label18->TabIndex = 0;
			this->label18->Text = L"الأصناف";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Document = this->printDocument1;
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &MyForm::printDocument1_PrintPage);
			// 
			// panord
			// 
			this->panord->Controls->Add(this->button47);
			this->panord->Controls->Add(this->button46);
			this->panord->Controls->Add(this->button14);
			this->panord->Controls->Add(this->dataGridView2);
			this->panord->Controls->Add(this->label6);
			this->panord->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panord->Location = System::Drawing::Point(0, 0);
			this->panord->Name = L"panord";
			this->panord->Size = System::Drawing::Size(1370, 671);
			this->panord->TabIndex = 14;
			// 
			// button47
			// 
			this->button47->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button47->Location = System::Drawing::Point(1098, 491);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(223, 57);
			this->button47->TabIndex = 5;
			this->button47->Text = L"خروج";
			this->button47->UseVisualStyleBackColor = true;
			this->button47->Click += gcnew System::EventHandler(this, &MyForm::button47_Click);
			// 
			// button46
			// 
			this->button46->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button46->ForeColor = System::Drawing::Color::Green;
			this->button46->Location = System::Drawing::Point(1098, 229);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(223, 57);
			this->button46->TabIndex = 4;
			this->button46->Text = L"اغلاق الشيفت";
			this->button46->UseVisualStyleBackColor = true;
			this->button46->Click += gcnew System::EventHandler(this, &MyForm::button46_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Tahoma", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::Color::Red;
			this->button14->Location = System::Drawing::Point(1098, 347);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(223, 57);
			this->button14->TabIndex = 2;
			this->button14->Text = L"حذف طلب محدد";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click_1);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column4,
					this->Column5, this->Column6, this->Column8
			});
			this->dataGridView2->Location = System::Drawing::Point(233, 140);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(744, 473);
			this->dataGridView2->TabIndex = 1;
			this->dataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellContentClick);
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"الاصناف";
			this->Column4->Name = L"Column4";
			this->Column4->Width = 200;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"الكميه";
			this->Column5->Name = L"Column5";
			this->Column5->Width = 200;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"السعر";
			this->Column6->Name = L"Column6";
			this->Column6->Width = 200;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"الاجمالي";
			this->Column8->Name = L"Column8";
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(554, 54);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(169, 43);
			this->label6->TabIndex = 0;
			this->label6->Text = L"ايراد اليوم";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// printDocument2
			// 
			this->printDocument2->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &MyForm::printDocument2_PrintPage);
			// 
			// printPreviewDialog2
			// 
			this->printPreviewDialog2->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog2->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog2->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog2->Document = this->printDocument2;
			this->printPreviewDialog2->Enabled = true;
			this->printPreviewDialog2->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"printPreviewDialog2.Icon")));
			this->printPreviewDialog2->Name = L"printPreviewDialog2";
			this->printPreviewDialog2->Visible = false;
			this->printPreviewDialog2->Load += gcnew System::EventHandler(this, &MyForm::printPreviewDialog2_Load);
			// 
			// Column1
			// 
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Arabic Typesetting", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			dataGridViewCellStyle2->Format = L"f";
			dataGridViewCellStyle2->NullValue = nullptr;
			this->Column1->DefaultCellStyle = dataGridViewCellStyle2;
			this->Column1->HeaderText = L"الطلب";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 170;
			// 
			// Column2
			// 
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->Column2->DefaultCellStyle = dataGridViewCellStyle3;
			this->Column2->HeaderText = L"الكميه";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->Column3->DefaultCellStyle = dataGridViewCellStyle4;
			this->Column3->HeaderText = L"السعر";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 80;
			// 
			// Column7
			// 
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(178)));
			this->Column7->DefaultCellStyle = dataGridViewCellStyle5;
			this->Column7->HeaderText = L"الاجمالي";
			this->Column7->Name = L"Column7";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1370, 671);
			this->Controls->Add(this->panord);
			this->Controls->Add(this->head);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(2, 3, 2, 3);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->head->ResumeLayout(false);
			this->pizza->ResumeLayout(false);
			this->sop->ResumeLayout(false);
			this->dif->ResumeLayout(false);
			this->addd->ResumeLayout(false);
			this->sw->ResumeLayout(false);
			this->tag->ResumeLayout(false);
			this->sm->ResumeLayout(false);
			this->laun->ResumeLayout(false);
			this->ord->ResumeLayout(false);
			this->salat->ResumeLayout(false);
			this->panord->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		Double CostOfItem()
		{
			try
			{
				double sum = 0;
				for (int i = 0; i < dataGridView1->Rows->Count; i++)
				{
					sum = sum + Convert::ToDouble(dataGridView1->Rows[i]->Cells[2]->Value);
				}
				return sum;
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}

		public: System::Void AddCost()
		{
			try
			{
				double tax, q;
				q = 0;
				

				for (int i = 0; i < dataGridView1->Rows->Count; i++) {


					lblTotal->Text = String::Format("{0:c2}",((CostOfItem() + tax)));
					q = (CostOfItem() + ((CostOfItem() + tax)));

				}
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}

			  private:System::Void Change()
			  {
				  try {
					  double tax, q, c;
					  q = 0;

					  if (dataGridView1->Rows->Count > 0) {
						  q = (CostOfItem());
						  c = Convert::ToInt32(lblCash->Text);
						  lbltax->Text = String::Format("{0:c2}", (c - q));
					  }
				  }
				  catch (Exception^ ex) {
					  MessageBox::Show(ex->Message);
				  }
			  }

	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

		
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_2(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_3(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label19_Click(System::Object^ sender, System::EventArgs^ e) {

	tag->BringToFront();
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {

	pizza->BringToFront();
}
private: System::Void panel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
	   Bitmap^ bitmap;
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	int height = dataGridView1->Height;
	dataGridView1->Height = dataGridView1->RowCount * dataGridView1->RowTemplate->Height * 2;
	bitmap = gcnew Bitmap(dataGridView1->Width, dataGridView1->Height);
	dataGridView1->DrawToBitmap(bitmap, System::Drawing::Rectangle(0, 0, dataGridView1->Width, dataGridView1->Height));
	printPreviewDialog1->PrintPreviewControl->Zoom = 1;
	printPreviewDialog1->ShowDialog();
	dataGridView1->Height = height;

	
}
private: System::Void NumbersOnly(System::Object^ sender, System::EventArgs^ e) {

	Button^ b = safe_cast<Button^>(sender);

	if (lblCash->Text == "0")
	{
		lblCash->Text = b->Text;
	}
	else if (b->Text == ".")
	{
		if (!lblCash->Text->Contains ("."))
		{
		lblCash->Text = lblCash->Text + b->Text;
}
	}
	else
		lblCash->Text = lblCash->Text + b->Text;
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	lblCash->Text = "0";
}
private: System::Void orders_Click(System::Object^ sender, System::EventArgs^ e) {

	if (pass->Text == "0538")
	{
		panord->Show();
	}
	else
	{
		MessageBox::Show("..كلمه مرور خاطئة","Error",  MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}

private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
	sm->BringToFront();
}
private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
	sw->BringToFront();

}
private: System::Void label21_Click(System::Object^ sender, System::EventArgs^ e) {

	ord->BringToFront();
}
private: System::Void label20_Click(System::Object^ sender, System::EventArgs^ e) {

	sop->BringToFront();
}
private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {

	salat->BringToFront();
}
private: System::Void panel2_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void three_Click(System::Object^ sender, System::EventArgs^ e) {
	laun->BringToFront();
}
private: System::Void nine_Click(System::Object^ sender, System::EventArgs^ e) {
	dif->BringToFront();
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dif_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) {

	double PriceOfItem = 50;
	double tax, q;
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {


		q = (CostOfItem()+PriceOfItem);

	}
	dataGridView1->Rows->Add("بيتزا مشكل جبن", "1", PriceOfItem,q);
	dataGridView2->Rows->Add("بيتزا مشكل جبن", "1", PriceOfItem,q);
	AddCost();

}
private: System::Void button38_Click(System::Object^ sender, System::EventArgs^ e) {
	double PriceOfItem = 45;
	double tax, q;
	q = 0;
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {

		q = (CostOfItem() + PriceOfItem);

	}
	dataGridView1->Rows->Add("شوربه سي فوود", "1", PriceOfItem,q);
	dataGridView2->Rows->Add("شوربه سي فوود", "1", PriceOfItem,q);
	AddCost();
}
private: System::Void button40_Click(System::Object^ sender, System::EventArgs^ e) {
	double PriceOfItem = 5;
	double tax, q;
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {


		q = (CostOfItem() + PriceOfItem);
	}
	dataGridView1->Rows->Add("سلطة طحينه", "1", PriceOfItem,q);
	dataGridView2->Rows->Add("سلطة طحينه", "1", PriceOfItem,q);
	AddCost();
}
private: System::Void laun_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void sm_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {	
}
private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {


	double PriceOfItem = 60;
	double tax, q;
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {


		q = (CostOfItem() + PriceOfItem);

	}
	dataGridView1->Rows->Add("بيتزا مشكل لحوم", "1", PriceOfItem,q);
	dataGridView2->Rows->Add("بيتزا مشكل لحوم", "1", PriceOfItem,q);
	AddCost();
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

}
private: System::Void dell_Click(System::Object^ sender, System::EventArgs^ e) {

	dataGridView1->Rows->Clear();
	lblCash->Text = "0";
	lbltax->Text = "0";
	lblTotal->Text = "0";
}
private: System::Void lblCash_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lbltax_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lblTotal_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button13_Click_1(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
	double PriceOfItem = 60;
	double tax, q;
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {


		q = (CostOfItem() + PriceOfItem);

	}
	dataGridView1->Rows->Add("بيتزا بسطرمه", "1", PriceOfItem,q);
	dataGridView2->Rows->Add("بيتزا بسطرمه", "1", PriceOfItem,q);
	AddCost();
}
private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
	double PriceOfItem = 60;
	double tax, q;
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {


		q = (CostOfItem() + PriceOfItem);

	}
	dataGridView1->Rows->Add("بيتزا سوسيس", "1", PriceOfItem,q);
	dataGridView2->Rows->Add("بيتزا سوسيس", "1", PriceOfItem,q);
	AddCost();
}
private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {

	double PriceOfItem = 70;
	double tax, q;
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {


		q = (CostOfItem() + PriceOfItem);

	}
	dataGridView1->Rows->Add("بيتزا جمبري", "1", PriceOfItem,q);
	dataGridView2->Rows->Add("بيتزا جمبري", "1", PriceOfItem,q);
	AddCost();
}
private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) {

	double PriceOfItem = 80;
	double tax, q;
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {


		q = (CostOfItem() + PriceOfItem);

	}
	dataGridView1->Rows->Add("بيتزا سي فوود", "1", PriceOfItem,q);
	dataGridView2->Rows->Add("بيتزا سي فوود", "1", PriceOfItem,q);
	AddCost();
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {

	double PriceOfItem = 15;
	double tax, q;
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {


		q = (CostOfItem() + PriceOfItem);

	}
	dataGridView1->Rows->Add("ساندويتش سيبيا ع ابيض", "1", PriceOfItem,q);
	dataGridView2->Rows->Add("ساندويتش سيبيا ع ابيض", "1", PriceOfItem,q);
	AddCost();

}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {

	double PriceOfItem = 15;
	double tax, q;
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {


		q = (CostOfItem() + PriceOfItem);

	}
	dataGridView1->Rows->Add("ساندويتش جمبري ع ابيض", "1", PriceOfItem,q);
	dataGridView2->Rows->Add("ساندويتش جمبري ع ابيض", "1", PriceOfItem,q);
	AddCost();
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {

	double PriceOfItem = 20;
	double tax, q;
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {


		q = (CostOfItem() + PriceOfItem);

	}
	dataGridView1->Rows->Add("ساندويتش مشكل ع ابيض", "1", PriceOfItem,q);
	dataGridView2->Rows->Add("ساندويتش مشكل ع ابيض", "1", PriceOfItem,q);
	AddCost();
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {

	double PriceOfItem = 100;
	double tax, q;
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {


		q = (CostOfItem() + PriceOfItem);

	}
	dataGridView1->Rows->Add("طاجن بطارخ", "1", PriceOfItem,q);
	dataGridView2->Rows->Add("طاجن بطارخ", "1", PriceOfItem,q);
	AddCost();
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
	double PriceOfItem = 120;
	double tax, q;
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {


		q = (CostOfItem() + PriceOfItem);

	}
	dataGridView1->Rows->Add("طاجن ميكس سي فود", "1", PriceOfItem,q);
	dataGridView2->Rows->Add("طاجن ميكس سي فود", "1", PriceOfItem,q);
	AddCost();
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
	double PriceOfItem = 60;
	double tax, q;
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {


		q = (CostOfItem() + PriceOfItem);

	}
	dataGridView1->Rows->Add("طاجن مكرونه سي فود", "1", PriceOfItem,q);
	dataGridView2->Rows->Add("طاجن مكرونه سي فود", "1", PriceOfItem,q);
	AddCost();
}
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {

	double PriceOfItem = 30;
	double tax, q;
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {


		q = (CostOfItem() + PriceOfItem);

	}
	dataGridView1->Rows->Add("طاجن ارز سي فود", "1", PriceOfItem,q);
	dataGridView2->Rows->Add("طاجن ارز سي فود", "1", PriceOfItem,q);
	AddCost();
}
private: System::Void button44_Click(System::Object^ sender, System::EventArgs^ e) {

	double PriceOfItem = 5;
	double tax, q;
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {


		q = (CostOfItem() + PriceOfItem);

	}
	dataGridView1->Rows->Add("سلطة بلدي", "1", PriceOfItem,q);
	dataGridView2->Rows->Add("سلطة بلدي", "1", PriceOfItem,q);
	AddCost();
}
private: System::Void button43_Click(System::Object^ sender, System::EventArgs^ e) {

	double PriceOfItem = 5;
	double tax, q;
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {


		q = (CostOfItem() + PriceOfItem);

	}
	dataGridView1->Rows->Add("سلطة توميه", "1", PriceOfItem,q);
	dataGridView2->Rows->Add("سلطة توميه", "1", PriceOfItem,q);
	AddCost();
}
private: System::Void button41_Click(System::Object^ sender, System::EventArgs^ e) {

	double PriceOfItem = 7;
	double tax, q;
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {


		q = (CostOfItem() + PriceOfItem);

	}
	dataGridView1->Rows->Add("سلطة كلوسلو", "1", PriceOfItem,q);
	dataGridView2->Rows->Add("سلطة كلوسلو", "1", PriceOfItem,q);
	AddCost();
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {

	double PriceOfItem = 20;
	double tax, q;
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {


		q = (CostOfItem() + PriceOfItem);

	}
	dataGridView1->Rows->Add("ساندويتش سيبيا ع مارين", "1", PriceOfItem,q);
	dataGridView2->Rows->Add("ساندويتش سيبيا ع مارين", "1", PriceOfItem,q);
	AddCost();
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
	double PriceOfItem = 20;
	double tax, q;
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {


		q = (CostOfItem() + PriceOfItem);

	}
	dataGridView1->Rows->Add("ساندويتش سيبيا ع مارين", "1", PriceOfItem,q);
	dataGridView2->Rows->Add("ساندويتش سيبيا ع مارين", "1", PriceOfItem,q);
	AddCost();
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
	double PriceOfItem = 25;
	double tax, q;
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {


		q = (CostOfItem() + PriceOfItem);

	}
	dataGridView1->Rows->Add("ساندويتش مشكل ع مارين", "1", PriceOfItem,q);
	dataGridView2->Rows->Add("ساندويتش مشكل ع مارين", "1", PriceOfItem,q);
	AddCost();
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {

	double PriceOfItem = 25;
	double q;
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {


		q = (CostOfItem() + PriceOfItem);

	}
	dataGridView1->Rows->Add("ساندويتش برجر جمبري ع مارين", "1", PriceOfItem,q);
	dataGridView2->Rows->Add("ساندويتش برجر جمبري ع مارين", "1", PriceOfItem,q);
	AddCost();
}
private: System::Void button39_Click(System::Object^ sender, System::EventArgs^ e) {

	double PriceOfItem = 60;
	double  q;
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {


		q = (CostOfItem() + PriceOfItem);

	}
	dataGridView1->Rows->Add("شوربه جمبري بطارخ", "1", PriceOfItem,q);
	dataGridView2->Rows->Add("شوربه جمبري بطارخ", "1", PriceOfItem,q);
	AddCost();
}
private: System::Void button42_Click(System::Object^ sender, System::EventArgs^ e) {
	double PriceOfItem = 6;
	double  q;
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {


		q = (CostOfItem() + PriceOfItem);

	}
	dataGridView1->Rows->Add("كولا", "1", PriceOfItem,q);
	dataGridView2->Rows->Add("كولا", "1", PriceOfItem,q);
	AddCost();
}
private: System::Void button45_Click(System::Object^ sender, System::EventArgs^ e) {

	double PriceOfItem = 4;
	double  q;
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {


		q = (CostOfItem() + PriceOfItem);

	}
	dataGridView1->Rows->Add("مياه معدنيه", "1", PriceOfItem,q);
	dataGridView2->Rows->Add("مياه معدنيه", "1", PriceOfItem,q);
	AddCost();
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {

	double PriceOfItem = 150;
	double q;
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {


		q = (CostOfItem() + PriceOfItem);

	}
	dataGridView1->Rows->Add("وجبه كافيار", "1", PriceOfItem,q);
	dataGridView2->Rows->Add("وجبه كافيار", "1", PriceOfItem,q);
	AddCost();
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {

	double PriceOfItem = 200;
	double  q;
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {


		q = (CostOfItem() + PriceOfItem);

	}
	dataGridView1->Rows->Add("وجبه ميكس سي فود", "1", PriceOfItem,q);
	dataGridView2->Rows->Add("وجبه ميكس سي فود", "1", PriceOfItem,q);
	AddCost();
}
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {

	double PriceOfItem = 50;
	double  q;
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {


		q = (CostOfItem() + PriceOfItem);

	}
	dataGridView1->Rows->Add("طلب جمبري", "1", PriceOfItem,q);
	dataGridView2->Rows->Add("طلب جمبري", "1", PriceOfItem,q);
	AddCost();
}
private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {

	double PriceOfItem = 50;
	double  q;
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {


		q = (CostOfItem() + PriceOfItem);

	}
	dataGridView1->Rows->Add("طلب سيبيا", "1", PriceOfItem,q);
	dataGridView2->Rows->Add("طلب سيبيا", "1", PriceOfItem,q);
	AddCost();
}
private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {

	double PriceOfItem = 60;
	double tax, q;
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {


		q = (CostOfItem() + PriceOfItem);

	}
	dataGridView1->Rows->Add("طلب مشكل", "1", PriceOfItem,q);
	dataGridView2->Rows->Add("طلب مشكل", "1", PriceOfItem,q);
	AddCost();
}
private: System::Void op_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void printPreviewDialog1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button13_Click_2(System::Object^ sender, System::EventArgs^ e) {
	if (cboPayment->Text == "cash") {
		Change();
	}
	else {
		lbltax->Text = "";
		lblCash->Text = "0";
	}
}
private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {

	e->Graphics->DrawImage(bitmap, 0, 0);
}
private: System::Void dateTimePicker1_ValueChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button14_Click_1(System::Object^ sender, System::EventArgs^ e) {

	MessageBox::Show("مسح الطلب المحدد", "Error", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	for each (DataGridViewRow ^ row in this->dataGridView2->SelectedRows)
	{
		dataGridView2->Rows->Remove(row);
	}
}
private: System::Void button46_Click(System::Object^ sender, System::EventArgs^ e) {

	int height = dataGridView2->Height;
	dataGridView2->Height = dataGridView2->RowCount * dataGridView2->RowTemplate->Height * 2;
	bitmap = gcnew Bitmap(dataGridView2->Width, dataGridView2->Height);
	dataGridView2->DrawToBitmap(bitmap, System::Drawing::Rectangle(0, 0, dataGridView2->Width, dataGridView2->Height));
	printPreviewDialog2->PrintPreviewControl->Zoom = 1;
	printPreviewDialog2->ShowDialog();
	dataGridView2->Height = height;

	MessageBox::Show("اغلاق الشيفت...", "Error", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	dataGridView2->Rows->Clear();

}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {

	

	
}
private: System::Void printDocument2_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
	e->Graphics->DrawImage(bitmap, 0, 0);
}
private: System::Void button47_Click(System::Object^ sender, System::EventArgs^ e) {

	panord->Hide();
}

private: System::Void dataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

}
private: System::Void printPreviewDialog2_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button49_Click(System::Object^ sender, System::EventArgs^ e) {

	double PriceOfItem = 10;
	double tax, q;
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {


		q = (CostOfItem() + PriceOfItem);

	}
	dataGridView1->Rows->Add("اضافه 10ج", "1", PriceOfItem, q);
	dataGridView2->Rows->Add("اضافه 10ج", "1", PriceOfItem, q);
	AddCost();
}

	 


private: System::Void button51_Click(System::Object^ sender, System::EventArgs^ e) {

	double PriceOfItem = 20;
	double tax, q;
	for (int i = 0; i < dataGridView1->Rows->Count; i++) {


		q = (CostOfItem() + PriceOfItem);

	}
	dataGridView1->Rows->Add("اضافه 20ج", "1", PriceOfItem, q);
	dataGridView2->Rows->Add("اضافه 20ج", "1", PriceOfItem, q);
	AddCost();
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	addd->BringToFront();
}
};
}