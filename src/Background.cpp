#include "Background.h"

#include <exception>

namespace fbc {

float operator "" _px(long double val) {
	return (float)val;
}

Background::Background(const char *filepath) {
	m_texture = std::make_unique<sf::Texture>();
	m_sprite = std::make_unique<sf::Sprite>();

	if (!m_texture->loadFromFile(filepath)) {
		throw std::runtime_error("File not found!");
	}
	m_sprite->setTexture(*m_texture);
}

void Background::update() {
	if (m_sprite->getPosition().x >= -411._px) {
		m_sprite->move(-1._px, 0._px);		
	} else {
		m_sprite->setPosition({ 0._px, 0._px });
	}
}

void Background::draw(sf::RenderWindow &window) {
	window.draw(*m_sprite);
}

} // namespace fbc