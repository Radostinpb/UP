#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	cout << "Schreib bitte ein Zahl mit fünf Ziffern!" << endl;
	int a, b, c, d;
	int number;
	cin>> number;
	
	a = number / 10000 % 10;
	b = number / 1000 % 10;
	c = number / 10 % 10;
	d = number % 10;

	if (a == d && b == c) {
		cout << "Das ist ein Polyndromm, mein Freund!" << endl;
	}

	else {
		cout << "Probier mit einem anderem Zahl!" << endl;
	}

	system("pause");
	return 0;
}

