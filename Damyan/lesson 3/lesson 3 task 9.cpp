#include "pch.h"
#include <iostream>

using namespace std;
int main()
{
	int a, b, c, d, x, y;
	cout << "Prize ";
	cin >> a >> b;
	cout << "You give";
	cin >> c >> d;

	x = c - a;
	y = d - b;

	cout << "the change is " << x << "lv " << y << "st" << endl;

   return 0; 
}