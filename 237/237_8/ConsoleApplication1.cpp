#include "pch.h"
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	cout.flush();
	double x0, xn = 0,f, df;

	int i = 0;
	do {
		x0 = xn;
		cout<< "? " << x0 << endl;
		cin >> f;
		cin >> df;
		xn = x0 - (f / df);
		i++;
	} while ((abs(x0 - xn) > 0.000001) && (i < 49));
	cout << "! " << xn << endl;

	return 0;
}
