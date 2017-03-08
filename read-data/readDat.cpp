/*
==================================================================
    C++ training - Read a .dat file instance of QAP - tai12.dat

 Author: Rennan Danilo Seimetz Chagas
 email: chagasrennan@gmail.com
==================================================================
*/

#include <iostream>
#include <fstream> // class to reado and writ from/to files

using namespace std;

int main()
{
	ifstream myfile("tai12a.dat"); // open tai12.dat file
	string line;

	if (myfile.is_open())
	{
		// check if file is open
		cout << "\n File is open! \n\n";	
	}

	int n;
	int a;
	myfile >> n;
	cout << "Size of problem : " << n << '\n';

	// print matrix based on size of problem
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			myfile >> a;
			cout << a << '\t';
		}
		cout << '\n';
	}

	// print file on terminal
	// while (getline (myfile,line))
	// {
	// 	cout << line << '\n';
	// }


	myfile.close(); // close file

	return 0;
}