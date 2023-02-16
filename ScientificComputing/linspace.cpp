#include<iostream>
#include<string>
#include <iomanip>

using namespace std;

const int Capacity = 100;

int main() {

	double col1[Capacity];
	double col2[Capacity];

	for (int i = 0; i < Capacity; i++)
	{
		col1[i] = 0;
		col2[i] = 0;
	}

	const int N = 10;
	double linspace[N];

	for (int i = 0; i < N; i++)
	{
		linspace[i] = 0;
	}

	double start = 0.0;
	double end = 1.0;

	for (int i = 0; i < N; i++)
	{
		double I = static_cast<double>(i);
		double n = static_cast<double>(N - 1);

		linspace[i] = start + ((end - start) / n) * I;
		cout << linspace[i] << "\n";
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{

			col1[j * N + i] = linspace[j];
		}
	}

	for (int i = 0; i < Capacity; i++)
	{
		col2[i] = linspace[i % N];
	}

	for (int i = 0; i < Capacity; i++)
	{
		cout << setprecision(3) << fixed << col1[i] << "\t" << col2[i] << endl;
	}

}
