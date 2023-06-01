#pragma once
#include <vector>
#include "Board.h"


enum class COLORS {
	BLUE,
	GREEN,
	YELLOW,
	CYAN,
	BLACK,
	MAGENTA,
	RED,
	NUM_COLORS
};

class Gem: public sf::RectangleShape{

private:

	COLORS _color;

private:
	static const std::vector<sf::Color> AVAILABLE_COLORS;

public:
	
	Gem(float x = 0.f, float y = 0.f, float size=0.f, COLORS color = COLORS::NUM_COLORS);
	COLORS GetColor() const { return _color; };
	void SetColor(COLORS new_color);
	void Move(sf::Vector2f speed);
};


