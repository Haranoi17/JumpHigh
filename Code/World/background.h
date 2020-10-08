#ifndef BACKGR
#define BACKGR

#include <SFML/Graphics.hpp>
#include "GameObject/GameObject.hpp"

class Background : public GameObject
{
    public:
    Background(GameObject& );
    void update();
    void reset();
    static sf::Texture BACKG_TEXTURE;
    sf::Sprite& getSprite();

    private:
    GameObject* _obj;
};

#endif