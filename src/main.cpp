#include "GameWindow.h"

int main()
{
    flappy_bird::GameWindow window{ 640, 360, "Flappy Bird" };

    window.gameLoop();
}