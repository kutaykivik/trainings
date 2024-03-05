#include<SFML/Graphics.hpp>
#include <iostream>


enum class YON {
	LEFT,
	RIGHT,
	UP,
	DOWN
};
void hareket(sf::Vector2f &konum, YON yon) {
	switch (yon)
	{
	case YON::LEFT:
		konum.x -= 5;
		break;
	case YON::RIGHT:
		konum.x += 5;
		break;
	case YON::UP:
		konum.y -= 5;
		break;
	case YON::DOWN:
		konum.y += 5;
		break;
	}
}
int main() {
	sf::RenderWindow window(sf::VideoMode(600, 600), "Merhaba");

	sf::Clock saat;

	sf::CircleShape daire(100, 12);
	daire.setOutlineThickness(2.0f);
	daire.setOutlineColor(sf::Color::Yellow);
	daire.setPosition(sf::Vector2f(100, 100));
	sf::Vector2f konum(100,100);

	YON sekilYonu = YON::RIGHT;

	float frameTime = 1 / 60.0f;

	while (window.isOpen()) {
		sf::Event olay;
		while (window.pollEvent(olay)) {
			if (olay.type == sf::Event::Closed)
				window.close();
			if (olay.type == sf::Event::KeyPressed) {
				if (olay.key.code == sf::Keyboard::Left) {
					std::cout << "Left key is pressed" << std::endl;
					sekilYonu = YON::LEFT;
				}
				if (olay.key.code == sf::Keyboard::Right) {
					std::cout << "Right key is pressed" << std::endl;
					sekilYonu = YON::RIGHT;
				}
				if (olay.key.code == sf::Keyboard::Down) {
					std::cout << "Down key is pressed" << std::endl;
					sekilYonu = YON::DOWN;
				}
				if (olay.key.code == sf::Keyboard::Up) {
					std::cout << "Up key is pressed" << std::endl;
					sekilYonu = YON::UP;
				}
			}
		}
		float elapsedTime = saat.getElapsedTime().asSeconds();
		if (elapsedTime >= frameTime) {
			// clear per frame
			window.clear();
			//.. cizim
			hareket(konum, sekilYonu);
			daire.setPosition(sf::Vector2f(konum));

			window.draw(daire);
			window.display();

			int fps = 1.0f / elapsedTime;
			window.setTitle(std::to_string(fps));
			saat.restart();
		}
		else {
			sf::sleep(sf::seconds(frameTime - elapsedTime));
		}


		
		
	}

}