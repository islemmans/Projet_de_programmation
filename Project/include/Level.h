#ifndef LEVEL_H
#define LEVEL_H
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <random>
#include "Carte.h"
using namespace std ;
using namespace sf ;
#define N 3
class Level
{
    public:
        Level(float width, float height);
        virtual ~Level();

        void draw(sf::RenderWindow &window);
        void moveUp();
        void moveDown();
        void run(int,Music & music);

        int GetPressedItem()
        {
            return selectedItemIndex;
        }

        int themeselected;
        int tour;
    private:
        int selectedItemIndex;
        sf::Font font;
        sf::Text leveltxt[N];
        sf::Text titre;

        sf::SoundBuffer buffer;
        sf::Sound sound;

       // sf::Music music;
};

#endif // LEVEL_H
