#include "Pipes.h"

namespace fbc {

Pipes::Pipes(const char* filepath) : Sprite{filepath} {}

void Pipes::update() {

}

void Pipes::draw(sf::RenderWindow &window) {
	window.draw(*m_sprite);
}

} // namespace fbc