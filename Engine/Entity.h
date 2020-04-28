#pragma once
#include<SFML/Graphics.hpp>
#include"World.h"
#include<iostream>
using namespace sf;
class Entity : public Drawable
{
public:
    //Constructors
    Entity(const Entity&) = delete;
    Entity& operator=(const Entity&) = delete;
    Entity(std::string , World& world);
    
    virtual ~Entity();/*Then we make the destructor virtual. This is a really important point because
the Entity class will be used as a polymorphic class. So we need to set the
destructor as virtual to be able to destruct the real object and not only it's
Entity base.*/
    Texture a;
     
    virtual bool isAlive() const = 0;
    Vector2f getPosition() const;

    // template 
    template <typename Args>
    void setPosition(Args&& args);
    virtual bool isCollide(const Entity& other)const = 0;
    //Updates
    virtual void update(sf::Time deltaTime) = 0;
    virtual void onDestroy();
protected:
    sf::Sprite _sprite;
    sf::Vector2f _impulse;
    World& _world;
    bool _alive;
private:
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const override;
};