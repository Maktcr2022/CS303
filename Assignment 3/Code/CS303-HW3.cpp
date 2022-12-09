// CS303-HW3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Funcs.h"
using namespace std;

int main()
{

    //main() for the Queue portion
    queue<int> myQueue;
    myQueue.push(11);
    myQueue.push(15);
    myQueue.push(35);
    myQueue.push(40);
    myQueue.push(68);
    

    printQueue(myQueue);
    move_to_rear(myQueue);
    cout << endl;

    printQueue(myQueue);


    //main() for stateDataMap portion
    map<string, string> stateDataMap;
    string state;

    stateDataMap["Nebraska"] = "Lincoln";
    stateDataMap["New York"] = "Albany";
    stateDataMap["Ohio"] = "Columbus";
    stateDataMap["California"] = "Sacramento";
    stateDataMap["Massachusetts"] = "Boston";
    stateDataMap["Texas"] = "Austin";

    print_map(stateDataMap);
    stateDataMap["California"] = "Los Angeles";

    cout << "\nEnter the name of a State: ";
    getline(cin, state);
    print_capital(stateDataMap, state);

    //main() for the palindrome portion
    char checkString[] = "racecar";

    int end_index = strlen(checkString) - 1;

    if (is_palindrome(checkString, end_index))
        cout << "yes" << endl;
    else
        cout << "no" << endl;
        
}

