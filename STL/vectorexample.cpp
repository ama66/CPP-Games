#include <iostream>
#include <vector>
#include <map>
using namespace std;


class Person
{
private:
    string name;
public:
    Person(string s) : name(s)
    {
        cout << "In the 1-argument constructor" << endl;
    }
    Person()
    {
        cout << "In the no-argument constructor" << endl;
    }
    ~Person()
    {
        cout << "In the destructor" << endl;
    }
    string getName()
    {
        return name;
    }

};


int main()
{
    size_t size = 4;
    vector<string> stringVector(size);
    stringVector[0] = "Janani";
    stringVector[1] = "Swetha";
    stringVector[2] = "Navdeep";
    stringVector[3] = "Vitthal";


    stringVector.push_back("Ahmad");
    cout << stringVector.capacity() << std::endl;
    cout << stringVector.size() << endl;

    for (int i = 0; i < stringVector.size(); ++i) {
        cout << "Element #" << i << " has value " << stringVector[i] << endl;
    }


    vector<Person> personVector(size);
    personVector[0] = Person("Janani");
    personVector[1] = Person("Swetha");
    personVector[2] = Person("Navdeep");
    personVector[3] = Person("Vitthal");


    personVector.push_back(Person("Ahmad"));
    cout << personVector.capacity() << std::endl;
    cout << personVector.size() << endl;

    for (int i = 0; i < personVector.size(); ++i) {
        cout << "Element #" << i << " has value " << personVector[i].getName() << endl;
    }



}
