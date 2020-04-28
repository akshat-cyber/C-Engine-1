#include "Game.h"
Game::Game(int x,int y) : _window(VideoMode(x,y),"Space thing that may not work out !!!",Style::Default)
,_x(x),_y(y){
	_player.setPosition(100,100);
}
void Game::run(){}

	void Game::processEvents(){}
	// Torus
	void Game::update(Time deltatime){
		update(deltatime);
		Vector2f playerPost = _player.getPosition();
		if (playerPost.x < 0) {
			playerPost.x = _x;
			playerPost.y = _y - playerPost.y;
		}
		else if (playerPost.x > _x) {
			playerPost.x = 0;
			playerPost.y = _y - playerPost.y;
		}
		if (playerPost.y < 0) {
			playerPost.y = _y;
		}
		else if (playerPost.y > _y) {
			playerPost.y = 0;
		}
		_player.setPosition(playerPost);
	}
	void Game::render() {


	}