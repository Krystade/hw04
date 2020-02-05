/*
 * date.cpp
 *
 *  Created on: Jan 28, 2020
 *      Author: jschmid20
 */

#include "Date.h"

Date::Date(){
	month = 0;
	day = 0;
	year = 0;
}
Date::Date(int m, int d, int y){
	month = m;
	day = d;
	year = y;
}

void Date::print(){
	cout << month << "/" << day << "/" << year << endl;
}
