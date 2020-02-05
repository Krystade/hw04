/*
 * Programmer.h
 *
 *  Created on: Jan 28, 2020
 *      Author: jschmid20
 */

#ifndef PROGRAMMER_H_
#define PROGRAMMER_H_

#include <iostream>
using namespace std;

#include "Employee.h"

class Programmer:public Employee{
public:
	Programmer();
	Programmer(string name, int id, string phone, int age, char gender, string title, int salary, Date* hireDate, int departmentNum, string supervisorName, double percentSalaryIncrease, bool cpp, bool java);
	void print();

	void setDepartmentNum(int departmentNum){this->departmentNum = departmentNum;}
	void setSupervisorName(string supervisorName){this->supervisorName = supervisorName;}
	void setPercentSalaryIncrease(double percentSalaryIncrease){this->percentSalaryIncrease = percentSalaryIncrease;}
	void setCpp(bool cpp){this->cpp = cpp;}
	void setJava(bool java){this->java = java;}
private:
	int departmentNum;
	string supervisorName;
	double percentSalaryIncrease;
	bool cpp;
	bool java;
};



#endif /* PROGRAMMER_H_ */
