#include "Player.h"
#include <Novice.h>


Player::Player() {
	character_ = { 360.0f, 600.0f, 64.0f, 7.0f };
}

Player::~Player() {
	delete& bullet_;
}

void Player::Update(char* keys, char* preKeys)
{
	if (keys[DIK_W]) {
		character_.pos.y -= character_.speed;
	}

	if (keys[DIK_A]) {
		character_.pos.x -= character_.speed;
	}

	if (keys[DIK_S]) {
		character_.pos.y += character_.speed;
	}

	if (keys[DIK_D]) {
		character_.pos.x += character_.speed;
	}


	if (character_.pos.x < 64.0f) {
		character_.pos.x = 64.0f;
	}
	if (character_.pos.x > 720.0f - character_.radius - 32.0f) {
		character_.pos.x = 720.0f - character_.radius - 32.0f;
	}
	if (character_.pos.y < 32.0f) {
		character_.pos.y = 32.0f;
	}
	if (character_.pos.y > 720.0f - character_.radius - 32.0f) {
		character_.pos.y = 720.0f - character_.radius - 32.0f;
	}


	if (keys[DIK_SPACE] && !preKeys[DIK_SPACE] && bullet_.isShot_ == false) {
		bullet_.character_ = { character_.pos.x, character_.pos.y, 16.0f, 10.0f };
		bullet_.isShot_ = true;
	}

	bullet_.Update();
}

void Player::Draw() {
	bullet_.Draw();
	Novice::DrawSprite(int(character_.pos.x - character_.radius), int(character_.pos.y - character_.radius), gH_.GetPlayerSprite(), 1, 1, 0.0f, WHITE);
}

