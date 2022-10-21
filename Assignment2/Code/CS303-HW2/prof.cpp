#include "prof.h"
#include <iostream>

float Professional::calculateWR() const {
	//since its stated that professional employees have a set monthly salary, we will get the weekly rate by dividing 
	//the monthly rate by 4

	float salary, hours;

	cout << "Enter the salary for this professional employee: ";
	cin >> salary;

	return (salary / 4);

}

float Professional::calculateVH() const {

	//for professionals, every hour work grants them 30 minutes (0.5 hours) of vacation time

	float hours, newHours = 0, rate = 0.5;

	//max vacation hours for nonprofessionals is 200 hours

	int maxHours = 200;

	cout << "Enter employee hours worked: ";
	cin >> hours;

	float totalHours = getVH();
	if (totalHours < maxHours) {
		newHours = hours * rate;
	}
	else {
		cout << "Max amount of vacation hours earned" << endl;
	}

	cout << "Total Vacation hours earned previously: " << getVH() << endl;
	cout << "Vacation hours earned: " << hours * rate << endl;

	return newHours + getVH();

}

float Professional::calculateHI() const {
	//for nonprofessionals, the company will match employee health care contributions. (idk how this works in real life)
	//max contribution amount is 40,000

	float employeeCont, newCont = 0, rate = 1;
	int maxCont = 20000;

	cout << "Enter the employee contribution: ";
	cin >> employeeCont;

	if (getHI() < maxCont) {
		newCont = employeeCont + (employeeCont * rate);
	}
	else {
		cout << "Max contribution to heath insurance reached" << endl;
	}

	return newCont + getHI();

}
