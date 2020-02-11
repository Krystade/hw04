/*
 * Date.h
 *
 *  Created on: Jan 28, 2020
 *      Author: jschmid20
 */

#ifndef DATE_H_
#define DATE_H_

#include <iostream>
using namespace std;

class Employee;

class Date{
	friend istream& operator>>(istream& in, Employee& employee);
public:
	Date();
	Date(int m, int d, int y);
	void print();

	int getMonth(){return month;}
	int getDay(){return day;}
	int getYear(){return year;}
private:
	int month;
	int day;
	int year;
};



#endif /* DATE_H_ */
