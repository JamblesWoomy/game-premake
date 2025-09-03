#include "Spaceship.h"

Spaceship::Spaceship()
{
	image = LoadTexture("Graphics/spaceship.png");// it dont work
}

Spaceship::~Spaceship() {
	UnloadTexture(image);
}