#include<iostream>
#include<vector>

using namespace std; 

//fill the vector 
void fillVector(vector<int>&);

//print the vector 
void printVector(const vector<int>&); 

//Search Vector
bool searchVector(int, vector<int>&);

int main()
{
	vector<int> myvector;
	fillVector(myvector);
	printVector(myvector);
	int enteredNumber = 0; 

	cout << "Enter a number for searching the vector" << endl;
	cin >> enteredNumber;

	if (searchVector(enteredNumber, myvector))
	{
		cout << "Yup number exists in the vector" << endl;
	}
	else {
		cout << "Number does not exist in the vector" << endl;
	}
}

void fillVector(vector<int>& newMyVector)
{
	int input;
	cout << "please type in the numbers and stop with (-1)" << endl;
	cin >> input;
	while (input != -1)
	{
		newMyVector.push_back(input);
		cin >> input;
	}

}

void printVector(const vector<int>& newMyVector) 
{
	cout << "The existing numbers are: " << endl;

	for (int i = 0; i < newMyVector.size(); i++) {
		cout << newMyVector[i] << " ";
	}
	cout << endl; 
}

bool searchVector(int enteredNumber, vector<int>& newMyVector) 
{
	for (int i = 0; i < newMyVector.size();i++)
	{
		if (enteredNumber == newMyVector[i]) {
			return true;
		}
	}
	return false; 


}

