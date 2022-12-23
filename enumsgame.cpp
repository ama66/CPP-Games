#include <iostream>
using namespace std; 

enum PlayerStatus {
	PS_RUNNING,
	PS_WALKING, 
	PS_CROUCHING
};
const float RunSpeed = 800.f;
const float WalkSpeed = 500.f;
const float CrouchSpeed = 350.f;
void UpdateMovementSpeed(PlayerStatus P_Status, float& speed);

void SwitchOnInt(int i);

int main() {
	float MovementSpeed; 
	PlayerStatus status = PS_WALKING; 
	UpdateMovementSpeed(status, MovementSpeed); 
	cout << " Movement Speed = "<< MovementSpeed <<endl; 
	int x = 0;
	SwitchOnInt(x); 

	

};

void UpdateMovementSpeed(PlayerStatus P_Status , float& speed )
{
	/*if (P_Status == PS_RUNNING)
	{
		speed = RunSpeed;
	}
	else if (P_Status == PS_WALKING) {
		speed = WalkSpeed;
	}
	else if (P_Status == PS_CROUCHING) {
		speed = CrouchSpeed;
	}*/

	switch (P_Status)
	{
	case PS_RUNNING:
		speed = RunSpeed;
		break;
	case PS_WALKING:
		speed = WalkSpeed;
		break;
	case PS_CROUCHING:
		speed = CrouchSpeed;
		break;

	}

}

void SwitchOnInt(int i)
{
	switch (i)
	{
	case 0:
		cout << "Your number is " << 0 << endl;
		break;
	case 1:
		cout << "Your number is " << 1 << endl;
		break;
	case 2:
		cout << "Your number is " << 2 << endl;
		break;
	default:
		cout << "Your number is not 0,1, or 2 " << endl;

	}
}

