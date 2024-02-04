#include "EnemyA.h"
#include <Novice.h>



EnemyA::EnemyA() {
	character_ = { 640.0f, 100.0f, 32.0f, 4.0f };
}

EnemyA::~EnemyA() {
}

void EnemyA::Update() {
		character_.pos.x += character_.speed;

		if (character_.pos.x <= 0.0f || character_.pos.x >= 720.0f - character_.radius * 2) {
			character_.speed = -character_.speed;
		}

}

void EnemyA::Draw() {
		Novice::DrawSprite(int(character_.pos.x), int(character_.pos.y), gH_.GetEnemySprite(), 2, 2, 0.0f, 0xFFFFFFFF);
}