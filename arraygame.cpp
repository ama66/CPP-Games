// arrays example
#include <iostream>
using namespace std;

int foo[] = { 16, 2, 77, 40, 12071 };
int n, result = 0;

enum PlayerStatus {
    PS_Crouched,
    PS_Standing,
    PS_Running,
    PS_Sprinting
};

enum HemStatus {
    Is_PickedUp = 1,
    Is_Dropped,
    Is_Equipped
};

enum GameState { GS_Paused, GS_Play };

enum Currency {
    Copper = 1,
    Silver = 100,
    Gold = 1000
};


int main()
{
    for (n = 0; n < 5; ++n)
    {
        result += foo[n];
    }
    cout << result;
    cout << endl; 

    for (int i = 0; i < 20; i++) {
        cout << "*";
    }
    cout << endl;

    // int arr[] = { 1,5 }; also works fine
    int arr[] = { {1},{5} };
    for (int i = 0; i < 2; i++) {
        cout << arr[i]<<endl;
    }


    PlayerStatus status; 
    status = PS_Crouched; 
    if (status == PS_Crouched) 
    {
        cout << " The Player is Crouching! "; 
    }
    



   
}
