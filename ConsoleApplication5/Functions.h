#pragma once
#include "Startmenu.h"
#include "Fuelclass.h"
#include <exception>
#include "stdafx.h"
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

double molarmass_sum(array<double> ^a, array<fuel^> ^b); //calculate the molarmass sum of the mixture
double sum_array(array<double> ^a);//sum over all elements
void norm_array(array<double> ^a);
void set_volume_amount(array<double>^massamount, array<double>^volamount, array<fuel^>^fuels);
void set_mass_amount(array<double>^massamount, array<double>^volamount, array<fuel^>^fuels);
double BtudivlbtoJdivkg(double a);
double JdivkgtoBtudivlb(double a);
double kcaldivkgtoJdivkg(double a);
double Jdivkgtokcaldivkg(double a);
double JdivkgtokJdivkg(double a);
double kJdivkgtoJdivkg(double a);
double degCtoDegK(double a);
double degKtoDegC(double a);
double degFtodegK(double a);
double degKtodegF(double a);
double PatokPa(double a);
double kPatoPa(double a);
double PatoMPa(double a);
double MPatoPa(double a);
double PatoAtm(double a);
double AtmtoPa(double a);
double psitoPa(double a);
double Patopsi(double a);
double mmH2otoPa(double a);
double PatommH2O(double a);
double inchH2OtoPa(double a);
double PatoinchH2O(double a);
double lbpersqfttoPa(double a);
double Patolbpersqft(double a);
double WdivmKtoBTUdivftdegF(double a);
double BTUdivftdegFtoWdivmK(double a);
double cptoPadivs(double a);
double Padivstocp(double a);
double JdivkgKtoBTUdivlbdegF(double a);
double BTUdivlbdegFtoJdivkgK(double a);
double JdivkgKtokJdivkgK(double a);
double kJdivkgKtoJdivkgK(double a);
double caldivkgKtoJdivkgK(double a);
double JdivkgKtocaldivkgK(double a);
double kgdivm3tolbdivcubft(double a);
double lbdivcubfttokgdivm3(double a);
double JtokJ(double a);
double kJtoJ(double a);
double JtoMJ(double a);
double MJtoJ(double a);
double JtoGJ(double a);
double GJtoJ(double a);
double caltoJ(double a);
double Jtocal(double a);
double kcaltoJ(double a);
double Jtokcal(double a);
double kWhtoJ(double a);
double JtokWh(double a);
double MWhtoJ(double a);
double JtoMWh(double a);
double btutoJ(double a);
double Jtobtu(double a);
double mmbtutoJ(double a);
double Jtommbtu(double a);
double kgdivstokgdivh(double a);
double kgdivhtokgdivs(double a);
double tdivhtokgdivs(double a);
double kgdivstotdivh(double a);
double kgdivstobdivh(double a);
double lbdivhtokgdivs(double a);
double mtomm(double a);
double mmtom(double a);
double inchtom(double a);
double mtoinch(double a);
double foottom(double a);
double mtofoot(double a);
void optimize_cb_enthalpy(System::Windows::Forms::ComboBox^ cb);
void optimize_cb_density(System::Windows::Forms::ComboBox^ cb);
void out_enthalpy(double a, TextBox^ tb, ComboBox^ cb);
void out_density(double a, TextBox^ tb, ComboBox^ cb);
void optimize_cb_temp(ComboBox^cb);
void out_temp(double a, TextBox^ tb, ComboBox^ cb);
void in_temp(Form^form, double %number, TextBox^ tb, ComboBox^ cb);
void optimalize_cb_pressure(ComboBox^cb);
void out_pressure(double a, TextBox^ tb, ComboBox^ cb);
void in_pressure(Form^form, double %number, TextBox^ tb, ComboBox^ cb);
double ideal_gas_rho(double press, double temp, array <fuel^> ^mix, array<double> ^volumes);
void optimize_cb_viscosity(ComboBox ^cb);
void in_viscosity(Form^form, double %number, TextBox^ tb, ComboBox^ cb);
void optimize_cb_thermalcond(ComboBox ^cb);
void in_thermalcond(Form^form, double %number, TextBox^ tb, ComboBox^ cb);
void optimize_cb_heatcap(ComboBox ^cb);
void in_heatcap(Form^form, double %number, TextBox^ tb, ComboBox^ cb);
void optimize_cb_phase(ComboBox ^cb);
void SetArrayVisible(array<ComboBox^> ^array);
void SetArrayVisible(array<TextBox^> ^array);
void SetArrayUnvisible(array<ComboBox^> ^array);
void SetArrayUnvisible(array<TextBox^> ^array);