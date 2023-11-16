#include "GameWindow.h"

#include <exception>

namespace flappy_bird {

constexpr unsigned int FPS_LIMIT = 30;

GameWindow::GameWindow(unsigned int width, unsigned int height, const char title[]) 
    : m_window{ sf::RenderWindow{ { width, height }, title } } {
    
    if (!m_background.loadFromFile("res/background.png")) {
        throw std::runtime_error("File background.png not found!");
    }
    if (!m_ground.loadFromFile("res/ground.png")) {
        throw std::runtime_error("File ground.png not found!");
    }
}

void GameWindow::gameLoop() {
    m_window.setFramerateLimit(FPS_LIMIT);

    while (m_window.isOpen())
    {
        for (auto event = sf::Event{}; m_window.pollEvent(event);)
        {
            if (event.type == sf::Event::Closed)
            {
                m_window.close();
            }
        }

        sf::Sprite background;
        background.setTexture(m_background);
        background.setPosition({10, 10});
        m_window.clear();
        m_window.draw(background);

        m_window.display();
    }
}

}; // namespace flappy_bird