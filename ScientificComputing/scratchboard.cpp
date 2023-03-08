/* Author    : Okan Koeksal
 Copyright   : Free to modify 
 This code has been written by Okan Koeksal in the course of the C++ tutorials
 If you have any questions or find bugs, feel free to mail me "koeksal.okan@gmail.com"*/

#include <iostream>
#include <string>
#include <ctime>


using namespace std;

int playScratchcardGame(void) 
{ 
	int randomNumber = 0;
	//random number between 1 and 2 standing for "win" and "blanks"
	randomNumber = 1 + rand() % 2;
	return randomNumber;
}


int main () {
	
	string blankWin = ""; 
	int numberScratchcardTickets = 1; 
	int randomNumber = 0;
	srand(time(0));
		
	bool invalidInput = false;			
	do {
	cout << "How many scratchcard tickets do you want to buy?" << endl;
	cin >> numberScratchcardTickets;			
	if (numberScratchcardTickets <= 0 ) 
	{
			invalidInput = true;
			cout << "Invalid number, please re-enter!" << endl;
	}				
			else 
			{
				int totalWins = 0;
				int totalLosts = 0;
				for (int i = 0; i < numberScratchcardTickets; i++) 
				{
					//call function and generate random number between 1 and 2
					randomNumber = playScratchcardGame(); 
					int numberWins = 0;
					int numberLosts = 0;
					if (randomNumber == 1) 
					{
						blankWin = "win";
						numberWins++;
						totalWins += numberWins;
					}

					else 
					{
						blankWin = "blank";
						numberLosts++;
						totalLosts += numberLosts;
					}
					cout << blankWin << endl;
				}
				    cout << "You have won " << totalWins << " times!" << endl;
					cout << "You have lost " << totalLosts << " times!" << endl;
					//reset boolean to false
					invalidInput = false;		
			}
	} while (invalidInput); 

	return 0;
}
