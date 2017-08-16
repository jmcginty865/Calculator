// Calculator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{ 
	int a;
	int b;
	int sum;

	cout << "Enter your first number\n";
	cin >> a;

	cout << "Enter second number\n";
	cin >> b;

	sum = a + b;

	cout << "Your answer is " << sum;

    return sum;
}

