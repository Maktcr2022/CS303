#pragma once
#include <queue>
#include <map>
#include <string>
using namespace std;

void print_map(map<string, string>&);
void print_capital(map<string, string>, string);
void move_to_rear(queue<int>&);
void printQueue(queue<int>&);
bool is_palindrome(char str[], int, int i = 0);