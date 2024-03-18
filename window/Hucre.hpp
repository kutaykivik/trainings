#pragma once
#include "Cizilebilir.hpp"

enum class HucreYon {
	Sag,
	Sol,
	Yukari,
	Asagi
};

class Hucre : public Cizilebilir {
public:
	Hucre();

	//get and set functions
	void yonAta(HucreYon yon);
	HucreYon yonGetir();
	float boyutGetir();
	void boyutAta(float boyut);
	float hizGetir();
	void hizAta(float hiz);

	void ciz(Pencere& pencere) override;
private:
	HucreYon			m_yon;
	sf::RectangleShape	m_sekil;
	float				m_boyut;
	float				m_hiz;

};