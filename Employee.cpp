/*
 * Employee.cpp
 *
 *  Created on: Jan 28, 2020
 *      Author: jschmid20
 */

#include "Employee.h"

//Default Employee constructor
Employee::Employee(){
	name = "";
	id = 0;
	phone = "0";
	age = 0;
	gender = 'M';
	title = "";
	salary = 0;
	hireDate = new Date(0, 0, 0);
}
//Overloaded Employee constructor
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

//Fuction that prints out an Employee object's data using cout
void Employee::print(){
	cout << "Name: " << name << "\nID: " << id << "\nPhone: " << phone << "\nAge: " << age;
	cout << "\nGender: " << gender << "\nJob Title: " << title << "\nSalary: $" << salary;
	cout << "\nDate Hired: ";
	hireDate->print();
}

//Input number of years
//Adds input to Employee's age
void Employee::addAge(int input){
	this->age += input;
	cout << "Added " << input << " years to " << this->name << "'s age." << endl;
}
//Overloaded + operator

Employee Employee::operator+(int input){
	cout << "Initial age: " << this->getAge() << endl;
	age += input;
	cout << "Final age: " << this->getAge() << endl;
	return *this;
}
//Overloaded pre-increment operator
Employee& Employee::operator++(){
	++this->age;
	return *this;
}
//Overloaded post-increment operator
Employee Employee::operator++(int){
	Employee copy(*this);
	++(*this);
	return copy;
}
//Overloaded insertion opertator
//Returns an ostream object that can be used to print the object's data using cout 
ostream& operator<<(ostream& out, const Employee& employee){
	out << "Name: " << employee.name << "\nID: " << employee.id << "\nPhone: " << employee.phone 
		<< "\nAge: " << employee.age << "\nGender: " << employee.gender << "\nJob Title: " 
		<< employee.title << "\nSalary: $" << employee.salary <<  endl;
	employee.hireDate->print();
	return out;
}
//Overloaded extraction operator
//Creates an Employee object then prompts user for input to fill in the data
istream& operator>>(istream& in, Employee& employee){
	cout << "Enter Employee's name: ";
	in >> employee.name;
	cout << "Enter Employee's ID: ";
	in >> employee.id;
	cout << "Enter Employee's phone: ";
	in >> employee.phone;
	cout << "Enter Employee's age: ";
	in >> employee.age;
	cout << "Enter Employee's gender: ";
	in >> employee.gender;
	cout << "Enter Employee's title: ";
	in >> employee.title;
	cout << "Enter Employee's salary: ";
	in >> employee.salary;
	cout << "Enter Employee's month hired: ";
	in >> employee.hireDate->month;
	cout << "Enter Employee's day hired: ";
	in >> employee.hireDate->day;
	cout << "Enter Employee's year hired: ";
	in >> employee.hireDate->year;
	cout << endl;

	return in;
}
