#include "Background.h"

namespace fbc {

Background::Background(const char* filepath) : Sprite{filepath} {}

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