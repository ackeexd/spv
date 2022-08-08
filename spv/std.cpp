#include "std.h"

inline Student::Student()
{
	surname = "_____";
	name = "_____";
	patron = "_____";
	bday = "_____";
	address = "_____";
	android = "_____";
}

Student::Student(string surname) : Student() { SetSurname(surname); }

Student::Student(string surname, string name) :Student(surname) { SetName(name); }

Student::Student(string surname, string name, string android) :Student(surname, name) { SetAndroid(android); }


Student::Student(const Student& other)
{
	surname = other.surname;
	name = other.name;
	patron = other.patron;
	bday = other.bday;
	address = other.address;
	android = other.android;

	size_ekz = other.size_ekz;
	size_zach = other.size_zach;
	size_kurs = other.size_kurs;

	ekz = new int[size_ekz];
	for (int i = 0; i < size_ekz; i++)
		ekz[i] = other.ekz[i];

	zachety = new int[size_zach];
	for (int i = 0; i < size_zach; i++)
		zachety[i] = other.zachety[i];

	kurs = new int[size_kurs];
	for (int i = 0; i < size_kurs; i++)
		kurs[i] = other.kurs[i];
}


inline Student::~Student()
{
	if (ekz != nullptr) { delete[] ekz; ekz = nullptr; }
	if (zachety != nullptr) { delete[] zachety; zachety = nullptr; }
	if (kurs != nullptr) { delete[] kurs; kurs = nullptr; }
}


inline void Student::SetSurname(string surname)
{
	bool corect = true;
	for (int i = 0; i < surname.length(); i++)
	{
		if ((surname[i] >= 'a' && surname[i] <= 'z') ||
			(surname[i] >= 'A' && surname[i] <= 'Z') ||
			(surname[i] >= 'à' && surname[i] <= 'ÿ') ||
			(surname[i] >= 'À' && surname[i] <= 'ß'))
			continue;
		else corect = false;
	}

	if (corect) this->surname = surname;
	else throw ("Surname is unsuitable!!!");
}

void Student::SetName(string name)
{
	bool corect = true;
	for (int i = 0; i < name.length(); i++)
	{
		if ((name[i] >= 'a' && name[i] <= 'z') ||
			(name[i] >= 'A' && name[i] <= 'Z') ||
			(name[i] >= 'à' && name[i] <= 'ÿ') ||
			(name[i] >= 'À' && name[i] <= 'ß'))
			continue;
		else corect = false;
	}

	if (corect) this->name = name;
	else throw ("Name is unsuitable!!!");
}

void Student::SetPatron(string patron)
{
	bool corect = true;
	for (int i = 0; i < patron.length(); i++)
	{
		if ((patron[i] >= 'a' && patron[i] <= 'z') ||
			(patron[i] >= 'A' && patron[i] <= 'Z') ||
			(patron[i] >= 'à' && patron[i] <= 'ÿ') ||
			(patron[i] >= 'À' && patron[i] <= 'ß'))
			continue;
		else corect = false;
	}

	if (corect) this->patron = patron;
	else throw ("Patronymic is unsuitable!!!");
}

void Student::SetBday(string bday)
{
	bool corect = true;
	for (int i = 0; i < bday.length(); i++)
	{
		if ((bday[i] >= '0' && bday[i] <= '9') || bday[i] == '.' || bday[i] == '-') continue;
		else corect = false;
	}

	if (corect) this->bday = bday;
	else throw ("Birthday is unsuitable!!!");
}

void Student::SetAddress(string address)
{
	this->address = address;
}

void Student::SetAndroid(string android)
{
	bool corect = true;
	for (int i = 0; i < android.length(); i++)
	{
		if ((android[i] >= '0' && android[i] <= '9') || android[i] == '.' || android[i] == '-') continue;
		else corect = false;
	}

	if (corect) this->android = android;
	else throw ("Telefon is unsuitable!!!");
}

string Student::GetSurname() const
{
	return surname;
}

string Student::GetName() const
{
	return name;
}

string Student::GetPatron() const
{
	return patron;
}

string Student::GetBday() const
{
	return bday;
}

string Student::GetAddress() const
{
	return address;
}

string Student::GetAndroid() const
{
	return android;
}

void Student::AddEkz(int rate)
{
	int* temp = new int[size_ekz + 1];

	for (int i = 0; i < size_ekz; i++)
		temp[i] = ekz[i];

	temp[size_ekz] = rate;
	delete[] ekz;
	ekz = temp;
	size_ekz++;
}

void Student::AddZachet(int rate)
{
	int* temp = new int[size_zach + 1];

	for (int i = 0; i < size_zach; i++)
		temp[i] = zachety[i];

	temp[size_zach] = rate;
	delete[] zachety;
	zachety = temp;
	size_zach++;
}

void Student::AddKurs(int rate)
{
	int* temp = new int[size_kurs + 1];

	for (int i = 0; i < size_kurs; i++)
		temp[i] = kurs[i];

	temp[size_kurs] = rate;
	delete[] kurs;
	kurs = temp;
	size_kurs++;
}

void Student::SetInfoStud()
{
	string value;
    cout << "Surname: ";
	getline(cin, value);
	SetSurname(value);

	cout << "Name : ";
	getline(cin, value);
	SetName(value);

	cout << "Patron : ";
	getline(cin, value);
	SetPatron(value);

	cout << "bday : ";
	getline(cin, value);
	SetBday(value);

	cout << "address : ";
	getline(cin, value);
	SetAddress(value);

	cout << "android: ";
	getline(cin, value);
	SetAndroid(value);
}

void Student::SetInfoRates()
{
	cout << "workname:\n1 - ekz\n2 - zach\n3 - kurs\n";
	int n;
	cin >> n;

	if (n == 1)
	{
		cout << "ekznum : ";
		int x;
		cin >> x;

		cout << "ekzrate : ";
		int y;
		cin >> y;

		if (size_ekz > 0 && x <= size_ekz && x >= 1 && y <= 12 && y >= 1)
			this->ekz[x - 1] = y;

		else cout << "error\n";
	}

	else if (n == 2)
	{
		cout << "zachnum : ";
		int x;
		cin >> x;

        cout << "zachrate : ";
		int y;
		cin >> y;

		if (size_zach > 0 && x <= size_zach && x >= 1 && y <= 12 && y >= 1)
			this->zachety[x - 1] = y;

		else cout << "error\n";
	}

	else if (n == 3)
	{
		cout << "kursnum : ";
		int x;
		cin >> x;

		cout << "kursrate : ";
		int y;
		cin >> y;

		if (size_kurs > 0 && x <= size_kurs && x >= 1 && y <= 12 && y >= 1)
			this->kurs[x - 1] = y;

		else cout << "error\n";
	}

	else cout << "error\n";
}

void Student::PrintInfoStud() const
{
	cout << "\nSurname : \t" << surname << "\n";
	cout << "Name : \t\t" << name << "\n";
	cout << "Patron : \t" << patron << "\n";
	cout << "Bday : " << bday << "\n";
	cout << "Address : \t" << address << "\n";
	cout << "Android : \t" << android << "\n";
}

void Student::PrintInfoRates() const
{
	cout << "\nnum:\t";

	for (int i = 1; i <= 5; i++)
		cout << i << "\t";

	cout << "\nrate:\t";

	for (int i = 0; i < size_ekz; i++)
		cout << ekz[i] << "\t";

	cout << "\nzachrate:\t";

	for (int i = 0; i < size_zach; i++)
		cout << zachety[i] << "\t";

	cout << "\nKursrate:\t";

	for (int i = 0; i < size_kurs; i++)
		cout << kurs[i] << "\t";

	cout << "\n";
}