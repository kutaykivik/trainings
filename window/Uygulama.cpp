#include "Uygulama.hpp"

sf::RectangleShape dortgen;
Uygulama::Uygulama()
{
	dortgen.setSize(sf::Vector2f(100, 100));
}

void Uygulama::insaEt(int genislik, int yukseklik)
{
	m_pencere.create(genislik, yukseklik);

	m_pencere.fareHareketFonkEkle(
		std::bind(&Uygulama::fareHareket,this,std::placeholders::_1)
	);
	m_pencere.fareBasFonkEkle(
		std::bind(&Uygulama::fareTiklandi, this, std::placeholders::_1)
	);
	m_pencere.tusaBasFonkEkle(
		std::bind(&Uygulama::tusBasildi, this, std::placeholders::_1)
	);
	m_pencere.tusuBirakFonkEkle(
		std::bind(&Uygulama::tusBirakildi, this, std::placeholders::_1)
	);
}

void Uygulama::baslat(int fps)
{
	float cerfps = 1.0f / fps;
	m_cerceveSuresi = sf::seconds(cerfps);

	m_gecenSure = m_saat.restart();
	while (m_pencere.isWindowOpen())
	{
		m_pencere.Process();
		m_gecenSure += m_saat.getElapsedTime();
		if (m_gecenSure >= m_cerceveSuresi) {
			cerveceOlustur();
			m_gecenSure = sf::seconds(0.0f);
			m_saat.restart();
		}
		else
		{
			sf::sleep(m_gecenSure - m_cerceveSuresi);
		}
	}

}


void Uygulama::cerveceOlustur()
{
	sahneGuncelle();
	cizimFonk();
}

void Uygulama::cizimFonk()
{
	m_pencere.clear();
	m_pencere.draw(dortgen);
	m_pencere.show();
}

void Uygulama::sahneGuncelle()
{
}

void Uygulama::tusBasildi(sf::Keyboard::Key tus)
{
	auto pos = dortgen.getPosition();
	if (tus == sf::Keyboard::Left)
	{
		pos.x -= 10;
	}
	if (tus == sf::Keyboard::Right)
	{
		pos.x += 10;
	}
	dortgen.setPosition(pos);
}

void Uygulama::tusBirakildi(sf::Keyboard::Key tus)
{
}

void Uygulama::fareHareket(sf::Event::MouseMoveEvent olay)
{
}

void Uygulama::fareTiklandi(sf::Event::MouseButtonEvent olay)
{
}
