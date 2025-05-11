#include "../../Header/Core/GameWindowManager.h"

namespace Core {

    void GameWindowManager::initialize() {
        game_window = new RenderWindow();
        createGameWindow();
    }

    void GameWindowManager::createGameWindow() {
        // Get the user's desktop resolution
        VideoMode desktop = VideoMode::getDesktopMode();

        // Toggle fullscreen (you can make this dynamic later)
        bool fullscreen = true;

        if (fullscreen) {
            game_window->create(
                desktop,
                "SFML-Pong! (Fullscreen Mode)",
                Style::Fullscreen
            );
        }
        else {
            game_window->create(
                VideoMode(game_window_width, game_window_height),
                "SFML-Pong! (Windowed Mode)",
                Style::Titlebar | Style::Close
            );
        }
    }

    bool GameWindowManager::isGameRunning() {
        return game_window->isOpen();
    }

    void GameWindowManager::render() {
        game_window->clear(Color::Black); // Clear with black background
        game_window->display();           // Display the rendered frame
    }

    RenderWindow* GameWindowManager::getGameWindow() {
        return game_window;
    }

}
