#ifndef BIRD_H_
#define BIRD_H_

#include "Sprite.h"

#include <memory>

#include <SFML/Graphics/RenderWindow.hpp>

namespace fbc {

class Bird: public Sprite {
public:
	Bird(const char *filepath);

	void update() override;
	void draw(sf::RenderWindow &window) override;
};

} // namespace fbc

#endif // BIRD_H_