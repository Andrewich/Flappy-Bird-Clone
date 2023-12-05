#include "Game.h"
#include "Background.h"
#include "Ground.h"
#include "Bird.h"

namespace fbc {

Game::Game() {	
	m_gameObjects.push_back(std::make_unique<Background>("res/background.png"));
	m_gameObjects.push_back(std::make_unique<Ground>("res/ground.png"));
	m_gameObjects.push_back(std::make_unique<Bird>("res/bird.png"));
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