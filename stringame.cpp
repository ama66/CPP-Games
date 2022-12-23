#include <iostream>
using namespace std; 

void ChangeStr(string& st);

int main()


{
		/*bool condition(true);
		int count = 0;
		int a = 1;
		int b = 20;
		do {
			a++;
			b++;
			cout << " This is current a " << a << endl; 
			cout << " This is current b " << b << endl;
			if (a >= 100)
			{
				condition = false;
			}

		} while (condition);

		for (int i=0; i < 10; i++)
		{
			cout << i << endl; 
		}

		string myStr = "Druid";
		cout << myStr << endl; 

		string& myRef = myStr;
		cout << myRef << myStr << endl; 


		myRef += " Mechanics"; 

		cout << myRef << myStr << endl;*/

	string myStr = "Druid";

	ChangeStr(myStr);


	cout <<  myStr << endl;

	ChangeStr("Druid");

}


void ChangeStr(string& st) 
{
	st += '!';
}



