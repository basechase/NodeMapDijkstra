#include "SteeringAgent.h"
#include "SpriteComponent.h"
#include "Transform2D.h"
#include "raylib.h"

void SteeringAgent::Start()
{
	SpriteComponent* sprite = new SpriteComponent(this, "Images/player.png");
	// add seek component
}

void SteeringAgent::Update()
{
	if (IsMouseButtonDown(MOUSE_LEFT_BUTTON)) 
	{
		Vector2 temp = GetMousePosition();
		targetPosition.x = temp.x;
		targetPosition.y = temp.y;
	
	}

	currentState = seek;
	switch (currentState)
	{
	case SteeringAgent::wander:
		break;
	case SteeringAgent::seek:
		// get seek component 
		//call updatebehavior

		break;
	case SteeringAgent::arrive:
		break;
	case SteeringAgent::persue:
		break;
	case SteeringAgent::flee:
		break;
	case SteeringAgent::evade:
		break;
	default:
		break;
	}



}

void SteeringAgent::end()
{
}

void SteeringAgent::changeState(States states)
{
}
