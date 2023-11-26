#include "Game.h"
#include "Background.h"

namespace fbc {

Game::Game() {	
	m_gameObjects.push_back(std::make_unique<Background>("res/background.png"));
	m_gameObjects.push_back(std::make_unique<Background>("res/ground.png"));
}

void Game::update() {
	for (auto& object : m_gameObjects) {
		object->update();
	}
}

void Game::draw(sf::RenderWindow &window) {
	for (auto& object : m_gameObjects) {
		object->draw(window);
	}
}

}; // namespace fbc