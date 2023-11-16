#ifndef GAME_WINDOW_H_
#define GAME_WINDOW_H_

#include <SFML/Graphics.hpp>

namespace flappy_bird {

class GameWindow {
public:
    GameWindow(unsigned int width, unsigned int height, const char title[]);
    void gameLoop();
private:    
    sf::RenderWindow m_window;
    sf::Texture m_background;
    sf::Texture m_ground;    
};

}; // namespace flappy_bird

#endif // GAME_WINDOW_H_