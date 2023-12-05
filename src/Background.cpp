#include "Background.h"

namespace fbc {

const float X_SPEED = -1.0_px;

Background::Background(const char* filepath) : Sprite{filepath} {
	m_sprite->setScale(1.0f, 1.24f);
}

void Background::update() {
	if (m_sprite->getPosition().x >= -411._px) {
		m_sprite->move(X_SPEED, 0._px);		
	} else {
		m_sprite->setPosition({ 0._px, 0._px });
	}
}

void Background::draw(sf::RenderWindow &window) {
	window.draw(*m_sprite);
}

} // namespace fbc