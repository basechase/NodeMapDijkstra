#pragma once
#include "raylib.h"
#include "pathfinding.h"
#include <vector>

class Behavior;


namespace pathfinding
{ 
	struct MovementInfo 
	{
		Vector2 m_position;
		Vector2 m_velocity;
		Vector2 m_acceleration;

		float m_maxSpeed;
		float m_maxForce;

		float m_rotation;
		float m_rotationDampening;

	};
	class PathAgent
	{
	public:
		Vector2 position = {0,0};
		Vector2 velocity;
		Vector2 force;


		Vector2 GetPosition() { return position; }

		float frictionModifier = 0.99f;

		std::vector<Node*> path;
		int currentIndex;
		Node* currentNode;

		float speed;

		void AddBehavior(Behavior* behavior) { m_behaviors.push_back(behavior); }
		void SetNode(Node* node);
		void Update(float deltaTime);
		void GoToNode(Node* node);

		void Draw();
		
		MovementInfo m_movementInfo;
		static std::vector<PathAgent*>* agents;

	private: 
		std::vector<Behavior*> m_behaviors;
	};
}
