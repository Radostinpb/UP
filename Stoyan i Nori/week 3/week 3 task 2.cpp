#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	double a, b, c;
	cout << "insert 3 numbers" << endl;
	cin >> a >> b >> c ;

	if (a < b && a < c && b < c) {
		cout << a << endl;
		cout << b << endl;
		cout << c << endl;
	}
	if (a < b && a < c && b > c) {
		cout << a << endl;
		cout << c << endl;
		cout << b << endl;
	}
	if (b < a && b < c && a < c) {
		cout << b << endl;
		cout << a << endl;
		cout << c << endl;
	}
	if (b < a && b < c && a > c) {
		cout << b << endl;
		cout << c << endl;
		cout << a << endl;
	}
	if (c < b && c < a && b < a) {
		cout << c << endl;
		cout << b << endl;
		cout << a << endl;
	}
	if (c < b && c < a && a < b) {
		cout << c << endl;
		cout << a << endl;
		cout << b << endl;
	}
	
    return 0;
}

