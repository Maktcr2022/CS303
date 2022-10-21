// CS303-HW2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include "functionsHW2.h"
#include "employee.h"
#include "nonprof.h"
#include "prof.h"

int main()
{
    /*
    NonProfessional Dan;
    Dan.setWR(Dan.calculateWR());
    cout << "Employee's weelky rate is: $" << Dan.getWR() << endl << endl;

    Dan.setVH(Dan.calculateVH());
    cout << "Employee's total Vacation Hours are: " << Dan.getVH() << endl << endl;

    Dan.setHI(Dan.calculateHI());
    cout << "Employee's total Health Insurance contribution is: " << Dan.getHI() << endl << endl;


    Professional DanSquared;
    DanSquared.setVH(25);
    DanSquared.setWR(DanSquared.calculateWR());
    cout << "Employee's weelky rate is: $" << DanSquared.getWR() << endl << endl;

    DanSquared.setVH(DanSquared.calculateVH());
    cout << "Employee's total Vacation Hours are: " << DanSquared.getVH() << endl << endl;
    #W
    DanSquared.setHI(DanSquared.calculateHI());
    cout << "Employee's total Health Insurance contribution is: " << DanSquared.getHI() << endl << endl;
    */


    
    vector<int> intVector;
    readfile("inputFile.txt", intVector);

    addValue(intVector);
    printArray(intVector);

    changeValue(intVector);
    printArray(intVector);
    
    
}

