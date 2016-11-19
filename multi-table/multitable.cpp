#include <iostream>

using namespace std;

int main()
{
	for (int i = 1; i < 10; ++i) // for each number from 1 to 9
	{
		cout << "Multiplication Table of " << i << endl;
		// i = 3 -> Multiplication Table of 3
		for (int j = 1; j < 11; ++j)
		{
			cout << i << " x " << j << "\t = " << i*j << endl;
			// i = 3 and j = 4 -> 3 x 4	= 12 
		}

		cout << endl; // line break for new table
	}
	return 0;
}