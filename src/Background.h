#ifndef BACKGROUND_H_
#define BACKGROUND_H_

#include <memory>

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Texture.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/System/Vector2.hpp>

namespace fbc {

class Background {
public:
	Background(const char *filepath);

	void update();
	void draw(sf::RenderWindow &window);

private:
	std::unique_ptr<sf::Texture> m_texture;
	std::unique_ptr<sf::Sprite> m_sprite;

	sf::Vector2f m_position;
};

} // namespace fbc

#endif // BACKGROUND_H_