#include "World/background.h"

sf::Texture Background::BACKG_TEXTURE;


Background::Background(GameObject& objToFollow)
    : _obj{&objToFollow}
{
    _sprite.setTexture(BACKG_TEXTURE);
    _sprite.setPosition(_position);
    _sprite.setScale(0.7,0.7);
}

void Background::update()
{
    _position = _obj->getPosition();
    _position.x -= 80;
    _position.y -= 70;
    _sprite.setPosition(_position);
}

void Background::reset()
{
    _position = sf::Vector2f{0.0f, 700.0f};
    _sprite.setPosition(_position);
}

sf::Sprite& Background::getSprite()
{
    return _sprite;
}