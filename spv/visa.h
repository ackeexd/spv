#pragma once
using namespace std;
#include <iostream>

class Visa
{
	string cntry;
	string vstart;
	string vfinish;

public:

	void SetCountry(string cntry) { this->cntry = cntry; }
	void SetVstart(string vstart) { this->vstart = vstart; }
	void SetVfinish(string vfinish) { vfinish = vfinish; }

	string GetCountry() { return cntry; }
	string GetVstart() { return vstart; }
	string GetVfinish() { return vfinish; }

	void ShowVisa()
	{
		cout << cntry << " (";
		cout << vstart << " - ";
		cout << vfinish << ")\n";
	}

};
