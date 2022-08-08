#pragma once
using namespace std;
#include <iostream>
#include <string>

class Student {
protected:

	string surname;
	string name;
	string patron;
	string bday;
	string address;
	string android;

	int size_ekz = 0;
	int* ekz = nullptr;

	int size_zach = 0;
	int* zachety = nullptr;

	int size_kurs = 0;
	int* kurs = nullptr;

public:


	Student();
	Student(string surname);
	Student(string surname, string name);
	Student(string surname, string name, string android);


	Student(const Student& other);


	~Student();


	void SetSurname(string surname);
	void SetName(string name);
	void SetPatron(string  patron);
	void SetBday(string  bday);
	void SetAddress(string  address);
	void SetAndroid(string  android);


	string GetSurname() const;
	string GetName()const;
	string GetPatron()const;
	string GetBday()const;
	string GetAddress()const;
	string GetAndroid()const;


	void AddEkz(int rate);
	void AddZachet(int rate);
	void AddKurs(int rate);

	void SetInfoStud(); 
	void SetInfoRates();  

	void PrintInfoStud() const; 
	void PrintInfoRates() const;  
};