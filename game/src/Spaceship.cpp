#include "Spaceship.h"

Spaceship::Spaceship()
{
	image = LoadTexture("resources/mecha.png");// it dont work
	position.x = (GetScreenWidth() - image.width)/2;
	position.y = (GetScreenHeight() - image.height);
}

Spaceship::~Spaceship() {
	UnloadTexture(image);
}

void Spaceship::Draw() {
	DrawTextureV(image, position, WHITE);
}