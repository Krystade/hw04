/*
 * Employee.cpp
 *
 *  Created on: Jan 28, 2020
 *      Author: jschmid20
 */

#include "Employee.h"

Employee::Employee(){
	name = "";
	id = 0;
	phone = "0";
	age = 0;
	gender = 'M';
	title = "";
	salary = 0;
	hireDate = new Date();
}
Employee::Employee(string name, int id, string phone, int age, char gender, string title, int salary, Date* hireDate){
	this->name = name;
	this->id = id;
	this->phone = phone;
	this->age = age;
	this->gender = gender;
	this->title = title;
	this->salary = salary;
	this->hireDate = hireDate;
}

void Employee::print(){
	cout << "Name: " << name << "\nID: " << id << "\nPhone: " << phone << "\nAge: " << age;
	cout << "\nDate Hired: ";
	cout << "\nGender: " << gender << "\nJob Title: " << title << "\nSalary: $" << salary;
	hireDate->print();
}

void Employee::addAge(int input){
	this->age += input;
	cout << "Added " << input << " years to " << this->name << "'s age." << endl;
}


ostream& operator<<(ostream& out, const Employee employee){
	out << "Name: " << employee.getName() << "\nID: " << employee.getId() << "\nPhone: " << employee.getPhone() 
		<< "\nAge: " << employee.getAge() << "\nGender: " << employee.getGender() << "\nJob Title: " 
		<< employee.getTitle() << "\nSalary: $" << employee.getSalary() << endl;
	return out;
}

istream& operator>>(istream& in, Employee employee){
	cout << "Enter Employee's age: ";
	in >> employee.age;
	cout << endl;
	return in;
}

Employee Employee::operator+(int input){
	cout << this->getAge() << endl;
	age += input;
	cout << this->getAge() << endl;
	return *this;
}
