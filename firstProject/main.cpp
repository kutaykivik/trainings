#include<SFML/Graphics.hpp>

int main() {
	sf::RenderWindow window(sf::VideoMode(600, 600), "Merhaba");

	sf::Clock saat;

	sf::CircleShape daire(100, 12);
	daire.setOutlineThickness(2.0f);
	daire.setOutlineColor(sf::Color::Yellow);
	daire.setPosition(sf::Vector2f(100, 100));
	sf::Vector2f hareket(100,100);

	float frameTime = 1 / 60.0f;

	while (window.isOpen()) {
		sf::Event olay;
		while (window.pollEvent(olay)) {
			if (olay.type == sf::Event::Closed)
				window.close();
		}
		float passedTime = saat.getElapsedTime().asSeconds();
		if (passedTime >= ) {

		}
		//clear per frame
		window.clear();
		//.. cizim
		daire.setPosition(sf::Vector2f(hareket));
		hareket.x += 1;
		window.draw(daire);
		window.display();

		hareket.x += 1;
		int fps = 1.0f / gecenSure;
		window.setTitle(std::to_string(fps));
	}

}