/*
 * Employee.h
 *
 *  Created on: Jan 28, 2020
 *      Author: jschmid20
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <iostream>
using namespace std;
#include "Date.h"

class Programmer;

class Employee{
	friend bool comparePhone(Employee&, Programmer&);
public:
	Employee();
	Employee(string name, int id, string phone, int age, char gender, string title, int salary, Date* hireDate);
	void print();
	void addAge(int input);

	string getName(){return name;}
	int getId(){return id;}
	string getPhone(){return phone;}
	int getAge(){return age;}
	char getGender(){return gender;}
	string getTitle(){return title;}
	int getSalary(){return salary;}
	Date* getHireDate(){return hireDate;}

	void setName(string name){this->name = name;}
	void setId(int id){this->id = id;}
	void setPhone(string phone){this->phone = phone;}
	void setAge(int age){this->age = age;}
	void setGender(char gender){this->gender = gender;}
	void setTitle(string title){this->title = title;}
	void setSalary(int salary){this->salary = salary;}
	void setHireDate(Date* hireDate){this->hireDate = hireDate;}

	bool operator==(Employee& otherEmployee) {return this->getPhone() == otherEmployee.getPhone();}
	Employee operator+(int);
private:
	string name;
	int id;
	string phone;
	int age;
	char gender;
	string title;
	int salary;
	Date* hireDate;
};

#endif /* EMPLOYEE_H_ */
