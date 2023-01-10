#include <iostream>
using namespace std;

struct Character {
public:

	Character();
	~Character(); 

	int* CharacterAge; 
	float* CharacterHealth; 


	
};


int main()
{

	
	
		Character* Char = new Character();   
		
		delete Char;  

	
}

Character::Character() {
	cout << "  A new character is created \n"; 
	CharacterAge = new int(1); // dynamically allocated memory for an integer initialized with 1  (need to be actively managed!) 
	CharacterHealth = new float(100.f); 
}

Character::~Character() {
	cout << "  A Character is destroyed \n";
	delete CharacterAge; 
	delete CharacterHealth; 

}
