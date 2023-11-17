#include "Game.h"

namespace fbc {

Game::Game() {
	m_background = std::make_unique<Background>("res/background.png");
}

void Game::update() {
	m_background->update();
}

void Game::draw(sf::RenderWindow &window) {
	m_background->draw(window);
}

}; // namespace fbc