#include "nonprof.h"
#include <iostream>

float NonProfessional::calculateWR() const {

	float hours, pay;

	cout << "Enter employee hours worked this week: ";
	cin >> hours;
	cout << "Enter employee pay (per hour): ";
	cin >> pay;

	return hours * pay;
}

float NonProfessional::calculateVH() const {

	//for nonprofessionals, every hour work grants them 15 minutes (0.25 hours) of vacation time

	float hours, newHours = 0, rate = 0.25;

	//max vacation hours for nonprofessionals is 100 hours

	int maxHours = 100;

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

float NonProfessional::calculateHI() const {
	//for nonprofessionals, the company will match employee health care contributions with 50 cents for every dollar contributed. (idk how this works in real life)
	//max contribution amount is 20,000

	float employeeCont, newCont = 0, rate = 0.5;
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





