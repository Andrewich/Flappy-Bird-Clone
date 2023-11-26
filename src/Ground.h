#ifndef GROUND_H_
#define GROUND_H_

#include "Sprite.h"

#include <memory>

#include <SFML/Graphics/RenderWindow.hpp>

namespace fbc {

	class Ground : public Sprite {
	public:
		Ground(const char* filepath);

		void update() override;
		void draw(sf::RenderWindow& window) override;
	};

} // namespace fbc

#endif // GROUND_H_