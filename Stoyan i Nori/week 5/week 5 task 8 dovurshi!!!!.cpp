#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;

	do {
		cin >> n;
	} while (n < 3 || n >10);

	for (int i = 0;i < n;i++) {
		do {
			cout << "insert a 2digit number ";
			cin >> a;
		} while (a < 10 || a > 100);
		
		do {
			cout << "insert a 3digit number ";
			cin >> b;
		} while (b < 100 || b > 1000);

		do {
			cout << "insert a 4digit number ";
			cin >> c;
		} while (c < 1000 || c > 10000);
		
	}


	return 0;
}