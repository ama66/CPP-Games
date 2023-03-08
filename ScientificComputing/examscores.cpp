/* Author    : Okan Koeksal
 Copyright   : Free to modify 
 This code has been written by Okan Koeksal in the course of the C++ tutorials
 If you have any questions or find bugs, feel free to mail me "koeksal.okan@gmail.com"*/

#include <iostream>
#include <string>

using namespace std;

int getScore (string);
void findHighestScore (int, int, int, int);
void findLowestScore (int, int, int, int);
void findAverageScore (int, int, int, int);


int main() {
	int examM, examP, examC, examE;

	for (int i = 0; i < 4; i++) 
	{
		switch (i) 
		{
		case 0:
			examM = getScore("Maths");
			break;
		case 1:
			examP = getScore("Physics");
			break;		
		case 2:
			examC = getScore("Chemistry");
			break;		
		default:
			examE = getScore("English");
			break;				

		}	
	}
	findLowestScore(examM, examP, examC, examE);
	findHighestScore(examM, examP, examC, examE);
	findAverageScore(examM, examP, examC, examE);

	return 0;
}

int getScore (string subject) 
{ 
	int scores = 0;
	cout << "Please type in your score for " << subject << ": ";
	cin >> scores;

	while (scores < 0) 
	{
		cout << "Invalid input, please re-enter your score!" << endl;
		cin >> scores;
	}
	return scores;
}

void findLowestScore (int s1, int s2, int s3, int s4) 
{
	int lowest = 0;
	string subject = "";

	if (s1 < s2 && s1 < s3 && s1 < s4) 
	{
		lowest = s1;
		subject = "Maths";
	}
	else if (s2 < s1 && s2 < s3 && s2 < s4) 
	{
		lowest = s2;
		subject = "Physics";
	}
	else if (s3 < s1 && s3 < s2 && s3 < s4) 
	{
		lowest = s3;
		subject = "Chemistry";
	}
	else  
	{
		lowest = s4;
		subject = "English";
	}
	cout << "The lowest scores is obtained for " << subject << " with a score of " << lowest << endl;
}

void findHighestScore (int s1, int s2, int s3, int s4) 
{
	int highest = 0;
	string subject = "";

	if (s1 > s2 && s1 > s3 && s1 > s4) 
	{
		highest = s1;
		subject = "Maths";
	}

	else if (s2 > s1 && s2 > s3 && s2 > s4) 
	{
		highest = s2;
		subject = "Physics";
	}

	else if (s3 > s1 && s3 > s2 && s3 > s4) 
	{
		highest = s3;
		subject = "Chemistry";
	}

	else  
	{
		highest = s4;
		subject = "English";
	}
	cout << "The highest scores is obtained for " << subject << " with a score of " << highest << endl;
}

void findAverageScore (int s1, int s2, int s3, int s4) 
{
	int total = 0;
	int avg = 0;
	
	total += s1 + s2 + s3 + s4;
	avg = total / 4;

	cout << "The total score is: " << total << endl;
	cout << "The average score is: " << avg << endl;
}
