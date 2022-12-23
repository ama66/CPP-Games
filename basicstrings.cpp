#include <iostream>
#include <string>
//using namespace std; 
void Print(std::string str);
void Print(int str);
void Print(std::string str1 , std::string str2);
void CanPassLiterals(const int& in);

int main()
{
	const float PI = 3.14159; 

	std::cout << PI << std::endl; 

	Print("ahmed");
	Print(5);
	Print("Ahmed", "Sabry");

	char MyCstring[5] = { 'D','o','g','s','\0' };

	Print(" \n", MyCstring);
	std::string mystr1 = "Aha";
	std::string mystr2 = " yo!";
	std::string sentence = " ";

	sentence += "\n" + mystr1 + mystr2;
	Print(sentence);

	CanPassLiterals(5); 

	int a = 50;
	int b = 100;

	if (a < b && a < 1000) {
		std::cout << " \n a > b but still less than 1000" << std::endl; 
	}

	if (a > b || a < 1000) {
		std::cout << " \n a is not > b however it is less than 1000" << std::endl;
	}

}

void CanPassLiterals(const int& i) {
	std::cout << i; 
}

void Print(std::string str)
{
	std::cout << str << std::endl; 

}

void Print(int str)
{
	std::cout << str << std::endl;

}

void Print(std::string str1, std::string str2) {

	std::cout << str1 << " " << str2; 
}
