#include <iostream>
using namespace std;

class Object {
public:
		virtual void BeginPlay();
		void ObjectFunction() {
			cout << "Object Function Called. \n\n";
		}
};

class Actor :public Object {
public:
	virtual void BeginPlay() override; 
	void ActorFunction()
	{
		cout << " Actor Function Called. \n\n";
	}
};

class Pawn : public Actor
{
public:
	virtual void BeginPlay() override;

	void PawnFunction() {
		cout << "Pawn Function Called. \n\n";
	}
};

int main() {

	Object* ptr_to_object = new Object; 

	Actor* ptr_to_actor = new Actor; 

	Pawn* ptr_to_pawn = new Pawn; 

	Object* ObjectArray[] = {ptr_to_object,  ptr_to_actor, ptr_to_pawn};

	for (int i = 0; i < 3; i++)
	{
	//	ObjectArray[i]->BeginPlay();
		//ObjectArray[i]->ObjectFunction();  This works 
		// ObjectArray[i]->ActorFunction(); // Does not work because object does not have actor function! 
		//casting attempts to convert to a different type and we can use dynamic casting
		// to check dynamically the type
		Object* obj = ObjectArray[i];
		//Actor* act = dynamic_cast<Actor*> (obj); // attempt to convert obj to pointer to actor type 
		//if (act) // if cast is not successful act will be null/false
		//{
		//	act->ActorFunction(); // second and third elements of the array will be called ,i.e. cast succeeeds
		//}
		Pawn* pwn = dynamic_cast<Pawn*> (obj);
			if (pwn) {
				pwn->PawnFunction();
		}

			Actor* act = static_cast<Actor*> (obj); // this will be converted to actor pointer  there is no run-time type checking , so won't get errors
			if (act) //  cast is always successful 
			{
				act->ActorFunction(); 
			}



	}



	delete ptr_to_object;
	delete ptr_to_actor; 

}

void Object::BeginPlay() {
	
	cout << "Object BeginPlay() called . \n\n";

}

void Actor::BeginPlay() {

	cout << "Actor BeginPlay() called . \n\n";

}

void Pawn::BeginPlay() {

	cout << "Pawn BeginPlay() called . \n\n";

}
