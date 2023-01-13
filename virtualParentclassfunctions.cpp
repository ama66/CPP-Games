#include<iostream>
using namespace std; 


class object
{
public:
	virtual void BeginPlay();

};

class Actor : public object
{
public:
	virtual void BeginPlay() override;

};

class Pawn : public Actor
{
public:
	virtual void BeginPlay() override;

};
int main() {

	object* obj = new object; 
	obj->BeginPlay();

	Actor* act = new Actor; 
	act->BeginPlay();

	Pawn* p = new Pawn; 
	p->BeginPlay(); 

	delete obj; 
	delete act; 
	delete p; 
	} 

void object::BeginPlay() {
	cout << "Object begins to play" << endl;
}

void Actor::BeginPlay() {
	cout << "Actor Begins to play" << endl;
	object::BeginPlay(); //can call parent version of the BeginPlay by fully qualifying it 

}

void Pawn::BeginPlay() {
	cout << "Pawn Begins to play" << endl;
	object::BeginPlay();
	Actor::BeginPlay();
}

