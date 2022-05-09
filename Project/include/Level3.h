#ifndef LEVEL3_H
#define LEVEL3_H
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <random>
using namespace std ;
using namespace sf ;


class Level3
{
    public:
        Level3();

          Level3(int);
           Level3(int,int);
        void carteselectionne(int ,int) ;
        bool gagner();
         bool timeout();
         int selected(int,int) ;
         int start(sf::Clock);
         bool test() ;
         void run(Music &music , int themeselected);
      int tourtermine;
          virtual ~Level3();

           sf::Texture texturewin;
          sf::Texture textureloose;
        sf::Sprite spritewin ;
        sf::Sprite spriteloose ;

         sf::Music m1,m2,m3,m4,m5,m6,m7,m8,m9,m10,m11,m12,m13,m14,m15;
                sf::Music n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,n16;
                sf::Music l2,l3,l4,l5,l6,l7,l8,l9,l10,l11,l12,l13,l14,l15,l16;

               sf::Sprite sprite1[15];
         sf::Sprite sprite2[15];
         sf::Sprite sprite3[15];


    private:
        int deb ;
        Clock tme ;
        int carteinitiale[16];
        int carteselect[2];
         sf::Texture texture[15];
         sf::Sprite sprite[16] ;
          sf::RectangleShape rect[16];
        int tabj[16];    //les places choisies aléatoirement
        int tabt[16];   //les textures choisies aléatoirement

        sf::Font font;


 sf::Music music2;
        sf::SoundBuffer buffer6;
         sf::SoundBuffer buffer5;
          sf::SoundBuffer buffer1;
           sf::SoundBuffer buffer2;
            sf::SoundBuffer buffer3;
             sf::SoundBuffer buffer4;
        sf::Sound sound;
        sf::Music music;
};

#endif // LEVEL3_H


