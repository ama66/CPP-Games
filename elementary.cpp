#include <iostream>
using namespace std; 


//global vars 
int d = 50;
void welcome()
{
	cout << "Welcome Ammar \n";
}

void printNumber(int numtoprint)
{
	cout << numtoprint << endl;
}

int add(int a, int b)
{
	return a + b;
}

char getYesNo();

int main()
{
	int a(15);
	int b = 15;

	/*{
		c = 3; local variable
	}*/
	welcome(); 
	printNumber(b);
	printNumber(add(3, 4.2));
	cout << " returns integer! \n";
	cout << "user input " << getYesNo() << endl; 
	{
		d = 501;  //modified this global variable
	}
	cout << d << endl; 

	if (b > a)
	{
		cout << "a is less than b" << endl;
	}
	else if (b == a) {
		cout << "a equals b" << endl; 
	}
	else
	{
		cout << "a is not equal to b" << endl;
	}

}

char getYesNo()
{
	cout << " Please enter a y or n \n";
	char response; 
	cin >> response; 
	return response; 
}


