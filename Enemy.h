#pragma once
#include "Object.h"

class Enemy : public Object
{
public:
	virtual void Update();
	virtual void Draw();
	virtual float GetPosX() { return character_.pos.x; }
	virtual float GetPosY() { return character_.pos.y; }
	virtual float GetRadius() { return character_.radius; }
};

