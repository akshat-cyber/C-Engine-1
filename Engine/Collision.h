#pragma once
#include<SFML/Graphics.hpp>
using namespace sf;
class Collision
{
public:
    Collision() = delete;
    Collision(const Collision&) = delete;
    Collision& operator=(const Collision&) = delete;
    bool circleTest(const sf::Sprite& first, const sf::Sprite& second);
};