#pragma once
#include "Actor.h"
#include "Transform2D.h"
class SteeringAgent : public Actor
{

public:
	

	enum States 
	{
		wander,
		seek,
		arrive,
		persue,
		flee,
		evade

	};

	void Start();
	void Update();
	void end();

	void changeState(States states);

	MathLibrary::Vector2 targetPosition;

	States currentState;

};