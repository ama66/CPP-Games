#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Person
{
private:
	string name;
public:
	Person(string s) : name(s)
	{
		cout << "In the one argument constructor" << endl; 
	}
	Person() {
		cout << " In the no argument constructor" << endl;
	}
	~Person() {
		cout << " Destructor" << endl;
	}
	string getName() {
		return name; 
	}
};
int main()
{
	vector<Person> personVector(4);
	personVector[0] = Person("Ammar");
	personVector[1] = Person("John");
	personVector[2] = Person("Jorge");
	personVector[3] = Person("Azza");

	personVector.push_back(Person("Saad"));
	personVector.push_back(Person("Paramdeep"));
	personVector.push_back(Person("Emily"));
	cout << personVector.capacity() << endl;
	cout << personVector.size() << endl;

	for (int i = 0; i < personVector.size(); i++) {
		cout << "Element #" << i << " has a person whose name is " << personVector[i].getName() << endl;
	}

	vector<Person>::iterator personIterator; 

	for (personIterator = personVector.begin(); personIterator != personVector.end(); personIterator++) {
		cout << personIterator->getName()<<endl;
		cout << (*personIterator).getName()<<endl;
	}

	personVector.erase(personVector.begin(), personVector.end());

	for (personIterator = personVector.begin(); personIterator != personVector.end(); personIterator++) {
		cout <<"Is this empty? " << personIterator->getName() << "yes! " << endl;
		cout << "Is this empty? " <<(*personIterator).getName() << "yes! " << endl;
	}
	cout << "Loop is skipped!" << endl;


}
