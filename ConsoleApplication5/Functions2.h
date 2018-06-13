#pragma once
#include "stdafx.h"
#include "Fuelclass.h"
#include <string>
#include <iostream>
#ifndef R
#define R 8.31447 // m3 Pa K−1 mol−1
#endif // !



using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;



/*double mol_weight_sum(array<double> ^a)
{
double sum = 0;
for each(int i in a)
{
sum += (fuelmix[i]->get_molweight());

}
return sum;
}*/




double molarmass_sum(array<double> ^a, array<fuel^> ^b) //calculate the molarmass sum of the mixture
{
	double sum = 0;
	for each(int i in a)
	{
		sum += (b[i]->get_amount_mass())*a[i];
	};
	return sum;
}

double sum_array(array<double> ^a)//sum over all elements
{
	double sum = 0;
	for (int i = 0; i < a->Length; i++)
	{
		sum += a[i];
	}
	return sum;
}
void norm_array(array<double> ^a)//norm the elements to be the sum 100(%)
{
	double sum = sum_array(a);
	for (int i = 0; i < a->Length; i++)
		a[i] = a[i] * 100 / sum;
}

void set_volume_amount(array<double>^massamount, array<double>^volamount, array<fuel^>^fuels)
//calc volumes percentage from the mass percentage 
{

	for (int j = 0; j< (massamount->Length); j++)
	{
		double a = ((fuels[j])->get_molweight());
		volamount[j] = ((massamount[j]) / (a));

	}
	double s = sum_array(volamount);
	if (s != 100)
	{
		for (int j = 0; j < (volamount->Length); j++)
		{
			volamount[j] = volamount[j] * 100 / s;
		}
	}
}

void set_mass_amount(array<double>^massamount, array<double>^volamount, array<fuel^>^fuels)
//calc mass percentage from the volume percentage 
{

	for (int j = 0; j <massamount->Length; j++)
	{
		double a = ((fuels[j])->get_molweight());
		massamount[j] = ((volamount[j]) * (a));

	}
	double s = sum_array(massamount);
	if (s != 100)
	{
		for (int j = 0; j < massamount->Length; j++)
		{
			massamount[j] = massamount[j] * 100 / s;
		}
	}
}
//Enthalpy
double BtudivlbtoJdivkg(double a)
{
	return a / 0.000429923;
}
double JdivkgtoBtudivlb(double a)
{
	return a * 0.000429923;
}
double kcaldivkgtoJdivkg(double a)
{
	return a * 4184.;
}
double Jdivkgtokcaldivkg(double a)
{
	return a / 4184;
}
double JdivkgtokJdivkg(double a)
{
	return a / 1000.;
}
double kJdivkgtoJdivkg(double a)
{
	return a * 1000.;
}
//Temperatures

double degCtoDegK(double a)
{
	return (a + 273.15);
}
double degKtoDegC(double a)
{
	return (a - 273.15);
}
double degFtodegK(double a)
{
	return ((5 * (a + 459.67)) / 9.);
}
double degKtodegF(double a)
{
	return (9 * a / 5. - 459.67);
}

//Pressures
double PatokPa(double a)
{
	return a / 1000.;
}

double kPatoPa(double a)
{
	return a * 1000;
}
double PatoMPa(double a)
{
	return a / 1000000.;
}
double MPatoPa(double a)
{
	return a * 1000000;
}
double PatoAtm(double a)
{
	return(a * 9.869233*pow(10, -6));
}
double AtmtoPa(double a)
{
	return (a / (9.869233*pow(10, -6)));
}
double psitoPa(double a)
{
	return a / (1.450377*pow(10, -4));
}
double Patopsi(double a)
{
	return a * (1.450377*pow(10, -4));
}
double mmH2otoPa(double a)
{
	return a * 9.80665;
}
double PatommH2O(double a)
{
	return a / 9.80665;
}
double inchH2OtoPa(double a)
{
	return a * 248.84;
}
double PatoinchH2O(double a)
{
	return a / 248.84;
}
double lbpersqfttoPa(double a)
{
	return a * 47.88;
}
double Patolbpersqft(double a)
{
	return a / 47.88;
}

//Conductivity

double WdivmKtoBTUdivftdegF(double a)
{
	return a * 0.577789275;
}
double BTUdivftdegFtoWdivmK(double a)
{
	return a / 0.577789275;
}
//Viscosity

double cptoPadivs(double a)
{
	return a * 0.001;
}

double Padivstocp(double a)
{
	return a / 0.001;
}

//Specific heat

double JdivkgKtoBTUdivlbdegF(double a)
{
	return a * 239;
}
double BTUdivlbdegFtoJdivkgK(double a)
{
	return a / 239.;
}
double JdivkgKtokJdivkgK(double a)
{
	return a / 1000.;
}
double kJdivkgKtoJdivkgK(double a)
{
	return a * 1000;
}
double caldivkgKtoJdivkgK(double a)
{
	return a * 4.184;
}
double JdivkgKtocaldivkgK(double a)
{
	return a / 4.184;
}

//Density

double kgdivm3tolbdivcubft(double a)
{
	return a * 0.062427961;
}
double lbdivcubfttokgdivm3(double a)
{
	return a / 0.062427961;
}

//Energy

double JtokJ(double a)
{
	return a / 1000.;
}
double kJtoJ(double a)
{
	return a * 1000;
}
double JtoMJ(double a)
{
	return a / 1000000.;
}
double MJtoJ(double a)
{
	return a * 1000000;
}
double JtoGJ(double a)
{
	return a / 1000000000.;
}
double GJtoJ(double a)
{
	return a * 1000000000;
}
double caltoJ(double a)
{
	return a * 4.184;
}
double Jtocal(double a)
{
	return a / 4.184;
}
double kcaltoJ(double a)
{
	return a * 4184;
}
double Jtokcal(double a)
{
	return a / 4184.;
}
double kWhtoJ(double a)
{
	return a * 3600000;
}
double JtokWh(double a)
{
	return a / 3600000.;
}
double MWhtoJ(double a)
{
	return a * 3600000000;
}
double JtoMWh(double a)
{
	return a / 3600000000.;
}
double btutoJ(double a)
{
	return a * 1055.05585;
}
double Jtobtu(double a)
{
	return a / 1055.05585;
}
double mmbtutoJ(double a)
{
	return a * 1.05506*pow(10, 9);
}
double Jtommbtu(double a)
{
	return a / (1.05506*pow(10, 9));
}

//Mass flow

double kgdivstokgdivh(double a)
{
	return a * 3600;
}
double kgdivhtokgdivs(double a)
{
	return a / 3600.;
}
double tdivhtokgdivs(double a)
{
	return a / 3.6;
}
double kgdivstotdivh(double a)
{
	return a * 3.6;
}
double kgdivstobdivh(double a)
{
	return a * 0.000612395;
}
double lbdivhtokgdivs(double a)
{
	return a / 0.000612395;
}

//Distance


double mtomm(double a)
{
	return a * 1000;
}
double mmtom(double a)
{
	return a / 1000.;
}
double inchtom(double a)
{
	return a / 39.37;
}
double mtoinch(double a)
{
	return a * 39.37;
}
double foottom(double a)
{
	return a / 3.2808;
}
double mtofoot(double a)
{
	return a * 3.2808;
}
void optimize_cb_enthalpy(System::Windows::Forms::ComboBox^ cb)
{
	cb->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"J/kg", L"kJ/kg", L"BTU/lb", L"kcal/kg" });
	cb->SelectedIndex = 0;
}
void optimize_cb_density(System::Windows::Forms::ComboBox^ cb)
{
	cb->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"kg/m3", L"lb/ft3" });
	cb->SelectedIndex = 0;
}
void out_enthalpy(double a, TextBox^ tb, ComboBox^ cb)
{
	if (cb->SelectedIndex == 0)
		tb->Text = a.ToString("F0");
	if (cb->SelectedIndex == 1)
		tb->Text = JdivkgtokJdivkg(a).ToString("F2");
	if (cb->SelectedIndex == 2)
		tb->Text = JdivkgtoBtudivlb(a).ToString("F0");
	if (cb->SelectedIndex == 3)
		tb->Text = Jdivkgtokcaldivkg(a).ToString("F0");
}

void out_density(double a, TextBox^ tb, ComboBox^ cb)
{

	if (cb->SelectedIndex == 0)
		tb->Text = a.ToString("F3");
	if (cb->SelectedIndex == 1)
		tb->Text = kgdivm3tolbdivcubft(a).ToString("F5");
}

void optimize_cb_temp(ComboBox^cb)
{
	cb->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"degC", L"degK", L"degF" });
	cb->SelectedIndex = 0;
}
void out_temp(double a, TextBox^ tb, ComboBox^ cb)
{
	if (cb->SelectedIndex == 0)
		tb->Text = degKtoDegC(a).ToString("F2");
	if (cb->SelectedIndex == 1)
		tb->Text = a.ToString("F2");
	if (cb->SelectedIndex == 2)
		tb->Text = degKtodegF(a).ToString("F2");
}
void in_temp(Form^form, double %number, TextBox^ tb, ComboBox^ cb)
{
	try {
		double a = double::Parse(tb->Text);
		if (a < 0.)
		{
			MessageBox::Show(form, L"Insert a positive number", L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			tb->Undo();
		}
		else
		{
			if (cb->SelectedIndex == 0) //degC
				number = degCtoDegK(a);
			if (cb->SelectedIndex == 1) //degK
				number = a;
			if (cb->SelectedIndex == 2) //degF
				number = degFtodegK(a);
		}

	}
	catch (System::Exception ^ex)
	{
		MessageBox::Show(form, L"Invalid input!", L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		tb->Undo();
	}
}

void optimalize_cb_pressure(ComboBox^cb)
{
	cb->Items->AddRange(gcnew cli::array< System::Object^  >(8) { L"Pa", L"kPa", L"MPa", L"ATM", L"Psi", L"mmH2O", L"inchH2O", L"lb/foot2" });
	cb->SelectedIndex = 1;
}
void out_pressure(double a, TextBox^ tb, ComboBox^ cb)
{
	if (cb->SelectedIndex == 0) //Pa
		tb->Text = (a).ToString("F0");
	if (cb->SelectedIndex == 1) //kPa
		tb->Text = PatokPa(a).ToString("F3");
	if (cb->SelectedIndex == 2) //Mpa
		tb->Text = PatoMPa(a).ToString("F6");
	if (cb->SelectedIndex == 3) //Atm
		tb->Text = PatoAtm(a).ToString("F5");
	if (cb->SelectedIndex == 4) //Psi
		tb->Text = Patopsi(a).ToString("F5");
	if (cb->SelectedIndex == 5) //mmH2o
		tb->Text = PatommH2O(a).ToString("F2");
	if (cb->SelectedIndex == 6) //inchH2O
		tb->Text = PatoinchH2O(a).ToString("F3");
	if (cb->SelectedIndex == 7) //lb/foot2
		tb->Text = Patolbpersqft(a).ToString("F5");
}
void in_pressure(Form^form, double %number, TextBox^ tb, ComboBox^ cb)
{
	try {
		double a = double::Parse(tb->Text);
		if (a < 0.)
		{
			MessageBox::Show(form, L"Insert a positive number", L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			tb->Undo();
		}
		else
		{
			if (cb->SelectedIndex == 0) //Pa
				number = a;
			if (cb->SelectedIndex == 1) //kPa
				number = kPatoPa(a);
			if (cb->SelectedIndex == 2) //Mpa
				number = MPatoPa(a);
			if (cb->SelectedIndex == 3) //Atm
				number = AtmtoPa(a);
			if (cb->SelectedIndex == 4) //Psi
				number = psitoPa(a);
			if (cb->SelectedIndex == 5) //mmH2o
				number = mmH2otoPa(a);
			if (cb->SelectedIndex == 6) //inchH2O
				number = inchH2OtoPa(a);
			if (cb->SelectedIndex == 7) //lb/foot2
				number = lbpersqfttoPa(a);
		}
	}
	catch (System::Exception ^ex)
	{
		MessageBox::Show(form, L"Invalid input!", L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		tb->Undo();
	}
}
double ideal_gas_rho(double press, double temp, array <fuel^> ^mix, array<double> ^volumes)
//Returns the density in kg/m3 by gas equation for fuelmixture mix and volume composition volumes in %, p in Pa, T in K

{
	double r = 0;
	for (int i = 0; i < volumes->Length; i++)
	{
		double a = (mix[i]->get_molweight());

		r += ((volumes[i] / 100.)*a / 1000.);
	}
	r = (R / r);
	double ret = ((press / temp)*(1. / r));
	return (ret);



}

void optimize_cb_viscosity(ComboBox ^cb)
{
	cb->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Pa/s", L"cp" });
	cb->SelectedIndex = 0;
}
void in_viscosity(Form^form, double %number, TextBox^ tb, ComboBox^ cb)
{
	try {
		double a = double::Parse(tb->Text);
		if (a < 0.)
		{
			MessageBox::Show(form, L"Insert a positive number", L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			tb->Undo();
		}
		else
		{
			if (cb->SelectedIndex == 0) //Pa/s
				number = a;
			if (cb->SelectedIndex == 1) //cp
				number = cptoPadivs(a);

		}
	}
	catch (System::Exception ^ex)
	{
		MessageBox::Show(form, L"Invalid input!", L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		tb->Undo();
	}
}

void optimize_cb_thermalcond(ComboBox ^cb)
{

	cb->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"W/mK", L"Btu/ft°F" });
	cb->SelectedIndex = 0;
}

void in_thermalcond(Form^form, double %number, TextBox^ tb, ComboBox^ cb)
{
	try {
		double a = double::Parse(tb->Text);
		if (a < 0.)
		{
			MessageBox::Show(form, L"Insert a positive number", L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			tb->Undo();
		}
		else
		{
			if (cb->SelectedIndex == 0) //W/mK
				number = a;
			if (cb->SelectedIndex == 1) //Btu/ftdegF
				number = BTUdivftdegFtoWdivmK(a);

		}
	}
	catch (System::Exception ^ex)
	{
		MessageBox::Show(form, L"Invalid input!", L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		tb->Undo();
	}
}
void optimize_cb_heatcap(ComboBox ^cb)
{

	cb->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"J/kgK", L"Btu/lb°F", L"cal/kgK" });
	cb->SelectedIndex = 0;
}
void in_heatcap(Form^form, double %number, TextBox^ tb, ComboBox^ cb)
{
	try {
		double a = double::Parse(tb->Text);
		if (a < 0.)
		{
			MessageBox::Show(form, L"Insert a positive number", L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			tb->Undo();
		}
		else
		{
			if (cb->SelectedIndex == 0) //J/kgK
				number = a;
			if (cb->SelectedIndex == 1) //Btu/lbdegF
				number = BTUdivlbdegFtoJdivkgK(a);
			if (cb->SelectedIndex == 2) //cal/kgK
				number = caldivkgKtoJdivkgK(a);

		}
	}
	catch (System::Exception ^ex)
	{
		MessageBox::Show(form, L"Invalid input!", L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		tb->Undo();
	}
}

void optimize_cb_phase(ComboBox ^cb)
{
	cb->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"liquid", L"vapour", L"mixture" });

}
void SetArrayVisible(array<ComboBox^> ^array)
{
	for (int i = 0; array->Length; i++)
		array[i]->Visible = true;
}
void SetArrayVisible(array<TextBox^> ^array)
{
	for (int i = 0; array->Length; i++)
		array[i]->Visible = true;
}
void SetArrayUnvisible(array<ComboBox^> ^array)
{
	for (int i = 0; array->Length; i++)
		array[i]->Visible = false;
}
void SetArrayUnvisible(array<TextBox^> ^array)
{
	for (int i = 0; array->Length; i++)
		array[i]->Visible = false;
}








/*void load_number_tb(Form^ form,TextBox^ tb, double number )

{
try {
double a = double::Parse(tb->Text);
if (a < 0)
{
MessageBox::Show(form, L"Insert a number form 0 to 100", L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
tb->Undo();
}
else
number = a;
}
catch (System::Exception ^ex)
{
MessageBox::Show(form, L"Invalid input!", L"Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
tb->Undo();
}


}*/













