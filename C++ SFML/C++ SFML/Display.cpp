#include "Display.h"
#include <memory>

namespace Display {

	std::unique_ptr<sf::RenderWindow> window;

	void init() {
		window = std::make_unique<sf::RenderWindow>(sf::VideoMode(WIDTH, HEIGHT), "Window", sf::Style::Close);
	}

	void clear() {
		window->clear(sf::Color::Black);
	}

	void display() {
		window->display();
	}

	void checkWindowEvents() {

		sf::Event e;
		while (window->pollEvent(e))
		{
			if (e.type == sf::Event::Closed) {
				window->close();
			}
		}
	}

	bool isOpen() {
		return window->isOpen();
	}
}