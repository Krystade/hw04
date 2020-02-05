//============================================================================
// Name        : hw03.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include "hw04.h"

int main() {
	Date* date = new Date(10, 29, 1998);

	cout << "Employees" << endl << endl;
	Employee* e1 = new Employee();
	Employee* e2 = new Employee("Joe", 78, "9491233523", 55, 'M', "Janitor", 100000, date);
	/*e1->print();
	e2->print();
	cout << endl << endl;*/

	cout << "Programmers" << endl << endl;
	Programmer* p1 = new Programmer();
	/*Programmer* p2 = new Programmer("Carl", 45, "63444442363", 30, 'M', "Back-end Developer", 1000000, date, 20, "Riley", 5.5, true, false);
	p1->print();
	p2->print();
	cout << endl << endl;

	cout << "Software Architects" << endl << endl;
	SoftwareArchitect* s1 = new SoftwareArchitect();
	SoftwareArchitect* s2 = new SoftwareArchitect("Riley", 50, "4325452352", 45, 'M', "Lead Designer", 1500000, date, 20, "Jeremiah", 5.5, 20);
	s1->print();
	s2->print();
	cout << endl << endl;*/

	// 1. and 2.
	// Display starting phone values
	cout << "e1.phone = 0  e2.phone = 9491233523  p1.phone = 0" << endl;
	// Check phone numbers using comparePhone() and overloaded ==
	cout << "comparePhone(e1, p1): " << comparePhone(*e1, *p1) << endl;
	cout << "e1 == e2: " << (*e1 == *e2) << endl;
	// Change e1.phone to the same as e2.phone
	cout << "e1.phone = 9491233523" << endl;
	e1->setPhone("9491233523");
	// Check phone numbers using comparePhone() and overloaded == again
	cout << "comparePhone(e1, p1): " << comparePhone(*e1, *p1) << endl;
	cout << "e1 == e2: " << (*e1 == *e2) << endl;

	// 3.
	e2->addAge(5);

	// 4.
	e2 = (e2 + 10);
	e2->print();

	// 5.


	// extra credit.


	return 0;
}

bool comparePhone(Employee& employee, Programmer& programmer){
	return((employee.getPhone() == programmer.getPhone()));
}
