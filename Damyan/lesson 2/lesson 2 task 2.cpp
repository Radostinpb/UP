#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	double x, y;

	cin >> x >> y;
	
	if (x > y) {
		cout << 1 << endl;
	}

	if (y > x) {
		cout << 2 << endl;
	}

	if (x = y) {
		cout << 0 << endl;
	}
	
    return 0;
}

