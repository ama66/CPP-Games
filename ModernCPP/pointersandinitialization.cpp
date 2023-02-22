#include <iostream> 

#include <vector>

using namespace std; 

//typedef vector<int> IntVec;
using IntVec = vector<int>;


void printNumber(int* numberPtr)
{
	cout << *numberPtr << endl; 



}

void print(const  IntVec& vec) {
	for (auto v : vec)
		cout << v << ", ";

	cout << endl;
}
void printLetter(const char* charPtr)
{
	cout << *charPtr << endl;
}


class Test {};


void func(int i) {
	cout << "func(int) called\n";
}

void func(int* i) {
	cout << "func(int *) called\n";
}

int main()
{
	int number = 5;
	char letter = 'a';

	printNumber(&number);
	printLetter(&letter);


	vector<IntVec> vec_of_vec;

	int x{ 7 };                                         // Equivalent to int x = 7;
	string s{ "Let us begin" };                         // Equivalent to string s("Let us begin");

	cout << "x = " << x << endl;
	cout << "s = \"" << s << "\"" << endl;

	// Can  be used with multiple initial values
	IntVec  vec{ 4, 2, 3, 5, 1 };                  // std::vector variable with elements 4, 2, 3, 5, 1
	string hello{ 'H', 'e', 'l', 'l', 'o' };           // std::string variable with data "Hello"

	cout << "vec = ";
	print(vec);
	cout << endl << "hello = \"" << hello << "\"" << endl;

	
	// Narrowing conversions are not allowed
	int y = 7.7;                                      // Legal, although compilers may warn
	//int y{7.7};                                     // Illegal
	cout << "y = " << y << endl;

	// Avoids inconsistency
	IntVec old_one(4);         // std::vector variable with elements 0, 0, 0, 0
	IntVec old_two(4, 2);      // std::vector variable with elements 2, 2, 2, 2
	IntVec uni_one{ 4 };         // std::vector variable with elements 4
	IntVec uni_two{ 4, 2 };      // std::vector variable with elements 4, 2

	cout << "old_one = ";
	print(old_one);

	cout << endl << "old_two = ";
	print(old_two);

	cout << endl << "uni_one = ";
	print(uni_one);

	cout << endl << "uni_two = ";
	print(uni_two);

	// Avoids ambiguity
	Test test();                    // Object creation or function declaration? "Most vexing parse"

	func(NULL); //NULL implemented int in MS VStudio compiler
	func(nullptr); //nullptr implemented as pointer to int
}
