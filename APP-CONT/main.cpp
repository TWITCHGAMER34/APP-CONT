//include sfml librarys
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Network.hpp>
//include c++ librarys
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <sstream>
#include <fstream>

int main() {

	//create window
	sf::RenderWindow window(sf::VideoMode(800, 600), "Approach Game", sf::Style::Default);
	window.setFramerateLimit(60);


	//main loop
	while (window.isOpen()) {
		//event loop
		sf::Event event;
		while (window.pollEvent(event)) {
			//close window
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}

		//update

		//draw
		window.clear(sf::Color::Black);

		window.display();
	}

	return 0;
}