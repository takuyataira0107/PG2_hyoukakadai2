#pragma once
#include "Enemy.h"
#include "grapHandle.h"

class EnemyA : public Enemy
{
public:
	EnemyA();
	~EnemyA();
	void Update() override; 
	void Draw() override;

	float GetPosX() override { return character_.pos.x; }
	float GetPosY() override { return character_.pos.y; }
	float GetRadius() override { return character_.radius; }

private:
	grapHandle gH_;
};

