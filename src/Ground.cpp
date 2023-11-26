#include "Ground.h"

namespace fbc {

Ground::Ground(const char* filepath) : Sprite{ filepath } {}

void Ground::update() {
	if (m_sprite->getPosition().x >= -411._px) {
		m_sprite->move(-0.7_px, 0._px);
	}
	else {
		m_sprite->setPosition({ 0._px, 0._px });
	}
}

void Ground::draw(sf::RenderWindow& window) {
	window.draw(*m_sprite);
}

} // namespace fbc