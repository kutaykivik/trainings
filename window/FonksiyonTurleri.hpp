#pragma once
#include <functional>
#include <vector>
#include <SFML/Window/Event.hpp>


typedef std::function <void(sf::Keyboard::Key)> klavyeFonksiyonu;
typedef std::vector<klavyeFonksiyonu> klavyeFonkListesi;

typedef std::function <void(sf::Event::MouseMoveEvent)> fareHareketFonk;
typedef std::vector<fareHareketFonk> fareFonkList;

typedef std::function <void(sf::Event::MouseButtonEvent)> fareBasFonk;
typedef std::vector<fareBasFonk> fareBasFonkList;