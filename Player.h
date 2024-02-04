#pragma once
#include "Object.h"
#include "Bullet.h"
#include "grapHandle.h"


class Player : public Object
{
public:
	Player();
	~Player();

	void Update(char* keys, char* preKeys);
	void Draw();

	float GetPosX() { return character_.pos.x; }
	float GetPosY() { return character_.pos.y; }
	float GetRadius() { return character_.radius; }

	float GetBulletPosX() { return bullet_.character_.pos.x; }
	float GetBulletPosY() { return bullet_.character_.pos.y; }
	float GetBulletRadius() { return bullet_.character_.radius; }

private:
	Bullet bullet_;
	grapHandle gH_;
};
