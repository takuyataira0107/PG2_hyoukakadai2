#pragma once
#include <Novice.h>

class grapHandle
{
public:
	int GetTitleSprite() { return titleSprite; }
	int GetTitle2Sprite() { return title2Sprite; }
	int GetPlayerSprite() { return playerSprite; }
	int GetBulletSprite() { return bulletSprite; }
	int GetEnemySprite() { return enemySprite; }
	int GetBackGroundSprite() { return backGround; }
	int GetClearSprite() { return clearSprite; }
	int GetClear2Sprite() { return clear2Sprite; }

private:
	int titleSprite = Novice::LoadTexture("./images/gameTitle.png");
	int title2Sprite = Novice::LoadTexture("./images/gameTitle2.png");
	int playerSprite = Novice::LoadTexture("./images/player.png");
	int bulletSprite = Novice::LoadTexture("./images/gameBullet.png");
	int enemySprite = Novice::LoadTexture("./images/enemy22.png");
	int backGround = Novice::LoadTexture("./images/gameBackGround.png");
	int clearSprite = Novice::LoadTexture("./images/gameClear.png");
	int clear2Sprite = Novice::LoadTexture("./images/gameClear2.png");
};

