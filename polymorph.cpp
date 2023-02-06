#include <iostream>
using namespace std;

class Object {
public:
		virtual void BeginPlay();
};

class Actor :public Object {
public:
	virtual void BeginPlay() override; 
};

class Pawn : public Actor
{
public:
	virtual void BeginPlay() override;
};

int main() {

	Object* ptr_to_object = new Object; 

	Actor* ptr_to_actor = new Actor; 

	Pawn* ptr_to_pawn = new Pawn; 

	Object* ObjectArray[] = {ptr_to_object,  ptr_to_actor, ptr_to_pawn};

	for (int i = 0; i < 3; i++)
	{
		ObjectArray[i]->BeginPlay();
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
