#include <iostream>
using namespace std;

struct Character {
	Character()
	{
		Name = " Default Name"; 
		Health = 100.f; 
	} //constructor
	string Name;
	float Health;
	void PrintHealth();
};

void Character::PrintHealth() 
{
	cout << "Health is " << Health << endl; 
}



int main()
{

	for (int i = 0; i < 100; i++)
	{
		Character* PtrToChar = new Character();  // Dynamic allocation on Heap ;  Does not automatically get deleted/ go out of scope
		// so if you do not deallocate it, this causes memory leak.
		//PtrToChar->Name = "Neo";
		cout << PtrToChar->Name << endl;
		
		PtrToChar->PrintHealth(); 

		delete PtrToChar;  // program crashes unless we delete the heap memory

	}
	

}

