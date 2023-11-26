#include "Sprite.h"

#include <exception>

namespace fbc {

float operator "" _px(long double val) {
	return (float)val;
}

Sprite::Sprite(const char* filepath) {
	m_texture = std::make_unique<sf::Texture>();
	m_sprite = std::make_unique<sf::Sprite>();

	if (!m_texture->loadFromFile(filepath)) {
		throw std::runtime_error("File not found!");
	}
	m_sprite->setTexture(*m_texture);
}

} // namespace fbc