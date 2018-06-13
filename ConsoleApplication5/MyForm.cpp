#include "stdafx.h"
#include "Startmenu.h"
//#include "fuel1.h"
//#include "Fuelclass.h"
//#include <iostream>
//#include <string>
//#include <exception>
//#include "Functions.h"
//#include <cmath>
#define R 8.31447 // m3 Pa K−1 mol−1







	

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]


void norm_array(array<double> ^a);

void Main(cli::array<String^>^ args) {


	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ConsoleApplication5::Startmenu startmenu;
	Application::Run(%startmenu);
	


}
