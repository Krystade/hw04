/*
 * SoftwareArchitect.h
 *
 *  Created on: Jan 28, 2020
 *      Author: jschmid20
 */

#ifndef SOFTWAREARCHITECT_H_
#define SOFTWAREARCHITECT_H_

#include <iostream>
using namespace std;

#include "Employee.h"

class SoftwareArchitect:public Employee{
public:
	SoftwareArchitect();
	SoftwareArchitect(string name, int id, string phone, int age, char gender, string title, int salary, Date* hireDate, int departmentNum, string supervisorName, double percentSalaryIncrease, int yearsExp);
	void print();

	void setDepartmentNum(int departmentNum){this->departmentNum = departmentNum;}
	void setSupervisorName(string supervisorName){this->supervisorName = supervisorName;}
	void setPercentSalaryIncrease(double percentSalaryIncrease){this->percentSalaryIncrease = percentSalaryIncrease;}
	void setYearsExp(int yearsExp){this->yearsExp = yearsExp;}
private:
	int departmentNum;
	string supervisorName;
	double percentSalaryIncrease;
	int yearsExp;
};



#endif /* SOFTWAREARCHITECT_H_ */
