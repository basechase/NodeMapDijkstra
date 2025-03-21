#include "Seek.h"
#include "Pathfinding/PathAgent.h"
#include "raymath.h"   
#include "SteeringAgent.h"
void Seek::UpdateBehavior()
{
	SteeringAgent* temp = (SteeringAgent*)getOwner();
	MathLibrary::Vector2 destination = temp->targetPosition;
}
