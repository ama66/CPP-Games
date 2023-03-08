/* Author    : Okan Koeksal
 Copyright   : Free to modify 
 This code has been written by Okan Koeksal in the course of the C++ tutorials
 If you have any questions or find bugs, feel free to mail me "koeksal.okan@gmail.com"*/

#include <iostream>
#include <string>

using namespace std; 

int main () 
{
	double itemPrices[3] = {1.5, 2.5, 3.5};
	string items[3] = {"Butter", "Milk", "Eggs"};
	double totalInvoice[] = {0, 0, 0};

	//specifies how many items are picked from the list
	int numOfItems = 0;
	//is used as an argument for the switch-funct. which helps to identify the item we are currently working on
	int itemNum = 0;
	
	while (numOfItems != -1) 
	{
		for (int j = 0; j < 3; j++) 
		{
			if (numOfItems != -1) 
			{
				cout << "Please enter the number of items and its item number #" << j+1 << " for "<< items[j] 
				<< " which costs " << itemPrices[j] << " Euros (stop by entering -1)" << endl;
				cin >> numOfItems;

				if (numOfItems != -1)
				{
					cin >> itemNum;
					switch (itemNum) 
					{
					case 1: 
						totalInvoice[0] += itemPrices[0] * numOfItems;
						break;
					case 2: 
						totalInvoice[1] += itemPrices[1] * numOfItems;
						break;
					case 3: 
						totalInvoice[2] += itemPrices[2] * numOfItems;
						break;
					default:
						cout << "You entered an ivalid input, please re-enter!" << endl;
						break;
					}
				}
			}
		}	
	}

	//print the total for the buying list
	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		cout << "The total for item #" << i+1 << " is: " << totalInvoice[i] << endl;
		sum += totalInvoice[i];
	}
	
	cout << "The total for all products is: " << sum  << endl;

	/*cout << "The total for product 1 is: " << totalInvoice[0] << endl;
	cout << "The total for product 2 is: " << totalInvoice[1] << endl;
	cout << "The total for product 3 is: " << totalInvoice[2] << endl;*/
	
	return 0;
}
