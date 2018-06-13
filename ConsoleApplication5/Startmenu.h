#pragma once
#include "fuel1.h"
#include "Feedform.h"


namespace ConsoleApplication5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Summary for Startmenu
	/// </summary>
	public ref class Startmenu : public System::Windows::Forms::Form
	{
	public:
		Startmenu(void)
		{
			InitializeVariables();
			InitializeComponent();
			
			//
			//TODO: Add the constructor code here
			//
			units_cb->SelectedIndex = 0;
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Startmenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Input_bt;
	private: System::Windows::Forms::Button^  Simulation_bt;
	private: System::Windows::Forms::Button^  report_bt;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::GroupBox^  units_gb;
	private: System::Windows::Forms::ComboBox^  units_cb;

	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newProjectToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openProjectToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  dOCToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pDFToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  fontToolStripMenuItem;
	private: System::Windows::Forms::CommonDialog^ fd;
	private: System::Windows::Forms::GroupBox^  Input_menu_gb;
	private: System::Windows::Forms::Button^  back_bt;
	private: System::Windows::Forms::Button^  Process_bt;
	private: System::Windows::Forms::Button^  physical_p_bt;
	private: System::Windows::Forms::Button^  Design_bt;
	private: System::Windows::Forms::Button^  Coil_bt;
	private: System::Windows::Forms::Button^  fuels_bt;
	private: fuelform ^ fuel1; 
	private: Feedform ^feed;


	public: fuel^ carbon = gcnew fuel("Carbon", 12.01, 2, 1, 0, 0, 0, 0, 14093* 2326.000292, 0, 0, 14093 * 2326.000292, 0.034304164 / 0.062427961);
			fuel^ hydrogen = gcnew fuel("Hydrogen", 2.016, 0.5, 0, 2, 0, 0, 0, 51566 * 2326.000292, 0, 0, 61100 * 2326.000292, 0.005327 / 0.062427961);
			 fuel^ oxygen = gcnew fuel("Oxygen", 31.999, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0.08461 / 0.062427961);
			 fuel^ nitrogen = gcnew fuel("Nitrogen", 28.013, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0.07439 / 0.062427961);
			 fuel^ sulphur = gcnew fuel("Sulphur", 32.06, 2, 0, 0, 0, 1, 0, 3983 * 2326.000292, 0, 0, 3983 * 2326.000292, 113.5564603 / 0.062427961);
			 fuel^ carbon_monoxide = gcnew fuel("Carbon Monoxide", 28.01, 0.5, 1, 0, 1, 0, 0, 4342.2* 2326.000292, 0, 0, 4347 * 2326.000292, 0.07404 / 0.062427961);
			 fuel^ carbon_dioxide = gcnew fuel("Carbon Dioxide", 44.01, 0, 1, 0, 2, 0, 0, 0, 0, 0, 0, 0.117 / 0.062427961);
			 fuel^ methane = gcnew fuel("Methane", 16.043, 2, 1, 4, 0, 0, 0, 21511 * 2326.000292, 0, 0, 23879 * 2326.000292, 0.04243 / 0.062427961);
			 fuel^ ethane = gcnew fuel("Ethane", 30.07, 3.5, 2, 6, 0, 0, 0, 20429 * 2326.000292, 0, 0,22320 * 2326.000292, 0.08029 / 0.062427961);
			 fuel^ propane = gcnew fuel("Propane", 44.097, 5, 3, 8, 0, 0, 0, 19922 * 2326.000292, 0, 0, 21661 * 2326.000292, 0.1196 / 0.062427961);
			 fuel^ n_butane = gcnew fuel("n-Butane", 58.123, 6.5, 4, 10, 0, 0, 0, 19658 * 2326.000292, 0, 0, 21308 * 2326.000292, 0.1582 / 0.062427961);
			 fuel^ iso_butane = gcnew fuel("Iso-Butane", 58.123, 6.5, 4, 10, 0, 0, 0, 19590 * 2326.000292, 0, 0, 21257 * 2326.000292, 0.1582 / 0.062427961);
			 fuel^ n_pentane = gcnew fuel("n - Pentane", 72.15, 8, 5, 12, 0, 0, 0, 19481 * 2326.000292, 0, 0, 21091 * 2326.000292, 0.1904 / 0.062427961);
			 fuel^ iso_pentane = gcnew fuel("Iso - Pentane", 72.15, 8, 5, 12, 0, 0, 0, 19456 * 2326.000292, 0, 0, 21052 * 2326.000292, 0.1904 / 0.062427961);
			 fuel^ neopentane = gcnew fuel("Neopentane", 72.15, 8, 5, 12, 0, 0, 0, 19371 * 2326.000292, 0, 0, 20970 * 2326.000292, 0.1904 / 0.062427961);
			 fuel^ n_hexane = gcnew fuel("n-Hexane", 86.177, 9.5, 6, 14, 0, 0, 0, 19393 * 2326.000292, 0, 0, 20940 * 2326.000292, 0.2274 / 0.062427961);
			 fuel^ n_heptane = gcnew fuel("n-Heptane", 100.204, 11, 7, 16, 0, 0, 0, 19315 * 2326.000292, 0, 0, 20839 * 2326.000292, 0.279258996 / 0.062427961);
			 fuel^ n_octane = gcnew fuel("n-Octane", 114.231, 12.5, 8, 18, 0, 0, 0, 19256 * 2326.000292, 0, 0, 20759 * 2326.000292, 43.6995724 / 0.062427961);
			 fuel^ n_nonane = gcnew fuel("n-Nonane", 128.258, 14, 9, 20, 0, 0, 0, 19213 * 2326.000292, 0, 0, 20701 * 2326.000292, 44.94813161 / 0.062427961);
			 fuel^ n_decane = gcnew fuel("n-Decane", 142.285, 15.5, 10, 22, 0, 0, 0, 19176 * 2326.000292, 0, 0, 20651 * 2326.000292, 45.57241122 / 0.062427961);
			 fuel^ ethylene = gcnew fuel("Ethene(ethylene)", 28.054, 3, 2, 4, 0, 0, 0, 20278 * 2326.000292, 0, 0, 21644 * 2326.000292, 0.07456 / 0.062427961);
			 fuel^ propylene = gcnew fuel("Propene(propylene)", 42.081, 4.5, 3, 6, 0, 0, 0, 19678 * 2326.000292, 0, 0, 21041 * 2326.000292, 0.111 / 0.062427961);
			 fuel^ butylene = gcnew fuel("n - Butene(butylene)", 56.102, 6, 4, 8, 0, 0, 0, 19496 * 2326.000292, 0, 0, 20840 * 2326.000292, 0.148 / 0.062427961);
			 fuel^ isobutene = gcnew fuel("Isobutene", 56.102, 6, 4, 8, 0, 0, 0, 19382 * 2326.000292, 0, 0, 20730 * 2326.000292, 0.148 / 0.062427961);
			 fuel^ n_pentene = gcnew fuel("n-Pentene", 70.128, 7.5, 5, 10, 0, 0, 0, 19363 * 2326.000292, 0, 0, 20712 * 2326.000292, 0.1852 / 0.062427961);
			 fuel^ benzene = gcnew fuel("Benzene", 78.114, 7.5, 6, 6, 0, 0, 0, 17444 * 2326.000292, 0, 0, 19210 * 2326.000292, 0.206 / 0.062427961);
			 fuel^ toluene = gcnew fuel("Toluene", 92.132, 9, 7, 8, 0, 0, 0, 17620 * 2326.000292, 0, 0, 18440 * 2326.000292, 0.2431 / 0.062427961);
			 fuel^ xylene = gcnew fuel("Xylene", 106.158, 10.5, 8, 10, 0, 0, 0, 17760 * 2326.000292, 0, 0, 18650 * 2326.000292, 0.2803 / 0.062427961);
			 fuel^ acetylene = gcnew fuel("Ethyne(acetylene)", 26.038, 2.5, 2, 2, 0, 0, 0, 20753 * 2326.000292, 0, 0, 21500 * 2326.000292, 0.06974 / 0.062427961);
			 fuel^ naphtalene = gcnew fuel("Napthalene", 128.162, 12, 10, 8, 0, 0, 0, 16708 * 2326.000292, 0, 0, 17298 * 2326.000292, 0.3384 / 0.062427961);
			 fuel^ methylalco = gcnew fuel("Methyl alcohol", 32.041, 1.5, 1, 4, 1, 0, 0, 9078 * 2326.000292, 0, 0, 10259 * 2326.000292, 0.0846 / 0.062427961);
			 fuel^ ethylalco = gcnew fuel("Ethyl alcohole", 46.067, 3, 2, 6, 1, 0, 0, 11929 * 2326.000292, 0, 0, 13161 * 2326.000292, 0.1216 / 0.062427961);
			 fuel^ ammonia = gcnew fuel("Ammonia", 17.031, 1.75, 1, 3, 0, 0, 0, 8001 * 2326.000292, 0, 0, 9668 * 2326.000292, 0.0456 / 0.062427961);
			 fuel^ hydrogen_sulfide = gcnew fuel("Hydrogen Sulfide", 34.076, 1.5, 0, 2, 0, 1, 0, 6545 * 2326.000292, 0, 0, 7100 * 2326.000292, 0.09109 / 0.062427961);
			 fuel^ sulfur_dioxide = gcnew fuel("Sulfur dioxide", 64.06, 0, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0.1733 / 0.062427961);
			 fuel^ water_vapor = gcnew fuel("Water vapor", 18.016, 0, 0, 2, 1, 0, 0, 0, 0, 0, 0, 0.04758 / 0.062427961);
			 fuel^ air = gcnew fuel("Air", 26.9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0.07655 / 0.062427961);
			 array<fuel^> ^fuelmix = gcnew array<fuel^>(37);//actuall fuel made by following components

	public:

	public:
		String ^ fuelname = "";
			
	public:
		array <fuel^> ^get_fuelmix()
		{
			return fuelmix;
		}
		

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		void InitializeVariables() {
			fuelmix[0] = carbon; fuelmix[1] = hydrogen; fuelmix[2] = oxygen; fuelmix[3] = nitrogen; fuelmix[4] = sulphur; fuelmix[5] = carbon_monoxide; fuelmix[6] = carbon_dioxide; fuelmix[7] = methane; fuelmix[8] = ethane; fuelmix[9] = propane; fuelmix[10] = n_butane; fuelmix[11] = iso_butane; fuelmix[12] = n_pentane; fuelmix[13] = iso_pentane;
			fuelmix[14] = neopentane; fuelmix[15] = n_hexane; fuelmix[16] = n_heptane; fuelmix[17] = n_octane; fuelmix[18] = n_nonane; fuelmix[19] = n_decane; fuelmix[20] = ethylene; fuelmix[21] = propylene; fuelmix[22] = butylene; fuelmix[23] = isobutene; fuelmix[24] = n_pentene; fuelmix[25] = benzene; fuelmix[26] = toluene;
			fuelmix[27] = xylene; fuelmix[28] = acetylene; fuelmix[29] = naphtalene; fuelmix[30] = methylalco; fuelmix[31] = ethylalco; fuelmix[32] = ammonia;
			fuelmix[33] = hydrogen_sulfide; fuelmix[34] = sulfur_dioxide; fuelmix[35] = water_vapor; fuelmix[36] = air;
			this->fuel1 = (gcnew fuelform(fuelmix, fuelname));
			this->feed = (gcnew Feedform());
		}
		private: Void Onmyevent(System::Object ^sender, System::EventArgs ^e, array<fuel^>^a, String^name)
		{
			this->fuelmix = a;
			this->fuelname = name;
		}

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Input_bt = (gcnew System::Windows::Forms::Button());
			this->Simulation_bt = (gcnew System::Windows::Forms::Button());
			this->report_bt = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->units_gb = (gcnew System::Windows::Forms::GroupBox());
			this->units_cb = (gcnew System::Windows::Forms::ComboBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newProjectToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openProjectToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dOCToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pDFToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fontToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Input_menu_gb = (gcnew System::Windows::Forms::GroupBox());
			this->back_bt = (gcnew System::Windows::Forms::Button());
			this->Process_bt = (gcnew System::Windows::Forms::Button());
			this->physical_p_bt = (gcnew System::Windows::Forms::Button());
			this->Design_bt = (gcnew System::Windows::Forms::Button());
			this->Coil_bt = (gcnew System::Windows::Forms::Button());
			this->fuels_bt = (gcnew System::Windows::Forms::Button());
			this->units_gb->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->Input_menu_gb->SuspendLayout();
			this->SuspendLayout();
			// 
			// Input_bt
			// 
			this->Input_bt->AutoSize = true;
			this->Input_bt->Location = System::Drawing::Point(24, 74);
			this->Input_bt->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Input_bt->Name = L"Input_bt";
			this->Input_bt->Size = System::Drawing::Size(126, 26);
			this->Input_bt->TabIndex = 1;
			this->Input_bt->Text = L"Input";
			this->Input_bt->UseVisualStyleBackColor = true;
			this->Input_bt->Click += gcnew System::EventHandler(this, &Startmenu::Input_bt_Click);
			// 
			// Simulation_bt
			// 
			this->Simulation_bt->AutoSize = true;
			this->Simulation_bt->Location = System::Drawing::Point(172, 74);
			this->Simulation_bt->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Simulation_bt->Name = L"Simulation_bt";
			this->Simulation_bt->Size = System::Drawing::Size(126, 26);
			this->Simulation_bt->TabIndex = 2;
			this->Simulation_bt->Text = L"Simulation";
			this->Simulation_bt->UseVisualStyleBackColor = true;
			this->Simulation_bt->Click += gcnew System::EventHandler(this, &Startmenu::btsim_Click);
			// 
			// report_bt
			// 
			this->report_bt->AutoSize = true;
			this->report_bt->Location = System::Drawing::Point(323, 74);
			this->report_bt->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->report_bt->Name = L"report_bt";
			this->report_bt->Size = System::Drawing::Size(126, 26);
			this->report_bt->TabIndex = 3;
			this->report_bt->Text = L"Report";
			this->report_bt->UseVisualStyleBackColor = true;
			this->report_bt->Click += gcnew System::EventHandler(this, &Startmenu::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label1->Location = System::Drawing::Point(21, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(390, 15);
			this->label1->TabIndex = 4;
			this->label1->Text = L"This programme calculates the heat transfer and production of ethylen.";
			this->label1->Click += gcnew System::EventHandler(this, &Startmenu::label1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Location = System::Drawing::Point(627, 518);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(136, 31);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Cancel";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Startmenu::button2_Click);
			// 
			// units_gb
			// 
			this->units_gb->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->units_gb->AutoSize = true;
			this->units_gb->Controls->Add(this->units_cb);
			this->units_gb->Location = System::Drawing::Point(620, 34);
			this->units_gb->Name = L"units_gb";
			this->units_gb->Size = System::Drawing::Size(143, 83);
			this->units_gb->TabIndex = 6;
			this->units_gb->TabStop = false;
			this->units_gb->Text = L"Set units";
			this->units_gb->Enter += gcnew System::EventHandler(this, &Startmenu::units_gb_Enter);
			// 
			// units_cb
			// 
			this->units_cb->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->units_cb->FormattingEnabled = true;
			this->units_cb->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->units_cb->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"IS", L"SI" });
			this->units_cb->Location = System::Drawing::Point(6, 40);
			this->units_cb->Name = L"units_cb";
			this->units_cb->Size = System::Drawing::Size(121, 23);
			this->units_cb->TabIndex = 0;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->editToolStripMenuItem, this->aboutToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(775, 24);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->newProjectToolStripMenuItem,
					this->openProjectToolStripMenuItem, this->saveToolStripMenuItem, this->toolStripMenuItem1, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"&File";
			// 
			// newProjectToolStripMenuItem
			// 
			this->newProjectToolStripMenuItem->Name = L"newProjectToolStripMenuItem";
			this->newProjectToolStripMenuItem->Size = System::Drawing::Size(143, 22);
			this->newProjectToolStripMenuItem->Text = L"New project";
			// 
			// openProjectToolStripMenuItem
			// 
			this->openProjectToolStripMenuItem->Name = L"openProjectToolStripMenuItem";
			this->openProjectToolStripMenuItem->Size = System::Drawing::Size(143, 22);
			this->openProjectToolStripMenuItem->Text = L"Open project";
			this->openProjectToolStripMenuItem->Click += gcnew System::EventHandler(this, &Startmenu::openProjectToolStripMenuItem_Click);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(143, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &Startmenu::saveToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->dOCToolStripMenuItem,
					this->pDFToolStripMenuItem
			});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(143, 22);
			this->toolStripMenuItem1->Text = L"Export";
			// 
			// dOCToolStripMenuItem
			// 
			this->dOCToolStripMenuItem->Name = L"dOCToolStripMenuItem";
			this->dOCToolStripMenuItem->Size = System::Drawing::Size(99, 22);
			this->dOCToolStripMenuItem->Text = L"DOC";
			// 
			// pDFToolStripMenuItem
			// 
			this->pDFToolStripMenuItem->Name = L"pDFToolStripMenuItem";
			this->pDFToolStripMenuItem->Size = System::Drawing::Size(99, 22);
			this->pDFToolStripMenuItem->Text = L"PDF";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(143, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fontToolStripMenuItem });
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->editToolStripMenuItem->Text = L"Edit";
			this->editToolStripMenuItem->Click += gcnew System::EventHandler(this, &Startmenu::editToolStripMenuItem_Click);
			// 
			// fontToolStripMenuItem
			// 
			this->fontToolStripMenuItem->Name = L"fontToolStripMenuItem";
			this->fontToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->fontToolStripMenuItem->Text = L"Choose font";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// Input_menu_gb
			// 
			this->Input_menu_gb->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Input_menu_gb->AutoSize = true;
			this->Input_menu_gb->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->Input_menu_gb->Controls->Add(this->back_bt);
			this->Input_menu_gb->Controls->Add(this->Process_bt);
			this->Input_menu_gb->Controls->Add(this->physical_p_bt);
			this->Input_menu_gb->Controls->Add(this->Design_bt);
			this->Input_menu_gb->Controls->Add(this->Coil_bt);
			this->Input_menu_gb->Controls->Add(this->fuels_bt);
			this->Input_menu_gb->Location = System::Drawing::Point(21, 123);
			this->Input_menu_gb->Name = L"Input_menu_gb";
			this->Input_menu_gb->Size = System::Drawing::Size(742, 247);
			this->Input_menu_gb->TabIndex = 9;
			this->Input_menu_gb->TabStop = false;
			this->Input_menu_gb->Text = L"Input menu";
			this->Input_menu_gb->Visible = false;
			this->Input_menu_gb->Enter += gcnew System::EventHandler(this, &Startmenu::Input_menu_gb_Enter);
			// 
			// back_bt
			// 
			this->back_bt->Location = System::Drawing::Point(610, 201);
			this->back_bt->Name = L"back_bt";
			this->back_bt->Size = System::Drawing::Size(126, 26);
			this->back_bt->TabIndex = 5;
			this->back_bt->Text = L"Back";
			this->back_bt->UseVisualStyleBackColor = true;
			this->back_bt->Click += gcnew System::EventHandler(this, &Startmenu::back_bt_Click);
			// 
			// Process_bt
			// 
			this->Process_bt->AutoSize = true;
			this->Process_bt->Location = System::Drawing::Point(610, 33);
			this->Process_bt->Name = L"Process_bt";
			this->Process_bt->Size = System::Drawing::Size(126, 26);
			this->Process_bt->TabIndex = 4;
			this->Process_bt->Text = L"Process";
			this->Process_bt->UseVisualStyleBackColor = true;
			this->Process_bt->Click += gcnew System::EventHandler(this, &Startmenu::Process_bt_Click);
			// 
			// physical_p_bt
			// 
			this->physical_p_bt->AutoSize = true;
			this->physical_p_bt->Location = System::Drawing::Point(456, 33);
			this->physical_p_bt->Name = L"physical_p_bt";
			this->physical_p_bt->Size = System::Drawing::Size(126, 26);
			this->physical_p_bt->TabIndex = 3;
			this->physical_p_bt->Text = L"Physical properties";
			this->physical_p_bt->UseVisualStyleBackColor = true;
			// 
			// Design_bt
			// 
			this->Design_bt->AutoSize = true;
			this->Design_bt->Location = System::Drawing::Point(305, 33);
			this->Design_bt->Name = L"Design_bt";
			this->Design_bt->Size = System::Drawing::Size(126, 26);
			this->Design_bt->TabIndex = 2;
			this->Design_bt->Text = L"Design";
			this->Design_bt->UseVisualStyleBackColor = true;
			// 
			// Coil_bt
			// 
			this->Coil_bt->AutoSize = true;
			this->Coil_bt->Location = System::Drawing::Point(154, 33);
			this->Coil_bt->Name = L"Coil_bt";
			this->Coil_bt->Size = System::Drawing::Size(126, 26);
			this->Coil_bt->TabIndex = 1;
			this->Coil_bt->Text = L"Coils";
			this->Coil_bt->UseVisualStyleBackColor = true;
			// 
			// fuels_bt
			// 
			this->fuels_bt->AutoSize = true;
			this->fuels_bt->Location = System::Drawing::Point(6, 33);
			this->fuels_bt->Name = L"fuels_bt";
			this->fuels_bt->Size = System::Drawing::Size(126, 26);
			this->fuels_bt->TabIndex = 0;
			this->fuels_bt->Text = L"Fuel";
			this->fuels_bt->UseVisualStyleBackColor = true;
			this->fuels_bt->Click += gcnew System::EventHandler(this, &Startmenu::fuels_bt_Click);
			// 
			// Startmenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(775, 561);
			this->Controls->Add(this->Input_menu_gb);
			this->Controls->Add(this->units_gb);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->report_bt);
			this->Controls->Add(this->Simulation_bt);
			this->Controls->Add(this->Input_bt);
			this->Controls->Add(this->menuStrip1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MinimumSize = System::Drawing::Size(791, 600);
			this->Name = L"Startmenu";
			this->Text = L"Startmenu";
			this->Load += gcnew System::EventHandler(this, &Startmenu::Startmenu_Load);
			this->units_gb->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->Input_menu_gb->ResumeLayout(false);
			this->Input_menu_gb->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Input_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->Input_menu_gb->Visible == true)
			this->Input_menu_gb->Visible = false;
		else
			this->Input_menu_gb->Visible = true;
	


	}
	private: System::Void btsim_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBox::Show("This is the Report text...");
	}
	
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show(L"You are closing the application!");
	Close();

	// Exit the application

	Application::Exit();
}

private: System::Void Startmenu_Load(System::Object^  sender, System::EventArgs^  e) {
	this->fuel1->myevent += gcnew ConsoleApplication5::fuelform::EventDelegate1(this, &ConsoleApplication5::Startmenu::Onmyevent);
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

}

private: System::Void editToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void openProjectToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	//Stream^ myStream;
	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;

	openFileDialog1->InitialDirectory = "c:\\";
	openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	openFileDialog1->FilterIndex = 2;
	openFileDialog1->RestoreDirectory = true;

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		/*if ((myStream = openFileDialog1->OpenFile()) != nullptr)
		{
			// Insert code to read the stream here.
			myStream->Close();
		}*/
	}
}
private: System::Void saveToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	//Stream^ myStream;
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
	saveFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	saveFileDialog1->FilterIndex = 2;
	saveFileDialog1->RestoreDirectory = true;
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		/*if ((myStream = saveFileDialog1->OpenFile()) != nullptr)
		{

			// Code to write the stream goes here.
			myStream->Close();
		}*/
	}
}
public: Void Set_fuel_mix(array<fuel^> ^a)
{
	fuelmix = a;
}
private: 
	private: System::Void fuels_bt_Click(System::Object^  sender, System::EventArgs^  e) {
		this->fuel1->set_fuelmix(this->fuelmix);
		this->fuel1->Refresh_tbs();
	this->fuel1->ShowDialog();
}
private: System::Void back_bt_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Input_menu_gb->Visible = false;
}
private: System::Void units_gb_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Input_menu_gb_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void Process_bt_Click(System::Object^  sender, System::EventArgs^  e) {
	this->feed->ShowDialog();
}
};
}
