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




####################### Euler Constant Code############################

/* Author    : Okan Koeksal
 Copyright   : Free to modify 
 This code has been written by Okan Koeksal in the course of the C++ tutorials
 If you have any questions or find bugs, feel free to mail me "koeksal.okan@gmail.com"*/

#include <iostream>

using namespace std; 

//recursive function 
double infiniteSeries(int);

int main () 
{
	int number;
	cout << "Please type in a value for approximating Euler's number: ";
	cin >> number;

	//uncomment for using recursive function
	/*float e = 1.0f;
	double value = 0.0;
	for (int i = 1; i <= number; i++)
	{
		value = infiniteSeries(i);
		e += 1.0 / value;
	}

	cout << e << endl;*/

	cout << "The approximated value for Euler's number is: " << infiniteSeries(number) << endl;

	return 0;
}

//use recursive method for approximating Euler's number
/*double infiniteSeries (int number) 
{
		//1! or 0! equal to 1
		if (number == 1 || number <= 0)
		{
			return 1;
		}
		else 
		{
			return (number *= infiniteSeries (number -1));  //in the first iteration: 5 * (5-1) = 20
															//second iteration: 20 * (4-1) = 60
															//third iteration: 60 * (3-1) = 120 ...
		}
}*/

//use for-loop approach for approximating Euler's number
double infiniteSeries (int number)
{
	float e = 1.0f;
	int factorial = 1;

	for (int i = 1; i <= number; i++)
	{
		//updates the factorial per each iteration
		factorial *= i;
		//updates the sum of series per each iteration
		e += 1.0 / factorial; //in the first iteration: 1 + 1/1 
							  //second iteration: 1 + 1/1 + 1/2!
							  //third iteration: 1 + 1/1 + 1/2! + 1/3! + ...
	}
	return e;
}

