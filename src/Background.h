#ifndef BACKGROUND_H_
#define BACKGROUND_H_

#include "Sprite.h"

#include <memory>

#include <SFML/Graphics/RenderWindow.hpp>

namespace fbc {

class Background: public Sprite {
public:
	Background(const char *filepath);

	void update() override;
	void draw(sf::RenderWindow &window) override;
};

} // namespace fbc

#endif // BACKGROUND_H_