#pragma once
class PathAgent;

class Behavior 
{
public:
	Behavior() {};
	virtual ~Behavior() = 0 {};
	virtual void Update(float deltatime, PathAgent& agent) = 0;
	virtual const char* GetBehaviorName() = 0;
	

	
};