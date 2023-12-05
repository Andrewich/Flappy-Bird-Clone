#include "Ground.h"

namespace fbc {

const float Y_COORDINATE = 344._px;
const float X_SPEED = -0.5_px;

Ground::Ground(const char* filepath) : Sprite{ filepath } {
	m_sprite->setPosition(0._px, Y_COORDINATE);
}

void Ground::update() {
	if (m_sprite->getPosition().x >= -411._px) {
		m_sprite->move(X_SPEED, 0._px);
	}
	else {
		m_sprite->setPosition({ 0._px, Y_COORDINATE });
	}
}

void Ground::draw(sf::RenderWindow& window) {
	window.draw(*m_sprite);
}

} // namespace fbc