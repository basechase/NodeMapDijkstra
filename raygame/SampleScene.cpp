#include "SampleScene.h"
#include "SpriteComponent.h"
#include "Transform2D.h"
#include "Pathfinding/Pathfinding.h"

void SampleScene::start()
{
	Scene::start();
	m_nodeMap.cellSize = 32;
	std::vector<std::string> asciiMap;

	asciiMap.push_back("00000000000000000000");
	asciiMap.push_back("01011111111111011100");
	asciiMap.push_back("01011111111101110110");
	asciiMap.push_back("01111111111100000010");
	asciiMap.push_back("01011111111111111110");
	asciiMap.push_back("01001100111100001000");
	asciiMap.push_back("01111111111111111110");
	asciiMap.push_back("01111100011000011110");
	asciiMap.push_back("01111101011111111110");
	asciiMap.push_back("01111111111111011110");
	asciiMap.push_back("01111101011110011110");
	asciiMap.push_back("01111101011111011110");
	asciiMap.push_back("01111111011111011110");
	asciiMap.push_back("01111111111111111110");
	asciiMap.push_back("00000000000000000000");
	m_nodeMap.Initialise(asciiMap);

	m_pathAgent = new pathfinding::PathAgent();
	m_pathAgent->SetNode(m_nodeMap.GetNode(1, 1));
	m_pathAgent->speed = 64;
	
}


void SampleScene::update(float deltaTime)
{
	bool drawNodeMap = true;
	Color lineColor = { 255, 255, 255, 255 };

	m_nodeMap.Draw(true);
	pathfinding::DrawPath(m_pathAgent->path, lineColor);
	if (IsMouseButtonPressed(0))
	{
		Vector2 mousePos = GetMousePosition();
		pathfinding::Node* end = m_nodeMap.GetClosestNode(mousePos);
		m_pathAgent->GoToNode(end);
	}

	m_pathAgent->Update(deltaTime);
	m_pathAgent->Draw();

}

void SampleScene::end()
{
	delete m_pathAgent;
}

