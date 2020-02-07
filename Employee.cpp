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
	cout << "\nGender: " << gender << "\nJob Title: " << title << "\nSalary: $" << salary;
	cout << "\nDate Hired: ";
	hireDate->print();
}

void Employee::addAge(int input){
	this->age += input;
	cout << "Added " << input << " years to " << this->name << "'s age." << endl;
}

Employee Employee::operator+(int input){
	cout << "Initial age: " << this->getAge() << endl;
	age += input;
	cout << "Final age: " << this->getAge() << endl;
	return *this;
}

ostream& operator<<(ostream& out, const Employee employee){
	out << "Name: " << employee.name << "\nID: " << employee.id << "\nPhone: " << employee.phone 
		<< "\nAge: " << employee.age << "\nGender: " << employee.gender << "\nJob Title: " 
		<< employee.title << "\nSalary: $" << employee.salary << endl;
	return out;
}

istream& operator>>(istream& in, Employee employee){
	cout << "Enter Employee's age: ";
	in >> employee.age;
	cout << endl;

	return in;
}
















