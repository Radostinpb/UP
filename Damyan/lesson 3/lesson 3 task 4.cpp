#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;

	if (a == 0 && b == 0) {
		cout << "INF" << endl;
	}

	if (a == 0 && b != 0 || b % a != 0) {
		cout << "NO" << endl;
	}

	if (a != 0 && b != 0 && b % a == 0) {
		cout << -b / a << endl;
	}
	return 0;
}