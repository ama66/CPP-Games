/* Author    : Okan Koeksal
 Copyright   : Free to modify 
 This code has been written by Okan Koeksal in the course of the C++ tutorials
 If you have any questions or find bugs, feel free to mail me "koeksal.okan@gmail.com"*/

#include <iostream>
#include <string>

using namespace std; 

int main () 
{
	string line = "";
	cout << "Please enter a binary number to convert to its decimal equivalent: ";
	getline(cin, line);

	int decimalNumber = 0;
	int binaryNumber = 0;
	int multiplier = 1;

	for (int i = line.length(); i > 0; i--)
	{
		//extract one number per each iteration from typed in binary number in a reversed order
		string number = line.substr(i-1, 1);

		//convert number using c_str-funct. from string to int and assign it to binaryNumber
		//in the video "atof"-funct. was used which also works but the correct funct. is "stoi"
		binaryNumber = stoi (number.c_str());

		//calculate decimalNumber by using following calculation scheme (from right to left) 
		//1100 = 0*1 + 0*2 + 1*4 + 1*8 = 12
		//110011 = 1*1 + 1*2 + 0*4 + 0*8 + 1*16 + 1*32 = 51
		decimalNumber += binaryNumber * multiplier;
		multiplier *= 2;
	}
	
	cout << "The converted decimal number is: " << decimalNumber << endl;
	
	return 0;
}
