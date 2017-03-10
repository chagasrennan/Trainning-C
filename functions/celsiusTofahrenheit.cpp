/*
==================================================================
    C++ training - Function that converts Celsius temperature to 
    				Fahrenheit  

 Author: Rennan Danilo Seimetz Chagas
 email: chagasrennan@gmail.com
==================================================================
*/

#include <iostream>
#include <fstream> // class to reado and writ from/to files


double ctof(double c_temp) // double, not void, because returns a double
{
	return((9*c_temp/5)+32);
}

int main()
{

	using namespace std;
	double c_temp;
	double f_temp;

	cout << "\nEnter Celsius temperature: ";
	cin >> c_temp;
	f_temp = ctof(c_temp);

	cout << "Temperature in Fahrenheit: " << f_temp << "\n\n";
	return 0;
}