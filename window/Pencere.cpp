#include "Pencere.hpp"

void Window::create(unsigned int length, unsigned int width, const sf::String& title)
{
	m_window.create(sf::VideoMode(length, width), title);


}

void Window::draw(sf::Drawable& shape)
{
	m_window.draw(shape);
}

void Window::Process()
{
	sf::Event olay;

	while (m_window.pollEvent(olay)) {
		if (olay.type == sf::Event::Closed) {
			m_window.close();
		}
		if (olay.type == sf::Event::KeyPressed) {
			for(auto siradaki:m_tusaBasFonksiyonlari)
				siradaki(olay.key.code);
		}
		if (olay.type == sf::Event::KeyReleased) {
			for (auto siradaki : m_tusuBirakFonksiyonlari)
				siradaki(olay.key.code);
		}
		if (olay.type == sf::Event::MouseMoved) {
			for (auto siradaki : m_fareHareketFonksiyonlari)
				siradaki(olay.mouseMove);
		}
		if (olay.type == sf::Event::MouseButtonPressed) {
			for (auto siradaki : m_fareHareketFonksiyonlari)
				siradaki(olay.mouseMove);
		}

	}
}

bool Window::isWindowOpen()
{
	return m_window.isOpen();
}

void Window::clear()
{
	m_window.clear();
}

void Window::show()
{
	m_window.display();
}

void Window::tusaBasFonkEkle(klavyeFonksiyonu yeniFonksiyon)
{
	m_tusaBasFonksiyonlari.push_back(yeniFonksiyon);
}

void Window::tusuBirakFonkEkle(klavyeFonksiyonu yeniFonksiyon)
{
	m_tusuBirakFonksiyonlari.push_back(yeniFonksiyon);
}

void Window::fareHareketFonkEkle(fareHareketFonk yeniFonksiyon)
{
	m_fareHareketFonksiyonlari.push_back(yeniFonksiyon);
}

void Window::fareBasFonkEkle(fareBasFonk yeniFonksiyon)
{
	m_fareBasFonksiyonlari.push_back(yeniFonksiyon);
}


