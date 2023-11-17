#ifndef GAME_H_
#define GAME_H_

#include "Background.h"

#include <memory>

#include <SFML/Graphics/RenderWindow.hpp>

namespace fbc {

class Game {
public:
	Game();
	void update();
	void draw(sf::RenderWindow &window);
private:
	std::unique_ptr<Background> m_background;
};

}; // namespace fbc

#endif // GAME_H_