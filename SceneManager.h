#pragma once
#include <Novice.h>
#include "Player.h"
#include "Enemy.h"
#include "EnemyA.h"
#include "grapHandle.h"


class SceneManager
{
public:
	SceneManager();
	~SceneManager();

	void Update(char* keys, char* preKeys);
	void Draw();
	
private:
	enum GameScene {
		TITLE,
		GAME,
		GAMECLEAR,
	};
	int scene_;

	Player* player_;
	Enemy* enemy_;
	grapHandle gH_;
	
};

