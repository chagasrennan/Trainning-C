/*
==================================================================
    C++ training - Pi calculation using monte carlo method

 Author: Rennan Danilo Seimetz Chagas
 email: chagasrennan@gmail.com
==================================================================
*/


#include <iostream>
#include <stdlib.h>

using namespace std;


int main()
{
	srand(time(NULL));

	int x; // real number [0,1]
	int y; // real number [0,1]

	int n = 1000; // number of iterations

	int ctin; // counter of points inside circle
	int lepi; // value of pi

	int aux; // auxliary variable

	for (int i = 0; i < n; ++i)
	{
		x = rand();
		y = rand();

		aux = x^2 + y^2;
		
		if ( aux < 1)
		{
			ctin = ctin++;
		}
	}

	lepi = 4*(ctin/n);

	cout << "Pi: " << lepi;

	return 0;
}


