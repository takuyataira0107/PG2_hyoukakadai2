#include "SceneManager.h"

SceneManager::SceneManager() {
	player_ = new Player();
	enemy_ = new EnemyA();
	scene_ = 0;
}
SceneManager::~SceneManager() {

}

void SceneManager::Update(char* keys, char* preKeys) {
	switch (scene_) {
	case TITLE:
		if (keys[DIK_SPACE] && !preKeys[DIK_SPACE]) {
			scene_ = GAME;
		}
		break;

	case GAME:

		player_->Update(keys, preKeys);

		enemy_->Update();

		if (player_->GetBulletPosX() < enemy_->GetPosX() + enemy_->GetRadius() && enemy_->GetPosX() < player_->GetBulletPosX() + player_->GetBulletRadius()) {
			if (player_->GetBulletPosY() < enemy_->GetPosY() + enemy_->GetRadius() && enemy_->GetPosY() < player_->GetBulletPosY() + player_->GetBulletRadius()) {
				scene_ = GAMECLEAR;
			}
		}

		if (player_->GetPosX() < enemy_->GetPosX() + enemy_->GetRadius() && enemy_->GetPosX() < player_->GetPosX() + player_->GetRadius()) {
			if (player_->GetPosY() < enemy_->GetPosY() + enemy_->GetRadius() && enemy_->GetPosY() < player_->GetPosY() + player_->GetRadius()) {
				scene_ = GAMECLEAR;
			}
		}

		break;

	case GAMECLEAR:
		if (keys[DIK_SPACE] && !preKeys[DIK_SPACE]) {
			player_ = new Player();
			enemy_ = new EnemyA();
			scene_ = TITLE;
		}
		break;
	}
}



void SceneManager::Draw() {
	Novice::DrawSprite(0, 0, gH_.GetBackGroundSprite(), 1, 1, 0.0f, 0xFFFFFFFF);

	switch (scene_) {
	case TITLE:
		Novice::DrawSprite(0, 0, gH_.GetTitleSprite(), 1, 1, 0.0f, 0xFFFFFFFF);
		Novice::DrawSprite(0, 0, gH_.GetTitle2Sprite(), 1, 1, 0.0f, 0xFFFFFFFF);
		break;

	case GAME:
		player_->Draw();
		enemy_->Draw();

		break;

	case GAMECLEAR:
		Novice::DrawSprite(160, 200, gH_.GetClearSprite(), 1, 1, 0.0f, 0xFFFFFFFF);
		Novice::DrawSprite(0, 0, gH_.GetClear2Sprite(), 1, 1, 0.0f, 0xFFFFFFFF);
		break;

	}
}