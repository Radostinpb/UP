#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int a, b;
	char symbol;
	
	cout << "insert two numbers" << endl;
	cin >> a >> b;

	cout << "insert a symbol" << endl;
	cin >> symbol;

	switch (symbol) {
		case '+':
			cout << a + b << endl;
			break;
		case '-':
			cout << a - b << endl;
			break;
		case '*':
			cout << a * b << endl;
			break;
		case '/':
			cout << a / b << endl;
			break;
		case '%':
			cout << a % b << endl;
			break;
		default:
			cout << "Invalid operation" << endl;
		
	}
    return 0;
}

