#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <fstream>
#include <random>
#include <string>
using namespace std;
#ifndef QUESTION_H
#define QUESTION_H
using namespace sf ;


class Quiz
{
  public:
        Quiz(float width, float height);
        Quiz(float width, float height,int);
        Quiz(float width, float height,int,int);
        virtual ~Quiz();

        void draw(sf::RenderWindow &window);
        int Answer(sf::RenderWindow &window);
        bool isHovered(sf::RenderWindow &window, sf::RectangleShape &rect);
        void set_rect_green(int);
        void set_rect_red(int);
        void temps();
        bool temp();
         int unplus=0;
        int run(Quiz &question);



    private:
        string ques[10];
        string r1[10];
        string r2[10];
        string r3[10];
        string corr[10];
        string repcorr;
        int indexcorr;
        int indexrep;
        sf::Font font;
        sf::Text txt[4];
        sf::RectangleShape rect[3];
        sf::RectangleShape re;

        sf::RectangleShape background;
        sf::Texture backgroundimage;
        sf::Text titre;
        sf::Text rmq;
        sf::Sprite sprite;
        sf::Texture logo;
        //sounds
        sf::SoundBuffer buffercorr;
        sf::Sound soundcorr;
        sf::SoundBuffer bufferfal;
        sf::Sound sound;

};

#endif // QUIZ_H

