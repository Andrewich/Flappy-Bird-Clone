#include "Bird.h"

namespace fbc {

Bird::Bird(const char* filepath) : Sprite{filepath} {
    m_sprite->setPosition(320._px, 180._px);
}

void Bird::update() {}

void Bird::draw(sf::RenderWindow &window) {
	window.draw(*m_sprite);
}

} // namespace fbc