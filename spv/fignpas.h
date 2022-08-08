#pragma once
using namespace std;
#include "pas.h"
#include "visa.h"
#include <vector>

class ForeignPasport : public Pasport
{
	vector<Visa> vis;
	string patron;

public:

	ForeignPasport() : Pasport() {}
	ForeignPasport(string surname) : Pasport(surname) {}
	ForeignPasport(string surname, string name) : Pasport(surname, name) {}

	void SetNewVisa(string cntry, string vstart, string vfinish)
	{
		Visa vs;
		vs.SetCountry(cntry);
		vs.SetVstart(vstart);
		vs.SetVfinish(vfinish);
		vis.push_back(vs);
	}

	void ShowVisas()
	{
		for (auto i : vis)
		i.ShowVisa();
		cout << "\n";
	}
};