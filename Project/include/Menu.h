#ifndef MENU_H
#define MENU_H
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <random>
using namespace std ;
using namespace sf ;
#define N 3
class Menu
{
    //friend class Theme;
    public:
        Menu(float width, float height);
        virtual ~Menu();
         sf::Music music;
        void draw(sf::RenderWindow &window);
        void moveUp();
        void moveDown();
        void run(Music &music);

        int GetPressedItem()
        {
            return selectedItemIndex;
        }
         int tour=0;
    private:
        int selectedItemIndex;
        sf::Font font;
        sf::Text menu[N];
        sf::RectangleShape background;
        sf::Texture backgroundimage;
        sf::Text titre;
        sf::Sprite sprite;
        sf::Texture logo;
        //sounds
        sf::SoundBuffer buffer;
        sf::Sound sound;


       int themeselected=0;
};

#endif // MENU_H


