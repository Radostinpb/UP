#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	int n = 0;

	do {
		cin >> n;
	} while (n < 10 || n > 200);

	for (int i = n;i > 0;i--)
	{
		if (i % 7 == 0) {
			cout << i << endl;
		}
	}

    return 0; 
}