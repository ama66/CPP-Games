#include <iostream>
using namespace std;

struct LocationVector
{
	float X;
	float Y;
	float Z; 
};

struct Player
{
	int Level;
	float Health;
	float Damage; 
	float Stamina; 
	LocationVector location = { 0.f,0.f,0.f }; 

		void TakeDamage(float dmg)
	{
		Health -= dmg;
	}
	int GetLevel()
	{
		if (Level > 10) {
			cout << " Level is greater than 10! ";
		}
		return Level; 
	}
	void DisplayLocation()
	{
		cout << "X location " << location.X << endl;
		cout << "Y location " << location.Y << endl;
		cout << "Z location " << location.Z << endl;
	}


};


int main()
{
	Player p_1; 
	p_1.Level = 12;
	p_1.Health = 100.f; 
	p_1.Damage = 10.f; 
	p_1.Stamina = 20.f; 
	cout <<  p_1.GetLevel() << " \nplayer 1 level\n"  << endl;
	p_1.TakeDamage(40.f);
	cout << "p_1 Health now is " << p_1.Health << endl; 

	p_1.DisplayLocation();

	Player p_2 = { 1,50.f,40.f,35.54f,{35.56f,67.2f,100.003f} };
	
	p_2.DisplayLocation();

}
