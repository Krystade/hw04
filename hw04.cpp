//============================================================================
// Name        : hw03.cpp
// Author      : Jack Schmid -- CS1C T/Th 3:30-5:50 -- Professor Kath
// Description : Program to practice Friend Functions & Operator Overloading in C++, Ansi-style
//============================================================================


#include "hw04.h"

int main() {
	//Create Date object pointer
	Date* date = new Date(10, 29, 1998);
	//Create pointers to two employee objects and a programmer object to be used later
	Employee* p_e1 = new Employee();
	Employee* p_e2 = new Employee("Joe", 78, "9491233523", 55, 'M', "Janitor", 100000, date);
	Programmer* p_p1 = new Programmer();

	// 1. and 2.
	cout << "1. and 2." << endl;
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
	cout << "3." << endl;
	p_e2->addAge(5);

	cout << endl << endl;

	// 4.

	p_e2->print();
	cout << endl;
	cout << "4." << endl;
	*p_e2 = (*p_e2 + 10);
	cout << endl;

	p_e2->print();
	cout << endl << endl;

	// 5.
	cout << "5." << endl;
	cout << *p_e1;
	p_e1->print();
	cout << "\nInput data for employee 1" << endl;
	cin >> *p_e1;
	cout << *p_e1;

	cout << endl << endl;

	// extra credit.
	cout << "Extra Credit." << endl;
	cout << "Pre-Incrementing employee 1" << endl;
	++(*p_e1);
	p_e1->print();
	cout << endl << endl;

	cout << "Post-Incrementing employee 1" << endl;
	(*p_e1)++;
	p_e1->print();
	cout << endl << endl;

	cout << "Post-Incrementing incurs the most overhead because it keeps a copy of the previous value." << endl;
	return 0;
}
//Function too compare the phone numbers of an employee object and a programmer object
//Input is one employee object and one programmer object
//Output is a boolean statement of whether or not the phone numbers of the two objects are the same
bool comparePhone(Employee& employee, Programmer& programmer){
	return((employee.getPhone() == programmer.getPhone()));
}
