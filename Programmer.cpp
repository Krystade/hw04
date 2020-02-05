/*
 * Programmer.cpp
 *
 *  Created on: Jan 28, 2020
 *      Author: jschmid20
 */

#include "Programmer.h"

Programmer::Programmer():Employee(){
	departmentNum = 0;
	supervisorName = " ";
	percentSalaryIncrease = 0.00;
	cpp = true;
	java = true;
}
Programmer::Programmer(string name, int id, string phone, int age, char gender, string title, int salary, Date* hireDate, int departmentNum, string supervisorName, double percentSalaryIncrease, bool cpp, bool java):Employee(name, id, phone, age, gender, title, salary, hireDate){
	this->departmentNum = departmentNum;
	this->supervisorName = supervisorName;
	this->percentSalaryIncrease = percentSalaryIncrease;
	this->cpp = cpp;
	this->java = java;
}

void Programmer::print(){
	Employee(*this).print();
	cout << "Department Number: " << departmentNum << "\nSupervisor's Name: " << supervisorName
			<< "\nPercent Salary Increase: " << percentSalaryIncrease << "%\ncpp: " << cpp
			<< "\njava: " << java << endl;
}
