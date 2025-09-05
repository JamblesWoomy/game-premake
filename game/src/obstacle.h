#pragma once
#include <vector>
#include <raylib.h>

class Obstacle {
public:
	Obstacle(Vector2 position);
	void Draw();
	Vector2 position;
	//std::vector<Block> blocks;
	std::vector<std::vector<int>> grid;
};