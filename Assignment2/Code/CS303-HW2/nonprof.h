#pragma once
#include <iostream>
#include "employee.h"
using namespace std;


class NonProfessional : public Employee {
private:

public:

	float calculateWR() const;
	float calculateVH() const;
	float calculateHI() const;

};