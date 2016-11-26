/*
==================================================================
    C++ training - Pi calculation using Gauss-Legendre method

 Author: Rennan Danilo Seimetz Chagas
 email: chagasrennan@gmail.com
==================================================================
*/


#include <iostream>
#include <stdlib.h>
#include <iomanip>      // std::setprecision
#include <math.h>      // sqrt() function

using namespace std;

int main()
{
	int n = 3; // number of iterations

	// initial values declaration
	float an = 1.0;
	float bn = 1.0/sqrt(2);
	float tn = 1.0/4;
	float pn = 1.0;
	float lepi;

	for (int i = 0; i < n; ++i)
	{
		float an1 = (an + bn)/2;
		float bn1 = sqrt(an*bn);
		float tn1 = tn - pn*(an - an1)*(an - an1);
		float pn1 = 2*pn;

		lepi = (an1 + bn1)*(an1 + bn1)/(4*tn1);

		an = an1;
		bn = bn1;
		tn = tn1;
		pn = pn1;

	}

	cout << "\nPi after " << n << " itearations: " << setprecision(15) << lepi << "\n\n";
	return 0;
}