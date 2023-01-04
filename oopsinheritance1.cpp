#include <iostream>
using namespace std; 

class Animal
{
public:
	Animal(); 
	Animal(string name, int age, int numb_limbs);
	string Name; 
	int Age; 
	int NumberOfLimbs; 
	void Report(); 
};

int main() {
	Animal animal;
	animal.Report();

	Animal animal2("cheetah", 7, 8);
	/*animal2.Report(); */

}

Animal::Animal()
{
	cout << "An Animal is born! \n";
	NumberOfLimbs = 4;
	Name = "Default";
	Age = 2;

}

//Animal::Animal(string name, int age, int numb_limbs)
//{
//	Name=name;
//	Age = age;
//	NumberOfLimbs = numb_limbs; 
//}

Animal::Animal(string name, int age, int numb_limbs) :
	Name(name), Age(age), NumberOfLimbs(numb_limbs)
{
	Report();
}

void Animal::Report() {
	cout << "Name: " << Name << endl;
	cout << " Age: " << Age << endl; 
	cout << "Number of Limbs " << NumberOfLimbs << endl;

}
