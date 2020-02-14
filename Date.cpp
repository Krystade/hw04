/*
 * date.cpp
 *
 *  Created on: Jan 28, 2020
 *      Author: jschmid20
 */

#include "Date.h"

//Default Date constructor
Date::Date(){
	month = 0;
	day = 0;
	year = 0;
}
//Overloaded Date constructor
Date::Date(int m, int d, int y){
	month = m;
	day = d;
	year = y;
}

//Fuction that prints out a Date object's data using cout
void Date::print(){
	cout << month << "/" << day << "/" << year << endl;
}
