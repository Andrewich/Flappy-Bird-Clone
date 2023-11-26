#ifndef SPRITE_H_
#define SPRITE_H_

#include "GameObject.h"

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>

namespace fbc {

float operator "" _px(long double val);

class Sprite: public GameObject<sf::RenderWindow> {
protected:
	Sprite(const char* filepath);

	std::unique_ptr<sf::Texture> m_texture;
	std::unique_ptr<sf::Sprite> m_sprite;
};

} // fbc

#endif // SPRITE_H_