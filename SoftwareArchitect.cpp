/*
 * SoftwareArchitect.cpp
 *
 *  Created on: Jan 28, 2020
 *      Author: jschmid20
 */


#include "SoftwareArchitect.h"

SoftwareArchitect::SoftwareArchitect():Employee(){
	departmentNum = 0;
	supervisorName = " ";
	percentSalaryIncrease = 0.00;
	yearsExp = 0;
}
SoftwareArchitect::SoftwareArchitect(string name, int id, string phone, int age, char gender, string title, int salary, Date* hireDate, int departmentNum, string supervisorName, double percentSalaryIncrease, int yearsExp):Employee(name, id, phone, age, gender, title, salary, hireDate){
	this->departmentNum = departmentNum;
	this->supervisorName = supervisorName;
	this->percentSalaryIncrease = percentSalaryIncrease;
	this->yearsExp = yearsExp;
}

void SoftwareArchitect::print(){
	Employee(*this).print();
	cout << "Department Number: " << departmentNum << "\nSupervisor's Name: " << supervisorName
		<< "\nPercent Salary Increase: " << percentSalaryIncrease
		<< "%\nYears of Experience: " << yearsExp << endl;
}
