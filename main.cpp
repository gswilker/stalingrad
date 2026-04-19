#include <SFML/Graphics.hpp>

int main() {
    // Create a video mode object and the main window
    sf::RenderWindow window(sf::VideoMode(400, 400), "SFML Works in CLion!");

    // Create a green circle shape
    sf::CircleShape shape(200.f);
    shape.setFillColor(sf::Color::Green);

    // Start the game loop
    while (window.isOpen()) {
        // Process events
        sf::Event event;
        while (window.pollEvent(event)) {
            // Close window: exit
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Clear the screen, draw the shape, and display it
        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}