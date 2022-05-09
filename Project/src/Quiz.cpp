#include "Quiz.h"
#include "Level2.h"
#include "Level3.h"
#include "Quiz.h"
#include "Theme.h"
#include "Level.h"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <random>
using namespace std ;
using namespace sf ;



Quiz::Quiz(float width, float height)
{
    if (!font.loadFromFile("font/font2.ttf"))
 {
     cout<<"impossible de charger la police"<<endl;
 }

 /*if (!buffercorr.loadFromFile("sound/correct.wav"))
 {
     cout<<"impossible de charger le son"<<endl;
 }

 if (!bufferfal.loadFromFile("sound/wrong.wav"))
 {
     cout<<"impossible de charger le son"<<endl;
 }*/



 fstream file1, file2, file3 ,file4, file5;
 file1.open("fichier/Géographie/ques.txt");
 string ligne;

 if (!file1)
{
       cout<<"erreur"<<endl;
}
else
 {
      int i=0;
      while (!file1.eof())
      {
          getline(file1,ligne);
          ques[i]=ligne;
          i++;
      }
      file1.close();
      for(int i=0;i<10;i++)
      {
          cout<<ques[i]<<endl;
      }
}

file2.open("fichier/Géographie/rep1.txt");

if (!file2)
{
       cout<<"erreur"<<endl;
}
else
 {
      int i=0;
      while (!file2.eof())
      {
          getline(file2,ligne);
          r1[i]=ligne;
          i++;
      }
      file2.close();
      for(int i=0;i<10;i++)
      {
          cout<<r1[i]<<endl;
      }
}

file3.open("fichier/Géographie/rep2.txt");

if (!file3)
{
       cout<<"erreur"<<endl;
}
else
 {
      int i=0;
      while (!file3.eof())
      {
          getline(file3,ligne);
          r2[i]=ligne;
          i++;
      }
      file3.close();
      for(int i=0;i<10;i++)
      {
          cout<<r2[i]<<endl;
      }
}

file4.open("fichier/Géographie/rep3.txt");

if (!file4)
{
       cout<<"erreur"<<endl;
}
else
 {
      int i=0;
      while (!file4.eof())
      {
          getline(file4,ligne);
          r3[i]=ligne;
          i++;
      }
      file4.close();

      for(int i=0;i<10;i++)
      {
          cout<<r3[i]<<endl;
      }
}

file5.open("fichier/Géographie/corr.txt");

if (!file5)
{
       cout<<"erreur"<<endl;
}
else
 {
      int i=0;
      while (!file5.eof())
      {
          getline(file5,ligne);
          corr[i]=ligne;
          i++;
      }
      file5.close();
      for(int i=0;i<10;i++)
      {
          cout<<corr[i]<<endl;
      }
}
 srand(time(NULL));
 int x=rand()%10;

 txt[0].setFont(font);
 txt[0].setColor(sf::Color::White);
 txt[0].setString(ques[x]/*"Question"*/);
 txt[0].setPosition(sf::Vector2f(width/6, height/5));
 txt[0].setCharacterSize(30);
 re.setSize(sf::Vector2f(610,50));
 re.setFillColor(sf::Color::Black);
 re.setPosition(width/6,height/5);


 txt[1].setFont(font);
 txt[1].setColor(sf::Color::White);
 txt[1].setString(r1[x]/*"Réponse1"*/);
 txt[1].setPosition(sf::Vector2f(width/3,(height/5)*2));
 txt[1].setCharacterSize(35);
 rect[0].setSize(sf::Vector2f(300,50));
 rect[0].setFillColor(sf::Color::Black);
 rect[0].setPosition(width/3, (height/5)*2);

 txt[2].setFont(font);
 txt[2].setColor(sf::Color::White);
 txt[2].setString(r2[x]/*"Réponse2"*/);
 txt[2].setPosition(sf::Vector2f(width/3, (height/5)*3));
 txt[2].setCharacterSize(35);
 rect[1].setSize(sf::Vector2f(300,50));
 rect[1].setFillColor(sf::Color::Black);
 rect[1].setPosition(width/3, (height/5)*3);

 txt[3].setFont(font);
 txt[3].setColor(sf::Color::White);
 txt[3].setString(r3[x]/*"Réponse3"*/);
 txt[3].setPosition(sf::Vector2f(width/3, (height/5)*4));
 txt[3].setCharacterSize(35);
 rect[2].setSize(sf::Vector2f(300,50));
 rect[2].setFillColor(sf::Color::Black);
 rect[2].setPosition(width/3, (height/5)*4);

repcorr=corr[x];

if(repcorr=="a")
{
    indexcorr=1;
}
if(repcorr=="b")
{
    indexcorr=2;
}
if(repcorr=="c")
{
    indexcorr=3;
}
//background
    background.setSize(sf::Vector2f(900,700));
	backgroundimage.loadFromFile("image/background2.jpg");
	background.setTexture(&backgroundimage);

//titre
 titre.setFont(font);
 titre.setColor(sf::Color::Cyan);
 titre.setString("TRAIN BRAIN Quiz");
 titre.setCharacterSize(70);
 titre.setPosition(sf::Vector2f(width/8, 10));

 //remarque
 rmq.setFont(font);
 rmq.setColor(sf::Color::White);
 rmq.setString("Appuyez sur Entrer pour quitter");
 rmq.setCharacterSize(20);
 rmq.setPosition(sf::Vector2f(width/20, (9*height)/10));

cout<<"constructeur fonctionne"<<endl;
cout<<"réponse correcte:"<<repcorr<<endl;
cout<<"index corr="<<indexcorr<<endl;
cout<<"***********"<<endl;
}

Quiz::Quiz(float width, float height, int n)
{
     if (!font.loadFromFile("font/font2.ttf"))
 {
     cout<<"impossible de charger la police"<<endl;
 }

 if (!buffercorr.loadFromFile("sound/correct.mp3"))
 {
     cout<<"impossible de charger le son"<<endl;
 }

 if (!bufferfal.loadFromFile("sound/wrong.mp3"))
 {
     cout<<"impossible de charger le son"<<endl;
 }

 fstream file1, file2, file3 ,file4, file5;
 file1.open("fichier/Nature/ques.txt");
 string ligne;

 if (!file1)
{
       cout<<"erreur"<<endl;
}
else
 {
      int i=0;
      while (!file1.eof())
      {
          getline(file1,ligne);
          ques[i]=ligne;
          i++;
      }
      file1.close();
      for(int i=0;i<10;i++)
      {
          cout<<ques[i]<<endl;
      }
}

file2.open("fichier/Nature/rep1.txt");

if (!file2)
{
       cout<<"erreur"<<endl;
}
else
 {
      int i=0;
      while (!file2.eof())
      {
          getline(file2,ligne);
          r1[i]=ligne;
          i++;
      }
      file2.close();
      for(int i=0;i<10;i++)
      {
          cout<<r1[i]<<endl;
      }
}

file3.open("fichier/Nature/rep2.txt");

if (!file3)
{
       cout<<"erreur"<<endl;
}
else
 {
      int i=0;
      while (!file3.eof())
      {
          getline(file3,ligne);
          r2[i]=ligne;
          i++;
      }
      file3.close();
      for(int i=0;i<10;i++)
      {
          cout<<r2[i]<<endl;
      }
}

file4.open("fichier/Nature/rep3.txt");

if (!file4)
{
       cout<<"erreur"<<endl;
}
else
 {
      int i=0;
      while (!file4.eof())
      {
          getline(file4,ligne);
          r3[i]=ligne;
          i++;
      }
      file4.close();

      for(int i=0;i<10;i++)
      {
          cout<<r3[i]<<endl;
      }
}

file5.open("fichier/Nature/corr.txt");

if (!file5)
{
       cout<<"erreur"<<endl;
}
else
 {
      int i=0;
      while (!file5.eof())
      {
          getline(file5,ligne);
          corr[i]=ligne;
          i++;
      }
      file5.close();
      for(int i=0;i<10;i++)
      {
          cout<<corr[i]<<endl;
      }
}

srand(time(NULL));
 int x=rand()%10;

 txt[0].setFont(font);
 txt[0].setColor(sf::Color::White);
 txt[0].setString(ques[x]);
txt[0].setPosition(sf::Vector2f(width/6, height/5));
 txt[0].setCharacterSize(30);
 re.setSize(sf::Vector2f(610,50));
 re.setFillColor(sf::Color::Black);
 re.setPosition(width/6,height/5);


 txt[1].setFont(font);
 txt[1].setColor(sf::Color::White);
 txt[1].setString(r1[x]);
 txt[1].setPosition(sf::Vector2f(width/3,(height/5)*2));
 txt[1].setCharacterSize(35);
 rect[0].setSize(sf::Vector2f(300,50));
 rect[0].setFillColor(sf::Color::Black);
 rect[0].setPosition(width/3, (height/5)*2);

 txt[2].setFont(font);
 txt[2].setColor(sf::Color::White);
 txt[2].setString(r2[x]);
 txt[2].setPosition(sf::Vector2f(width/3, (height/5)*3));
 txt[2].setCharacterSize(35);
 rect[1].setSize(sf::Vector2f(300,50));
 rect[1].setFillColor(sf::Color::Black);
 rect[1].setPosition(width/3, (height/5)*3);

 txt[3].setFont(font);
 txt[3].setColor(sf::Color::White);
 txt[3].setString(r3[x]);
 txt[3].setPosition(sf::Vector2f(width/3, (height/5)*4));
 txt[3].setCharacterSize(35);
 rect[2].setSize(sf::Vector2f(300,50));
 rect[2].setFillColor(sf::Color::Black);
 rect[2].setPosition(width/3, (height/5)*4);

repcorr=corr[x];

if(repcorr=="a")
{
    indexcorr=1;
}
if(repcorr=="b")
{
    indexcorr=2;
}
if(repcorr=="c")
{
    indexcorr=3;
}

//background
 background.setSize(sf::Vector2f(900,700));
 backgroundimage.loadFromFile("image/background2.jpg");
 background.setTexture(&backgroundimage);

//titre
 titre.setFont(font);
 titre.setColor(sf::Color::Cyan);
 titre.setString("TRAIN BRAIN Quiz");
 titre.setCharacterSize(70);
 titre.setPosition(sf::Vector2f(width/8, 10));

 //remarque
 rmq.setFont(font);
 rmq.setColor(sf::Color::White);
 rmq.setString("Appuyez sur Entrer pour quitter");
 rmq.setCharacterSize(30);
 rmq.setPosition(sf::Vector2f(width/10, 690));

cout<<"constructeur fonctionne"<<endl;
cout<<"réponse correcte:"<<repcorr<<endl;
cout<<"index corr="<<indexcorr<<endl;
cout<<"***********"<<endl;

}

Quiz::Quiz(float width, float height, int y, int z)
{
     if (!font.loadFromFile("font/font2.ttf"))
 {
     cout<<"impossible de charger la police"<<endl;
 }

 if (!buffercorr.loadFromFile("sound/correct.mp3"))
 {
     cout<<"impossible de charger le son"<<endl;
 }

 if (!bufferfal.loadFromFile("sound/wrong.mp3"))
 {
     cout<<"impossible de charger le son"<<endl;
 }

 fstream file1, file2, file3 ,file4, file5;
 file1.open("fichier/Informatique/ques.txt");
 string ligne;

 if (!file1)
{
       cout<<"erreur"<<endl;
}
else
 {
      int i=0;
      while (!file1.eof())
      {
          getline(file1,ligne);
          ques[i]=ligne;
          i++;
      }
      file1.close();
      for(int i=0;i<10;i++)
      {
          cout<<ques[i]<<endl;
      }
}

file2.open("fichier/Informatique/rep1.txt");

if (!file2)
{
       cout<<"erreur"<<endl;
}
else
 {
      int i=0;
      while (!file2.eof())
      {
          getline(file2,ligne);
          r1[i]=ligne;
          i++;
      }
      file2.close();
      for(int i=0;i<10;i++)
      {
          cout<<r1[i]<<endl;
      }
}

file3.open("fichier/Informatique/rep2.txt");

if (!file3)
{
       cout<<"erreur"<<endl;
}
else
 {
      int i=0;
      while (!file3.eof())
      {
          getline(file3,ligne);
          r2[i]=ligne;
          i++;
      }
      file3.close();
      for(int i=0;i<10;i++)
      {
          cout<<r2[i]<<endl;
      }
}

file4.open("fichier/Informatique/rep3.txt");

if (!file4)
{
       cout<<"erreur"<<endl;
}
else
 {
      int i=0;
      while (!file4.eof())
      {
          getline(file4,ligne);
          r3[i]=ligne;
          i++;
      }
      file4.close();

      for(int i=0;i<10;i++)
      {
          cout<<r3[i]<<endl;
      }
}

file5.open("fichier/Informatique/corr.txt");

if (!file5)
{
       cout<<"erreur"<<endl;
}
else
 {
      int i=0;
      while (!file5.eof())
      {
          getline(file5,ligne);
          corr[i]=ligne;
          i++;
      }
      file5.close();
      for(int i=0;i<10;i++)
      {
          cout<<corr[i]<<endl;
      }
}

srand(time(NULL));
 int x=rand()%10;

 txt[0].setFont(font);
 txt[0].setColor(sf::Color::White);
 txt[0].setString(ques[x]);
 txt[0].setPosition(sf::Vector2f(width/6, height/5));
 txt[0].setCharacterSize(30);
 re.setSize(sf::Vector2f(610,50));
 re.setFillColor(sf::Color::Black);
 re.setPosition(width/6,height/5);


 txt[1].setFont(font);
 txt[1].setColor(sf::Color::White);
 txt[1].setString(r1[x]);
 txt[1].setPosition(sf::Vector2f(width/3,(height/5)*2));
 txt[1].setCharacterSize(35);
 rect[0].setSize(sf::Vector2f(300,50));
 rect[0].setFillColor(sf::Color::Black);
 rect[0].setPosition(width/3, (height/5)*2);

 txt[2].setFont(font);
 txt[2].setColor(sf::Color::White);
 txt[2].setString(r2[x]);
 txt[2].setPosition(sf::Vector2f(width/3, (height/5)*3));
 txt[2].setCharacterSize(35);
 rect[1].setSize(sf::Vector2f(300,50));
 rect[1].setFillColor(sf::Color::Black);
 rect[1].setPosition(width/3, (height/5)*3);

 txt[3].setFont(font);
 txt[3].setColor(sf::Color::White);
 txt[3].setString(r3[x]);
 txt[3].setPosition(sf::Vector2f(width/3, (height/5)*4));
 txt[3].setCharacterSize(35);
 rect[2].setSize(sf::Vector2f(300,50));
 rect[2].setFillColor(sf::Color::Black);
 rect[2].setPosition(width/3, (height/5)*4);

repcorr=corr[x];

if(repcorr=="a")
{
    indexcorr=1;
}
if(repcorr=="b")
{
    indexcorr=2;
}
if(repcorr=="c")
{
    indexcorr=3;
}

//background
 background.setSize(sf::Vector2f(900,700));
 backgroundimage.loadFromFile("image/background2.jpg");
 background.setTexture(&backgroundimage);

//titre
 titre.setFont(font);
 titre.setColor(sf::Color::Cyan);
 titre.setString("TRAIN BRAIN Quiz");
 titre.setCharacterSize(70);
 titre.setPosition(sf::Vector2f(width/8, 10));

/* //remarque
 rmq.setFont(font);
 rmq.setColor(sf::Color::White);
 rmq.setString("Appuyez sur Entrer pour quitter");
 rmq.setCharacterSize(30);
 rmq.setPosition(sf::Vector2f(width/10, 690));
*/
cout<<"constructeur fonctionne"<<endl;
cout<<"réponse correcte:"<<repcorr<<endl;
cout<<"index corr="<<indexcorr<<endl;
cout<<"***********"<<endl;

}

void Quiz::temps()
{   bool test;
    sf::Clock ttt ;
    sf::Time t3=sf::seconds(3) ;
    while(true)
     {
        if(ttt.getElapsedTime()>t3)
           break;
     }

}
bool Quiz::temp()
{
    sf::Clock ttt ;
    sf::Time t3=sf::seconds(2) ;
    while(true)
     {
        if(ttt.getElapsedTime()>t3)
           return(true);
     }

}

void Quiz::draw(sf::RenderWindow &window)
{
    window.draw(titre);
    window.draw(re);
    window.draw(rmq);
   for(int i=0;i<3;i++)
    {
        window.draw(rect[i]);
    }

   for(int i=0;i<4;i++)
       {
           window.draw(txt[i]);
       }

}

int Quiz::run(Quiz &question)
{
    sf::RenderWindow window(sf::VideoMode(900,700),"Quiz");
    //Question question(window.getSize().x, window.getSize().y);

     while (window.isOpen())
     {
        sf::Event event;
        while (window.pollEvent(event))
         {
            if (event.type == sf::Event::Closed)
             window.close();
            else if (event.type == sf::Event::MouseButtonPressed)
            {
                indexrep=question.Answer(window);
                if(indexcorr == indexrep)
                //if(question.Answer(window)== true)
                {
                    cout<<"Réponse juste"<<endl;
                    cout<<"indexrep="<<indexrep<<endl;
                    cout<<"*********"<<endl;
                    question.set_rect_green(indexcorr-1);
                     for(int i=0;i<3;i++)
                     {
                        window.draw(rect[i]);
                    }
                    for(int i=0;i<4;i++)
                     {
                        window.draw(txt[i]);
                     }


                    window.display();
                    sound.setBuffer(buffercorr);
                    sound.play();
                    cout<<"vous avez bien gagnez le quiz?"<<endl;
                    if(question.temp())
                       window.close();
                    return(1);

                }
                else
                {

                    cout<<"Réponse fausse"<<endl;
                    cout<<"indexrep="<<question.indexrep<<endl;
                    cout<<"*************"<<endl;
                    question.set_rect_red(indexrep-1);
                    question.set_rect_green(indexcorr-1);

                     for(int i=0;i<3;i++)
                     {
                       window.draw(rect[i]);
                      }
                     for(int i=0;i<4;i++)
                      {
                        window.draw(txt[i]);
                      }
                    window.display();
                    sound.setBuffer(bufferfal);
                    sound.play();
                     cout<<"vous avez tout perdu !! rejouez ?"<<endl;
                     if(question.temp())
                       window.close();
                    return(0);


                if(question.temp())
                       window.close();


                 }


            if (event.type == sf::Event::KeyPressed)
            {
                if (sf::Keyboard::Return)
                {
                    window.close();
                }
            }

         }
    window.clear();
    window.draw(background);
    window.draw(sprite);
    question.draw(window);
    window.display();

     }
}
}
int Quiz::Answer(sf::RenderWindow &window)
{
 string r;
 cout<<"methode answer fonctionne"<<endl;
 if(sf::Event::MouseButtonPressed)
 {
    if (isHovered(window,rect[0]))
    {
         cout<<"first rep is clicked"<<endl;
         r="a";
         return 1;
         //indexrep=1;
    }
    if (isHovered(window,rect[1]))
    {
         cout<<"second rep is clicked"<<endl;
         r="b";
         return 2;
         //indexrep=2;
    }
    if(isHovered(window,rect[2]))
    {
         cout<<"third rep is clicked"<<endl;
         r="c";
         return 3;
         //indexrep=3;
    }
 }
/* if(r=="a")
 {
     return 1;
 }
 if(r=="b")
 {
     return 2;
 }
 if(r=="c")
 {
     return 3;
 }
*/

    cout<<"methode answer fonctionne"<<endl;
    cout<<"réponse choisi:"<<r<<endl;
    cout<<"index rep="<<endl;
    cout<<"**************"<<endl;
   // return (indexrep == indexcorr );
}

bool Quiz::isHovered(sf::RenderWindow& window,sf::RectangleShape &rect)
{
	sf::FloatRect bounds = rect.getGlobalBounds();
	sf::Vector2i mouseposition = sf::Mouse::getPosition(window);

	int xm= mouseposition.x;
	int ym= mouseposition.y;

    //cout<<"methode ishovered fonctionne"<<endl;
	return bounds.contains(xm,ym);
}

void Quiz::set_rect_green(int i)
{
     rect[i].setFillColor(sf::Color::Green);
      cout<<"colered green "<<endl;
}

void Quiz::set_rect_red(int i)
{

    cout<<"colered red "<<endl;
     rect[i].setFillColor(sf::Color::Red);
}





Quiz::~Quiz()
{
    //dtor
}
