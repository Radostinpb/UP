#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	int n = 0;
	int sum = 0;
	
	do
	{
		cin >> n;
	} while (n < 10 || n > 100);

	for (int i = 0;i <= n;i++) {
		if (i % 2 == 0) {
			sum += i;
		}
	}
	cout << sum << endl;
	return 0;
}