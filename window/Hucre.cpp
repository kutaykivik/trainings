#include "Hucre.hpp"

void Hucre::ciz(Pencere& pencere)
{

}

Hucre::Hucre()
{
	m_sekil.setFillColor(sf::Color::Red);
	m_sekil.setOutlineColor(sf::Color::Blue);
	m_sekil.setOutlineThickness(2);
	boyutAta(20);
	hizAta(1);
}

void Hucre::yonAta(HucreYon yon)
{
	m_yon = yon;
}

HucreYon Hucre::yonGetir()
{
	return m_yon;
}

float Hucre::boyutGetir()
{
	return m_boyut;
}

void Hucre::boyutAta(float boyut)
{
	m_boyut = boyut;
	m_sekil.setSize(sf::Vector2f(m_boyut, m_boyut));
}

float Hucre::hizGetir()
{
	return m_hiz;
}

void Hucre::hizAta(float hiz)
{
	m_hiz = m_hiz;
}
