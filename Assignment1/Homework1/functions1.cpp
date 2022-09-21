#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
using namespace std;

void readfile(string fileName, vector<int>& ints) {

	string inRec;
	string tempNum;

	//open the files
	ifstream inFile(fileName);

	//check if files are open
	if (!inFile.is_open()) {
		cout << "File failed to open" << endl;
	}

	//loops through the file, saving the ints to a vector of ints
	while (getline(inFile, tempNum)) {
		//stoi() converts the string to int, since getline() wont work with ints
		ints.push_back(stoi(tempNum));
	}
}

void checkValue(vector<int>& ints) {

	int integer;
	
	//gets a value from the user to check for
	cout << "Enter an integer to search for: ";
	cin >> integer;

	//loops through the array until value is found
	for (int i = 0; i < ints.size(); i++) {
		if (ints.at(i) == integer) {
			//reports to the user once value is found
			cout << "Number was found at index " << i << endl;
		}
	}

}

void changeValue(vector<int>& ints) {

	int integer, index;

	//gets a value from the user to change 
	cout << "Enter an index to change: ";
	cin >> index;

	//gets an integer value that the user wants in place of current value
	cout << "Enter an integer you want to replace the current one: ";
	cin >> integer;

	//displays the new and old value to the user
	cout << "The old number at index " << index << " was " << ints.at(index) << ".\nThe new number is " <<
		integer << ". " << endl;

	//changes the value in the array
	ints.at(index) = integer;

}


void addValue(vector<int>& ints) {

	int integer;
	
	//gets a value that user wants to add to array
	cout << "Enter an integer to add to the array: ";
	cin >> integer;

	//adds user value to the array
	ints.push_back(integer);

}

void removeValue(vector<int>& ints) {

	int index;

	//gets an index value the user wants removed from array
	cout << "Enter an index to remove: ";
	cin >> index;

	//removes the number at that index
	ints.erase(ints.begin() + index);

}

void printArray(vector<int>& ints) {
	
	cout << "Your array is: " << endl;

	for (int i = 0; i < ints.size(); i++) {
		cout << ints.at(i) << endl;
	}

	cout << endl;
}