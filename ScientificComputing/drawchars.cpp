/* Author    : Okan Koeksal
 Copyright   : Free to modify 
 This code has been written by Okan Koeksal in the course of the C++ tutorials
 If you have any questions or find bugs, feel free to mail me "koeksal.okan@gmail.com"*/
 
#include <iostream>
#include <string>

using namespace std;

const int ROWS = 13;
const int COLS = 13;
const char WHITESPACE = ' ';
const char STAR = '*';


void DisplayA();
void DisplayI();
void DisplayC();
void DisplayPlus();
void DisplayX();


int main() {
    
	char pattern [ROWS][COLS];
	DisplayA();
	DisplayI();
	DisplayC();
	DisplayPlus();
	DisplayX();

    return 0;
}

void DisplayA () 
{
	for (int r = 0; r < ROWS; r++) 
	{
		for (int c = 0; c < COLS; c++) 
		{
			if (r == 0 || r == ROWS /2) //in the first iteration: r = 0; c = 0 up to 12 
										//[0][0]...[0][12]
										//r = 6; c = 0 up to 12
			{
				cout << STAR;	
			}
			else if (c == 0 || c == COLS -1) //in this case: c = 0; r = 0 up to 12
											 //in the other case: c = 12, r = 0 up to 12
			{
				cout << STAR;	
			}
			else
				cout << WHITESPACE;
		}
	cout << endl;
	}
}

void DisplayI () 
{
	for (int r = 0; r < ROWS; r++) 
	{
		for (int c = 0; c < COLS; c++) 
		{
			if (c == COLS / 2) //in the first iteration: c = 6; r = 0 up to 12
			{	
				cout << STAR;	
			}
			else
				cout << WHITESPACE;
		}
	cout << endl;
	}
}

void DisplayC () 
{
	for (int r = 0; r < ROWS; r++) 
	{
		for (int c = 0; c < COLS; c++) 
		{
			if (r == 0 || r == ROWS -1) //in the first iteration: r = 0; c = 0 up to 12
										//r = 12; c = 0 up to 12
			{
				cout << STAR;	
			}
			else if (c == 0)			//c = 0; r = 0 up to 12
			{
				cout << STAR;
			}
			else
				cout << WHITESPACE;
		}
	cout << endl;
	}
}

void DisplayPlus () 
{
	for (int r = 0; r < ROWS; r++) 
	{
		for (int c = 0; c < COLS; c++) 
		{
			if (r == ROWS / 2)	//in the first iteration: r = 6; c = 0 up to 12
			{
				cout << STAR;	
			}
			else if (c == COLS / 2)
			{
				cout << STAR;
			}
			else
				cout << WHITESPACE;
		}
	cout << endl;
	}
}

void DisplayX () 
{
	for (int r = 0; r < ROWS; r++) 
	{
		for (int c = 0; c < COLS; c++) 
		{
			if (r == c)		// "\" [0][0], [1][1], [2][2]...
			{
				cout << STAR;	
			}
			else if (c == COLS -1 -r)	// "/" c = 13 - 1 -r (r = 0) --> c = 12, r = 0
										//[0][12]
										//the second iteration: c = 13 - 1 - r (r = 1) --> c = 11, r = 1
										//[1][11]...
			{
				cout << STAR;
			}
			else
				cout << WHITESPACE;
		}
	cout << endl;
	}
}
