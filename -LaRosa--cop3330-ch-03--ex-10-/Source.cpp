/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 David La Rosa
 */
using namespace std;

#include <iostream>

int main() {

	double num1, num2;

	string operation;

	cout << "Insert the operation (+, -, *, /) followed by two numbers separated by a space: ";

	cin >> operation;
	cin >> num1;
	cin >> num2;

	if (operation == "+")
		cout << "The sum of the two numbers is " << num1 + num2;

	if (operation == "-")
		cout << "The first number minus the second is " << num1 - num2;


	if (operation == "*")
		cout << "The product is " << num1 * num2;

	if (operation == "/")
		cout << "The first number divided by the second is " << num1 / num2;

}