#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	if (a == b && b == c) {
		cout << 3 << endl;
	}
	/*if (a != b && b != c && a != c) {
		cout << 0 << endl;
	}
	if ((a == b && a != c && b != c) || (a == c && a != b && c != b) || (b == c && b != a && c != a)) {
		cout << 2 << endl;*/
	else if (a == b || b == c || a == c) {
		cout << 2 << endl;
	}
	else {
		cout << 0 << endl;
	}
	return 0;
}