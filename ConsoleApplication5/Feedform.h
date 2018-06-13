#pragma once
#include "Functions.h"

namespace ConsoleApplication5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Feedform
	/// </summary>
	public ref class Feedform : public System::Windows::Forms::Form
	{
	public:
		Feedform(void)
		{
			InitializeComponent();
			OptimizeComboboxes();
			SetObjectsToArrays();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Feedform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lb_hydrocarbons;
	private: System::Windows::Forms::Label^  lb_nameinput;
	private: System::Windows::Forms::TextBox^  tb_name_input;
	private: System::Windows::Forms::Label^  label1;


	private: System::Windows::Forms::Label^  lb_number_of_inputs;
	private: System::Windows::Forms::ComboBox^  cb_heatcap;

	private: System::Windows::Forms::Label^  tb_phase;
	private: System::Windows::Forms::Label^  lb_temp;

	private: System::Windows::Forms::Label^  lb_pressure;
	private: System::Windows::Forms::Label^  lb_enthalpy;
	private: System::Windows::Forms::Label^  lb_viscosity;
	private: System::Windows::Forms::Label^  lb_thermalconductivity;
	private: System::Windows::Forms::Label^  lb_heatcap;
	private: System::Windows::Forms::Label^  lb_mixheatcap;

	private: System::Windows::Forms::Label^  lb_mixthermcond;

	private: System::Windows::Forms::Label^  lb_mixviscosity;

	private: System::Windows::Forms::Label^  lb_mixenthalpy;

	private: System::Windows::Forms::ComboBox^  cb_phase1;
	private: System::Windows::Forms::ComboBox^  cb_phase2;
	private: System::Windows::Forms::ComboBox^  cb_phase3;
	private: System::Windows::Forms::ComboBox^  cb_phase4;
	private: System::Windows::Forms::ComboBox^  cb_phase5;
	private: System::Windows::Forms::TextBox^  tb_temp1;
	private: System::Windows::Forms::TextBox^  tb_temp5;
	private: System::Windows::Forms::TextBox^  tb_temp4;
	private: System::Windows::Forms::TextBox^  tb_temp3;
	private: System::Windows::Forms::TextBox^  tb_temp2;
	private: System::Windows::Forms::TextBox^  tb_press2;
	private: System::Windows::Forms::TextBox^  tb_press3;
	private: System::Windows::Forms::TextBox^  tb_press4;
	private: System::Windows::Forms::TextBox^  tb_press5;
	private: System::Windows::Forms::TextBox^  tb_press1;
	private: System::Windows::Forms::TextBox^  tb_enthalpy2;
	private: System::Windows::Forms::TextBox^  tb_enthalpy3;
	private: System::Windows::Forms::TextBox^  tb_enthalpy4;
	private: System::Windows::Forms::TextBox^  tb_enthalpy5;
	private: System::Windows::Forms::TextBox^  tb_enthalpy1;
	private: System::Windows::Forms::TextBox^  tb_viscosity2;
	private: System::Windows::Forms::TextBox^  tb_viscosity3;
	private: System::Windows::Forms::TextBox^  tb_viscosity4;
	private: System::Windows::Forms::TextBox^  tb_viscosity5;
	private: System::Windows::Forms::TextBox^  tb_viscosity1;
	private: System::Windows::Forms::TextBox^  tb_thermcond2;
	private: System::Windows::Forms::TextBox^  tb_thermcond3;
	private: System::Windows::Forms::TextBox^  tb_thermcond4;
	private: System::Windows::Forms::TextBox^  tb_thermcond5;
	private: System::Windows::Forms::TextBox^  tb_thermcond1;
	private: System::Windows::Forms::TextBox^  tb_heatcap2;
	private: System::Windows::Forms::TextBox^  tb_heatcap3;
	private: System::Windows::Forms::TextBox^  tb_heatcap4;
	private: System::Windows::Forms::TextBox^  tb_heatcap5;
	private: System::Windows::Forms::TextBox^  tb_heatcap1;
	private: System::Windows::Forms::ComboBox^  cb_temp;

	private: System::Windows::Forms::ComboBox^  cb_thermcond;
	private: System::Windows::Forms::ComboBox^  cb_viscosity;
	private: System::Windows::Forms::ComboBox^  cb_enthalpy;
	private: System::Windows::Forms::ComboBox^  cb_press;
	private: System::Windows::Forms::ComboBox^  cb_mix_enthalpy;
	private: System::Windows::Forms::ComboBox^  cb_mix_visc;
	private: System::Windows::Forms::ComboBox^  cb_mix_thermcond;
private: System::Windows::Forms::TextBox^  tb_mix_heatcap2;
private: System::Windows::Forms::TextBox^  tb_mix_heatcap3;
private: System::Windows::Forms::TextBox^  tb_mix_heatcap4;
private: System::Windows::Forms::TextBox^  tb_mix_heatcap5;
private: System::Windows::Forms::TextBox^  tb_mix_heatcap1;
private: System::Windows::Forms::TextBox^  tb_mix_thermcond2;
private: System::Windows::Forms::TextBox^  tb_mix_thermcond3;
private: System::Windows::Forms::TextBox^  tb_mix_thermcond4;
private: System::Windows::Forms::TextBox^  tb_mix_thermcond5;
private: System::Windows::Forms::TextBox^  tb_mix_thermcond1;
private: System::Windows::Forms::TextBox^  tb_mix_visc2;
private: System::Windows::Forms::TextBox^  tb_mix_visc3;
private: System::Windows::Forms::TextBox^  tb_mixvisc4;
private: System::Windows::Forms::TextBox^  tb_mixvisc5;
private: System::Windows::Forms::TextBox^  tb_mix_visc1;
private: System::Windows::Forms::TextBox^  tb_mix_enthalpy2;
private: System::Windows::Forms::TextBox^  tb_mixenthalpy3;
private: System::Windows::Forms::TextBox^  tb_mixenthalpy4;
private: System::Windows::Forms::TextBox^  tb_mixenthalpy5;
private: System::Windows::Forms::TextBox^  tb_mix_enthalpy1;
private: System::Windows::Forms::ComboBox^  cb_mix_heatcap;
private: System::Windows::Forms::ComboBox^  cb_process_flow;
private: System::Windows::Forms::TextBox^  tb_proces_flow;
private: System::Windows::Forms::GroupBox^  groupBox1;
private: System::Windows::Forms::ComboBox^  cb_numberinputs;
private: System::Windows::Forms::GroupBox^  groupBox2;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
private: System::Windows::Forms::Label^  label6;
private: array<TextBox^> ^row3 = gcnew array<TextBox^>(6);//upper part rows
		 array<TextBox^> ^row4 = gcnew array<TextBox^>(6);
		 array<TextBox^> ^row5 = gcnew array<TextBox^>(6);
		 array<TextBox^> ^row1mix = gcnew array<TextBox^>(4);//down part rows
		 array<TextBox^> ^row2mix = gcnew array<TextBox^>(4);
		 array<TextBox^> ^row3mix = gcnew array<TextBox^>(4);
		 array<TextBox^> ^row4mix = gcnew array<TextBox^>(4);
		 array<TextBox^> ^row5mix = gcnew array<TextBox^>(4);
		 array<ComboBox^> ^rowmixcbs = gcnew array<ComboBox^>(4);
		 array<Label^> ^rowmixlbs = gcnew array<Label^>(4);
	protected:


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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->lb_hydrocarbons = (gcnew System::Windows::Forms::Label());
			this->lb_nameinput = (gcnew System::Windows::Forms::Label());
			this->tb_name_input = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lb_number_of_inputs = (gcnew System::Windows::Forms::Label());
			this->cb_heatcap = (gcnew System::Windows::Forms::ComboBox());
			this->tb_phase = (gcnew System::Windows::Forms::Label());
			this->lb_temp = (gcnew System::Windows::Forms::Label());
			this->lb_pressure = (gcnew System::Windows::Forms::Label());
			this->lb_enthalpy = (gcnew System::Windows::Forms::Label());
			this->lb_viscosity = (gcnew System::Windows::Forms::Label());
			this->lb_thermalconductivity = (gcnew System::Windows::Forms::Label());
			this->lb_heatcap = (gcnew System::Windows::Forms::Label());
			this->lb_mixheatcap = (gcnew System::Windows::Forms::Label());
			this->lb_mixthermcond = (gcnew System::Windows::Forms::Label());
			this->lb_mixviscosity = (gcnew System::Windows::Forms::Label());
			this->lb_mixenthalpy = (gcnew System::Windows::Forms::Label());
			this->cb_phase1 = (gcnew System::Windows::Forms::ComboBox());
			this->cb_phase2 = (gcnew System::Windows::Forms::ComboBox());
			this->cb_phase3 = (gcnew System::Windows::Forms::ComboBox());
			this->cb_phase4 = (gcnew System::Windows::Forms::ComboBox());
			this->cb_phase5 = (gcnew System::Windows::Forms::ComboBox());
			this->tb_temp1 = (gcnew System::Windows::Forms::TextBox());
			this->tb_temp5 = (gcnew System::Windows::Forms::TextBox());
			this->tb_temp4 = (gcnew System::Windows::Forms::TextBox());
			this->tb_temp3 = (gcnew System::Windows::Forms::TextBox());
			this->tb_temp2 = (gcnew System::Windows::Forms::TextBox());
			this->tb_press2 = (gcnew System::Windows::Forms::TextBox());
			this->tb_press3 = (gcnew System::Windows::Forms::TextBox());
			this->tb_press4 = (gcnew System::Windows::Forms::TextBox());
			this->tb_press5 = (gcnew System::Windows::Forms::TextBox());
			this->tb_press1 = (gcnew System::Windows::Forms::TextBox());
			this->tb_enthalpy2 = (gcnew System::Windows::Forms::TextBox());
			this->tb_enthalpy3 = (gcnew System::Windows::Forms::TextBox());
			this->tb_enthalpy4 = (gcnew System::Windows::Forms::TextBox());
			this->tb_enthalpy5 = (gcnew System::Windows::Forms::TextBox());
			this->tb_enthalpy1 = (gcnew System::Windows::Forms::TextBox());
			this->tb_viscosity2 = (gcnew System::Windows::Forms::TextBox());
			this->tb_viscosity3 = (gcnew System::Windows::Forms::TextBox());
			this->tb_viscosity4 = (gcnew System::Windows::Forms::TextBox());
			this->tb_viscosity5 = (gcnew System::Windows::Forms::TextBox());
			this->tb_viscosity1 = (gcnew System::Windows::Forms::TextBox());
			this->tb_thermcond2 = (gcnew System::Windows::Forms::TextBox());
			this->tb_thermcond3 = (gcnew System::Windows::Forms::TextBox());
			this->tb_thermcond4 = (gcnew System::Windows::Forms::TextBox());
			this->tb_thermcond5 = (gcnew System::Windows::Forms::TextBox());
			this->tb_thermcond1 = (gcnew System::Windows::Forms::TextBox());
			this->tb_heatcap2 = (gcnew System::Windows::Forms::TextBox());
			this->tb_heatcap3 = (gcnew System::Windows::Forms::TextBox());
			this->tb_heatcap4 = (gcnew System::Windows::Forms::TextBox());
			this->tb_heatcap5 = (gcnew System::Windows::Forms::TextBox());
			this->tb_heatcap1 = (gcnew System::Windows::Forms::TextBox());
			this->cb_temp = (gcnew System::Windows::Forms::ComboBox());
			this->cb_thermcond = (gcnew System::Windows::Forms::ComboBox());
			this->cb_viscosity = (gcnew System::Windows::Forms::ComboBox());
			this->cb_enthalpy = (gcnew System::Windows::Forms::ComboBox());
			this->cb_press = (gcnew System::Windows::Forms::ComboBox());
			this->cb_mix_enthalpy = (gcnew System::Windows::Forms::ComboBox());
			this->cb_mix_visc = (gcnew System::Windows::Forms::ComboBox());
			this->cb_mix_thermcond = (gcnew System::Windows::Forms::ComboBox());
			this->tb_mix_heatcap2 = (gcnew System::Windows::Forms::TextBox());
			this->tb_mix_heatcap3 = (gcnew System::Windows::Forms::TextBox());
			this->tb_mix_heatcap4 = (gcnew System::Windows::Forms::TextBox());
			this->tb_mix_heatcap5 = (gcnew System::Windows::Forms::TextBox());
			this->tb_mix_heatcap1 = (gcnew System::Windows::Forms::TextBox());
			this->tb_mix_thermcond2 = (gcnew System::Windows::Forms::TextBox());
			this->tb_mix_thermcond3 = (gcnew System::Windows::Forms::TextBox());
			this->tb_mix_thermcond4 = (gcnew System::Windows::Forms::TextBox());
			this->tb_mix_thermcond5 = (gcnew System::Windows::Forms::TextBox());
			this->tb_mix_thermcond1 = (gcnew System::Windows::Forms::TextBox());
			this->tb_mix_visc2 = (gcnew System::Windows::Forms::TextBox());
			this->tb_mix_visc3 = (gcnew System::Windows::Forms::TextBox());
			this->tb_mixvisc4 = (gcnew System::Windows::Forms::TextBox());
			this->tb_mixvisc5 = (gcnew System::Windows::Forms::TextBox());
			this->tb_mix_visc1 = (gcnew System::Windows::Forms::TextBox());
			this->tb_mix_enthalpy2 = (gcnew System::Windows::Forms::TextBox());
			this->tb_mixenthalpy3 = (gcnew System::Windows::Forms::TextBox());
			this->tb_mixenthalpy4 = (gcnew System::Windows::Forms::TextBox());
			this->tb_mixenthalpy5 = (gcnew System::Windows::Forms::TextBox());
			this->tb_mix_enthalpy1 = (gcnew System::Windows::Forms::TextBox());
			this->cb_mix_heatcap = (gcnew System::Windows::Forms::ComboBox());
			this->cb_process_flow = (gcnew System::Windows::Forms::ComboBox());
			this->tb_proces_flow = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->cb_numberinputs = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// lb_hydrocarbons
			// 
			this->lb_hydrocarbons->AutoSize = true;
			this->lb_hydrocarbons->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lb_hydrocarbons->Location = System::Drawing::Point(12, 9);
			this->lb_hydrocarbons->Name = L"lb_hydrocarbons";
			this->lb_hydrocarbons->Size = System::Drawing::Size(158, 25);
			this->lb_hydrocarbons->TabIndex = 0;
			this->lb_hydrocarbons->Text = L"Hydrocarbons";
			// 
			// lb_nameinput
			// 
			this->lb_nameinput->AutoSize = true;
			this->lb_nameinput->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lb_nameinput->Location = System::Drawing::Point(6, 14);
			this->lb_nameinput->Name = L"lb_nameinput";
			this->lb_nameinput->Size = System::Drawing::Size(87, 18);
			this->lb_nameinput->TabIndex = 1;
			this->lb_nameinput->Text = L"Name input:";
			// 
			// tb_name_input
			// 
			this->tb_name_input->Location = System::Drawing::Point(131, 15);
			this->tb_name_input->Name = L"tb_name_input";
			this->tb_name_input->Size = System::Drawing::Size(100, 20);
			this->tb_name_input->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(6, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 18);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Process flow:";
			// 
			// lb_number_of_inputs
			// 
			this->lb_number_of_inputs->AutoSize = true;
			this->lb_number_of_inputs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->lb_number_of_inputs->Location = System::Drawing::Point(6, 85);
			this->lb_number_of_inputs->Name = L"lb_number_of_inputs";
			this->lb_number_of_inputs->Size = System::Drawing::Size(121, 18);
			this->lb_number_of_inputs->TabIndex = 7;
			this->lb_number_of_inputs->Text = L"Number of Inputs";
			// 
			// cb_heatcap
			// 
			this->cb_heatcap->FormattingEnabled = true;
			this->cb_heatcap->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"2", L"3", L"4", L"5" });
			this->cb_heatcap->Location = System::Drawing::Point(603, 173);
			this->cb_heatcap->Name = L"cb_heatcap";
			this->cb_heatcap->Size = System::Drawing::Size(121, 21);
			this->cb_heatcap->TabIndex = 8;
			this->cb_heatcap->SelectedIndexChanged += gcnew System::EventHandler(this, &Feedform::comboBox1_SelectedIndexChanged);
			// 
			// tb_phase
			// 
			this->tb_phase->AutoSize = true;
			this->tb_phase->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tb_phase->Location = System::Drawing::Point(6, 16);
			this->tb_phase->Name = L"tb_phase";
			this->tb_phase->Size = System::Drawing::Size(50, 18);
			this->tb_phase->TabIndex = 9;
			this->tb_phase->Text = L"Phase";
			// 
			// lb_temp
			// 
			this->lb_temp->AutoSize = true;
			this->lb_temp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lb_temp->Location = System::Drawing::Point(6, 43);
			this->lb_temp->Name = L"lb_temp";
			this->lb_temp->Size = System::Drawing::Size(92, 18);
			this->lb_temp->TabIndex = 10;
			this->lb_temp->Text = L"Temperature";
			this->lb_temp->Click += gcnew System::EventHandler(this, &Feedform::tb_temp_Click);
			// 
			// lb_pressure
			// 
			this->lb_pressure->AutoSize = true;
			this->lb_pressure->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lb_pressure->Location = System::Drawing::Point(6, 69);
			this->lb_pressure->Name = L"lb_pressure";
			this->lb_pressure->Size = System::Drawing::Size(68, 18);
			this->lb_pressure->TabIndex = 11;
			this->lb_pressure->Text = L"Pressure";
			// 
			// lb_enthalpy
			// 
			this->lb_enthalpy->AutoSize = true;
			this->lb_enthalpy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lb_enthalpy->Location = System::Drawing::Point(6, 95);
			this->lb_enthalpy->Name = L"lb_enthalpy";
			this->lb_enthalpy->Size = System::Drawing::Size(64, 18);
			this->lb_enthalpy->TabIndex = 12;
			this->lb_enthalpy->Text = L"Enthalpy";
			// 
			// lb_viscosity
			// 
			this->lb_viscosity->AutoSize = true;
			this->lb_viscosity->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lb_viscosity->Location = System::Drawing::Point(6, 121);
			this->lb_viscosity->Name = L"lb_viscosity";
			this->lb_viscosity->Size = System::Drawing::Size(67, 18);
			this->lb_viscosity->TabIndex = 13;
			this->lb_viscosity->Text = L"Viscosity";
			// 
			// lb_thermalconductivity
			// 
			this->lb_thermalconductivity->AutoSize = true;
			this->lb_thermalconductivity->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->lb_thermalconductivity->Location = System::Drawing::Point(6, 147);
			this->lb_thermalconductivity->Name = L"lb_thermalconductivity";
			this->lb_thermalconductivity->Size = System::Drawing::Size(143, 18);
			this->lb_thermalconductivity->TabIndex = 14;
			this->lb_thermalconductivity->Text = L"Thermal conductivity";
			// 
			// lb_heatcap
			// 
			this->lb_heatcap->AutoSize = true;
			this->lb_heatcap->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lb_heatcap->Location = System::Drawing::Point(6, 173);
			this->lb_heatcap->Name = L"lb_heatcap";
			this->lb_heatcap->Size = System::Drawing::Size(97, 18);
			this->lb_heatcap->TabIndex = 15;
			this->lb_heatcap->Text = L"Heat capacity";
			// 
			// lb_mixheatcap
			// 
			this->lb_mixheatcap->AutoSize = true;
			this->lb_mixheatcap->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lb_mixheatcap->Location = System::Drawing::Point(6, 283);
			this->lb_mixheatcap->Name = L"lb_mixheatcap";
			this->lb_mixheatcap->Size = System::Drawing::Size(97, 18);
			this->lb_mixheatcap->TabIndex = 22;
			this->lb_mixheatcap->Text = L"Heat capacity";
			// 
			// lb_mixthermcond
			// 
			this->lb_mixthermcond->AutoSize = true;
			this->lb_mixthermcond->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->lb_mixthermcond->Location = System::Drawing::Point(6, 257);
			this->lb_mixthermcond->Name = L"lb_mixthermcond";
			this->lb_mixthermcond->Size = System::Drawing::Size(143, 18);
			this->lb_mixthermcond->TabIndex = 21;
			this->lb_mixthermcond->Text = L"Thermal conductivity";
			// 
			// lb_mixviscosity
			// 
			this->lb_mixviscosity->AutoSize = true;
			this->lb_mixviscosity->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->lb_mixviscosity->Location = System::Drawing::Point(6, 231);
			this->lb_mixviscosity->Name = L"lb_mixviscosity";
			this->lb_mixviscosity->Size = System::Drawing::Size(67, 18);
			this->lb_mixviscosity->TabIndex = 20;
			this->lb_mixviscosity->Text = L"Viscosity";
			// 
			// lb_mixenthalpy
			// 
			this->lb_mixenthalpy->AutoSize = true;
			this->lb_mixenthalpy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lb_mixenthalpy->Location = System::Drawing::Point(6, 205);
			this->lb_mixenthalpy->Name = L"lb_mixenthalpy";
			this->lb_mixenthalpy->Size = System::Drawing::Size(64, 18);
			this->lb_mixenthalpy->TabIndex = 19;
			this->lb_mixenthalpy->Text = L"Enthalpy";
			// 
			// cb_phase1
			// 
			this->cb_phase1->FormattingEnabled = true;
			this->cb_phase1->Location = System::Drawing::Point(173, 17);
			this->cb_phase1->Name = L"cb_phase1";
			this->cb_phase1->Size = System::Drawing::Size(80, 21);
			this->cb_phase1->TabIndex = 23;
			// 
			// cb_phase2
			// 
			this->cb_phase2->FormattingEnabled = true;
			this->cb_phase2->Location = System::Drawing::Point(259, 17);
			this->cb_phase2->Name = L"cb_phase2";
			this->cb_phase2->Size = System::Drawing::Size(80, 21);
			this->cb_phase2->TabIndex = 24;
			// 
			// cb_phase3
			// 
			this->cb_phase3->FormattingEnabled = true;
			this->cb_phase3->Location = System::Drawing::Point(345, 17);
			this->cb_phase3->Name = L"cb_phase3";
			this->cb_phase3->Size = System::Drawing::Size(80, 21);
			this->cb_phase3->TabIndex = 25;
			// 
			// cb_phase4
			// 
			this->cb_phase4->FormattingEnabled = true;
			this->cb_phase4->Location = System::Drawing::Point(431, 17);
			this->cb_phase4->Name = L"cb_phase4";
			this->cb_phase4->Size = System::Drawing::Size(80, 21);
			this->cb_phase4->TabIndex = 26;
			// 
			// cb_phase5
			// 
			this->cb_phase5->FormattingEnabled = true;
			this->cb_phase5->Location = System::Drawing::Point(517, 17);
			this->cb_phase5->Name = L"cb_phase5";
			this->cb_phase5->Size = System::Drawing::Size(80, 21);
			this->cb_phase5->TabIndex = 27;
			// 
			// tb_temp1
			// 
			this->tb_temp1->Location = System::Drawing::Point(173, 44);
			this->tb_temp1->Name = L"tb_temp1";
			this->tb_temp1->Size = System::Drawing::Size(80, 20);
			this->tb_temp1->TabIndex = 28;
			// 
			// tb_temp5
			// 
			this->tb_temp5->Location = System::Drawing::Point(517, 44);
			this->tb_temp5->Name = L"tb_temp5";
			this->tb_temp5->Size = System::Drawing::Size(80, 20);
			this->tb_temp5->TabIndex = 29;
			// 
			// tb_temp4
			// 
			this->tb_temp4->Location = System::Drawing::Point(431, 44);
			this->tb_temp4->Name = L"tb_temp4";
			this->tb_temp4->Size = System::Drawing::Size(80, 20);
			this->tb_temp4->TabIndex = 30;
			// 
			// tb_temp3
			// 
			this->tb_temp3->Location = System::Drawing::Point(345, 44);
			this->tb_temp3->Name = L"tb_temp3";
			this->tb_temp3->Size = System::Drawing::Size(80, 20);
			this->tb_temp3->TabIndex = 31;
			// 
			// tb_temp2
			// 
			this->tb_temp2->Location = System::Drawing::Point(259, 44);
			this->tb_temp2->Name = L"tb_temp2";
			this->tb_temp2->Size = System::Drawing::Size(80, 20);
			this->tb_temp2->TabIndex = 32;
			// 
			// tb_press2
			// 
			this->tb_press2->Location = System::Drawing::Point(259, 70);
			this->tb_press2->Name = L"tb_press2";
			this->tb_press2->Size = System::Drawing::Size(80, 20);
			this->tb_press2->TabIndex = 37;
			// 
			// tb_press3
			// 
			this->tb_press3->Location = System::Drawing::Point(345, 70);
			this->tb_press3->Name = L"tb_press3";
			this->tb_press3->Size = System::Drawing::Size(80, 20);
			this->tb_press3->TabIndex = 36;
			// 
			// tb_press4
			// 
			this->tb_press4->Location = System::Drawing::Point(431, 70);
			this->tb_press4->Name = L"tb_press4";
			this->tb_press4->Size = System::Drawing::Size(80, 20);
			this->tb_press4->TabIndex = 35;
			// 
			// tb_press5
			// 
			this->tb_press5->Location = System::Drawing::Point(517, 70);
			this->tb_press5->Name = L"tb_press5";
			this->tb_press5->Size = System::Drawing::Size(80, 20);
			this->tb_press5->TabIndex = 34;
			// 
			// tb_press1
			// 
			this->tb_press1->Location = System::Drawing::Point(173, 70);
			this->tb_press1->Name = L"tb_press1";
			this->tb_press1->Size = System::Drawing::Size(80, 20);
			this->tb_press1->TabIndex = 33;
			// 
			// tb_enthalpy2
			// 
			this->tb_enthalpy2->Location = System::Drawing::Point(259, 96);
			this->tb_enthalpy2->Name = L"tb_enthalpy2";
			this->tb_enthalpy2->Size = System::Drawing::Size(80, 20);
			this->tb_enthalpy2->TabIndex = 42;
			// 
			// tb_enthalpy3
			// 
			this->tb_enthalpy3->Location = System::Drawing::Point(345, 96);
			this->tb_enthalpy3->Name = L"tb_enthalpy3";
			this->tb_enthalpy3->Size = System::Drawing::Size(80, 20);
			this->tb_enthalpy3->TabIndex = 41;
			// 
			// tb_enthalpy4
			// 
			this->tb_enthalpy4->Location = System::Drawing::Point(431, 96);
			this->tb_enthalpy4->Name = L"tb_enthalpy4";
			this->tb_enthalpy4->Size = System::Drawing::Size(80, 20);
			this->tb_enthalpy4->TabIndex = 40;
			// 
			// tb_enthalpy5
			// 
			this->tb_enthalpy5->Location = System::Drawing::Point(517, 96);
			this->tb_enthalpy5->Name = L"tb_enthalpy5";
			this->tb_enthalpy5->Size = System::Drawing::Size(80, 20);
			this->tb_enthalpy5->TabIndex = 39;
			// 
			// tb_enthalpy1
			// 
			this->tb_enthalpy1->Location = System::Drawing::Point(173, 96);
			this->tb_enthalpy1->Name = L"tb_enthalpy1";
			this->tb_enthalpy1->Size = System::Drawing::Size(80, 20);
			this->tb_enthalpy1->TabIndex = 38;
			// 
			// tb_viscosity2
			// 
			this->tb_viscosity2->Location = System::Drawing::Point(259, 122);
			this->tb_viscosity2->Name = L"tb_viscosity2";
			this->tb_viscosity2->Size = System::Drawing::Size(80, 20);
			this->tb_viscosity2->TabIndex = 47;
			// 
			// tb_viscosity3
			// 
			this->tb_viscosity3->Location = System::Drawing::Point(345, 122);
			this->tb_viscosity3->Name = L"tb_viscosity3";
			this->tb_viscosity3->Size = System::Drawing::Size(80, 20);
			this->tb_viscosity3->TabIndex = 46;
			// 
			// tb_viscosity4
			// 
			this->tb_viscosity4->Location = System::Drawing::Point(431, 122);
			this->tb_viscosity4->Name = L"tb_viscosity4";
			this->tb_viscosity4->Size = System::Drawing::Size(80, 20);
			this->tb_viscosity4->TabIndex = 45;
			// 
			// tb_viscosity5
			// 
			this->tb_viscosity5->Location = System::Drawing::Point(517, 122);
			this->tb_viscosity5->Name = L"tb_viscosity5";
			this->tb_viscosity5->Size = System::Drawing::Size(80, 20);
			this->tb_viscosity5->TabIndex = 44;
			// 
			// tb_viscosity1
			// 
			this->tb_viscosity1->Location = System::Drawing::Point(173, 122);
			this->tb_viscosity1->Name = L"tb_viscosity1";
			this->tb_viscosity1->Size = System::Drawing::Size(80, 20);
			this->tb_viscosity1->TabIndex = 43;
			// 
			// tb_thermcond2
			// 
			this->tb_thermcond2->Location = System::Drawing::Point(259, 148);
			this->tb_thermcond2->Name = L"tb_thermcond2";
			this->tb_thermcond2->Size = System::Drawing::Size(80, 20);
			this->tb_thermcond2->TabIndex = 52;
			// 
			// tb_thermcond3
			// 
			this->tb_thermcond3->Location = System::Drawing::Point(345, 148);
			this->tb_thermcond3->Name = L"tb_thermcond3";
			this->tb_thermcond3->Size = System::Drawing::Size(80, 20);
			this->tb_thermcond3->TabIndex = 51;
			// 
			// tb_thermcond4
			// 
			this->tb_thermcond4->Location = System::Drawing::Point(431, 148);
			this->tb_thermcond4->Name = L"tb_thermcond4";
			this->tb_thermcond4->Size = System::Drawing::Size(80, 20);
			this->tb_thermcond4->TabIndex = 50;
			// 
			// tb_thermcond5
			// 
			this->tb_thermcond5->Location = System::Drawing::Point(517, 148);
			this->tb_thermcond5->Name = L"tb_thermcond5";
			this->tb_thermcond5->Size = System::Drawing::Size(80, 20);
			this->tb_thermcond5->TabIndex = 49;
			// 
			// tb_thermcond1
			// 
			this->tb_thermcond1->Location = System::Drawing::Point(173, 148);
			this->tb_thermcond1->Name = L"tb_thermcond1";
			this->tb_thermcond1->Size = System::Drawing::Size(80, 20);
			this->tb_thermcond1->TabIndex = 48;
			// 
			// tb_heatcap2
			// 
			this->tb_heatcap2->Location = System::Drawing::Point(259, 174);
			this->tb_heatcap2->Name = L"tb_heatcap2";
			this->tb_heatcap2->Size = System::Drawing::Size(80, 20);
			this->tb_heatcap2->TabIndex = 57;
			// 
			// tb_heatcap3
			// 
			this->tb_heatcap3->Location = System::Drawing::Point(345, 174);
			this->tb_heatcap3->Name = L"tb_heatcap3";
			this->tb_heatcap3->Size = System::Drawing::Size(80, 20);
			this->tb_heatcap3->TabIndex = 56;
			// 
			// tb_heatcap4
			// 
			this->tb_heatcap4->Location = System::Drawing::Point(431, 174);
			this->tb_heatcap4->Name = L"tb_heatcap4";
			this->tb_heatcap4->Size = System::Drawing::Size(80, 20);
			this->tb_heatcap4->TabIndex = 55;
			// 
			// tb_heatcap5
			// 
			this->tb_heatcap5->Location = System::Drawing::Point(517, 174);
			this->tb_heatcap5->Name = L"tb_heatcap5";
			this->tb_heatcap5->Size = System::Drawing::Size(80, 20);
			this->tb_heatcap5->TabIndex = 54;
			// 
			// tb_heatcap1
			// 
			this->tb_heatcap1->Location = System::Drawing::Point(173, 174);
			this->tb_heatcap1->Name = L"tb_heatcap1";
			this->tb_heatcap1->Size = System::Drawing::Size(80, 20);
			this->tb_heatcap1->TabIndex = 53;
			// 
			// cb_temp
			// 
			this->cb_temp->FormattingEnabled = true;
			this->cb_temp->Location = System::Drawing::Point(603, 43);
			this->cb_temp->Name = L"cb_temp";
			this->cb_temp->Size = System::Drawing::Size(121, 21);
			this->cb_temp->TabIndex = 58;
			// 
			// cb_thermcond
			// 
			this->cb_thermcond->FormattingEnabled = true;
			this->cb_thermcond->Location = System::Drawing::Point(603, 147);
			this->cb_thermcond->Name = L"cb_thermcond";
			this->cb_thermcond->Size = System::Drawing::Size(121, 21);
			this->cb_thermcond->TabIndex = 60;
			// 
			// cb_viscosity
			// 
			this->cb_viscosity->FormattingEnabled = true;
			this->cb_viscosity->Location = System::Drawing::Point(603, 121);
			this->cb_viscosity->Name = L"cb_viscosity";
			this->cb_viscosity->Size = System::Drawing::Size(121, 21);
			this->cb_viscosity->TabIndex = 61;
			// 
			// cb_enthalpy
			// 
			this->cb_enthalpy->FormattingEnabled = true;
			this->cb_enthalpy->Location = System::Drawing::Point(603, 95);
			this->cb_enthalpy->Name = L"cb_enthalpy";
			this->cb_enthalpy->Size = System::Drawing::Size(121, 21);
			this->cb_enthalpy->TabIndex = 62;
			// 
			// cb_press
			// 
			this->cb_press->FormattingEnabled = true;
			this->cb_press->Location = System::Drawing::Point(603, 69);
			this->cb_press->Name = L"cb_press";
			this->cb_press->Size = System::Drawing::Size(121, 21);
			this->cb_press->TabIndex = 63;
			// 
			// cb_mix_enthalpy
			// 
			this->cb_mix_enthalpy->FormattingEnabled = true;
			this->cb_mix_enthalpy->Location = System::Drawing::Point(603, 206);
			this->cb_mix_enthalpy->Name = L"cb_mix_enthalpy";
			this->cb_mix_enthalpy->Size = System::Drawing::Size(121, 21);
			this->cb_mix_enthalpy->TabIndex = 99;
			// 
			// cb_mix_visc
			// 
			this->cb_mix_visc->FormattingEnabled = true;
			this->cb_mix_visc->Location = System::Drawing::Point(603, 232);
			this->cb_mix_visc->Name = L"cb_mix_visc";
			this->cb_mix_visc->Size = System::Drawing::Size(121, 21);
			this->cb_mix_visc->TabIndex = 98;
			// 
			// cb_mix_thermcond
			// 
			this->cb_mix_thermcond->FormattingEnabled = true;
			this->cb_mix_thermcond->Location = System::Drawing::Point(603, 258);
			this->cb_mix_thermcond->Name = L"cb_mix_thermcond";
			this->cb_mix_thermcond->Size = System::Drawing::Size(121, 21);
			this->cb_mix_thermcond->TabIndex = 97;
			// 
			// tb_mix_heatcap2
			// 
			this->tb_mix_heatcap2->Location = System::Drawing::Point(259, 285);
			this->tb_mix_heatcap2->Name = L"tb_mix_heatcap2";
			this->tb_mix_heatcap2->Size = System::Drawing::Size(80, 20);
			this->tb_mix_heatcap2->TabIndex = 95;
			// 
			// tb_mix_heatcap3
			// 
			this->tb_mix_heatcap3->Location = System::Drawing::Point(345, 285);
			this->tb_mix_heatcap3->Name = L"tb_mix_heatcap3";
			this->tb_mix_heatcap3->Size = System::Drawing::Size(80, 20);
			this->tb_mix_heatcap3->TabIndex = 94;
			// 
			// tb_mix_heatcap4
			// 
			this->tb_mix_heatcap4->Location = System::Drawing::Point(431, 285);
			this->tb_mix_heatcap4->Name = L"tb_mix_heatcap4";
			this->tb_mix_heatcap4->Size = System::Drawing::Size(80, 20);
			this->tb_mix_heatcap4->TabIndex = 93;
			// 
			// tb_mix_heatcap5
			// 
			this->tb_mix_heatcap5->Location = System::Drawing::Point(517, 285);
			this->tb_mix_heatcap5->Name = L"tb_mix_heatcap5";
			this->tb_mix_heatcap5->Size = System::Drawing::Size(80, 20);
			this->tb_mix_heatcap5->TabIndex = 92;
			// 
			// tb_mix_heatcap1
			// 
			this->tb_mix_heatcap1->Location = System::Drawing::Point(173, 285);
			this->tb_mix_heatcap1->Name = L"tb_mix_heatcap1";
			this->tb_mix_heatcap1->Size = System::Drawing::Size(80, 20);
			this->tb_mix_heatcap1->TabIndex = 91;
			// 
			// tb_mix_thermcond2
			// 
			this->tb_mix_thermcond2->Location = System::Drawing::Point(259, 259);
			this->tb_mix_thermcond2->Name = L"tb_mix_thermcond2";
			this->tb_mix_thermcond2->Size = System::Drawing::Size(80, 20);
			this->tb_mix_thermcond2->TabIndex = 90;
			// 
			// tb_mix_thermcond3
			// 
			this->tb_mix_thermcond3->Location = System::Drawing::Point(345, 259);
			this->tb_mix_thermcond3->Name = L"tb_mix_thermcond3";
			this->tb_mix_thermcond3->Size = System::Drawing::Size(80, 20);
			this->tb_mix_thermcond3->TabIndex = 89;
			// 
			// tb_mix_thermcond4
			// 
			this->tb_mix_thermcond4->Location = System::Drawing::Point(431, 259);
			this->tb_mix_thermcond4->Name = L"tb_mix_thermcond4";
			this->tb_mix_thermcond4->Size = System::Drawing::Size(80, 20);
			this->tb_mix_thermcond4->TabIndex = 88;
			// 
			// tb_mix_thermcond5
			// 
			this->tb_mix_thermcond5->Location = System::Drawing::Point(517, 259);
			this->tb_mix_thermcond5->Name = L"tb_mix_thermcond5";
			this->tb_mix_thermcond5->Size = System::Drawing::Size(80, 20);
			this->tb_mix_thermcond5->TabIndex = 87;
			// 
			// tb_mix_thermcond1
			// 
			this->tb_mix_thermcond1->Location = System::Drawing::Point(173, 259);
			this->tb_mix_thermcond1->Name = L"tb_mix_thermcond1";
			this->tb_mix_thermcond1->Size = System::Drawing::Size(80, 20);
			this->tb_mix_thermcond1->TabIndex = 86;
			// 
			// tb_mix_visc2
			// 
			this->tb_mix_visc2->Location = System::Drawing::Point(259, 233);
			this->tb_mix_visc2->Name = L"tb_mix_visc2";
			this->tb_mix_visc2->Size = System::Drawing::Size(80, 20);
			this->tb_mix_visc2->TabIndex = 85;
			// 
			// tb_mix_visc3
			// 
			this->tb_mix_visc3->Location = System::Drawing::Point(345, 233);
			this->tb_mix_visc3->Name = L"tb_mix_visc3";
			this->tb_mix_visc3->Size = System::Drawing::Size(80, 20);
			this->tb_mix_visc3->TabIndex = 84;
			// 
			// tb_mixvisc4
			// 
			this->tb_mixvisc4->Location = System::Drawing::Point(431, 233);
			this->tb_mixvisc4->Name = L"tb_mixvisc4";
			this->tb_mixvisc4->Size = System::Drawing::Size(80, 20);
			this->tb_mixvisc4->TabIndex = 83;
			// 
			// tb_mixvisc5
			// 
			this->tb_mixvisc5->Location = System::Drawing::Point(517, 233);
			this->tb_mixvisc5->Name = L"tb_mixvisc5";
			this->tb_mixvisc5->Size = System::Drawing::Size(80, 20);
			this->tb_mixvisc5->TabIndex = 82;
			// 
			// tb_mix_visc1
			// 
			this->tb_mix_visc1->Location = System::Drawing::Point(173, 233);
			this->tb_mix_visc1->Name = L"tb_mix_visc1";
			this->tb_mix_visc1->Size = System::Drawing::Size(80, 20);
			this->tb_mix_visc1->TabIndex = 81;
			// 
			// tb_mix_enthalpy2
			// 
			this->tb_mix_enthalpy2->Location = System::Drawing::Point(259, 207);
			this->tb_mix_enthalpy2->Name = L"tb_mix_enthalpy2";
			this->tb_mix_enthalpy2->Size = System::Drawing::Size(80, 20);
			this->tb_mix_enthalpy2->TabIndex = 80;
			// 
			// tb_mixenthalpy3
			// 
			this->tb_mixenthalpy3->Location = System::Drawing::Point(345, 207);
			this->tb_mixenthalpy3->Name = L"tb_mixenthalpy3";
			this->tb_mixenthalpy3->Size = System::Drawing::Size(80, 20);
			this->tb_mixenthalpy3->TabIndex = 79;
			// 
			// tb_mixenthalpy4
			// 
			this->tb_mixenthalpy4->Location = System::Drawing::Point(431, 207);
			this->tb_mixenthalpy4->Name = L"tb_mixenthalpy4";
			this->tb_mixenthalpy4->Size = System::Drawing::Size(80, 20);
			this->tb_mixenthalpy4->TabIndex = 78;
			// 
			// tb_mixenthalpy5
			// 
			this->tb_mixenthalpy5->Location = System::Drawing::Point(517, 207);
			this->tb_mixenthalpy5->Name = L"tb_mixenthalpy5";
			this->tb_mixenthalpy5->Size = System::Drawing::Size(80, 20);
			this->tb_mixenthalpy5->TabIndex = 77;
			// 
			// tb_mix_enthalpy1
			// 
			this->tb_mix_enthalpy1->Location = System::Drawing::Point(173, 207);
			this->tb_mix_enthalpy1->Name = L"tb_mix_enthalpy1";
			this->tb_mix_enthalpy1->Size = System::Drawing::Size(80, 20);
			this->tb_mix_enthalpy1->TabIndex = 76;
			// 
			// cb_mix_heatcap
			// 
			this->cb_mix_heatcap->FormattingEnabled = true;
			this->cb_mix_heatcap->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"2", L"3", L"4", L"5" });
			this->cb_mix_heatcap->Location = System::Drawing::Point(603, 284);
			this->cb_mix_heatcap->Name = L"cb_mix_heatcap";
			this->cb_mix_heatcap->Size = System::Drawing::Size(121, 21);
			this->cb_mix_heatcap->TabIndex = 65;
			// 
			// cb_process_flow
			// 
			this->cb_process_flow->FormattingEnabled = true;
			this->cb_process_flow->Location = System::Drawing::Point(237, 53);
			this->cb_process_flow->Name = L"cb_process_flow";
			this->cb_process_flow->Size = System::Drawing::Size(110, 21);
			this->cb_process_flow->TabIndex = 103;
			// 
			// tb_proces_flow
			// 
			this->tb_proces_flow->Location = System::Drawing::Point(131, 53);
			this->tb_proces_flow->Name = L"tb_proces_flow";
			this->tb_proces_flow->Size = System::Drawing::Size(100, 20);
			this->tb_proces_flow->TabIndex = 102;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->cb_numberinputs);
			this->groupBox1->Controls->Add(this->cb_process_flow);
			this->groupBox1->Controls->Add(this->tb_proces_flow);
			this->groupBox1->Controls->Add(this->lb_number_of_inputs);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->tb_name_input);
			this->groupBox1->Controls->Add(this->lb_nameinput);
			this->groupBox1->Location = System::Drawing::Point(17, 37);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(395, 120);
			this->groupBox1->TabIndex = 105;
			this->groupBox1->TabStop = false;
			// 
			// cb_numberinputs
			// 
			this->cb_numberinputs->FormattingEnabled = true;
			this->cb_numberinputs->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"2", L"3", L"4", L"5" });
			this->cb_numberinputs->Location = System::Drawing::Point(131, 86);
			this->cb_numberinputs->Name = L"cb_numberinputs";
			this->cb_numberinputs->Size = System::Drawing::Size(121, 21);
			this->cb_numberinputs->TabIndex = 104;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->tb_temp1);
			this->groupBox2->Controls->Add(this->cb_mix_enthalpy);
			this->groupBox2->Controls->Add(this->cb_mix_visc);
			this->groupBox2->Controls->Add(this->cb_mix_thermcond);
			this->groupBox2->Controls->Add(this->tb_mix_heatcap2);
			this->groupBox2->Controls->Add(this->tb_mix_heatcap3);
			this->groupBox2->Controls->Add(this->tb_mix_heatcap4);
			this->groupBox2->Controls->Add(this->tb_mix_heatcap5);
			this->groupBox2->Controls->Add(this->tb_mix_heatcap1);
			this->groupBox2->Controls->Add(this->tb_mix_thermcond2);
			this->groupBox2->Controls->Add(this->tb_mix_thermcond3);
			this->groupBox2->Controls->Add(this->tb_mix_thermcond4);
			this->groupBox2->Controls->Add(this->tb_mix_thermcond5);
			this->groupBox2->Controls->Add(this->tb_mix_thermcond1);
			this->groupBox2->Controls->Add(this->tb_mix_visc2);
			this->groupBox2->Controls->Add(this->tb_mix_visc3);
			this->groupBox2->Controls->Add(this->tb_mixvisc4);
			this->groupBox2->Controls->Add(this->tb_mixvisc5);
			this->groupBox2->Controls->Add(this->tb_mix_visc1);
			this->groupBox2->Controls->Add(this->tb_mix_enthalpy2);
			this->groupBox2->Controls->Add(this->tb_mixenthalpy3);
			this->groupBox2->Controls->Add(this->tb_mixenthalpy4);
			this->groupBox2->Controls->Add(this->tb_mixenthalpy5);
			this->groupBox2->Controls->Add(this->tb_mix_enthalpy1);
			this->groupBox2->Controls->Add(this->cb_mix_heatcap);
			this->groupBox2->Controls->Add(this->cb_press);
			this->groupBox2->Controls->Add(this->cb_enthalpy);
			this->groupBox2->Controls->Add(this->cb_viscosity);
			this->groupBox2->Controls->Add(this->cb_thermcond);
			this->groupBox2->Controls->Add(this->cb_temp);
			this->groupBox2->Controls->Add(this->tb_heatcap2);
			this->groupBox2->Controls->Add(this->tb_heatcap3);
			this->groupBox2->Controls->Add(this->tb_heatcap4);
			this->groupBox2->Controls->Add(this->tb_heatcap5);
			this->groupBox2->Controls->Add(this->tb_heatcap1);
			this->groupBox2->Controls->Add(this->tb_thermcond2);
			this->groupBox2->Controls->Add(this->tb_thermcond3);
			this->groupBox2->Controls->Add(this->tb_thermcond4);
			this->groupBox2->Controls->Add(this->tb_thermcond5);
			this->groupBox2->Controls->Add(this->tb_thermcond1);
			this->groupBox2->Controls->Add(this->tb_viscosity2);
			this->groupBox2->Controls->Add(this->tb_viscosity3);
			this->groupBox2->Controls->Add(this->tb_viscosity4);
			this->groupBox2->Controls->Add(this->tb_viscosity5);
			this->groupBox2->Controls->Add(this->tb_viscosity1);
			this->groupBox2->Controls->Add(this->tb_enthalpy2);
			this->groupBox2->Controls->Add(this->tb_enthalpy3);
			this->groupBox2->Controls->Add(this->tb_enthalpy4);
			this->groupBox2->Controls->Add(this->tb_enthalpy5);
			this->groupBox2->Controls->Add(this->tb_enthalpy1);
			this->groupBox2->Controls->Add(this->tb_press2);
			this->groupBox2->Controls->Add(this->tb_press3);
			this->groupBox2->Controls->Add(this->tb_press4);
			this->groupBox2->Controls->Add(this->tb_press5);
			this->groupBox2->Controls->Add(this->tb_press1);
			this->groupBox2->Controls->Add(this->tb_temp2);
			this->groupBox2->Controls->Add(this->tb_temp3);
			this->groupBox2->Controls->Add(this->tb_temp4);
			this->groupBox2->Controls->Add(this->tb_temp5);
			this->groupBox2->Controls->Add(this->cb_phase5);
			this->groupBox2->Controls->Add(this->cb_phase4);
			this->groupBox2->Controls->Add(this->cb_phase3);
			this->groupBox2->Controls->Add(this->cb_phase2);
			this->groupBox2->Controls->Add(this->cb_phase1);
			this->groupBox2->Controls->Add(this->lb_mixheatcap);
			this->groupBox2->Controls->Add(this->lb_mixthermcond);
			this->groupBox2->Controls->Add(this->lb_mixviscosity);
			this->groupBox2->Controls->Add(this->lb_mixenthalpy);
			this->groupBox2->Controls->Add(this->lb_heatcap);
			this->groupBox2->Controls->Add(this->lb_thermalconductivity);
			this->groupBox2->Controls->Add(this->lb_viscosity);
			this->groupBox2->Controls->Add(this->lb_enthalpy);
			this->groupBox2->Controls->Add(this->lb_pressure);
			this->groupBox2->Controls->Add(this->lb_temp);
			this->groupBox2->Controls->Add(this->tb_phase);
			this->groupBox2->Controls->Add(this->cb_heatcap);
			this->groupBox2->Location = System::Drawing::Point(17, 163);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(734, 312);
			this->groupBox2->TabIndex = 106;
			this->groupBox2->TabStop = false;
			// 
			// chart1
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(254, 578);
			this->chart1->Name = L"chart1";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Series1";
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(322, 119);
			this->chart1->TabIndex = 107;
			this->chart1->Text = L"chart1";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(348, 748);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 13);
			this->label6->TabIndex = 107;
			// 
			// Feedform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(844, 365);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->lb_hydrocarbons);
			this->Name = L"Feedform";
			this->Text = L"Feedform";
			this->Load += gcnew System::EventHandler(this, &Feedform::Feedform_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void OptimizeComboboxes()
		{
			
			optimize_cb_phase(cb_phase1); 
			optimize_cb_phase(cb_phase2);
			optimize_cb_phase(cb_phase3);
			optimize_cb_phase(cb_phase4);
			optimize_cb_phase(cb_phase5);
			optimalize_cb_pressure(cb_press);
			optimize_cb_temp(cb_temp);
			optimize_cb_enthalpy(cb_enthalpy);
			optimize_cb_enthalpy(cb_mix_enthalpy);
			optimize_cb_heatcap(cb_mix_heatcap);
			optimize_cb_heatcap(cb_heatcap);
			optimize_cb_thermalcond(cb_thermcond);
			optimize_cb_thermalcond(cb_mix_thermcond);
			optimize_cb_viscosity(cb_viscosity);
			optimize_cb_viscosity(cb_mix_visc);
		}
		void SetObjectsToArrays()
		{
			row3[0] = tb_temp3; row3[1] = tb_press3; row3[2] = tb_enthalpy3;
			row3[3] = tb_viscosity3; row3[4] = tb_thermcond3; row3[5] = tb_heatcap3;
			row4[0] = tb_temp4; row4[1] = tb_press4; row4[2] = tb_enthalpy4;
			row4[3] = tb_viscosity4; row4[4] = tb_thermcond4; row4[5] = tb_heatcap4;
			row5[0] = tb_temp5; row5[1] = tb_press5; row5[2] = tb_enthalpy5;
			row5[3] = tb_viscosity5; row5[4] = tb_thermcond5; row5[5] = tb_heatcap5;
			row1mix[0] = tb_mix_enthalpy1; row1mix[1] = tb_mix_visc1; row1mix[2] = tb_mix_thermcond1; row1mix[3] = tb_mix_heatcap1;
			row2mix[0] = tb_mix_enthalpy2; row2mix[1] = tb_mix_visc2; row2mix[2] = tb_mix_thermcond2; row2mix[3] = tb_mix_heatcap2;
			row3mix[0] = tb_mixenthalpy3; row3mix[1] = tb_mix_visc3; row3mix[2] = tb_mix_thermcond3; row3mix[3] = tb_mix_heatcap3;
			row4mix[0] = tb_mixenthalpy4; row4mix[1] = tb_mixvisc4; row4mix[2] = tb_mix_thermcond4; row4mix[3] = tb_mix_heatcap4;
			row5mix[0] = tb_mixenthalpy5; row5mix[1] = tb_mixvisc5; row5mix[2] = tb_mix_thermcond5; row5mix[3] = tb_mix_heatcap5;
			rowmixlbs[0] = lb_mixenthalpy; rowmixlbs[1] = lb_mixviscosity; rowmixlbs[2] = lb_mixthermcond; rowmixlbs[3] = lb_mixheatcap;
			rowmixcbs[0] = cb_mix_enthalpy; rowmixcbs[1] = cb_mix_visc; rowmixcbs[2] = cb_mix_thermcond; rowmixcbs[3] = cb_mix_heatcap;
		}
		void RefreshInputRows() //Set the visibility of the rows depending on number of input
		{
			if (cb_numberinputs->SelectedIndex == 2)
			{
				cb_phase3->Visible = false;
				cb_phase4->Visible = false;
				cb_phase5->Visible = false;
				SetArrayUnvisible(row3);
				SetArrayUnvisible(row4);
				SetArrayUnvisible(row5);
			}
			if (cb_numberinputs->SelectedIndex == 3)
			{
				cb_phase3->Visible = true;
				cb_phase4->Visible = false;
				cb_phase5->Visible = false;
				SetArrayVisible(row3);
				SetArrayUnvisible(row4);
				SetArrayUnvisible(row5);
			}
			if (cb_numberinputs->SelectedIndex == 4)
			{
				cb_phase3->Visible = true;
				cb_phase4->Visible = true;
				cb_phase5->Visible = false;
				SetArrayVisible(row3);
				SetArrayVisible(row4);
				SetArrayUnvisible(row5);
			}
			if (cb_numberinputs->SelectedIndex == 5)
			{
				cb_phase3->Visible = true;
				cb_phase4->Visible = false;
				cb_phase5->Visible = false;
				SetArrayVisible(row3);
				SetArrayVisible(row4);
				SetArrayVisible(row5);
			}
		}
		void RefreshMixPart(ComboBox^phase, array<TextBox^> ^ar) //Depending on phase show the mix part input
		{
			if (phase->SelectedIndex == 2)
				SetArrayVisible(ar);
			else
				SetArrayUnvisible(ar);
		}
		void RefreshMixPartAll()
		{
			RefreshMixPart(cb_phase1, row1mix);
			RefreshMixPart(cb_phase2, row2mix); 
			RefreshMixPart(cb_phase3, row3mix);
			RefreshMixPart(cb_phase4, row4mix);
			RefreshMixPart(cb_phase5, row5mix);
		}
		

	private: System::Void Feedform_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void tb_temp_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void tableLayoutPanel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
};
}
