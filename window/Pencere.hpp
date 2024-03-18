#pragma once

#include <SFML/Graphics.hpp>
#include <functional>
#include "FonksiyonTurleri.hpp"

class Window {
public:
	void create(unsigned int length,
		unsigned int width,
		const sf::String& title = "SFML");
	void draw(sf::Drawable& shape);
	void Process();
	bool isWindowOpen();
	void clear();
	void show();
	void tusaBasFonkEkle(klavyeFonksiyonu yeniFonksiyon);
	void tusuBirakFonkEkle(klavyeFonksiyonu yeniFonksiyon);
	void fareHareketFonkEkle(fareHareketFonk yeniFonksiyon);
	void fareBasFonkEkle(fareBasFonk yeniFonksiyon);

private:
	klavyeFonkListesi m_tusaBasFonksiyonlari;
	klavyeFonkListesi m_tusuBirakFonksiyonlari;
	fareFonkList m_fareHareketFonksiyonlari;
	fareBasFonkList m_fareBasFonksiyonlari;

	sf::RenderWindow m_window;
};