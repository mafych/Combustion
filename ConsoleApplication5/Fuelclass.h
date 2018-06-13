#pragma once
public ref class fuel
{
private:
	const System::String^ name;
	const double molweight; // molecule weight g/mol
	const double O2req; //stechiometric O2 required
	const int numC, numH, numO, numS, numN; //number of atoms in formula
	const double lhv;  //released energy in J/kg
	double amount_vol; //volume precentage
	double amount_mass; //mass precentage
	const double hhv; //in J/kg
	const double density; //in lb/cu ft



public:
	void set_amount_vol(double x) { amount_vol = x; }
	void set_amount_mass(double x) { amount_mass = x; }
	void set_name(System::String^ x) { name = x; }
	
	double get_amount_mass() { return amount_mass; }
	double get_molweight() { return molweight; }
	double get_amount_vol() { return amount_vol; }
	double get_hhv() { return hhv; }
	double get_lhv() { return lhv; }
	double get_density() { return density; }

	fuel(System::String^ a, double b, double c, int e, int f, int g, int h, int i, double d, double j, double k, double l, double m) :
		name(a),
		molweight(b),
		O2req(c),
		lhv(d),
		numC(e),
		numH(f),
		numO(g),
		numS(h),
		numN(i),
		amount_vol(j),
		amount_mass(k),
	hhv(l),
	density(m){}

};