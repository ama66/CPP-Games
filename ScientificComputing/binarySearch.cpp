#include<iostream>
#include<vector>

using namespace std;

//fill the vector 
void fillVector(vector<int>&);

//print the vector 
void printVector(const vector<int>&);

//Search Vector
bool searchVector(int, vector<int>&);

void sortvector(vector<int>&);

bool binarySearchAlgorithm(int, vector<int>&); 


int main()
{
	vector<int> myvector;
	fillVector(myvector);
	printVector(myvector);
	int enteredNumber = 0;

	cout << "Enter a number for searching the vector" << endl;
	cin >> enteredNumber;

	if (binarySearchAlgorithm(enteredNumber, myvector))
	{
		cout << "Yup number exists in the vector" << endl;
	}
	else {
		cout << "Number does not exist in the vector" << endl;
	}

	sortvector(myvector);
	printVector(myvector);

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
	for (int i = 0; i < newMyVector.size(); i++)
	{
		if (enteredNumber == newMyVector[i]) {
			return true;
		}
	}


	return false;


}

void sortvector(vector<int>& newvector)
{
	int mine = 0;
	int minidx = 0;

	for (int i = 0; i < newvector.size() - 1; i++)
	{
		mine = newvector[i];
		minidx = i;

		for (int j = i + 1; j < newvector.size(); j++)
		{
			if (newvector[j] < mine) {
				mine = newvector[j];
				minidx = j;
			}
		}
		int temp = newvector[i];
		newvector[i] = mine;
		newvector[minidx] = temp; 
	}
}

bool binarySearchAlgorithm(int enteredNumber,  vector<int>& myvector)
{
	sortvector(myvector); 
	
	int low = 0;
	int mid = 0; 
	int high = myvector.size() - 1;

	while (low<=high)
	{
		mid = (low + high) / 2; 
		if (myvector[mid] == enteredNumber) return true;
		else if (myvector[mid] > enteredNumber) high = mid - 1;
		else low = mid + 1;
	}
	return false; 

}
