#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double n, m, a;
	
	cout << "n=" ;
	cin >> n;
	cout << "m=" ;
	cin >> m;
	cout << "a=" ;
	cin >> a;

	int duljina = ceil(n / a);
	int shirina = ceil(m / a);
	int broiPlochki = shirina * duljina;
		cout << broiPlochki << endl;


	return 0;
}