#include "pas.h"

Pasport::Pasport()
{
	surname = "_____";
	name = "_____";
	patron = "_____";
	bday = "_____";
	address = "_____";
	iss = "_____";
	pasnumb = "_____";
}

Pasport::Pasport(string surname) : Pasport()
{
	SetSurname(surname);
}

Pasport::Pasport(string surname, string name) : Pasport(surname)
{
	SetName(name);
}

Pasport::Pasport(string surname, string name, string patron) : Pasport(surname, name)
{
	SetPatron(patron);
}

void Pasport::SetSurname(string surname)
{
	bool corekted = true;
	for (int i = 0; i < surname.length(); i++)
	{
		if ((surname[i] >= 'a' && surname[i] <= 'z') ||
			(surname[i] >= 'A' && surname[i] <= 'Z') ||
			(surname[i] >= '�' && surname[i] <= '�') ||
			(surname[i] >= '�' && surname[i] <= '�'))
			continue;
		else corekted = false;
	}

	if (corekted) this->surname = surname;
	else throw "nonnono";
}

void Pasport::SetName(string name)
{
	bool corekted = true;
	for (int i = 0; i < name.length(); i++)
	{
		if ((name[i] >= 'a' && name[i] <= 'z') ||
			(name[i] >= 'A' && name[i] <= 'Z') ||
			(name[i] >= '�' && name[i] <= '�') ||
			(name[i] >= '�' && name[i] <= '�'))
			continue;
		else corekted = false;
	}

	if (corekted) this->name = name;
	else throw "nepravilno";
}

void Pasport::SetPatron(string patron)
{
	bool corekted = true;
	for (int i = 0; i < patron.length(); i++)
	{
		if ((patron[i] >= 'a' && patron[i] <= 'z') ||
			(patron[i] >= 'A' && patron[i] <= 'Z') ||
			(patron[i] >= '�' && patron[i] <= '�') ||
			(patron[i] >= '�' && patron[i] <= '�'))
			continue;
		else corekted = false;
	}

	if (corekted) this->patron = patron;
	else throw "nepravilno";
}

void Pasport::SetBday(string bday)
{
	bool corekted = true;
	for (int i = 0; i < bday.length(); i++)
	{
		if ((bday[i] >= '0' && bday[i] <= '9') || bday[i] == '.' || bday[i] == '-') continue;
		else corekted = false;
	}

	if (corekted) this->bday = bday;
	else throw "nepravilno";
}

void Pasport::SetAddress(string address)
{
	this->address = address;
}

void Pasport::SetIss(string iss)
{
	this->iss = iss;
}

void Pasport::SetPasNumb(string pasnumb)
{
	this->pasnumb = pasnumb;
}

string Pasport::GetSurName() { return surname; }

string Pasport::GetName() { return name; }

string Pasport::GetPatron() { return patron; }

string Pasport::GetBday() { return bday; }

string Pasport::GetAddress() { return address; }

string Pasport::GetIss() { return iss; }

string Pasport::GetPasNumb() { return pasnumb; }