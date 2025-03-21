#pragma once
#include "Scene.h"

class SteeringScene : public Scene
{
    void start() override;

    void update(float deltaTime) override;
    void end();




};