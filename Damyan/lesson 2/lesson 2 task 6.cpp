#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	int n, m, k;
	cin >> n >> m >> k;

	int pesen = n * 60 + m;
	int neobhodimapamet = pesen * 16;
	int svobodnapamet = k * 1024;
	
	if (neobhodimapamet < svobodnapamet) {
		cout << "yes" << endl;
	}
	
	else 
	{
		cout << "no" << endl << neobhodimapamet - svobodnapamet << endl;
	}
	/*record = (n * 60 + m) * 16 / 1024;
	if (record < k) {
		cout << "Yes" << endl;
	}

	else {
		cout << "No" << endl << "Traicho, you need more " << (record - k) * 1024 << "KB" << endl;
	}
	*/
	return 0;
}
