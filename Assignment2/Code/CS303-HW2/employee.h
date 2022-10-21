#pragma once
#include <iostream>
using namespace std;

class Employee {
private:
	int weeklyRate;
	int vacationHours;
	int healthInsurance;

public:
	Employee();

	virtual float calculateWR() const = 0;
	virtual float calculateVH() const = 0;
	virtual float calculateHI() const = 0;

	int getWR() const;
	int getVH() const;
	int getHI() const;

	void setWR(int);
	void setVH(int);
	void setHI(int);
};
