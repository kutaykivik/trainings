#pragma once
#include "Pencere.hpp"

class Uygulama {
public:
	Uygulama();
	void insaEt(int genislik, int yukseklik);
	void baslat(int fps = 60);
private:

	void cerveceOlustur();
	void cizimFonk();
	void sahneGuncelle();
	void tusBasildi(sf::Keyboard::Key tus);
	void tusBirakildi(sf::Keyboard::Key tus);
	void fareHareket(sf::Event::MouseMoveEvent olay);
	void fareTiklandi(sf::Event::MouseButtonEvent olay);

	Window m_pencere;
	sf::Clock m_saat;
	sf::Time m_cerceveSuresi;
	sf::Time m_gecenSure;

};