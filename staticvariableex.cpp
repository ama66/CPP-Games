#include <iostream>
using namespace std; 


void AddToCount()
{
	static int count = 0;  //cannot access count from outside the function 
	count++;
	cout << count << endl; 
}


class Item
{
public:
	Item()
	{
		cout << "item has been created" << endl; 

	}
	~Item() {

		cout << " an item has been destroyed" << endl; 
	}
};


class Critter {
public:
	static int CritterCount; 
	const int flag = 0; 

	Critter() {
		cout << " A critter is born" << endl; 
		CritterCount++; 
	}

	static void AnnounceCount() {
		cout << CritterCount << endl; 
	}

};

int Critter::CritterCount = 0;  // this is how to initialize a static variable and it must be done outside the class

int main() {
	//AddToCount();
	//AddToCount();
	Critter::CritterCount = 13;
	cout << Critter::CritterCount << endl;
	{
	static Item item;
	}
	Critter crit; 
	cout << Critter::CritterCount << endl;

	Critter::AnnounceCount();

	Critter* crit2 = new Critter; 

	delete crit2; 


	/*for (int i = 0; i < 100; i++)
	{
		AddToCount(); 
	}*/

//	count--;  // cannot access it from outside the AddToCount function




}
