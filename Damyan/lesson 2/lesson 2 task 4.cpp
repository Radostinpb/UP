#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	bool bira, rikiq, led;
	cout << "bira" << endl;
	cin >> bira;

	cout << "rikiq" << endl;
	cin >> rikiq;

	cout << "led" << endl;
	cin >> led;
	
	if (bira || (rikiq && led)) {
		cout << "drinks home" << endl;
	}
	else {
		cout << "go to the store" << endl;
	}
	
    return 0;
}

