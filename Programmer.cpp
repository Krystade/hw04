/*
 * Programmer.cpp
 *
 *  Created on: Jan 28, 2020
 *      Author: jschmid20
 */

#include "Programmer.h"

//Default Programmer constructor
Programmer::Programmer():Employee(){
	departmentNum = 0;
	supervisorName = " ";
	percentSalaryIncrease = 0.00;
	cpp = true;
	java = true;
}
//Overloaded Programmer constructor
Programmer::Programmer(string name, int id, string phone, int age, char gender, string title, int salary, Date* hireDate, int departmentNum, string supervisorName, double percentSalaryIncrease, bool cpp, bool java):Employee(name, id, phone, age, gender, title, salary, hireDate){
	this->departmentNum = departmentNum;
	this->supervisorName = supervisorName;
	this->percentSalaryIncrease = percentSalaryIncrease;
	this->cpp = cpp;
	this->java = java;
}

//Function that prints out a Programmer object's data using cout
void Programmer::print(){
	Employee(*this).print();
	cout << "Department Number: " << departmentNum << "\nSupervisor's Name: " << supervisorName
			<< "\nPercent Salary Increase: " << percentSalaryIncrease << "%\ncpp: " << cpp
			<< "\njava: " << java << endl;
}
