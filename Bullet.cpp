#include "Bullet.h"
#include <Novice.h>


Bullet::Bullet() {
	character_ = { character_.pos.x, character_.pos.y, 16.0f, 10.0f};
}

Bullet::~Bullet() {

}


void Bullet::Update() {
	if (isShot_) {
		character_.pos.y -= character_.speed;
		if (character_.pos.y < -30.0f) {
			isShot_ = false;
		}
	}
}


void Bullet::Draw() {
	if (isShot_) {
		Novice::DrawSprite(int(character_.pos.x), int(character_.pos.y), gH_.GetBulletSprite(), 2, 2, 0.0f, 0xffffffff);
	}
}