#pragma once
#include <iostream>
#include "employee.h"
using namespace std;

class Professional : public Employee {
public:
	float calculateWR() const;
	float calculateVH() const;
	float calculateHI() const;
};
