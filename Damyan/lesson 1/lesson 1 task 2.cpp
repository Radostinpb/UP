#include "pch.h"
#include <iostream>
using namespace std;

int main ()
{
	double fahrenheit;
	char t;
	
	cout << "Insert in Fahrenheit" << endl;
	cin >> fahrenheit;
	cout << "Choose the convert process:" << endl << "c for celsius" << endl << "k for kelvins" << endl << "a for both" << endl;
	cin >> t;

	double celsius = (fahrenheit - 32) * 5 / 9;
	double kelvin = celsius + 273.15;

	if (t == 'c') {
		cout << "C=" << celsius << endl;
	}
	if (t == 'k') {
		cout << "K=" << kelvin << endl;
	}
	if (t == 'a') {
		cout << "C=" << celsius << endl;
		cout << "K=" << kelvin << endl;
	}


	return 0;
}