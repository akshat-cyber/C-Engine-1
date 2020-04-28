#pragma once
#include <SFML/Graphics.hpp>
#include<vector>
#include<list>
using namespace sf;

class Game
{
public:
	Game(const Game&) = delete;
	Game& operator=(const Game&) = delete;
	Game(int x,int y);
	void run();
private:
	void processEvents();
	const int _x, _y;

	void update(Time);
	void render();
	sf::RenderWindow _window;
	sf::CircleShape _player;
};