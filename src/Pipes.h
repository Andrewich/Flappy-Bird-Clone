#ifndef PIPES_H_
#define PIPES_H_

#include <memory>

#include <SFML/Graphics/RenderWindow.hpp>

#include "Sprite.h"

namespace fbc {

class Pipes: public Sprite {
public:
	Pipes(const char *filepath);    

	void update() override;
	void draw(sf::RenderWindow &window) override;
};

} // namespace fbc

#endif // PIPES_H_