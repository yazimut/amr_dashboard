#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;

int main(int argc, char *argv[], char *env[]) {
    cout << "Hello, World! :)" << endl;

    sf::RenderWindow window(sf::VideoMode({800, 600}), "Empty SFML window");
    while (window.isOpen()) {
        while (const std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            }
        }

        window.clear(sf::Color::White);
        window.display();
    }

    return 0x00;
}
