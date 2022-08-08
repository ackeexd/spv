#pragma once
using namespace std;
#include <iostream>

class Pasport
{
protected:
	string surname;
	string name;
	string patron;
	string bday;
	string address;
	string iss;
	string pasnumb;

public:

	Pasport();
	Pasport(string surname);
	Pasport(string surname, string name);
	Pasport(string surname, string name, string patronymic);

	void SetSurname(string surname);
	void SetName(string name);
	void SetPatron(string patron);
	void SetBday(string bday);
	void SetAddress(string address);
	void SetIss(string iss);
	void SetPasNumb(string pasnumb);

	string GetSurName();
	string GetName();
	string GetPatron();
	string GetBday();
	string GetAddress();
	string GetIss();
	string GetPasNumb();
};
