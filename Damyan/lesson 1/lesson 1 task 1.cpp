#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int x, y, z;
	cout << "insert x and y" << endl;
	cin >> x >> y;

	z = sqrt(x * x + y * y);
	
	if (z < 6) {
		cout << "Yes" << endl;
	}

	if (z > 6) {
		cout << "NO" << endl;
	}

	return 0;
}
