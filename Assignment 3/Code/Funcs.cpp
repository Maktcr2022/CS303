#include <queue>
#include <iostream>
#include <map>
#include <string>
using namespace std;

//outputs the data stored in stateDataMap
void print_map(map<string, string>& stateDataMap) {
	//iterates through the map and prints out the pair
	for (map<string, string>::iterator i = stateDataMap.begin(); i != stateDataMap.end(); i++) {

		cout << i->first << ", " << i->second << endl;

	}
}

void print_capital(map<string, string> stateDataMap, string state) {

	//finds a state that matches the one given
	map<string, string>::iterator i = stateDataMap.find(state);

	//if we reach the past the end of the map, we didnt find a match
	if (i == stateDataMap.end()) {

		cout << state << " was not found" << endl;
	}
	//prints if a match was found
	else {

		cout << "Capital of " << state << " is " << i->second << endl;

	}
}




void printQueue(queue<int>& myQueue) {
	queue<int> q = myQueue;
	while (!q.empty()) {
		cout << q.front() << endl;
		q.pop();
	}
}


//void move_to_rear(queue<int>& myQueue) {
	//if (!myQueue.empty()) {
		//queue<int> q;
		//int first = myQueue.front();
		//while (true) {
			//int temp = myQueue.front();
			//myQueue.pop();
			//if(temp == first) {
				//myQueue.push(temp);
				//break;
			//}
			//q.push(temp);
		//}
		//while (!q.empty()) {
			//myQueue.push(q.front());
			//q.pop();
		//}
	//}
//}

void move_to_rear(queue<int>& myQueue) {
	if (!myQueue.empty()) {
		int first = myQueue.front();
		myQueue.push(first);
		myQueue.pop();
	}
}

bool is_palindrome(char str[], int end, int start = 0) {

	
	if (end + 1 == 0 || start == end)
		//this base case catches three different instances:
		// 1 - if the string is empty, which we will consider a palindrome
		// 2 - if the string only contains one char, which we will consider a palindrome
		// 3 - exucutes when we have checked all chars in the string and they all matched
		return true;

	else {

		//checks if the two chars on the end match, if not, there is no palindrome, and returns false
		if (str[start] != str[end]) {
			return false;
		}

		//checks if there are more than 2 chars, and if so, continue checking the string
		if (start < end + 1) {
			return is_palindrome(str, start + 1, end - 1);
		}

	}
}
