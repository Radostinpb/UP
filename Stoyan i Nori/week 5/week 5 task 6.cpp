#include "pch.h"
#include <iostream>

using namespace std;
int main()
{	
	int n = 0;
	int sum = 0;
	
	do {
		cin >> n;
	} while (n < 3 || n > 200);

	for (int i = 0;i <= n;i++) {
		sum += i;
	}

	cout << sum << endl;

	return 0;
}