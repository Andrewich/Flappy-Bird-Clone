#include "Game.h"
#include "Background.h"
#include "Ground.h"
#include "Bird.h"
#include "Pipes.h"

namespace fbc {

Game::Game() {	
	m_gameObjects.reserve(4);
	m_gameObjects.push_back(std::make_unique<Background>("res/background.png"));
	m_gameObjects.push_back(std::make_unique<Ground>("res/ground.png"));
	m_gameObjects.push_back(std::make_unique<Bird>("res/bird.png"));	
	m_gameObjects.push_back(std::make_unique<Pipes>("res/pipe.png"));
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