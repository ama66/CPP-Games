/* Author    : Okan Koeksal
 Copyright   : Free to modify 
 This code has been written by Okan Koeksal in the course of the C++ tutorials
 If you have any questions or find bugs, feel free to mail me "koeksal.okan@gmail.com"*/

#include <string>
#include <iostream>
#include <algorithm> 

using namespace std;


int main () {

	int scores[] = {100, 99, 81, 75, 50, 25, 30, 40};
	int maxScore = 0;
	int minScore = 0;
	int total = 0;
	double avgScore = 0.0;

	//determines the size of the array
	int sizeOfArray = sizeof(scores) / sizeof(int);
	
	for (int i = 0; i < sizeOfArray; i++) 
	{
		total += scores[i];
	}

	//Multiplication with 1.0 for printing the decimal point
	avgScore = total * 1.0 / sizeOfArray; 

	//zeroth element of scores is reserved for variables
	maxScore = scores[0];
	minScore = scores[0];
	
	int tempScore = 0;
	for (int i = 0; i < sizeOfArray; i++) 
	{
		
		tempScore = scores[i];

		if (tempScore > maxScore) 
		{
			maxScore = tempScore;
		}

		if (tempScore < minScore) 
		{
			minScore = tempScore;
		}

	}

	cout << "The total of all scores is: " << total <<  endl;
	cout << "The average score is: " << avgScore << endl;
	cout << "The max. score is: " << maxScore << endl;
	cout << "The min. score is: " << minScore << endl;

return 0;
}
