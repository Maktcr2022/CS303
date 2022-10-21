#include <iostream>
#include "employee.h"
using namespace std;


//constructor
Employee::Employee() {
	weeklyRate = 0;
	vacationHours = 0;
	healthInsurance = 0;
}


//getters
int Employee::getWR() const {
	return weeklyRate;
}
int Employee::getVH() const {
	return vacationHours;
}
int Employee::getHI() const {
	return healthInsurance;
}

//setters
void Employee::setWR(int rate) {
	weeklyRate = rate;
}
void Employee::setVH(int vacation) {
	vacationHours = vacation;
}
void Employee::setHI(int heath) {
	healthInsurance = heath;
}