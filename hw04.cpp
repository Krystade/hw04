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

	Employee* p_e1 = new Employee();
	Employee* p_e2 = new Employee("Joe", 78, "9491233523", 55, 'M', "Janitor", 100000, date);
	Programmer* p_p1 = new Programmer();
	Programmer* p_p2 = new Programmer("Carl", 45, "63444442363", 30, 'M', "Back-end Developer", 1000000, date, 20, "Riley", 5.5, true, false);
	SoftwareArchitect* p_s1 = new SoftwareArchitect();
	SoftwareArchitect* p_s2 = new SoftwareArchitect("Riley", 50, "4325452352", 45, 'M', "Lead Designer", 1500000, date, 20, "Jeremiah", 5.5, 20);

	// 1. and 2.
	// Display starting phone values
	cout << "e1.phone = 0  e2.phone = 9491233523  p1.phone = 0" << endl;
	// Check phone numbers using comparePhone() and overloaded ==
	cout << "comparePhone(e1, p1): " << comparePhone(*p_e1, *p_p1) << endl;
	cout << "e1 == e2: " << (*p_e1 == *p_e2) << endl;
	// Change p_e1.phone to the same as p_e2.phone
	cout << "e1.phone = 9491233523" << endl;
	p_e1->setPhone("9491233523");
	// Check phone numbers using comparePhone() and overloaded == again
	cout << "comparePhone(e1, p1): " << comparePhone(*p_e1, *p_p1) << endl;
	cout << "e1 == e2: " << (*p_e1 == *p_e2) << endl;

	cout << endl << endl;
	
	// 3.
	p_e2->addAge(5);

	cout << endl << endl;

	// 4.
	*p_e2 = (*p_e2 + 10);
	cout << endl << endl;

	p_e2->print();
	cout << endl << endl;

	// 5.
	Employee e3;
	cout << "print e1" << endl;
	cout << *p_e1;
	cout << "\nInput data to e3" << endl;
	cin >> e3;
	e3.print();
	cout << e3;

	cout << endl << endl;

	// extra credit.


	return 0;
}

bool comparePhone(Employee& employee, Programmer& programmer){
	return((employee.getPhone() == programmer.getPhone()));
}
