#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
using namespace std;

bool isDigits(const string& str) {
	return str.find_first_not_of("0123456789") == std::string::npos;
}

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

void changeValue(vector<int>& ints) {

	int integer, index;
	string userInput;

	//gets a value from the user to change 
	cout << "Enter an index to change: ";
	
	try {

		cin >> userInput;

		if ( !isDigits(userInput) ) {
			throw runtime_error("Did not enter a number.");
		}
		else if ( stoi(userInput) > ints.size() ) {
			throw runtime_error("Index is out of range.");
		}
		else {

			//else{} is entered once a value is entered that is a valid integer and within range of the array
			//userInput is a string to make error checking easier, stoi() converts the string back to an integer
			index = stoi(userInput);

			cout << "Enter an integer you want to replace the current one: ";
			cin >> userInput;

			//now do the same, except we dont need to check if its an out of range index
			if ( !isDigits(userInput) ) {
				throw runtime_error("Did not enter a number.");
			}
			else {
				integer = stoi(userInput);
				cout << "The old number at index " << index << " was " << ints.at(index) << ".\nThe new number is " <<
					integer << ". " << endl;
				ints.at(index) = integer;
			}
		}
	}
	catch (runtime_error e) {
		cout << e.what() << endl;
	}
}

void addValue(vector<int>& ints) {

	int integer;
	string userInput;

	//gets a value that user wants to add to array
	cout << "Enter an integer to add to the array: ";
	
	try {

		//inside the try{}, check if the user inputed a valid integer
		cin >> userInput;
		//isDigits checks the passed value and returns true if value is an integer, false if not
		if (!isDigits(userInput)) {
			throw runtime_error("Did not enter a number.");
		}
		else {
			//else {} is entered once its determined userInput is a valid integer
			//userInput is a string to make error checking easier, stoi() converts the string back to an integer
			integer = stoi(userInput);
			ints.push_back(integer);
		}

	}
	catch (runtime_error e) {
		//if an error is thrown, the error information is printed
		cout << e.what() << endl;

	}

}

void printArray(vector<int>& ints) {

	cout << "Your array is: " << endl;

	for (int i = 0; i < ints.size(); i++) {
		cout << ints.at(i) << endl;
	}

	cout << endl;
}
