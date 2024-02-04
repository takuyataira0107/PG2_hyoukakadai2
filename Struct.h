#pragma once

typedef struct Vector2 {
	float x;
	float y;
}Vector2;

typedef struct Character {
	Vector2 pos;
	float radius;
	float speed;
}Character;
