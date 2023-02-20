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
	}
	Person() {

	}
	~Person() {
	}
	string getName() {
		return name;
	}
};
int main()
{

	map<string, string> personMap;
	personMap.insert(std::pair<string, string>("janani", "ravi"));
	personMap.insert(std::pair<string, string>("Ram", "Balakrish"));
	personMap["Ammar"] = "abdilghanie";


	//looking for keys in a map

	if (personMap.find("ahmed") == personMap.end()) {
		cout << "ahmed not found in the map" << endl;
	}

	//extract firstname from keys and lastname from values of the map 
	vector<string> firstName;
	vector<string> lastName;

	//iterate over the map 
	for (map<string,string>::iterator mapIter = personMap.begin(); mapIter != personMap.end(); ++mapIter)
	{
		firstName.push_back(mapIter->first);
		lastName.push_back(mapIter->second); 
	}

	//Now iterate over the vector and print out the content

	for (vector<string>::iterator viter = firstName.begin(); viter != firstName.end(); viter++)
	{
		cout << "first name " << *viter << endl;
	}
	for (vector<string>::iterator biter = lastName.begin(); biter != lastName.end(); ++biter)
	{
		cout << "last name " << *biter << endl;
	}


}
