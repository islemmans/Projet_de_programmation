#ifndef THEME_H
#define THEME_H
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <random>
using namespace std ;
using namespace sf ;
#define N 3

class Theme
{

    public:
        Theme(float width, float height);
        virtual ~Theme();

        void draw(sf::RenderWindow &window);
        void moveUp();
        void moveDown();
        void run(int,Music &music);

        int GetPressedItem()
        {
            return selectedItemIndex;
        }

        //int themeselected=0;
     int tour;

    private:
        int selectedItemIndex;
        sf::Font font;
        sf::Text menu[N];
        sf::Text titre;

        sf::SoundBuffer buffer;
        sf::Sound sound;
        sf::Music music;


};

#endif // THEME_H
