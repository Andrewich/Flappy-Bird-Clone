#include "Game.h"

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Window/Event.hpp>

constexpr unsigned int FPS_LIMIT = 60;

int main()
{
	sf::RenderWindow window{{640, 360}, "Flappy Bird Clone"};

	fbc::Game game;

    window.setFramerateLimit(FPS_LIMIT);

    while (window.isOpen())
    {
        for (auto event = sf::Event{}; window.pollEvent(event);)
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

		game.update();
        
        window.clear();
		game.draw(window);
        window.display();
    }
}