#include <iostream>
using namespace std; 


struct Container 
{
	string Name; 
	int x; 
	int y;
	int z; 
};

int main()
{
	int numbers[] = { 0,1,2,3,4,5,6,7,9,10 };

int* NumPtr = numbers;  //name of the array is the address of the first element (so it is a pointer!) 

cout << NumPtr << endl; 
cout << *NumPtr << endl;

// use pointer arithmetic

NumPtr++; // move it to the next element in the array 


cout << NumPtr << endl;
cout << *NumPtr << endl;



NumPtr += 3;  // Pointer arithmetic not regular!

cout << NumPtr << endl;
cout << *NumPtr << endl;

Container container = { "Sam",5,6,7 };

Container* PtrToCont = &container; 

cout << (*PtrToCont).Name << endl; 
cout << (*PtrToCont).x << endl;
// syntactical sugar
cout << PtrToCont->Name << endl; 

}
