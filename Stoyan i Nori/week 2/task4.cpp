#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int y, d, h, m, s, sum;
	cout << "vuvedete godini" << endl;
	cin >> y;

	d = y * 365;
	h = d * 24;
	m = h * 60;
	s = m * 60;

	cout << "days=" << d << endl;
	cout << "hours=" << h << endl;
	cout << "minutes=" << m << endl;
	cout << "seconds=" << s << endl;

	return 0;
}
