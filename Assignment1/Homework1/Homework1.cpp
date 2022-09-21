//Homework1.cpp

#include <iostream>
#include <vector>
#include "functions1.h"
using namespace std;

int main()
{
    vector<int> intVector;
    readfile("inputFile.txt", intVector);

    addValue(intVector);
    printArray(intVector);

    changeValue(intVector);
    printArray(intVector);
    
    removeValue(intVector);
    printArray(intVector);

    checkValue(intVector);
    printArray(intVector);
}

