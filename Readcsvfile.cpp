#include<iostream>
#include <vector>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;
//Read the first chunk after values#1 
/*Values #1
1.11, 1.11, 1.11
1.12, 1.12, 1.12
1.13, 1.13, 1.13
Values #2
2.11, 2.11, 2.11
2.12, 2.12, 2.12
2.13, 2.13, 2.13 */

vector<double> readline(string); 
void print(vector<vector<double>>);
void printformatted(vector<vector<double>>); 

int main() {
	bool stringfound=false; 
	vector<vector<double>>data;
	ifstream myfile("C:\\data\\data_csv.txt", ios::in);
	//read line by line 
	string line=" ";

	if (myfile.is_open())
	{
		cout << "Successfully opened the csv file" << endl;
		getline(myfile, line);
		while (line != "Values #2" && !myfile.eof())
		{		
			if (line != "Values #1") 
			{
				// Read line and return a vector of doubles 
				//
				vector<double> v; 
				v = readline(line);
				data.push_back(v);
			}
			getline(myfile, line);
		}
		print(data);
		cout << "formatted version" << endl; 
		printformatted(data);
	}

	else
	{
		cout << " Error: Could not open file!" << endl; 
	}


}

vector<double> readline(string line)
{
	// 1.11, 1.11, 1.11 find two positions where comma is
	vector<double> v;
	int indexpos[2];
	int pos = 0; 
	for (int i=0;i<line.length();i++)
	{
		if (line[i] == ',')
		{
			indexpos[pos] = i;
			pos++; 
		}
	}
	//now use substring to extract doubles 
	string first, second, third; 
	first = line.substr(0, indexpos[0]);
	second = line.substr(indexpos[0] + 1, indexpos[1] - indexpos[0] - 1); 
	third = line.substr(indexpos[1] + 1);
	v.push_back(atof(first.c_str()));
	v.push_back(atof(second.c_str()));
	v.push_back(atof(third.c_str()));

	return v;
}	


void print(vector<vector<double>> v)
{
	for (int i = 0; i < v.size(); i++) {
		for (int j = 0; j < v[i].size(); j++)
		{
			cout << v[i][j] << " "; 
		}
		cout << endl;
	}

}


void printformatted(vector<vector<double>> v)
{
	for (int i = 0; i < v.size(); i++) {
		cout << fixed << setprecision(2) << "x= " << v[i][0] << " ,y=" << v[i][1] << " ,z=" << v[i][2] << endl;
	}

}



