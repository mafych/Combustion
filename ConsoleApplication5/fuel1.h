#pragma once
#include "Fuelclass.h"
#include <iostream>
#include <string>
#include "Functions.h"



namespace ConsoleApplication5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Forms;
	using namespace System::IO;

	/// <summary>
	/// Summary for fuelform
	/// </summary>
	public ref class fuelform : public System::Windows::Forms::Form
	{
	public:
		fuelform(array <fuel^> ^a, String ^b)
		{
			for (int i = 0; i < input_fuel_vol->Length; i++)
			{
				this->input_fuel_vol[i] = a[i]->get_amount_vol();
				this->input_fuel_mass[i] = a[i]->get_amount_mass();
			}
			
			fuelmix = a;
			fuelname = b;
			InitializeComponent();
			InitializeVariables();
			InitializeDensityCalculation();
			InitializeEnthalpy();
			Refresh_tbs();
			//
			//TODO: Add the constructor code here
			//
			Vol_mass_percent_cb->SelectedIndex = 0;
		}

	private:
		array<double> ^input_fuel_vol = gcnew array<double>(37);//array for the values of tb
		array<double> ^input_fuel_mass = gcnew array<double>(37);//array for the values of tb
		array<TextBox^> ^fuel_tbs = gcnew array<TextBox^>(37);//array for the textboxes with fuel value
		array <fuel^> ^fuelmix = gcnew array<fuel^>(37);
		double density;
		double lhv;
		double hhv;
		double presure;
		double temperature;
		double density_from_p_T;
	private: System::Windows::Forms::Label^  label84;
	private: System::Windows::Forms::TextBox^  fuelname_tb;
	private: System::Windows::Forms::Button^  SAvefuel_bt;
	private: System::Windows::Forms::Button^  Loadfuel_bt;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::Button^  normalize_tb;
	private: System::Windows::Forms::Label^  lb_LHV;
	private: System::Windows::Forms::TextBox^  tb_LHV;
	private: System::Windows::Forms::Label^  label85;
	private: System::Windows::Forms::TextBox^  tb_HHV;
	private: System::Windows::Forms::ComboBox^  cb_LHV;
	private: System::Windows::Forms::ComboBox^  cb_HHV;

	private: System::Windows::Forms::Label^  label86;
	private: System::Windows::Forms::TextBox^  tb_density;

	private: System::Windows::Forms::ComboBox^  cb_density;
	private: System::Windows::Forms::Label^  lb_densitycalcheader;
	private: System::Windows::Forms::Label^  label87;
	private: System::Windows::Forms::ComboBox^  cb_density_calc;

	private: System::Windows::Forms::TextBox^  tb_denstity_calc;

	private: System::Windows::Forms::Label^  label88;
	private: System::Windows::Forms::ComboBox^  cb_temp;

	private: System::Windows::Forms::ComboBox^  cb_presure;
	private: System::Windows::Forms::TextBox^  tb_temp;


	private: System::Windows::Forms::Label^  lb_inserttemp;
	private: System::Windows::Forms::TextBox^  tb_presure;


	private: System::Windows::Forms::Label^  lb_insertpresure;


			 String ^fuelname;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~fuelform()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  Apply_bt;
	private: System::Windows::Forms::Label^  Header_lb;
	private: System::Windows::Forms::Label^  line1_lb;
	private: System::Windows::Forms::Button^  Cancel_bt;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TextBox^  Ethane_tb;
	private: System::Windows::Forms::TextBox^  Propane_tb;
	private: System::Windows::Forms::TextBox^  nButane_tb;
	private: System::Windows::Forms::TextBox^  Isobutane_tb;
	private: System::Windows::Forms::TextBox^  nPentane_tb;
	private: System::Windows::Forms::TextBox^  Isopentane_tb;
	private: System::Windows::Forms::TextBox^  Neopentane_tb;
	private: System::Windows::Forms::TextBox^  textbox;







	private: System::Windows::Forms::TextBox^  Methane_tb;

	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  Carbondioxide_tb;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  Carbonmonoxide_tb;

	private: System::Windows::Forms::TextBox^  Nitrogen_tb;

	private: System::Windows::Forms::TextBox^  Oxygen_tb;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  Hydrogen_tb;

	private: System::Windows::Forms::TextBox^  Carbon_tb;


	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::TextBox^  Propylene_tb;
	private: System::Windows::Forms::TextBox^  nButene_tb;
	private: System::Windows::Forms::TextBox^  Isobutene_tb;
	private: System::Windows::Forms::TextBox^  nPentene_tb;

			 


	private: System::Windows::Forms::TextBox^  Ethylene_tb;

	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::TextBox^  n_Hexane_tb;
	private: System::Windows::Forms::TextBox^  nHeptane_tb;
	private: System::Windows::Forms::TextBox^  n_Octane_tb;
	private: System::Windows::Forms::TextBox^  nDecane_tb;





	private: System::Windows::Forms::TextBox^  nNonane_tb;

	private: System::Windows::Forms::Label^  label47;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::TextBox^  Sulphur_tb;

	private: System::Windows::Forms::ComboBox^  Vol_mass_percent_cb;
	private: System::Windows::Forms::Label^  label75;

	private: System::Windows::Forms::Label^  label77;
	private: System::Windows::Forms::Label^  label78;
	private: System::Windows::Forms::Label^  label79;
	private: System::Windows::Forms::Label^  label80;
	private: System::Windows::Forms::Label^  label81;
	private: System::Windows::Forms::Label^  label82;
	private: System::Windows::Forms::TextBox^  Hydrogensulfide_tb;
	private: System::Windows::Forms::TextBox^  Sulphurdioxide_tb;
	private: System::Windows::Forms::TextBox^  Watervapour_tb;
	private: System::Windows::Forms::TextBox^  air_tb;




	private: System::Windows::Forms::Label^  label65;
	private: System::Windows::Forms::Label^  label66;
	private: System::Windows::Forms::Label^  label67;
	private: System::Windows::Forms::Label^  label68;
	private: System::Windows::Forms::Label^  label69;
	private: System::Windows::Forms::Label^  label70;
	private: System::Windows::Forms::Label^  label71;
	private: System::Windows::Forms::Label^  label72;
	private: System::Windows::Forms::Label^  label73;
	private: System::Windows::Forms::TextBox^  Naphthalene_tb;
	private: System::Windows::Forms::TextBox^  Methylalcohole_tb;
	private: System::Windows::Forms::TextBox^  Ethylalcohole_tb;
	private: System::Windows::Forms::TextBox^  Ammonia_tb;
	private: System::Windows::Forms::TextBox^  Textbox;




	private: System::Windows::Forms::TextBox^  Acetylene_tb;

	private: System::Windows::Forms::Label^  label74;
	private: System::Windows::Forms::Label^  label64;
	private: System::Windows::Forms::Label^  label58;
	private: System::Windows::Forms::Label^  label59;
	private: System::Windows::Forms::Label^  label60;
	private: System::Windows::Forms::Label^  label61;
	private: System::Windows::Forms::Label^  label62;
	private: System::Windows::Forms::Label^  label63;
	private: System::Windows::Forms::TextBox^  Benzene_tb;
	private: System::Windows::Forms::TextBox^  Toluene_tb;
	private: System::Windows::Forms::TextBox^  Xylene_tb;



	private: System::Windows::Forms::Label^  label57;
	private: System::Windows::Forms::Label^  label56;
	private: System::Windows::Forms::Label^  label55;
	private: System::Windows::Forms::Label^  label54;
	private: System::Windows::Forms::Label^  label53;
	private: System::Windows::Forms::Label^  label52;
	private: System::Windows::Forms::Label^  label51;
	private: System::Windows::Forms::Label^  label50;
	private: System::Windows::Forms::Label^  label49;
	private: System::Windows::Forms::Label^  label48;
private: System::Windows::Forms::Button^  natural_gas_bt;
private: System::Windows::Forms::Button^  HFO_bt;
private: System::Windows::Forms::Button^  LFO_bt;




	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label76;
	private: System::Windows::Forms::Label^  label83;
	private: System::Windows::Forms::TextBox^  sum_tb;
	private:
		/// <summary>
		void InitializeDensityCalculation()
		{
			optimalize_cb_pressure(this->cb_presure);
			optimize_cb_temp(this->cb_temp);
			optimize_cb_density(this->cb_density_calc);
			tb_presure->Text = L"101,325";
			tb_temp->Text = L"20";

		}
		void InitializeEnthalpy()
		{
			optimize_cb_enthalpy(cb_LHV);
			optimize_cb_enthalpy(cb_HHV);
			optimize_cb_density(cb_density);
		}
		void InitializeVariables(void) //create the numreicla variabes
		{
			/*for each(int i in input_fuel)
			{
				input_fuel[i] = 0.00;
			};*/
			//put the textboxes in the array
			fuel_tbs[0] = this->Carbon_tb; fuel_tbs[1] = this->Hydrogen_tb; fuel_tbs[2] = this->Oxygen_tb; fuel_tbs[3] = this->Nitrogen_tb; fuel_tbs[4] = this->Sulphur_tb; fuel_tbs[5] = this->Carbonmonoxide_tb; fuel_tbs[6] = this->Carbondioxide_tb; fuel_tbs[7] = this->Methane_tb; fuel_tbs[8] = this->Ethane_tb; fuel_tbs[9] = this->Propane_tb; fuel_tbs[10] = this->nButane_tb; fuel_tbs[11] = this->Isobutane_tb; fuel_tbs[12] = this->nPentane_tb; fuel_tbs[13] = this->Isopentane_tb;
			fuel_tbs[14] = this->Neopentane_tb; fuel_tbs[15] = this->n_Hexane_tb; fuel_tbs[16] = this->nHeptane_tb; fuel_tbs[17] = this->n_Octane_tb; fuel_tbs[18] = this->nNonane_tb; fuel_tbs[19] = this->nDecane_tb; fuel_tbs[20] = this->Ethylene_tb; fuel_tbs[21] = this->Propylene_tb; fuel_tbs[22] = this->nButene_tb; fuel_tbs[23] = this->Isobutene_tb; fuel_tbs[24] = this->nPentene_tb; fuel_tbs[25] = this->Benzene_tb; fuel_tbs[26] = this->Toluene_tb;
			fuel_tbs[27] = this->Xylene_tb; fuel_tbs[28] = this->Acetylene_tb; fuel_tbs[29] = this->Naphthalene_tb; fuel_tbs[30] = this->Methylalcohole_tb; fuel_tbs[31] = this->Ethylalcohole_tb; fuel_tbs[32] = this->Ammonia_tb;
			fuel_tbs[33] = this->Hydrogensulfide_tb; fuel_tbs[34] = this->Sulphurdioxide_tb; fuel_tbs[35] = this->Watervapour_tb; fuel_tbs[36] = this->air_tb;
			this->Hydrogensulfide_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Sulphurdioxide_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Watervapour_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->air_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Naphthalene_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Methylalcohole_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Ethylalcohole_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Ammonia_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Acetylene_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Benzene_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Toluene_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Xylene_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->nHeptane_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->n_Octane_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->nDecane_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->nNonane_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Sulphur_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Propylene_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->nButene_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Isobutene_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->nPentene_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Ethylene_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->n_Hexane_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Ethane_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Propane_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->nButane_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Isobutane_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->nPentane_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Isopentane_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Neopentane_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Methane_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Carbondioxide_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Carbonmonoxide_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Nitrogen_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Oxygen_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);

		}
		public:void set_fuelmix(array<fuel^> ^fuelmix1)
		{
			this-> fuelmix = fuelmix1;
			for (int i = 0; i < (this->fuelmix->Length); i++)
			{
				this->input_fuel_vol[i] = fuelmix1[i]->get_amount_vol();
				this->input_fuel_mass[i] = fuelmix1[i]->get_amount_mass();
			}
		}

		void Refresh_tbs(void)
		{
			if (Vol_mass_percent_cb->SelectedIndex == 1) //mass
			{
				if ((round(100 * sum_array(input_fuel_mass)) / 100.) == 100)
				{
					set_volume_amount(input_fuel_mass, input_fuel_vol, fuelmix);
					double hhv2 = 0;
					for (int i = 0; i < input_fuel_mass->Length; i++)
					{
						hhv2 += (input_fuel_mass[i] * (1. / 100.) * (fuelmix[i]->get_hhv()));
					}
					this->hhv = hhv2;
					double lhv2 = 0;
					for (int i = 0; i < input_fuel_mass->Length; i++)
					{
						lhv2 += (input_fuel_mass[i] * (1. / 100.) * (fuelmix[i]->get_lhv()));
					}
					this->lhv = lhv2;
					double density2 = 0;
					for (int i = 0; i < input_fuel_vol->Length; i++)
					{
						density2 += (input_fuel_vol[i] * (1. / 100.) * (fuelmix[i]->get_density()));
					}
					this->density = density2;
					out_enthalpy(lhv, tb_LHV, cb_LHV);
					out_enthalpy(hhv, tb_HHV, cb_HHV);
					out_density(density, tb_density, cb_density);
					DensityCalculation();

				}
			
				for (int i = 0; i < input_fuel_mass->Length; i++)
					fuel_tbs[i]->Text = input_fuel_mass[i].ToString("F2");
				sum_tb->Text = sum_array(input_fuel_mass).ToString("F2");
				if (sum_array(input_fuel_mass) > 0.01 && (round(100*sum_array(input_fuel_mass))/100.) != 100)
				{
					this->Vol_mass_percent_cb->Enabled = false;
					
					this->SAvefuel_bt->Enabled = false;
				}
				else
				{
					this->Vol_mass_percent_cb->Enabled = true;
					this->SAvefuel_bt->Enabled = true;
				}
				if((round(100 * sum_array(input_fuel_mass)) / 100.) != 100)
					this->SAvefuel_bt->Enabled = false;
			}
			if (Vol_mass_percent_cb->SelectedIndex == 0)
			{
				if ((round(100 * sum_array(input_fuel_vol)) / 100.) == 100)
				{
					set_mass_amount(input_fuel_mass, input_fuel_vol, fuelmix);
					double hhv2 = 0;
					for (int i = 0; i < input_fuel_mass->Length; i++)
					{
						hhv2 += (input_fuel_mass[i] * (1. / 100.) * (fuelmix[i]->get_hhv()));
					}
					this->hhv = hhv2;
					double lhv2 = 0;
					for (int i = 0; i < input_fuel_mass->Length; i++)
					{
						lhv2 += (input_fuel_mass[i] * (1. / 100.) * (fuelmix[i]->get_lhv()));
					}
					this->lhv = lhv2;
					double density2 = 0;
					for (int i = 0; i < input_fuel_vol->Length; i++)
					{
						density2 += (input_fuel_vol[i] * (1. / 100.) * (fuelmix[i]->get_density()));
					}
					this->density = density2;
					out_enthalpy(lhv, tb_LHV, cb_LHV);
					out_enthalpy(hhv, tb_HHV, cb_HHV);
					out_density(density, tb_density, cb_density);
					DensityCalculation();
				}
				for (int i = 0; i < input_fuel_vol->Length; i++)
					fuel_tbs[i]->Text = input_fuel_vol[i].ToString("F2");
				sum_tb->Text = sum_array(input_fuel_vol).ToString("F2");
				if (sum_array(input_fuel_vol) > 0.001 && (round(100 * sum_array(input_fuel_vol)) / 100.) != 100)
				{this->Vol_mass_percent_cb->Enabled = false;
				this->SAvefuel_bt->Enabled = false;
				}
				else
				{
					this->Vol_mass_percent_cb->Enabled = true;
					this->SAvefuel_bt->Enabled = true;
				}
				if((round(100 * sum_array(input_fuel_vol)) / 100.) != 100)
					this->SAvefuel_bt->Enabled = false;

			}
			this->fuelname_tb->Text = fuelname;
			if (fuelname =="")
			{ 
				
				this->fuelname = L"My fuel";
				this->fuelname_tb->Text = fuelname;
			}
			


		}

		Void save_fuel_process(SaveFileDialog^ sfd)
		{
			
			{
				StreamWriter^ stream = gcnew StreamWriter(sfd->FileName);
				stream->WriteLine(fuelname);
				for (int i = 0; i < input_fuel_vol->Length; i++)
				{
					stream->WriteLine(input_fuel_vol[i].ToString());
				}
				// Code to write the stream goes here.
				stream -> Close();
			}
			
		}
		Void Load_fuel_prozess(String^ filename)
		{
			try
			{
				StreamReader^ reader = File::OpenText(filename);
				fuelname = reader->ReadLine();
				for (int i = 0; i < input_fuel_vol->Length; i++)
					input_fuel_vol[i] = double::Parse(reader->ReadLine());
				set_mass_amount(input_fuel_mass, input_fuel_vol, fuelmix);
				Refresh_tbs();
			}
			catch(Exception ^e)
			{
				MessageBox::Show(this, L"Error reading file", L"Error reading file", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			
		



		}
		public:delegate void EventDelegate1(System::Object^sender, EventArgs ^e, array<fuel^> ^message, String^name);
		public:event EventDelegate1^ myevent;
		public: void issuemyevent(System::Object ^sender, System::EventArgs ^e)
		{	
			for (int i = 0; i < input_fuel_vol->Length; i++)
				fuelmix[i]->set_amount_vol(input_fuel_vol[i]);
			this->myevent(this, e, fuelmix, fuelname);
		}
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Apply_bt = (gcnew System::Windows::Forms::Button());
			this->Header_lb = (gcnew System::Windows::Forms::Label());
			this->line1_lb = (gcnew System::Windows::Forms::Label());
			this->Cancel_bt = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Vol_mass_percent_cb = (gcnew System::Windows::Forms::ComboBox());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->Hydrogensulfide_tb = (gcnew System::Windows::Forms::TextBox());
			this->Sulphurdioxide_tb = (gcnew System::Windows::Forms::TextBox());
			this->Watervapour_tb = (gcnew System::Windows::Forms::TextBox());
			this->air_tb = (gcnew System::Windows::Forms::TextBox());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->Naphthalene_tb = (gcnew System::Windows::Forms::TextBox());
			this->Methylalcohole_tb = (gcnew System::Windows::Forms::TextBox());
			this->Ethylalcohole_tb = (gcnew System::Windows::Forms::TextBox());
			this->Ammonia_tb = (gcnew System::Windows::Forms::TextBox());
			this->Acetylene_tb = (gcnew System::Windows::Forms::TextBox());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->Benzene_tb = (gcnew System::Windows::Forms::TextBox());
			this->Toluene_tb = (gcnew System::Windows::Forms::TextBox());
			this->Xylene_tb = (gcnew System::Windows::Forms::TextBox());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->nHeptane_tb = (gcnew System::Windows::Forms::TextBox());
			this->n_Octane_tb = (gcnew System::Windows::Forms::TextBox());
			this->nDecane_tb = (gcnew System::Windows::Forms::TextBox());
			this->nNonane_tb = (gcnew System::Windows::Forms::TextBox());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->Sulphur_tb = (gcnew System::Windows::Forms::TextBox());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->Propylene_tb = (gcnew System::Windows::Forms::TextBox());
			this->nButene_tb = (gcnew System::Windows::Forms::TextBox());
			this->Isobutene_tb = (gcnew System::Windows::Forms::TextBox());
			this->nPentene_tb = (gcnew System::Windows::Forms::TextBox());
			this->Ethylene_tb = (gcnew System::Windows::Forms::TextBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->n_Hexane_tb = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->Ethane_tb = (gcnew System::Windows::Forms::TextBox());
			this->Propane_tb = (gcnew System::Windows::Forms::TextBox());
			this->nButane_tb = (gcnew System::Windows::Forms::TextBox());
			this->Isobutane_tb = (gcnew System::Windows::Forms::TextBox());
			this->nPentane_tb = (gcnew System::Windows::Forms::TextBox());
			this->Isopentane_tb = (gcnew System::Windows::Forms::TextBox());
			this->Neopentane_tb = (gcnew System::Windows::Forms::TextBox());
			this->Methane_tb = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->Carbondioxide_tb = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Carbonmonoxide_tb = (gcnew System::Windows::Forms::TextBox());
			this->Nitrogen_tb = (gcnew System::Windows::Forms::TextBox());
			this->Oxygen_tb = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Hydrogen_tb = (gcnew System::Windows::Forms::TextBox());
			this->Carbon_tb = (gcnew System::Windows::Forms::TextBox());
			this->natural_gas_bt = (gcnew System::Windows::Forms::Button());
			this->HFO_bt = (gcnew System::Windows::Forms::Button());
			this->LFO_bt = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->sum_tb = (gcnew System::Windows::Forms::TextBox());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->fuelname_tb = (gcnew System::Windows::Forms::TextBox());
			this->SAvefuel_bt = (gcnew System::Windows::Forms::Button());
			this->Loadfuel_bt = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->normalize_tb = (gcnew System::Windows::Forms::Button());
			this->lb_LHV = (gcnew System::Windows::Forms::Label());
			this->tb_LHV = (gcnew System::Windows::Forms::TextBox());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->tb_HHV = (gcnew System::Windows::Forms::TextBox());
			this->cb_LHV = (gcnew System::Windows::Forms::ComboBox());
			this->cb_HHV = (gcnew System::Windows::Forms::ComboBox());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->tb_density = (gcnew System::Windows::Forms::TextBox());
			this->cb_density = (gcnew System::Windows::Forms::ComboBox());
			this->lb_densitycalcheader = (gcnew System::Windows::Forms::Label());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->cb_density_calc = (gcnew System::Windows::Forms::ComboBox());
			this->tb_denstity_calc = (gcnew System::Windows::Forms::TextBox());
			this->label88 = (gcnew System::Windows::Forms::Label());
			this->cb_temp = (gcnew System::Windows::Forms::ComboBox());
			this->cb_presure = (gcnew System::Windows::Forms::ComboBox());
			this->tb_temp = (gcnew System::Windows::Forms::TextBox());
			this->lb_inserttemp = (gcnew System::Windows::Forms::Label());
			this->tb_presure = (gcnew System::Windows::Forms::TextBox());
			this->lb_insertpresure = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Apply_bt
			// 
			this->Apply_bt->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Apply_bt->AutoSize = true;
			this->Apply_bt->Location = System::Drawing::Point(909, 708);
			this->Apply_bt->Name = L"Apply_bt";
			this->Apply_bt->Size = System::Drawing::Size(83, 25);
			this->Apply_bt->TabIndex = 0;
			this->Apply_bt->Text = L"Apply";
			this->Apply_bt->UseVisualStyleBackColor = true;
			this->Apply_bt->Click += gcnew System::EventHandler(this, &fuelform::Apply_bt_Click);
			// 
			// Header_lb
			// 
			this->Header_lb->AutoSize = true;
			this->Header_lb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->Header_lb->Location = System::Drawing::Point(28, 9);
			this->Header_lb->Name = L"Header_lb";
			this->Header_lb->Size = System::Drawing::Size(198, 25);
			this->Header_lb->TabIndex = 1;
			this->Header_lb->Text = L"Fuel composition:";
			// 
			// line1_lb
			// 
			this->line1_lb->AutoSize = true;
			this->line1_lb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->line1_lb->Location = System::Drawing::Point(30, 45);
			this->line1_lb->Name = L"line1_lb";
			this->line1_lb->Size = System::Drawing::Size(332, 18);
			this->line1_lb->TabIndex = 2;
			this->line1_lb->Text = L"Select the amount of every component in the fuel.";
			// 
			// Cancel_bt
			// 
			this->Cancel_bt->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->Cancel_bt->AutoSize = true;
			this->Cancel_bt->Location = System::Drawing::Point(813, 708);
			this->Cancel_bt->Name = L"Cancel_bt";
			this->Cancel_bt->Size = System::Drawing::Size(90, 25);
			this->Cancel_bt->TabIndex = 3;
			this->Cancel_bt->Text = L"Cancel";
			this->Cancel_bt->UseVisualStyleBackColor = true;
			this->Cancel_bt->Click += gcnew System::EventHandler(this, &fuelform::Cancel_bt_Click);
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->AutoScrollMargin = System::Drawing::Size(10, 10);
			this->panel1->Controls->Add(this->Vol_mass_percent_cb);
			this->panel1->Controls->Add(this->label75);
			this->panel1->Controls->Add(this->label76);
			this->panel1->Controls->Add(this->label77);
			this->panel1->Controls->Add(this->label78);
			this->panel1->Controls->Add(this->label79);
			this->panel1->Controls->Add(this->label80);
			this->panel1->Controls->Add(this->label81);
			this->panel1->Controls->Add(this->label82);
			this->panel1->Controls->Add(this->Hydrogensulfide_tb);
			this->panel1->Controls->Add(this->Sulphurdioxide_tb);
			this->panel1->Controls->Add(this->Watervapour_tb);
			this->panel1->Controls->Add(this->air_tb);
			this->panel1->Controls->Add(this->label65);
			this->panel1->Controls->Add(this->label66);
			this->panel1->Controls->Add(this->label67);
			this->panel1->Controls->Add(this->label68);
			this->panel1->Controls->Add(this->label69);
			this->panel1->Controls->Add(this->label70);
			this->panel1->Controls->Add(this->label71);
			this->panel1->Controls->Add(this->label72);
			this->panel1->Controls->Add(this->label73);
			this->panel1->Controls->Add(this->Naphthalene_tb);
			this->panel1->Controls->Add(this->Methylalcohole_tb);
			this->panel1->Controls->Add(this->Ethylalcohole_tb);
			this->panel1->Controls->Add(this->Ammonia_tb);
			this->panel1->Controls->Add(this->Acetylene_tb);
			this->panel1->Controls->Add(this->label74);
			this->panel1->Controls->Add(this->label64);
			this->panel1->Controls->Add(this->label58);
			this->panel1->Controls->Add(this->label59);
			this->panel1->Controls->Add(this->label60);
			this->panel1->Controls->Add(this->label61);
			this->panel1->Controls->Add(this->label62);
			this->panel1->Controls->Add(this->label63);
			this->panel1->Controls->Add(this->Benzene_tb);
			this->panel1->Controls->Add(this->Toluene_tb);
			this->panel1->Controls->Add(this->Xylene_tb);
			this->panel1->Controls->Add(this->label57);
			this->panel1->Controls->Add(this->label56);
			this->panel1->Controls->Add(this->label55);
			this->panel1->Controls->Add(this->label54);
			this->panel1->Controls->Add(this->label53);
			this->panel1->Controls->Add(this->label52);
			this->panel1->Controls->Add(this->label51);
			this->panel1->Controls->Add(this->label50);
			this->panel1->Controls->Add(this->label49);
			this->panel1->Controls->Add(this->label48);
			this->panel1->Controls->Add(this->nHeptane_tb);
			this->panel1->Controls->Add(this->n_Octane_tb);
			this->panel1->Controls->Add(this->nDecane_tb);
			this->panel1->Controls->Add(this->nNonane_tb);
			this->panel1->Controls->Add(this->label47);
			this->panel1->Controls->Add(this->label46);
			this->panel1->Controls->Add(this->Sulphur_tb);
			this->panel1->Controls->Add(this->label45);
			this->panel1->Controls->Add(this->label44);
			this->panel1->Controls->Add(this->label43);
			this->panel1->Controls->Add(this->label42);
			this->panel1->Controls->Add(this->label41);
			this->panel1->Controls->Add(this->label40);
			this->panel1->Controls->Add(this->label39);
			this->panel1->Controls->Add(this->label38);
			this->panel1->Controls->Add(this->label37);
			this->panel1->Controls->Add(this->Propylene_tb);
			this->panel1->Controls->Add(this->nButene_tb);
			this->panel1->Controls->Add(this->Isobutene_tb);
			this->panel1->Controls->Add(this->nPentene_tb);
			this->panel1->Controls->Add(this->Ethylene_tb);
			this->panel1->Controls->Add(this->label36);
			this->panel1->Controls->Add(this->label33);
			this->panel1->Controls->Add(this->label30);
			this->panel1->Controls->Add(this->label31);
			this->panel1->Controls->Add(this->label35);
			this->panel1->Controls->Add(this->label34);
			this->panel1->Controls->Add(this->label32);
			this->panel1->Controls->Add(this->label29);
			this->panel1->Controls->Add(this->label28);
			this->panel1->Controls->Add(this->label27);
			this->panel1->Controls->Add(this->label26);
			this->panel1->Controls->Add(this->n_Hexane_tb);
			this->panel1->Controls->Add(this->label24);
			this->panel1->Controls->Add(this->label25);
			this->panel1->Controls->Add(this->label23);
			this->panel1->Controls->Add(this->label22);
			this->panel1->Controls->Add(this->label21);
			this->panel1->Controls->Add(this->label20);
			this->panel1->Controls->Add(this->label19);
			this->panel1->Controls->Add(this->label18);
			this->panel1->Controls->Add(this->Ethane_tb);
			this->panel1->Controls->Add(this->Propane_tb);
			this->panel1->Controls->Add(this->nButane_tb);
			this->panel1->Controls->Add(this->Isobutane_tb);
			this->panel1->Controls->Add(this->nPentane_tb);
			this->panel1->Controls->Add(this->Isopentane_tb);
			this->panel1->Controls->Add(this->Neopentane_tb);
			this->panel1->Controls->Add(this->Methane_tb);
			this->panel1->Controls->Add(this->label17);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->Carbondioxide_tb);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->Carbonmonoxide_tb);
			this->panel1->Controls->Add(this->Nitrogen_tb);
			this->panel1->Controls->Add(this->Oxygen_tb);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->Hydrogen_tb);
			this->panel1->Controls->Add(this->Carbon_tb);
			this->panel1->Location = System::Drawing::Point(12, 144);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(773, 553);
			this->panel1->TabIndex = 4;
			// 
			// Vol_mass_percent_cb
			// 
			this->Vol_mass_percent_cb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->Vol_mass_percent_cb->FormattingEnabled = true;
			this->Vol_mass_percent_cb->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Volums percentage amount", L"Mass percentage amount" });
			this->Vol_mass_percent_cb->Location = System::Drawing::Point(497, 11);
			this->Vol_mass_percent_cb->Name = L"Vol_mass_percent_cb";
			this->Vol_mass_percent_cb->Size = System::Drawing::Size(238, 26);
			this->Vol_mass_percent_cb->TabIndex = 0;
			this->Vol_mass_percent_cb->SelectedIndexChanged += gcnew System::EventHandler(this, &fuelform::Vol_mass_percent_cb_SelectedIndexChanged);
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label75->Location = System::Drawing::Point(312, 1168);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(36, 18);
			this->label75->TabIndex = 126;
			this->label75->Text = L"H₂O";
			this->label75->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label76->Location = System::Drawing::Point(311, 1311);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(0, 18);
			this->label76->TabIndex = 125;
			this->label76->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label77->Location = System::Drawing::Point(312, 1140);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(35, 18);
			this->label77->TabIndex = 124;
			this->label77->Text = L"SO₂";
			this->label77->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label78->Location = System::Drawing::Point(312, 1116);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(34, 18);
			this->label78->TabIndex = 123;
			this->label78->Text = L"H₂S";
			this->label78->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label79->Location = System::Drawing::Point(31, 1116);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(142, 18);
			this->label79->TabIndex = 122;
			this->label79->Text = L"34. Hydrogen sulfide";
			// 
			// label80
			// 
			this->label80->AutoSize = true;
			this->label80->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label80->Location = System::Drawing::Point(31, 1140);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(132, 18);
			this->label80->TabIndex = 121;
			this->label80->Text = L"35. Sulphur dioxide";
			// 
			// label81
			// 
			this->label81->AutoSize = true;
			this->label81->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label81->Location = System::Drawing::Point(31, 1168);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(121, 18);
			this->label81->TabIndex = 120;
			this->label81->Text = L"36. Water vapour";
			// 
			// label82
			// 
			this->label82->AutoSize = true;
			this->label82->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label82->Location = System::Drawing::Point(31, 1194);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(49, 18);
			this->label82->TabIndex = 119;
			this->label82->Text = L"37. Air";
			// 
			// Hydrogensulfide_tb
			// 
			this->Hydrogensulfide_tb->Location = System::Drawing::Point(618, 1117);
			this->Hydrogensulfide_tb->Name = L"Hydrogensulfide_tb";
			this->Hydrogensulfide_tb->Size = System::Drawing::Size(83, 20);
			this->Hydrogensulfide_tb->TabIndex = 34;
			this->Hydrogensulfide_tb->Text = L"0,00";
			this->Hydrogensulfide_tb->Enter += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Hydrogensulfide_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			// 
			// Sulphurdioxide_tb
			// 
			this->Sulphurdioxide_tb->Location = System::Drawing::Point(618, 1143);
			this->Sulphurdioxide_tb->Name = L"Sulphurdioxide_tb";
			this->Sulphurdioxide_tb->Size = System::Drawing::Size(83, 20);
			this->Sulphurdioxide_tb->TabIndex = 35;
			this->Sulphurdioxide_tb->Text = L"0,00";
			this->Sulphurdioxide_tb->Enter += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Sulphurdioxide_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			// 
			// Watervapour_tb
			// 
			this->Watervapour_tb->Location = System::Drawing::Point(618, 1169);
			this->Watervapour_tb->Name = L"Watervapour_tb";
			this->Watervapour_tb->Size = System::Drawing::Size(83, 20);
			this->Watervapour_tb->TabIndex = 36;
			this->Watervapour_tb->Text = L"0,00";
			this->Watervapour_tb->Enter += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Watervapour_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			// 
			// air_tb
			// 
			this->air_tb->Location = System::Drawing::Point(618, 1195);
			this->air_tb->Name = L"air_tb";
			this->air_tb->Size = System::Drawing::Size(83, 20);
			this->air_tb->TabIndex = 37;
			this->air_tb->Text = L"0,00";
			this->air_tb->Enter += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->air_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label65->Location = System::Drawing::Point(312, 949);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(40, 18);
			this->label65->TabIndex = 114;
			this->label65->Text = L"C₂H₂";
			this->label65->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label66->Location = System::Drawing::Point(312, 1027);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(63, 18);
			this->label66->TabIndex = 113;
			this->label66->Text = L"C₂H₅OH";
			this->label66->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label67->Location = System::Drawing::Point(312, 1053);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(35, 18);
			this->label67->TabIndex = 112;
			this->label67->Text = L"NH₃";
			this->label67->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label68->Location = System::Drawing::Point(312, 999);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(58, 18);
			this->label68->TabIndex = 111;
			this->label68->Text = L"CH₃OH";
			this->label68->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label69->Location = System::Drawing::Point(312, 975);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(45, 18);
			this->label69->TabIndex = 110;
			this->label69->Text = L"C₁₀H₈";
			this->label69->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label70->Location = System::Drawing::Point(31, 975);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(114, 18);
			this->label70->TabIndex = 109;
			this->label70->Text = L"30. Naphthalene";
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label71->Location = System::Drawing::Point(31, 999);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(143, 18);
			this->label71->TabIndex = 108;
			this->label71->Text = L"31. Methyl alchohole";
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label72->Location = System::Drawing::Point(31, 1027);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(124, 18);
			this->label72->TabIndex = 107;
			this->label72->Text = L"32. Ethyl alcohole";
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label73->Location = System::Drawing::Point(31, 1053);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(95, 18);
			this->label73->TabIndex = 106;
			this->label73->Text = L"33. Ammonia";
			// 
			// Naphthalene_tb
			// 
			this->Naphthalene_tb->Location = System::Drawing::Point(618, 976);
			this->Naphthalene_tb->Name = L"Naphthalene_tb";
			this->Naphthalene_tb->Size = System::Drawing::Size(83, 20);
			this->Naphthalene_tb->TabIndex = 30;
			this->Naphthalene_tb->Text = L"0,00";
			this->Naphthalene_tb->Enter += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Naphthalene_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			// 
			// Methylalcohole_tb
			// 
			this->Methylalcohole_tb->Location = System::Drawing::Point(618, 1002);
			this->Methylalcohole_tb->Name = L"Methylalcohole_tb";
			this->Methylalcohole_tb->Size = System::Drawing::Size(83, 20);
			this->Methylalcohole_tb->TabIndex = 31;
			this->Methylalcohole_tb->Text = L"0,00";
			this->Methylalcohole_tb->Enter += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Methylalcohole_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			// 
			// Ethylalcohole_tb
			// 
			this->Ethylalcohole_tb->Location = System::Drawing::Point(618, 1028);
			this->Ethylalcohole_tb->Name = L"Ethylalcohole_tb";
			this->Ethylalcohole_tb->Size = System::Drawing::Size(83, 20);
			this->Ethylalcohole_tb->TabIndex = 32;
			this->Ethylalcohole_tb->Text = L"0,00";
			this->Ethylalcohole_tb->Enter += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Ethylalcohole_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			// 
			// Ammonia_tb
			// 
			this->Ammonia_tb->Location = System::Drawing::Point(618, 1054);
			this->Ammonia_tb->Name = L"Ammonia_tb";
			this->Ammonia_tb->Size = System::Drawing::Size(83, 20);
			this->Ammonia_tb->TabIndex = 33;
			this->Ammonia_tb->Text = L"0,00";
			this->Ammonia_tb->Enter += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Ammonia_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			// 
			// Acetylene_tb
			// 
			this->Acetylene_tb->Location = System::Drawing::Point(618, 950);
			this->Acetylene_tb->Name = L"Acetylene_tb";
			this->Acetylene_tb->Size = System::Drawing::Size(83, 20);
			this->Acetylene_tb->TabIndex = 29;
			this->Acetylene_tb->Text = L"0,00";
			this->Acetylene_tb->Enter += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Acetylene_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label74->Location = System::Drawing::Point(31, 949);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(95, 18);
			this->label74->TabIndex = 100;
			this->label74->Text = L"29. Acetylene";
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label64->Location = System::Drawing::Point(31, 917);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(157, 18);
			this->label64->TabIndex = 99;
			this->label64->Text = L"Miscellanous gases";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label58->Location = System::Drawing::Point(312, 858);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(40, 18);
			this->label58->TabIndex = 98;
			this->label58->Text = L"C₇H₈";
			this->label58->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label59->Location = System::Drawing::Point(312, 884);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(45, 18);
			this->label59->TabIndex = 97;
			this->label59->Text = L"C₈H₁₀";
			this->label59->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label60->Location = System::Drawing::Point(312, 830);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(40, 18);
			this->label60->TabIndex = 96;
			this->label60->Text = L"C₆H₆";
			this->label60->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label61->Location = System::Drawing::Point(31, 830);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(90, 18);
			this->label61->TabIndex = 95;
			this->label61->Text = L"26. Benzene";
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label62->Location = System::Drawing::Point(31, 858);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(85, 18);
			this->label62->TabIndex = 94;
			this->label62->Text = L"27. Toluene";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label63->Location = System::Drawing::Point(31, 884);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(76, 18);
			this->label63->TabIndex = 93;
			this->label63->Text = L"28. Xylene";
			// 
			// Benzene_tb
			// 
			this->Benzene_tb->Location = System::Drawing::Point(618, 833);
			this->Benzene_tb->Name = L"Benzene_tb";
			this->Benzene_tb->Size = System::Drawing::Size(83, 20);
			this->Benzene_tb->TabIndex = 26;
			this->Benzene_tb->Text = L"0,00";
			this->Benzene_tb->Enter += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Benzene_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			// 
			// Toluene_tb
			// 
			this->Toluene_tb->Location = System::Drawing::Point(618, 859);
			this->Toluene_tb->Name = L"Toluene_tb";
			this->Toluene_tb->Size = System::Drawing::Size(83, 20);
			this->Toluene_tb->TabIndex = 27;
			this->Toluene_tb->Text = L"0,00";
			this->Toluene_tb->Enter += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Toluene_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			// 
			// Xylene_tb
			// 
			this->Xylene_tb->Location = System::Drawing::Point(618, 885);
			this->Xylene_tb->Name = L"Xylene_tb";
			this->Xylene_tb->Size = System::Drawing::Size(83, 20);
			this->Xylene_tb->TabIndex = 28;
			this->Xylene_tb->Text = L"0,00";
			this->Xylene_tb->Enter += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Xylene_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label57->Location = System::Drawing::Point(31, 786);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(187, 18);
			this->label57->TabIndex = 89;
			this->label57->Text = L"Aromatic series CₙH₂ₙ₋₆";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label56->Location = System::Drawing::Point(312, 576);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(50, 18);
			this->label56->TabIndex = 88;
			this->label56->Text = L"C₁₀H₂₂";
			this->label56->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label55->Location = System::Drawing::Point(312, 498);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(45, 18);
			this->label55->TabIndex = 87;
			this->label55->Text = L"C₇H₁₆";
			this->label55->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label54->Location = System::Drawing::Point(312, 423);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(45, 18);
			this->label54->TabIndex = 86;
			this->label54->Text = L"C₆H₁₄";
			this->label54->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label53->Location = System::Drawing::Point(312, 550);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(45, 18);
			this->label53->TabIndex = 85;
			this->label53->Text = L"C₉H₂₀";
			this->label53->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label52->Location = System::Drawing::Point(312, 524);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(45, 18);
			this->label52->TabIndex = 84;
			this->label52->Text = L"C₈H₁₈";
			this->label52->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label51->Location = System::Drawing::Point(29, 498);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(92, 18);
			this->label51->TabIndex = 83;
			this->label51->Text = L"17. n-Heptan";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label50->Location = System::Drawing::Point(30, 524);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(93, 18);
			this->label50->TabIndex = 82;
			this->label50->Text = L"18. n-Octane";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label49->Location = System::Drawing::Point(30, 550);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(97, 18);
			this->label49->TabIndex = 81;
			this->label49->Text = L"19. n-Nonane";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label48->Location = System::Drawing::Point(30, 576);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(96, 18);
			this->label48->TabIndex = 80;
			this->label48->Text = L"20. n-Decane";
			// 
			// nHeptane_tb
			// 
			this->nHeptane_tb->Location = System::Drawing::Point(618, 499);
			this->nHeptane_tb->Name = L"nHeptane_tb";
			this->nHeptane_tb->Size = System::Drawing::Size(83, 20);
			this->nHeptane_tb->TabIndex = 17;
			this->nHeptane_tb->Text = L"0,00";
			this->nHeptane_tb->Enter += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->nHeptane_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			// 
			// n_Octane_tb
			// 
			this->n_Octane_tb->Location = System::Drawing::Point(618, 525);
			this->n_Octane_tb->Name = L"n_Octane_tb";
			this->n_Octane_tb->Size = System::Drawing::Size(83, 20);
			this->n_Octane_tb->TabIndex = 18;
			this->n_Octane_tb->Text = L"0,00";
			this->n_Octane_tb->Enter += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->n_Octane_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			// 
			// nDecane_tb
			// 
			this->nDecane_tb->Location = System::Drawing::Point(618, 577);
			this->nDecane_tb->Name = L"nDecane_tb";
			this->nDecane_tb->Size = System::Drawing::Size(83, 20);
			this->nDecane_tb->TabIndex = 20;
			this->nDecane_tb->Text = L"0,00";
			this->nDecane_tb->Enter += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->nDecane_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			// 
			// nNonane_tb
			// 
			this->nNonane_tb->Location = System::Drawing::Point(618, 551);
			this->nNonane_tb->Name = L"nNonane_tb";
			this->nNonane_tb->Size = System::Drawing::Size(83, 20);
			this->nNonane_tb->TabIndex = 19;
			this->nNonane_tb->Text = L"0,00";
			this->nNonane_tb->Enter += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->nNonane_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label47->Location = System::Drawing::Point(312, 144);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(18, 18);
			this->label47->TabIndex = 75;
			this->label47->Text = L"S";
			this->label47->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label46->Location = System::Drawing::Point(29, 144);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(74, 18);
			this->label46->TabIndex = 74;
			this->label46->Text = L"5. Sulphur";
			// 
			// Sulphur_tb
			// 
			this->Sulphur_tb->Location = System::Drawing::Point(618, 145);
			this->Sulphur_tb->Name = L"Sulphur_tb";
			this->Sulphur_tb->Size = System::Drawing::Size(83, 20);
			this->Sulphur_tb->TabIndex = 5;
			this->Sulphur_tb->Text = L"0,00";
			this->Sulphur_tb->Enter += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Sulphur_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label45->Location = System::Drawing::Point(312, 649);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(40, 18);
			this->label45->TabIndex = 72;
			this->label45->Text = L"C₂H₄";
			this->label45->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label44->Location = System::Drawing::Point(312, 727);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(40, 18);
			this->label44->TabIndex = 71;
			this->label44->Text = L"C₄H₈";
			this->label44->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label43->Location = System::Drawing::Point(312, 753);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(45, 18);
			this->label43->TabIndex = 70;
			this->label43->Text = L"C₅H₁₀";
			this->label43->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label42->Location = System::Drawing::Point(312, 699);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(40, 18);
			this->label42->TabIndex = 69;
			this->label42->Text = L"C₄H₈";
			this->label42->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label41->Location = System::Drawing::Point(312, 675);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(40, 18);
			this->label41->TabIndex = 68;
			this->label41->Text = L"C₃H₆";
			this->label41->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label40->Location = System::Drawing::Point(31, 675);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(98, 18);
			this->label40->TabIndex = 67;
			this->label40->Text = L"22. Propylene";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label39->Location = System::Drawing::Point(31, 699);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(159, 18);
			this->label39->TabIndex = 66;
			this->label39->Text = L"23. n-Butene (butylene)";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label38->Location = System::Drawing::Point(31, 727);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(96, 18);
			this->label38->TabIndex = 65;
			this->label38->Text = L"24. Isobutene";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label37->Location = System::Drawing::Point(31, 753);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(103, 18);
			this->label37->TabIndex = 64;
			this->label37->Text = L"25. n- Pentene";
			// 
			// Propylene_tb
			// 
			this->Propylene_tb->Location = System::Drawing::Point(618, 676);
			this->Propylene_tb->Name = L"Propylene_tb";
			this->Propylene_tb->Size = System::Drawing::Size(83, 20);
			this->Propylene_tb->TabIndex = 22;
			this->Propylene_tb->Text = L"0,00";
			this->Propylene_tb->Enter += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Propylene_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			// 
			// nButene_tb
			// 
			this->nButene_tb->Location = System::Drawing::Point(618, 702);
			this->nButene_tb->Name = L"nButene_tb";
			this->nButene_tb->Size = System::Drawing::Size(83, 20);
			this->nButene_tb->TabIndex = 23;
			this->nButene_tb->Text = L"0,00";
			this->nButene_tb->Enter += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->nButene_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			// 
			// Isobutene_tb
			// 
			this->Isobutene_tb->Location = System::Drawing::Point(618, 728);
			this->Isobutene_tb->Name = L"Isobutene_tb";
			this->Isobutene_tb->Size = System::Drawing::Size(83, 20);
			this->Isobutene_tb->TabIndex = 24;
			this->Isobutene_tb->Text = L"0,00";
			this->Isobutene_tb->Enter += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Isobutene_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			// 
			// nPentene_tb
			// 
			this->nPentene_tb->Location = System::Drawing::Point(618, 754);
			this->nPentene_tb->Name = L"nPentene_tb";
			this->nPentene_tb->Size = System::Drawing::Size(83, 20);
			this->nPentene_tb->TabIndex = 25;
			this->nPentene_tb->Text = L"0,00";
			this->nPentene_tb->Enter += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->nPentene_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			// 
			// Ethylene_tb
			// 
			this->Ethylene_tb->Location = System::Drawing::Point(618, 650);
			this->Ethylene_tb->Name = L"Ethylene_tb";
			this->Ethylene_tb->Size = System::Drawing::Size(83, 20);
			this->Ethylene_tb->TabIndex = 21;
			this->Ethylene_tb->Text = L"0,00";
			this->Ethylene_tb->Enter += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Ethylene_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label36->Location = System::Drawing::Point(31, 649);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(88, 18);
			this->label36->TabIndex = 57;
			this->label36->Text = L"21. Ethylene";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label33->Location = System::Drawing::Point(29, 609);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(152, 18);
			this->label33->TabIndex = 56;
			this->label33->Text = L"Olefin series CₙH₂ₙ";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label30->Location = System::Drawing::Point(312, 446);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(45, 18);
			this->label30->TabIndex = 55;
			this->label30->Text = L"C₅H₁₂";
			this->label30->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label31->Location = System::Drawing::Point(312, 420);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(45, 18);
			this->label31->TabIndex = 54;
			this->label31->Text = L"C₅H₁₂";
			this->label31->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label35->Location = System::Drawing::Point(312, 368);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(45, 18);
			this->label35->TabIndex = 53;
			this->label35->Text = L"C₄H₁₀";
			this->label35->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label34->Location = System::Drawing::Point(312, 342);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(45, 18);
			this->label34->TabIndex = 52;
			this->label34->Text = L"C₄H₁₀";
			this->label34->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label32->Location = System::Drawing::Point(312, 394);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(45, 18);
			this->label32->TabIndex = 50;
			this->label32->Text = L"C₅H₁₂";
			this->label32->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label29->Location = System::Drawing::Point(312, 472);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(45, 18);
			this->label29->TabIndex = 47;
			this->label29->Text = L"C₆H₁₄";
			this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label28->Location = System::Drawing::Point(312, 316);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(40, 18);
			this->label28->TabIndex = 46;
			this->label28->Text = L"C₃H₈";
			this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label27->Location = System::Drawing::Point(312, 290);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(40, 18);
			this->label27->TabIndex = 45;
			this->label27->Text = L"C₂H₆";
			this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label26->Location = System::Drawing::Point(312, 264);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(35, 18);
			this->label26->TabIndex = 44;
			this->label26->Text = L"CH₄";
			this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// n_Hexane_tb
			// 
			this->n_Hexane_tb->Location = System::Drawing::Point(618, 473);
			this->n_Hexane_tb->Name = L"n_Hexane_tb";
			this->n_Hexane_tb->Size = System::Drawing::Size(83, 20);
			this->n_Hexane_tb->TabIndex = 16;
			this->n_Hexane_tb->Text = L"0,00";
			this->n_Hexane_tb->Enter += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->n_Hexane_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label24->Location = System::Drawing::Point(29, 472);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(95, 18);
			this->label24->TabIndex = 40;
			this->label24->Text = L"16. n-Hexane";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label25->Location = System::Drawing::Point(29, 446);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(112, 18);
			this->label25->TabIndex = 41;
			this->label25->Text = L"15. Neopentane";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label23->Location = System::Drawing::Point(30, 290);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(70, 18);
			this->label23->TabIndex = 39;
			this->label23->Text = L"9. Ethane";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label22->Location = System::Drawing::Point(29, 316);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(88, 18);
			this->label22->TabIndex = 38;
			this->label22->Text = L"10. Propane";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label21->Location = System::Drawing::Point(29, 342);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(95, 18);
			this->label21->TabIndex = 37;
			this->label21->Text = L"11. n- Butane";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label20->Location = System::Drawing::Point(29, 368);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(96, 18);
			this->label20->TabIndex = 36;
			this->label20->Text = L"12. Isobutane";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label19->Location = System::Drawing::Point(30, 395);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(99, 18);
			this->label19->TabIndex = 35;
			this->label19->Text = L"13. n-Pentane";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label18->Location = System::Drawing::Point(29, 421);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(104, 18);
			this->label18->TabIndex = 34;
			this->label18->Text = L"14. Isopentane";
			// 
			// Ethane_tb
			// 
			this->Ethane_tb->Location = System::Drawing::Point(618, 291);
			this->Ethane_tb->Name = L"Ethane_tb";
			this->Ethane_tb->Size = System::Drawing::Size(83, 20);
			this->Ethane_tb->TabIndex = 9;
			this->Ethane_tb->Text = L"0,00";
			this->Ethane_tb->Enter += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Ethane_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			// 
			// Propane_tb
			// 
			this->Propane_tb->Location = System::Drawing::Point(618, 317);
			this->Propane_tb->Name = L"Propane_tb";
			this->Propane_tb->Size = System::Drawing::Size(83, 20);
			this->Propane_tb->TabIndex = 10;
			this->Propane_tb->Text = L"0,00";
			this->Propane_tb->Enter += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Propane_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			// 
			// nButane_tb
			// 
			this->nButane_tb->Location = System::Drawing::Point(618, 343);
			this->nButane_tb->Name = L"nButane_tb";
			this->nButane_tb->Size = System::Drawing::Size(83, 20);
			this->nButane_tb->TabIndex = 11;
			this->nButane_tb->Text = L"0,00";
			this->nButane_tb->Enter += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->nButane_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			// 
			// Isobutane_tb
			// 
			this->Isobutane_tb->Location = System::Drawing::Point(618, 369);
			this->Isobutane_tb->Name = L"Isobutane_tb";
			this->Isobutane_tb->Size = System::Drawing::Size(83, 20);
			this->Isobutane_tb->TabIndex = 12;
			this->Isobutane_tb->Text = L"0,00";
			this->Isobutane_tb->Enter += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Isobutane_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			// 
			// nPentane_tb
			// 
			this->nPentane_tb->Location = System::Drawing::Point(618, 395);
			this->nPentane_tb->Name = L"nPentane_tb";
			this->nPentane_tb->Size = System::Drawing::Size(83, 20);
			this->nPentane_tb->TabIndex = 13;
			this->nPentane_tb->Text = L"0,00";
			this->nPentane_tb->Enter += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->nPentane_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			// 
			// Isopentane_tb
			// 
			this->Isopentane_tb->Location = System::Drawing::Point(618, 421);
			this->Isopentane_tb->Name = L"Isopentane_tb";
			this->Isopentane_tb->Size = System::Drawing::Size(83, 20);
			this->Isopentane_tb->TabIndex = 14;
			this->Isopentane_tb->Text = L"0,00";
			this->Isopentane_tb->Enter += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Isopentane_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			// 
			// Neopentane_tb
			// 
			this->Neopentane_tb->Location = System::Drawing::Point(618, 447);
			this->Neopentane_tb->Name = L"Neopentane_tb";
			this->Neopentane_tb->Size = System::Drawing::Size(83, 20);
			this->Neopentane_tb->TabIndex = 15;
			this->Neopentane_tb->Text = L"0,00";
			this->Neopentane_tb->Enter += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Neopentane_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			// 
			// Methane_tb
			// 
			this->Methane_tb->Location = System::Drawing::Point(618, 265);
			this->Methane_tb->Name = L"Methane_tb";
			this->Methane_tb->Size = System::Drawing::Size(83, 20);
			this->Methane_tb->TabIndex = 8;
			this->Methane_tb->Text = L"0,00";
			this->Methane_tb->Enter += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Methane_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label17->Location = System::Drawing::Point(30, 264);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(81, 18);
			this->label17->TabIndex = 24;
			this->label17->Text = L"8. Methane";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label16->Location = System::Drawing::Point(29, 229);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(170, 18);
			this->label16->TabIndex = 23;
			this->label16->Text = L"Parafine series CₙH₂ₙ";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label15->Location = System::Drawing::Point(312, 66);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(24, 18);
			this->label15->TabIndex = 22;
			this->label15->Text = L"H₂";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label14->Location = System::Drawing::Point(312, 170);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(31, 18);
			this->label14->TabIndex = 21;
			this->label14->Text = L"CO";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label13->Location = System::Drawing::Point(312, 118);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(24, 18);
			this->label13->TabIndex = 20;
			this->label13->Text = L"N₂";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label12->Location = System::Drawing::Point(312, 196);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(36, 18);
			this->label12->TabIndex = 19;
			this->label12->Text = L"CO₂";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label11->Location = System::Drawing::Point(312, 95);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(25, 18);
			this->label11->TabIndex = 18;
			this->label11->Text = L"O₂";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label10->Location = System::Drawing::Point(312, 43);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(19, 18);
			this->label10->TabIndex = 17;
			this->label10->Text = L"C";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->label8->Location = System::Drawing::Point(312, 11);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(70, 18);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Formula";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(30, 11);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(87, 18);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Substance";
			// 
			// Carbondioxide_tb
			// 
			this->Carbondioxide_tb->Location = System::Drawing::Point(618, 197);
			this->Carbondioxide_tb->Name = L"Carbondioxide_tb";
			this->Carbondioxide_tb->Size = System::Drawing::Size(83, 20);
			this->Carbondioxide_tb->TabIndex = 7;
			this->Carbondioxide_tb->Text = L"0,00";
			this->Carbondioxide_tb->Enter += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Carbondioxide_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(29, 196);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(123, 18);
			this->label6->TabIndex = 12;
			this->label6->Text = L"7. Carbon dioxide";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label5->Location = System::Drawing::Point(29, 170);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(142, 18);
			this->label5->TabIndex = 11;
			this->label5->Text = L"6. Carbon monoxide";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(29, 118);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 18);
			this->label4->TabIndex = 10;
			this->label4->Text = L"4. Nitrogen";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(29, 92);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(74, 18);
			this->label3->TabIndex = 9;
			this->label3->Text = L"3. Oxygen";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(29, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(88, 18);
			this->label2->TabIndex = 8;
			this->label2->Text = L"2. Hydrogen";
			// 
			// Carbonmonoxide_tb
			// 
			this->Carbonmonoxide_tb->Location = System::Drawing::Point(618, 171);
			this->Carbonmonoxide_tb->Name = L"Carbonmonoxide_tb";
			this->Carbonmonoxide_tb->Size = System::Drawing::Size(83, 20);
			this->Carbonmonoxide_tb->TabIndex = 6;
			this->Carbonmonoxide_tb->Text = L"0,00";
			this->Carbonmonoxide_tb->Enter += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Carbonmonoxide_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			// 
			// Nitrogen_tb
			// 
			this->Nitrogen_tb->Location = System::Drawing::Point(618, 119);
			this->Nitrogen_tb->Name = L"Nitrogen_tb";
			this->Nitrogen_tb->Size = System::Drawing::Size(83, 20);
			this->Nitrogen_tb->TabIndex = 4;
			this->Nitrogen_tb->Text = L"0,00";
			this->Nitrogen_tb->Enter += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Nitrogen_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			// 
			// Oxygen_tb
			// 
			this->Oxygen_tb->Location = System::Drawing::Point(618, 93);
			this->Oxygen_tb->Name = L"Oxygen_tb";
			this->Oxygen_tb->Size = System::Drawing::Size(83, 20);
			this->Oxygen_tb->TabIndex = 3;
			this->Oxygen_tb->Text = L"0,00";
			this->Oxygen_tb->Enter += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Oxygen_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(29, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 18);
			this->label1->TabIndex = 4;
			this->label1->Text = L"1. Carbon";
			// 
			// Hydrogen_tb
			// 
			this->Hydrogen_tb->Location = System::Drawing::Point(618, 67);
			this->Hydrogen_tb->Name = L"Hydrogen_tb";
			this->Hydrogen_tb->Size = System::Drawing::Size(83, 20);
			this->Hydrogen_tb->TabIndex = 2;
			this->Hydrogen_tb->Text = L"0,00";
			this->Hydrogen_tb->Enter += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Hydrogen_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			// 
			// Carbon_tb
			// 
			this->Carbon_tb->Location = System::Drawing::Point(618, 41);
			this->Carbon_tb->Name = L"Carbon_tb";
			this->Carbon_tb->Size = System::Drawing::Size(83, 20);
			this->Carbon_tb->TabIndex = 1;
			this->Carbon_tb->Text = L"0,00";
			this->Carbon_tb->Enter += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			this->Carbon_tb->Leave += gcnew System::EventHandler(this, &fuelform::Fuels_tb_Leave);
			// 
			// natural_gas_bt
			// 
			this->natural_gas_bt->Location = System::Drawing::Point(33, 101);
			this->natural_gas_bt->Name = L"natural_gas_bt";
			this->natural_gas_bt->Size = System::Drawing::Size(119, 24);
			this->natural_gas_bt->TabIndex = 1;
			this->natural_gas_bt->Text = L"Natural gas";
			this->natural_gas_bt->UseVisualStyleBackColor = true;
			this->natural_gas_bt->Click += gcnew System::EventHandler(this, &fuelform::natural_gas_bt_Click);
			// 
			// HFO_bt
			// 
			this->HFO_bt->Location = System::Drawing::Point(158, 101);
			this->HFO_bt->Name = L"HFO_bt";
			this->HFO_bt->Size = System::Drawing::Size(119, 24);
			this->HFO_bt->TabIndex = 2;
			this->HFO_bt->Text = L"HFO";
			this->HFO_bt->UseVisualStyleBackColor = true;
			this->HFO_bt->Click += gcnew System::EventHandler(this, &fuelform::HFO_bt_Click);
			// 
			// LFO_bt
			// 
			this->LFO_bt->Location = System::Drawing::Point(283, 101);
			this->LFO_bt->Name = L"LFO_bt";
			this->LFO_bt->Size = System::Drawing::Size(119, 24);
			this->LFO_bt->TabIndex = 3;
			this->LFO_bt->Text = L"LFO";
			this->LFO_bt->UseVisualStyleBackColor = true;
			this->LFO_bt->Click += gcnew System::EventHandler(this, &fuelform::LFO_bt_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label9->Location = System::Drawing::Point(30, 76);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(183, 18);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Choice of predifened fuels:";
			// 
			// label83
			// 
			this->label83->AutoSize = true;
			this->label83->Location = System::Drawing::Point(810, 210);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(117, 13);
			this->label83->TabIndex = 9;
			this->label83->Text = L"Sum of all components:";
			// 
			// sum_tb
			// 
			this->sum_tb->Enabled = false;
			this->sum_tb->Location = System::Drawing::Point(815, 226);
			this->sum_tb->Name = L"sum_tb";
			this->sum_tb->Size = System::Drawing::Size(88, 20);
			this->sum_tb->TabIndex = 11;
			// 
			// label84
			// 
			this->label84->AutoSize = true;
			this->label84->Location = System::Drawing::Point(812, 152);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(59, 13);
			this->label84->TabIndex = 12;
			this->label84->Text = L"Fuel name:";
			// 
			// fuelname_tb
			// 
			this->fuelname_tb->Location = System::Drawing::Point(813, 168);
			this->fuelname_tb->Name = L"fuelname_tb";
			this->fuelname_tb->Size = System::Drawing::Size(90, 20);
			this->fuelname_tb->TabIndex = 13;
			this->fuelname_tb->Leave += gcnew System::EventHandler(this, &fuelform::fuelname_tb_Leave);
			// 
			// SAvefuel_bt
			// 
			this->SAvefuel_bt->Location = System::Drawing::Point(533, 101);
			this->SAvefuel_bt->Name = L"SAvefuel_bt";
			this->SAvefuel_bt->Size = System::Drawing::Size(119, 24);
			this->SAvefuel_bt->TabIndex = 14;
			this->SAvefuel_bt->Text = L"Save fuel";
			this->SAvefuel_bt->UseVisualStyleBackColor = true;
			this->SAvefuel_bt->Click += gcnew System::EventHandler(this, &fuelform::SAvefuel_bt_Click);
			// 
			// Loadfuel_bt
			// 
			this->Loadfuel_bt->Location = System::Drawing::Point(408, 101);
			this->Loadfuel_bt->Name = L"Loadfuel_bt";
			this->Loadfuel_bt->Size = System::Drawing::Size(119, 24);
			this->Loadfuel_bt->TabIndex = 15;
			this->Loadfuel_bt->Text = L"Load fuel";
			this->Loadfuel_bt->UseVisualStyleBackColor = true;
			this->Loadfuel_bt->Click += gcnew System::EventHandler(this, &fuelform::Loadfuel_bt_Click);
			// 
			// normalize_tb
			// 
			this->normalize_tb->Location = System::Drawing::Point(813, 263);
			this->normalize_tb->Name = L"normalize_tb";
			this->normalize_tb->Size = System::Drawing::Size(90, 25);
			this->normalize_tb->TabIndex = 16;
			this->normalize_tb->Text = L"Normalize";
			this->normalize_tb->UseVisualStyleBackColor = true;
			this->normalize_tb->Click += gcnew System::EventHandler(this, &fuelform::normalize_tb_Click);
			// 
			// lb_LHV
			// 
			this->lb_LHV->AutoSize = true;
			this->lb_LHV->Location = System::Drawing::Point(812, 314);
			this->lb_LHV->Name = L"lb_LHV";
			this->lb_LHV->Size = System::Drawing::Size(31, 13);
			this->lb_LHV->TabIndex = 17;
			this->lb_LHV->Text = L"LHV:";
			// 
			// tb_LHV
			// 
			this->tb_LHV->Enabled = false;
			this->tb_LHV->Location = System::Drawing::Point(815, 330);
			this->tb_LHV->Name = L"tb_LHV";
			this->tb_LHV->Size = System::Drawing::Size(88, 20);
			this->tb_LHV->TabIndex = 18;
			// 
			// label85
			// 
			this->label85->AutoSize = true;
			this->label85->Location = System::Drawing::Point(812, 360);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(33, 13);
			this->label85->TabIndex = 19;
			this->label85->Text = L"HHV:";
			// 
			// tb_HHV
			// 
			this->tb_HHV->Enabled = false;
			this->tb_HHV->Location = System::Drawing::Point(815, 376);
			this->tb_HHV->Name = L"tb_HHV";
			this->tb_HHV->Size = System::Drawing::Size(88, 20);
			this->tb_HHV->TabIndex = 20;
			// 
			// cb_LHV
			// 
			this->cb_LHV->FormattingEnabled = true;
			this->cb_LHV->Location = System::Drawing::Point(909, 329);
			this->cb_LHV->Name = L"cb_LHV";
			this->cb_LHV->Size = System::Drawing::Size(63, 21);
			this->cb_LHV->TabIndex = 21;
			this->cb_LHV->SelectedIndexChanged += gcnew System::EventHandler(this, &fuelform::cb_LHV_SelectedIndexChanged);
			// 
			// cb_HHV
			// 
			this->cb_HHV->FormattingEnabled = true;
			this->cb_HHV->Location = System::Drawing::Point(909, 375);
			this->cb_HHV->Name = L"cb_HHV";
			this->cb_HHV->Size = System::Drawing::Size(63, 21);
			this->cb_HHV->TabIndex = 22;
			this->cb_HHV->SelectedIndexChanged += gcnew System::EventHandler(this, &fuelform::cb_HHV_SelectedIndexChanged);
			// 
			// label86
			// 
			this->label86->AutoSize = true;
			this->label86->Location = System::Drawing::Point(812, 416);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(45, 13);
			this->label86->TabIndex = 23;
			this->label86->Text = L"Density:";
			// 
			// tb_density
			// 
			this->tb_density->Enabled = false;
			this->tb_density->Location = System::Drawing::Point(815, 435);
			this->tb_density->Name = L"tb_density";
			this->tb_density->Size = System::Drawing::Size(88, 20);
			this->tb_density->TabIndex = 24;
			// 
			// cb_density
			// 
			this->cb_density->FormattingEnabled = true;
			this->cb_density->Location = System::Drawing::Point(909, 434);
			this->cb_density->Name = L"cb_density";
			this->cb_density->Size = System::Drawing::Size(63, 21);
			this->cb_density->TabIndex = 25;
			this->cb_density->SelectedIndexChanged += gcnew System::EventHandler(this, &fuelform::cb_density_SelectedIndexChanged);
			// 
			// lb_densitycalcheader
			// 
			this->lb_densitycalcheader->AutoSize = true;
			this->lb_densitycalcheader->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->lb_densitycalcheader->Location = System::Drawing::Point(811, 467);
			this->lb_densitycalcheader->Name = L"lb_densitycalcheader";
			this->lb_densitycalcheader->Size = System::Drawing::Size(163, 40);
			this->lb_densitycalcheader->TabIndex = 26;
			this->lb_densitycalcheader->Text = L"Calculation of density \r\nat defined conditions:";
			// 
			// label87
			// 
			this->label87->AutoSize = true;
			this->label87->Location = System::Drawing::Point(812, 507);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(78, 13);
			this->label87->TabIndex = 27;
			this->label87->Text = L"(only for gases)";
			// 
			// cb_density_calc
			// 
			this->cb_density_calc->FormattingEnabled = true;
			this->cb_density_calc->Location = System::Drawing::Point(909, 644);
			this->cb_density_calc->Name = L"cb_density_calc";
			this->cb_density_calc->Size = System::Drawing::Size(63, 21);
			this->cb_density_calc->TabIndex = 36;
			this->cb_density_calc->SelectedIndexChanged += gcnew System::EventHandler(this, &fuelform::cb_density_calc_SelectedIndexChanged);
			// 
			// tb_denstity_calc
			// 
			this->tb_denstity_calc->Enabled = false;
			this->tb_denstity_calc->Location = System::Drawing::Point(815, 645);
			this->tb_denstity_calc->Name = L"tb_denstity_calc";
			this->tb_denstity_calc->Size = System::Drawing::Size(88, 20);
			this->tb_denstity_calc->TabIndex = 35;
			// 
			// label88
			// 
			this->label88->AutoSize = true;
			this->label88->Location = System::Drawing::Point(812, 626);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(45, 13);
			this->label88->TabIndex = 34;
			this->label88->Text = L"Density:";
			// 
			// cb_temp
			// 
			this->cb_temp->FormattingEnabled = true;
			this->cb_temp->Location = System::Drawing::Point(909, 585);
			this->cb_temp->Name = L"cb_temp";
			this->cb_temp->Size = System::Drawing::Size(63, 21);
			this->cb_temp->TabIndex = 33;
			this->cb_temp->SelectedIndexChanged += gcnew System::EventHandler(this, &fuelform::cb_temp_SelectedIndexChanged);
			// 
			// cb_presure
			// 
			this->cb_presure->FormattingEnabled = true;
			this->cb_presure->Location = System::Drawing::Point(909, 539);
			this->cb_presure->Name = L"cb_presure";
			this->cb_presure->Size = System::Drawing::Size(63, 21);
			this->cb_presure->TabIndex = 32;
			this->cb_presure->SelectedIndexChanged += gcnew System::EventHandler(this, &fuelform::cb_presure_SelectedIndexChanged);
			// 
			// tb_temp
			// 
			this->tb_temp->Location = System::Drawing::Point(815, 586);
			this->tb_temp->Name = L"tb_temp";
			this->tb_temp->Size = System::Drawing::Size(88, 20);
			this->tb_temp->TabIndex = 31;
			this->tb_temp->Leave += gcnew System::EventHandler(this, &fuelform::tb_presure_Leave);
			// 
			// lb_inserttemp
			// 
			this->lb_inserttemp->AutoSize = true;
			this->lb_inserttemp->Location = System::Drawing::Point(812, 570);
			this->lb_inserttemp->Name = L"lb_inserttemp";
			this->lb_inserttemp->Size = System::Drawing::Size(95, 13);
			this->lb_inserttemp->TabIndex = 30;
			this->lb_inserttemp->Text = L"Insert temperature:";
			// 
			// tb_presure
			// 
			this->tb_presure->Location = System::Drawing::Point(815, 540);
			this->tb_presure->Name = L"tb_presure";
			this->tb_presure->Size = System::Drawing::Size(88, 20);
			this->tb_presure->TabIndex = 29;
			this->tb_presure->Leave += gcnew System::EventHandler(this, &fuelform::tb_presure_Leave);
			// 
			// lb_insertpresure
			// 
			this->lb_insertpresure->AutoSize = true;
			this->lb_insertpresure->Location = System::Drawing::Point(812, 524);
			this->lb_insertpresure->Name = L"lb_insertpresure";
			this->lb_insertpresure->Size = System::Drawing::Size(74, 13);
			this->lb_insertpresure->TabIndex = 28;
			this->lb_insertpresure->Text = L"Insert presure:";
			// 
			// fuelform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(1004, 745);
			this->Controls->Add(this->cb_density_calc);
			this->Controls->Add(this->tb_denstity_calc);
			this->Controls->Add(this->label88);
			this->Controls->Add(this->cb_temp);
			this->Controls->Add(this->cb_presure);
			this->Controls->Add(this->tb_temp);
			this->Controls->Add(this->lb_inserttemp);
			this->Controls->Add(this->tb_presure);
			this->Controls->Add(this->lb_insertpresure);
			this->Controls->Add(this->label87);
			this->Controls->Add(this->lb_densitycalcheader);
			this->Controls->Add(this->cb_density);
			this->Controls->Add(this->tb_density);
			this->Controls->Add(this->label86);
			this->Controls->Add(this->cb_HHV);
			this->Controls->Add(this->cb_LHV);
			this->Controls->Add(this->tb_HHV);
			this->Controls->Add(this->label85);
			this->Controls->Add(this->tb_LHV);
			this->Controls->Add(this->lb_LHV);
			this->Controls->Add(this->normalize_tb);
			this->Controls->Add(this->Loadfuel_bt);
			this->Controls->Add(this->SAvefuel_bt);
			this->Controls->Add(this->fuelname_tb);
			this->Controls->Add(this->label84);
			this->Controls->Add(this->sum_tb);
			this->Controls->Add(this->label83);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->LFO_bt);
			this->Controls->Add(this->HFO_bt);
			this->Controls->Add(this->natural_gas_bt);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->Cancel_bt);
			this->Controls->Add(this->line1_lb);
			this->Controls->Add(this->Header_lb);
			this->Controls->Add(this->Apply_bt);
			this->Name = L"fuelform";
			this->Text = L"fuel";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &fuelform::fuelform_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		System::Void Apply_bt_Click(System::Object^  sender, System::EventArgs^  e) {
			double sum = double::Parse(this->sum_tb->Text);
			// Initializes the variables to pass to the MessageBox::Show method.
			
			
			
			if (sum < 0.1)
				MessageBox::Show(this, "Fill the composition of the fuel!", L"Fuel composition not finished!", MessageBoxButtons::OK, MessageBoxIcon::Error);
			else
			{
				if (sum < 99.9 || sum > 100.1)
			{
					String^ message = "The sum of the components composition must be 100%. Do you want to norm every component to get 100%?";
					String^ caption = "Sum not 100%";
					MessageBoxButtons buttons = MessageBoxButtons::YesNo;
					MessageBoxIcon icon = MessageBoxIcon::Exclamation;
					System::Windows::Forms::DialogResult result;
					result = MessageBox::Show(this, message, caption, buttons, icon);
				

				// Displays the MessageBox.
				
				if (result == System::Windows::Forms::DialogResult::Yes)
				{
					if (Vol_mass_percent_cb->SelectedIndex == 0)
					{
						norm_array(input_fuel_vol);
						set_mass_amount(input_fuel_mass, input_fuel_vol, fuelmix);
						//startmenu->
						
					}
					if (Vol_mass_percent_cb->SelectedIndex == 1)
					{
						norm_array(input_fuel_mass);
						set_volume_amount(input_fuel_mass, input_fuel_vol, fuelmix);
					}
					this->issuemyevent(sender, e);
					this->Close();
				}
			}
				else {
					
						if (Vol_mass_percent_cb->SelectedIndex == 0)
						{
							norm_array(input_fuel_vol);
							set_mass_amount(input_fuel_mass, input_fuel_vol, fuelmix);
							for (int i = 0; i < input_fuel_mass->Length; i++)
							{
								fuelmix[i]->set_amount_vol(input_fuel_vol[i]);
								fuelmix[i]->set_amount_mass(input_fuel_vol[i]);

							}
							

						}
						if (Vol_mass_percent_cb->SelectedIndex == 1)
						{
							norm_array(input_fuel_mass);
							set_volume_amount(input_fuel_mass, input_fuel_vol, fuelmix);
							for (int i = 0;i< input_fuel_mass->Length; i++)
							{
								fuelmix[i]->set_amount_vol(input_fuel_vol[i]);
								fuelmix[i]->set_amount_mass(input_fuel_vol[i]);

							}

						}
						for (int i = 0; i < input_fuel_mass->Length; i++)
						{
							fuelmix[i]->set_amount_vol(input_fuel_vol[i]);
							fuelmix[i]->set_amount_mass(input_fuel_vol[i]);

						}

						this->issuemyevent(sender, e);
						this->Close();
					
				}
			}
			//Close(); //Close the Form
		}
		Void DensityCalculation()
		{
			
			//double pres = this->presure;
			//double temp = this->temperature;
			in_pressure(this, this->presure, tb_presure, cb_presure);
			in_temp(this, this->temperature, tb_temp, cb_temp);
			this-> density_from_p_T = ideal_gas_rho(this->presure, this->temperature, fuelmix, input_fuel_vol);
			out_density(this->density_from_p_T, tb_denstity_calc, cb_density_calc);
			//this->presure = pres;
			//this->temperature = temp;
		}
		
		System::Void Fuels_tb_Leave(System::Object^  sender, System::EventArgs^  e)
		{
			TextBox^ textbox = safe_cast<TextBox^> (sender);
			String ^ str = textbox->Name;
			array<double> ^input_fuel = gcnew array<double>(37);
			if (this->Vol_mass_percent_cb->SelectedIndex == 1)
			{
				for (int i = 0; i < input_fuel_mass->Length; i++)
					input_fuel[i] = input_fuel_mass[i];

			}
			if (Vol_mass_percent_cb->SelectedIndex == 0)
			{
				for (int i = 0; i < input_fuel_vol->Length; i++)
					input_fuel[i] = input_fuel_vol[i];

			}

			for (int i = 0; i < 37; i++)

			{
				//I need the it finds the tb which is the same as the sender
				//and make operations on it. 
				if (str == fuel_tbs[i]->Name)
				{


					double a;
					try {
						a = double::Parse(textbox->Text);

						double sum = sum_array(input_fuel);

					}
					catch (System::Exception ^ex)
					{
						MessageBox::Show(this, ex->Message, L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);


						//this->fuel_tbs[i]->Text=(input_fuel[i].ToString("F2"));
						this->fuel_tbs[i]->Undo();

					}
					if (a < 0 || a > 100)
					{
						MessageBox::Show(this, "Insert a number form 0 to 100", L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
						//this->fuel_tbs[i]->Text = (input_fuel[i].ToString("F2"));
						this->fuel_tbs[i]->Undo();
					}
					else
					{
						this->fuel_tbs[i]->Text = (a.ToString("F2"));
						this->sum_tb->Text = (sum_array(input_fuel).ToString("F2"));
						input_fuel[i] = a;
						this->sum_tb->Text = sum_array(input_fuel).ToString("F2");


					}
					if (Vol_mass_percent_cb->SelectedIndex == 1) //mass
					{
						for (int i = 0; i < input_fuel_mass->Length; i++)
							input_fuel_mass[i] = input_fuel[i];
						if ((round(100 * sum_array(input_fuel_mass)) / 100.) > 99.99 && (round(100 * sum_array(input_fuel_mass)) / 100) < 100.01)
							set_volume_amount(input_fuel_mass, input_fuel_vol, fuelmix);

					}
					if (Vol_mass_percent_cb->SelectedIndex == 0)
					{
						for (int i = 0; i < input_fuel_vol->Length; i++)
							input_fuel_vol[i] = input_fuel[i];
						if ((round(100 * sum_array(input_fuel_vol)) / 100.) > 99.99 && (round(100 * sum_array(input_fuel_vol)) / 100) < 100.01)
							set_mass_amount(input_fuel_mass, input_fuel_vol, fuelmix);

					}
					Refresh_tbs();
					

				}
			}


		}





		System::Void Vol_mass_percent_cb_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			
			this->Refresh_tbs();
			this->Refresh_tbs();
				}
private: System::Void Cancel_bt_Click(System::Object^  sender, System::EventArgs^  e) {
	{
		// Initializes the variables to pass to the MessageBox::Show method.
		String^ message = "Do you want to leave without saving the fuel composition?";
		String^ caption = "Cancel menu";
		MessageBoxButtons buttons = MessageBoxButtons::YesNo;
		MessageBoxIcon icon = MessageBoxIcon::Exclamation;
		System::Windows::Forms::DialogResult result;

		// Displays the MessageBox.
		result = MessageBox::Show(this, message, caption, buttons, icon);
		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			// Closes the parent form.
			this->Close();
		}}


	}

private: System::Void fuelname_tb_Leave(System::Object^  sender, System::EventArgs^  e) {
	fuelname = this->fuelname_tb->Text;
}
private: System::Void SAvefuel_bt_Click(System::Object^  sender, System::EventArgs^  e) {
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
	saveFileDialog1->Filter = "Fuel files (*.fue)|*.fue";
	saveFileDialog1->FilterIndex = 1;
	saveFileDialog1->RestoreDirectory = true;
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		save_fuel_process(saveFileDialog1);
	}
}
private: System::Void normalize_tb_Click(System::Object^  sender, System::EventArgs^  e) {
	
	if (Vol_mass_percent_cb->SelectedIndex == 0)
	{
		if(sum_array(input_fuel_vol) < 0.01 )
			MessageBox::Show(this, L"Insert fuel composition", L"The sum is zero", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else
		{
			norm_array(input_fuel_vol);
			set_mass_amount(input_fuel_mass, input_fuel_vol, fuelmix);
			Refresh_tbs();
			//startmenu->
		}

	}
	if (Vol_mass_percent_cb->SelectedIndex == 1)
	{
		if (sum_array(input_fuel_mass) < 0.01)
			MessageBox::Show(this, L"Insert fuel composition", L"The sum is zero", MessageBoxButtons::OK, MessageBoxIcon::Error);
		else
		{
			norm_array(input_fuel_mass);
			set_volume_amount(input_fuel_mass, input_fuel_vol, fuelmix);
			Refresh_tbs();
		}
	}
}
private: System::Void natural_gas_bt_Click(System::Object^  sender, System::EventArgs^  e) {
	Load_fuel_prozess(".\\Source\\Naturalgas.fue");
}
private: System::Void Loadfuel_bt_Click(System::Object^  sender, System::EventArgs^  e) {
	OpenFileDialog ^ openFileDialog1 = gcnew OpenFileDialog();
	openFileDialog1->Filter = "Fuel file(*.fue)|*.fue";
	openFileDialog1->Title = "Load fuel";

	
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		Load_fuel_prozess(openFileDialog1->FileName);
		
	}
}
private: System::Void LFO_bt_Click(System::Object^  sender, System::EventArgs^  e) {
	Load_fuel_prozess(".\\Source\\LFO.fue");
}
private: System::Void HFO_bt_Click(System::Object^  sender, System::EventArgs^  e) {
	Load_fuel_prozess(".\\Source\\HFO.fue");
}
private: System::Void fuelform_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void cb_LHV_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	out_enthalpy(lhv, tb_LHV, cb_LHV);
}
private: System::Void cb_HHV_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	out_enthalpy(hhv, tb_HHV, cb_HHV);
}
private: System::Void cb_density_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	out_density(density, tb_density, cb_density);
}
private: System::Void tb_presure_Leave(System::Object^  sender, System::EventArgs^  e) {
	DensityCalculation();
}
private: System::Void cb_presure_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	out_pressure(presure, tb_presure, cb_presure);
}
private: System::Void cb_temp_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	out_temp(temperature, tb_temp, cb_temp);
}
private: System::Void cb_density_calc_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	out_density(this->density_from_p_T, tb_denstity_calc, cb_density_calc);
}
}

;}
