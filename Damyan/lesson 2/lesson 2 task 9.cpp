#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	int n, m, x, y;
	cin >> n >> m >> x >> y;

	if ((n - m) == (x - y) || (n + m) == (x + y)) {
		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl;
	}

    return 0; 
}