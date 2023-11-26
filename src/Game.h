#ifndef GAME_H_
#define GAME_H_

#include "GameObject.h"

#include <memory>
#include <vector>

#include <SFML/Graphics/RenderWindow.hpp>

namespace fbc {

class Game {
public:
	Game();
	void update();
	void draw(sf::RenderWindow &window);
private:	
	std::vector< std::unique_ptr< GameObject<sf::RenderWindow> >> m_gameObjects;
};

}; // namespace fbc

#endif // GAME_H_