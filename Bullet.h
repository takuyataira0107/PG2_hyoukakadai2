#pragma once

#include "Struct.h"
#include <Novice.h>
#include "grapHandle.h"

class Bullet 
{
public:
	Bullet();
	~Bullet();

	void Update();
	void Draw();

	int isShot_ = false; 
	Character character_;
	grapHandle gH_;
};

