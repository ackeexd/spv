#pragma once
#include "std.h"

class Aspirant : public Student
{
	string top;

public:
	Aspirant() : Student() {}
	Aspirant(string surname) : Student(surname) {}
	Aspirant(string surname, string name) : Student(surname, name) {}
	Aspirant(string surname, string name, string android) : Student(surname, name, android) {}

	void SetWorkTheme(string theme) { top = theme; }
	string GetWorkTheme() { return top; }
};
