#include <iostream>
using namespace std;

class Dog {
public: 
	Dog(); 
	string Name;
	int Age; 
	float Health; 
	void Bark(); 

};

int main() {

	Dog spot;
	Dog Rex; 

	cout << spot.Name << " " << spot.Health << endl; 
	Rex.Name = "Elf"; 
	cout << Rex.Name << " " << Rex.Health << endl;

	Rex.Health += 100; 
	cout << Rex.Name << " " << Rex.Health << endl;


}

Dog::Dog() {

		cout << " a Dog is born" << endl;
		Bark();
		Name = "Clifford";
		Age = 10;
		Health = 100;
	
}
void Dog::Bark()
{
			cout << "Woof!" << endl;

	}

