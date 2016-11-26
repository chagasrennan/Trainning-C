/*
==================================================================
    C++ training - Pi calculation using monte carlo method

 Author: Rennan Danilo Seimetz Chagas
 email: chagasrennan@gmail.com
==================================================================
*/


#include <iostream>
#include <stdlib.h>
#include <iomanip>      // std::setprecision

using namespace std;

int main()
{
	srand(time(NULL));

	float x; // real number [0,1]
	float y; // real number [0,1]
	int n = 1000000; // number of iterations
	int ctin; // counter of points inside circle
	float lepi; // value of pi
	float aux; // auxliary variable

	for (int i = 0; i < n; ++i)
	{
		x = ((float) rand() / (RAND_MAX)); // sample a [0.1] number for x
		y = ((float) rand() / (RAND_MAX)); // sample a [0.1] number for y

		aux = x*x + y*y;
		if ( aux <= 1)
		{
			ctin = ctin+1;
		}
	}
	// cout << "\nIterations: " << n << "\tInside: " << ctin << endl;

	lepi = 4.0*(1.0*ctin / 1.0*n); // this part was tricky
	// I had to add 1.0 multipling ctin and n 
	// ctin and n are int type, thus, ctin/n returned a int
	// need to find a better way to get the double/float 
	cout << "\nPi after " << n << " itearations: " << setprecision(12) << lepi << "\n\n";
	return 0;
}


