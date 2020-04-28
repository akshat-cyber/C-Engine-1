#include "Entity.h"
Entity::Entity(std::string string, World& world) : _world(world),_alive(true) {
	Texture texture;
	texture.loadFromFile(string);
	_sprite.setTexture(texture);
	_sprite.setOrigin(texture.getSize().x / 2.f, texture.getSize().y / 2.f);

}
Vector2f Entity::getPosition() const  {
	return _sprite.getPosition();
}
void Entity::draw(sf::RenderTarget& target, sf::RenderStates
	states) const {
	target.draw(_sprite, states);
}
bool Entity::isAlive()const { return _alive; }
void Entity::onDestroy() { _alive = false; }