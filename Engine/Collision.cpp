#include "Collision.h"
bool Collision::circleTest(const sf::Sprite& first, const sf::Sprite& second) {
	Vector2f firstSprite(first.getTextureRect().width, first.getTextureRect().height);
	// get dim in form of rectangle 
	firstSprite.x *= first.getScale().x;
	firstSprite.y *= first.getScale().y;
	Vector2f secondSprite(second.getTextureRect().width, second.getTextureRect().height);
	secondSprite.x *= second.getScale().x;
	secondSprite.y *= second.getScale().y;
	/// finding the radius of rectangle }
	float rad1 = (firstSprite.x + firstSprite.y) / 4;
	float rad2 = (secondSprite.x + secondSprite.y) / 4;
	float xd = first.getPosition().x - second.getPosition().x;
	float yd = first.getPosition().y - second.getPosition().y;
	return std::sqrt(xd * xd + yd * yd) <= rad1 + rad2;
}