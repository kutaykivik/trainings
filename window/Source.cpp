/*
#include <iostream>
#include "Pencere.hpp"

class deneme {

public:
	void yaz(sf::Keyboard::Key tus) {
		std::cout << "Merhaba" << std::endl;
	}


	void hareket(sf::Event::MouseMoveEvent fareOlayi) {
		std::cout << fareOlayi.x << fareOlayi.y << std::endl;
	}
};

void yaz1(sf::Keyboard::Key tus) {
	std::cout << "Birak" << std::endl;
}

int main() {
	Window window;
	sf::RectangleShape square(sf::Vector2f(200, 200));
	deneme yeniDeneme;
	auto fonk =	std::bind(&deneme::yaz, &yeniDeneme, std::placeholders::_1);
	window.tusaBasFonkEkle(fonk);
	window.tusuBirakFonkEkle(yaz1);
	window.fareHareketFonkEkle(std::bind(&deneme::hareket, &yeniDeneme, std::placeholders::_1));
	window.create(800, 800);
	while (window.isWindowOpen()) {
		window.Process();

		window.clear();
		window.draw(square);
		window.show();

	}
}
*/

#include<iostream>
#include<string>
#include "Uygulama.hpp"
using namespace std;

int main()
{
	Uygulama uygulama;
	uygulama.insaEt(800, 800);
	uygulama.baslat();
}