#include "Background.h"

#include <exception>

namespace fbc {

Background::Background(const char *filepath) {
	m_texture = std::make_unique<sf::Texture>();
	m_sprite = std::make_unique<sf::Sprite>();

	if (!m_texture->loadFromFile(filepath)) {
		throw std::runtime_error("File not found!");
	}
	m_sprite->setTexture(*m_texture);

	m_position = sf::Vector2f(.0f, .0f);
}

void Background::update() {
	m_position.x -= 0.9f;
	m_sprite->setPosition(m_position);
}

void Background::draw(sf::RenderWindow &window) {
	window.draw(*m_sprite);
}

} // namespace fbc