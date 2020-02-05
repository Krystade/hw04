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

class Date{
public:
	Date();
	Date(int m, int d, int y);
	void print();
private:
	int month;
	int day;
	int year;
};



#endif /* DATE_H_ */
