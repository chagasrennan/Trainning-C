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

	// print file on terminal

	while (getline (myfile,line))
	{
		cout << line << '\n';
	}

	myfile.close(); // close file

	return 0;
}