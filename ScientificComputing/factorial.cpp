/* Author    : Okan Koeksal
 Copyright   : Free to modify 
 This code has been written by Okan Koeksal in the course of the C++ tutorials
 If you have any questions or find bugs, feel free to mail me "koeksal.okan@gmail.com"*/

#include <iostream>

using namespace std; 

//recursive function 
int counter(int);

int main () 
{
	int number;
	cout << "Please type in an integer to calculate the factorial of it: ";
	cin >> number;

	cout << counter(number) << endl;

	return 0;
}

int counter (int number) 
{
		//1! or 0! equal to 1
		if (number == 1 || number <= 0)
		{
			return 1;
		}
		else 
		{
			return (number *= counter (number -1)); //in the first iteration: 5 * (5-1) = 20
													//second iteration: 20 * (4-1) = 60
													//third iteration: 60 * (3-1) = 120 ...
		}
}

