#include "Gem.h"

using namespace std;

const vector<sf::Color> Gem::AVAILABLE_COLORS = { 
	  sf::Color::Blue, sf::Color::Green, sf::Color::Yellow,
	  sf::Color::Cyan, sf::Color::Black, sf::Color::Magenta,
	  sf::Color::Red
};


void Gem::SetColor(COLORS color) {
	_color = color;
	if (color != COLORS::NUM_COLORS)
		setFillColor(AVAILABLE_COLORS[static_cast<int>(color)]);
	
}


Gem::Gem(float x, float y, float size, COLORS color) {
	setPosition(x,y);
	setSize(sf::Vector2f(size,size));
	_color = color;
	setOutlineColor(sf::Color::White);
	setOutlineThickness(-2.5f);
}

void Gem::Move(sf::Vector2f speed) {
	move(speed);
}