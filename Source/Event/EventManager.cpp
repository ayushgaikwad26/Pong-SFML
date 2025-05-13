#include "../../Header/Event/EventManager.h"

namespace Event {

    void EventManager::pollEvents(sf::RenderWindow* game_window) {
        sf::Event event;

        // Poll all events in the queue
        while (game_window->pollEvent(event)) {
            // Handle window close event
            if (event.type == sf::Event::Closed) {
                game_window->close();
            }

            // Use helper functions for handling specific events
            if (isKeyPressed(sf::Keyboard::Escape)) {
                game_window->close(); // Quit the game on "Escape"
            }

            if (isLeftMouseButtonClicked()) {
                sf::Vector2i position = sf::Mouse::getPosition(*game_window);

                // Log the mouse position
                std::cout << "Left mouse click at: " << position.x << ", " << position.y << std::endl;
            }
        }
    }

    bool EventManager::isKeyPressed(sf::Keyboard::Key key) {
        // Detect if a specific key is pressed
        return sf::Keyboard::isKeyPressed(key);
    }

    bool EventManager::isLeftMouseButtonClicked() {
        return (sf::Mouse::isButtonPressed(sf::Mouse::Left));
    }

}