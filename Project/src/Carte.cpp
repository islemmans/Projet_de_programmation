#include "Carte.h"
#include "Quiz.h"
#include "Menu.h"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <random>
using namespace std ;
using namespace sf ;


Carte::Carte()
{
//sounds
 if (!buffer1.loadFromFile("sound/turnedcard.wav"))
 {
     cout<<"impossible de charger le son"<<endl;
 }
 if (!buffer2.loadFromFile("sound/correctcard.wav"))
 {
     cout<<"impossible de charger le son"<<endl;
 }
 if (!buffer3.loadFromFile("sound/wrongcard.wav"))
 {
     cout<<"impossible de charger le son"<<endl;
 }
 if (!buffer4.loadFromFile("sound/win.wav"))
 {
     cout<<"impossible de charger le son"<<endl;
 }
 if (!buffer5.loadFromFile("sound/looselevel.wav"))
 {
     cout<<"impossible de charger le son"<<endl;
 }

  if (!buffer6.loadFromFile("sound/ringbell.wav"))
 {
     cout<<"impossible de charger le son"<<endl;
 }

 if (!music2.openFromFile("sound/timerun.wav"))
 {
     cout<<"impossible de charger la musique"<<endl;
 }


  if (!l2.openFromFile("primevere.wav"))
 {
     cout<<"impossible de charger yt la musique"<<endl;
 }
 if (!l3.openFromFile("crocus.wav"))
 {
     cout<<"impossible de charger winla musique"<<endl;
 }
 if (!l4.openFromFile("nenuphar.wav"))
 {
     cout<<"impossible de chargervs la musique"<<endl;
 }
 if (!l5.openFromFile("fleur rouge.wav"))
 {
     cout<<"impossible de charger springla musique"<<endl;
 }
 if (!l6.openFromFile("calliandra.wav"))
 {
     cout<<"impossible de charger sfml la musique"<<endl;
 }
 if (!l7.openFromFile("jasmin.wav"))
 {
     cout<<"impossible de charger micla musique"<<endl;
 }
 if (!l8.openFromFile("yucca.wav"))
 {
     cout<<"impossible de chargerlin la musique"<<endl;
 }
 if (!l9.openFromFile("fleur blanche.wav"))
 {
     cout<<"impossible de chargerjs la musique"<<endl;
 }
 if (!l10.openFromFile("fleur orange.wav"))
 {
     cout<<"impossible de charger cssla musique"<<endl;
 }
 if (!l11.openFromFile("persil.wav"))
 {
     cout<<"impossible de charger pyth la musique"<<endl;
 }
 if (!l12.openFromFile("tigre.wav"))
 {
     cout<<"impossible de charger gmailla musique"<<endl;
 }if (!l13.openFromFile("lion.wav"))
    {

     cout<<"impossible de charger phpla musique"<<endl;
 }
 if (!l14.openFromFile("fleur de lotus.wav"))
 {
     cout<<"impossible de chargerinst la musique"<<endl;
 }
 if (!l15.openFromFile("dauphin.wav"))
 {
     cout<<"impossible de charger la musique"<<endl;
 }

if (!l16.openFromFile("aigle.wav"))
 {
     cout<<"impossible de charger la musique"<<endl;
 }















for(int j=0;j<15;j++)
        tabt[j]=-1 ;

for(int j=0;j<12;j++)
        tabj[j]=-1 ;

    carteselect[0]=-1;
    carteselect[1]=-1;
    for(int i=0;i<12;i++)
        carteinitiale[i]=-1 ;

    if(!texture[0].loadFromFile("image1tm2.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[1].loadFromFile("image2tm2.jpg",sf::IntRect(50,50,175,175)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[2].loadFromFile("image3tm2.jpg",sf::IntRect(50,50,175,175)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[3].loadFromFile("image4tm2.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[4].loadFromFile("image5tm2.jpg",sf::IntRect(50,50,175,175)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[5].loadFromFile("image6tm2.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[7].loadFromFile("image8t2.jpg",sf::IntRect(50,0,175,175)))
      std::cout << "erreur de chargement" << endl;

      if(!texture[9].loadFromFile("image10t2.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl;

       if(!texture[10].loadFromFile("image11t2.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl ;


       if(!texture[6].loadFromFile("image7tm2.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[8].loadFromFile("image9t2.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[11].loadFromFile("image12t2.jpg",sf::IntRect(50,50,175,175)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[12].loadFromFile("image13t2.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[13].loadFromFile("image14t2.jpg",sf::IntRect(50,0,175,175)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[14].loadFromFile("image15t2.jpg",sf::IntRect(25,0,175,175)))
      std::cout << "erreur de chargement" << endl;



    for(int i=0;i<15 ;i++)
    {
    texture[i].setSmooth(true);
    }
        for(int i=0;i<15 ;i++)
    {
    sprite3[i].setTexture(texture[i]);
    }

int j=0 ;
int  x ;
int i=0 ,z=0;

       while(i<12 && z<5)
        {

             srand(time(NULL)) ;
        x=rand()%15;
         srand(time(NULL)) ;
        j=rand()%12;
        if(tabj[i]!=-1)
            i++ ;
        if(tabj[j]==-1 && tabt[x]==-1 && j>i )

               {tabt[x]=0;
               tabj[j]=0;
               tabj[i]=0;

               cout << "i est egale a "<<i<< "  la valeur de j est  "<<j<< "  la valeur de x est  "<<x <<endl;
                sprite[i].setTexture(texture[x]);
                sprite[j].setTexture(texture[x]);
                i++ ;
                z++ ;

               }

        }


        for(int q=0;q<15 ;q++)
             if(tabt[q]==-1)
                    for(int k=0;k<12 ;k++)
                        if(tabj[k]==-1)
                        {
                           sprite[k].setTexture(texture[q]);

                        }


for(int i=0 ;i<12;i++)
{
   rect[i].setSize(sf::Vector2f(175,175));
   rect[i].setFillColor(Color::Green);

   switch(i)
   {
        case 0:
        rect[0].setPosition(0,0);
        sprite[0].setPosition(0,0);
        break ;

        case 1:
        rect[1].setPosition(200,0);
        sprite[1].setPosition(200,0);
        break ;

        case 2:
        rect[2].setPosition(400,0);
        sprite[2].setPosition(400,0);
        break ;

          case 3:
        rect[3].setPosition(600,0);
        sprite[3].setPosition(600,0);
        break ;

         case 4:
        rect[4].setPosition(0,200);
        sprite[4].setPosition(0,200);
        break ;
           case 5:
        rect[5].setPosition(200,200);
        sprite[5].setPosition(200,200);
        break ;
            case 6:
        rect[6].setPosition(400,200);
        sprite[6].setPosition(400,200);
        break ;
             case 7:
        rect[7].setPosition(600,200);
        sprite[7].setPosition(600,200);
        break ;
              case 8:
        rect[8].setPosition(0,400);
        sprite[8].setPosition(0,400);
        break ;
             case 9:
        rect[9].setPosition(200,400);
        sprite[9].setPosition(200,400);
        break ;
               case 10:
        rect[10].setPosition(400,400);
        sprite[10].setPosition(400,400);
        break ;
              case 11:
        rect[11].setPosition(600,400);
        sprite[11].setPosition(600,400);
        break ;


   }
}


}
Carte::Carte(int c)
{

 //theme info
//sounds
 if (!buffer1.loadFromFile("sound/turnedcard.wav"))
 {
     cout<<"impossible de charger le son"<<endl;
 }
 if (!buffer2.loadFromFile("sound/correctcard.wav"))
 {
     cout<<"impossible de charger le son"<<endl;
 }
 if (!buffer3.loadFromFile("sound/wrongcard.wav"))
 {
     cout<<"impossible de charger le son"<<endl;
 }
 if (!buffer4.loadFromFile("sound/win.wav"))
 {
     cout<<"impossible de charger le son"<<endl;
 }
 if (!buffer5.loadFromFile("sound/looselevel.wav"))
 {
     cout<<"impossible de charger le son"<<endl;
 }


  if (!buffer6.loadFromFile("sound/ringbell.wav"))
 {
     cout<<"impossible de charger le son"<<endl;
 }

 if (!music2.openFromFile("sound/timerun.wav"))
 {
     cout<<"impossible de charger la musique"<<endl;
 }



 if (!n2.openFromFile("youtube.wav"))
 {
     cout<<"impossible de charger la musique"<<endl;
 }
 if (!n3.openFromFile("windows.wav"))
 {
     cout<<"impossible de charger la musique"<<endl;
 }
 if (!n4.openFromFile("vs.wav"))
 {
     cout<<"impossible de charger la musique"<<endl;
 }
 if (!n5.openFromFile("spring.wav"))
 {
     cout<<"impossible de charger la musique"<<endl;
 }
 if (!n6.openFromFile("sfml.wav"))
 {
     cout<<"impossible de charger la musique"<<endl;
 }
 if (!n7.openFromFile("microsoft.wav"))
 {
     cout<<"impossible de charger la musique"<<endl;
 }
 if (!n8.openFromFile("linux.wav"))
 {
     cout<<"impossible de charger la musique"<<endl;
 }
 if (!n9.openFromFile("js.wav"))
 {
     cout<<"impossible de charger la musique"<<endl;
 }
 if (!n10.openFromFile("css.wav"))
 {
     cout<<"impossible de charger la musique"<<endl;
 }
 if (!n11.openFromFile("python.wav"))
 {
     cout<<"impossible de charger la musique"<<endl;
 }
 if (!n12.openFromFile("google.wav"))
 {
     cout<<"impossible de charger la musique"<<endl;
 }if (!n13.openFromFile("gmail.wav"))
    {

     cout<<"impossible de charger la musique"<<endl;
 }
 if (!n14.openFromFile("php.wav"))
 {
     cout<<"impossible de charger la musique"<<endl;
 }
 if (!n15.openFromFile("instagram.wav"))
 {
     cout<<"impossible de charger la musique"<<endl;
 }
 if (!n16.openFromFile("html.wav"))
    {

     cout<<"impossible de charger la musique"<<endl;}











for(int j=0;j<15;j++)
        tabt[j]=-1 ;

for(int j=0;j<12;j++)
        tabj[j]=-1 ;

    carteselect[0]=-1;
    carteselect[1]=-1;
    for(int i=0;i<12;i++)
        carteinitiale[i]=-1 ;




  if(!texture[0].loadFromFile("image1t3.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[1].loadFromFile("image2t3.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[2].loadFromFile("image3t3.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[3].loadFromFile("image4t3.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[4].loadFromFile("image5t3.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[5].loadFromFile("image6t3.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl;

      if(!texture[6].loadFromFile("image7t3.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[7].loadFromFile("image8t3.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[8].loadFromFile("image9t3.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl ;


        if(!texture[9].loadFromFile("image10t3.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[10].loadFromFile("image11t3.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[11].loadFromFile("image12t3.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl;


      if(!texture[12].loadFromFile("image13t3.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[13].loadFromFile("image14t3.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[14].loadFromFile("image15t3.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl;


    for(int i=0;i<15 ;i++)
    {
    texture[i].setSmooth(true);
    }

       for(int i=0;i<15 ;i++)
    {
    sprite2[i].setTexture(texture[i]);
    }

int j=0 ;
int x ;
int i=0 ,z=0;

      while(i<12 && z<5)
        {

             srand(time(NULL)) ;
        x=rand()%15;
         srand(time(NULL)) ;
        j=rand()%12;
        if(tabj[i]!=-1)
            i++ ;
        if(tabj[j]==-1 && tabt[x]==-1 && j>i )

               {tabt[x]=0;
               tabj[j]=0;
               tabj[i]=0;

               cout << "i est egale a "<<i<< "  la valeur de j est  "<<j<< "  la valeur de x est  "<<x <<endl;
                sprite[i].setTexture(texture[x]);
                sprite[j].setTexture(texture[x]);
                i++ ;
                z++ ;

               }

        }


        for(int q=0;q<15 ;q++)
             if(tabt[q]==-1)
                    for(int k=0;k<12 ;k++)
                        if(tabj[k]==-1)
                        {
                           sprite[k].setTexture(texture[q]);

                        }

for(int i=0 ;i<12;i++)
{
   rect[i].setSize(sf::Vector2f(175,175));
   rect[i].setFillColor(Color::Green);

   switch(i)
   {
        case 0:
        rect[0].setPosition(0,0);
        sprite[0].setPosition(0,0);
        break ;

        case 1:
        rect[1].setPosition(200,0);
        sprite[1].setPosition(200,0);
        break ;

        case 2:
        rect[2].setPosition(400,0);
        sprite[2].setPosition(400,0);
        break ;

          case 3:
        rect[3].setPosition(600,0);
        sprite[3].setPosition(600,0);
        break ;

         case 4:
        rect[4].setPosition(0,200);
        sprite[4].setPosition(0,200);
        break ;
           case 5:
        rect[5].setPosition(200,200);
        sprite[5].setPosition(200,200);
        break ;
            case 6:
        rect[6].setPosition(400,200);
        sprite[6].setPosition(400,200);
        break ;
             case 7:
        rect[7].setPosition(600,200);
        sprite[7].setPosition(600,200);
        break ;
              case 8:
        rect[8].setPosition(0,400);
        sprite[8].setPosition(0,400);
        break ;
             case 9:
        rect[9].setPosition(200,400);
        sprite[9].setPosition(200,400);
        break ;
               case 10:
        rect[10].setPosition(400,400);
        sprite[10].setPosition(400,400);
        break ;
              case 11:
        rect[11].setPosition(600,400);
        sprite[11].setPosition(600,400);
        break ;


   }
}


}


Carte::Carte(int c1,int c2)
{
//sounds
 if (!buffer1.loadFromFile("sound/turnedcard.wav"))
 {
     cout<<"impossible de charger le son"<<endl;
 }
 if (!buffer2.loadFromFile("sound/correctcard.wav"))
 {
     cout<<"impossible de charger le son"<<endl;
 }
 if (!buffer3.loadFromFile("sound/wrongcard.wav"))
 {
     cout<<"impossible de charger le son"<<endl;
 }
 if (!buffer4.loadFromFile("sound/win.wav"))
 {
     cout<<"impossible de charger le son"<<endl;
 }
 if (!buffer5.loadFromFile("sound/looselevel.wav"))
 {
     cout<<"impossible de charger le son"<<endl;
 }

  if (!buffer6.loadFromFile("sound/ringbell.wav"))
 {
     cout<<"impossible de charger le son"<<endl;
 }

 if (!music2.openFromFile("sound/timerun.wav"))
 {
     cout<<"impossible de charger la musique"<<endl;
 }



  if (!m1.openFromFile("italie.wav"))
 {
     cout<<"impossde charger la musique"<<endl;
 }
  if (!m2.openFromFile("algerie.wav"))
 {
     cout<<"impossib la musique"<<endl;
 }
  if (!m3.openFromFile("canada.wav"))
{

     cout<<"impossible dger la musique"<<endl;
 }
  if (!m4.openFromFile("cote d'ivoire.wav"))
 {
     cout<<"impossible dger la musique"<<endl;
 }
  if (!m5.openFromFile("egypt.wav"))
 {
     cout<<"impossibe charger la musique"<<endl;
 }
  if (!m6.openFromFile("france.wav"))
 {
     cout<<"imposle de charger la musique"<<endl;
 }
  if (!m7.openFromFile("jordanie.wav"))
 {
     cout<<"impsible de charger la musique"<<endl;
 }
  if (!m8.openFromFile("kuwait.wav"))
 {
     cout<<"ossible de charger la musique"<<endl;
 }
  if (!m9.openFromFile("lybie.wav"))
 {
     cout<<"impsible de charger la musique"<<endl;
 }
  if (!m10.openFromFile("mali.wav"))
 {
     cout<<"imposle de charger la musique"<<endl;
 }
  if (!m11.openFromFile("ile maurice.wav"))
 {
     cout<<"sible de charger la musique"<<endl;
 }
  if (!m12.openFromFile("mexique.wav"))
 {
     cout<<"iossible de charger la musique"<<endl;
 }
  if (!m13.openFromFile("mongolie.wav"))

   {

   cout<<"impode charger la musique"<<endl;
 }
  if (!m14.openFromFile("perou.wav"))
 {
     cout<<"ssible de charger la musique"<<endl;
 }
  if (!m15.openFromFile("ksa.wav"))
 {
     cout<<"impible de charger la musique"<<endl;
 }












for(int j=0;j<15;j++)
        tabt[j]=-1 ;

for(int j=0;j<12;j++)
        tabj[j]=-1 ;

    carteselect[0]=-1;
    carteselect[1]=-1;
    for(int i=0;i<12;i++)
        carteinitiale[i]=-1 ;

    if(!texture[0].loadFromFile("image1t1.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[1].loadFromFile("image2t1.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[2].loadFromFile("image3t1.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[3].loadFromFile("image4t1.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[4].loadFromFile("image5t1.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[5].loadFromFile("image6t1.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[7].loadFromFile("image8t1.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl;

      if(!texture[9].loadFromFile("image10t1.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl;

       if(!texture[10].loadFromFile("image11t1.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl ;


       if(!texture[6].loadFromFile("image7t1.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[8].loadFromFile("image9t1.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[11].loadFromFile("image12t1.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[12].loadFromFile("image13t1.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl;

            if(!texture[13].loadFromFile("image14t1.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl ;

      if(!texture[14].loadFromFile("image15t1.jpg",sf::IntRect(0,0,175,175)))
      std::cout << "erreur de chargement" << endl;


    for(int i=0;i<15 ;i++)
    {
    texture[i].setSmooth(true);
    }

       for(int i=0;i<15 ;i++)
    {
    sprite1[i].setTexture(texture[i]);
    }

int j=0 ;
int  x ;
int i=0 ,z=0;

      while(i<12 && z<5)
        {

             srand(time(NULL)) ;
        x=rand()%15;
         srand(time(NULL)) ;
        j=rand()%12;
        if(tabj[i]!=-1)
            i++ ;
        if(tabj[j]==-1 && tabt[x]==-1 && j>i )

               {tabt[x]=0;
               tabj[j]=0;
               tabj[i]=0;

               cout << "i est egale a "<<i<< "  la valeur de j est  "<<j<< "  la valeur de x est  "<<x <<endl;
                sprite[i].setTexture(texture[x]);
                sprite[j].setTexture(texture[x]);
                i++ ;
                z++ ;

               }

        }


        for(int q=0;q<15 ;q++)
             if(tabt[q]==-1)
                    for(int k=0;k<12 ;k++)
                        if(tabj[k]==-1)
                        {
                           sprite[k].setTexture(texture[q]);

                        }

 cout<< "la position est bien" << endl ;

for(int i=0 ;i<12;i++)
{
   rect[i].setSize(sf::Vector2f(175,175));
   rect[i].setFillColor(Color::Green);

   switch(i)
   {
        case 0:
        rect[0].setPosition(0,0);
        sprite[0].setPosition(0,0);
        break ;

        case 1:
        rect[1].setPosition(200,0);
        sprite[1].setPosition(200,0);
        break ;

        case 2:
        rect[2].setPosition(400,0);
        sprite[2].setPosition(400,0);
        break ;

          case 3:
        rect[3].setPosition(600,0);
        sprite[3].setPosition(600,0);
        break ;

         case 4:
        rect[4].setPosition(0,200);
        sprite[4].setPosition(0,200);
        break ;
           case 5:
        rect[5].setPosition(200,200);
        sprite[5].setPosition(200,200);
        break ;
            case 6:
        rect[6].setPosition(400,200);
        sprite[6].setPosition(400,200);
        break ;
             case 7:
        rect[7].setPosition(600,200);
        sprite[7].setPosition(600,200);
        break ;
              case 8:
        rect[8].setPosition(0,400);
        sprite[8].setPosition(0,400);
        break ;
             case 9:
        rect[9].setPosition(200,400);
        sprite[9].setPosition(200,400);
        break ;
               case 10:
        rect[10].setPosition(400,400);
        sprite[10].setPosition(400,400);
        break ;
              case 11:
        rect[11].setPosition(600,400);
        sprite[11].setPosition(600,400);
        break ;


   }
}


}


int Carte::selected(int x,int y)
{
    for(int i=0 ;i<12 ;i++)
                {sf::FloatRect bounds = rect[i].getGlobalBounds();
                  if(bounds.contains(x ,y))
                       return (i)  ;

                }
}


int Carte::start(sf::Clock tm)
{
    int st ;

    sf::Time t=seconds(3) ;
    if(tm.getElapsedTime()>t)
        {for(int i=0 ;i<12;i++)
        carteinitiale[i]=-1 ;
        st=-1;
        deb=0 ;
        }
    else
        {for(int i=0 ;i<12;i++)
        carteinitiale[i]=1 ;
        st=1 ;
        }

     return(st);
}
bool Carte::test()
{
    Clock tt ;
    sf::Time t=seconds(0.3) ;
 while(true)
 {
     if(tt.getElapsedTime()>t)
        return(true);
 }

}


void Carte::carteselectionne(int k,int carte)
{
    if(k==1)
         {
             carteselect[0]=carte;
         }
    else if(k==2)
          {carteselect[1]=carte;

          }
}

bool Carte::gagner()
{
    for (int i=0 ;i<12;i++)
        if(carteinitiale[i]==-1)
               return(false) ;
    return(true) ;
}


bool Carte::timeout()
{
     Clock tt ;
    sf::Time t=seconds(4) ;
 while(true)
 {
     if(tt.getElapsedTime()>t)
        return(true);
 }

}





void Carte::run(Music &music ,int themeselected)
{

   music.stop();

    int done=0;
    sf::RenderWindow window(sf::VideoMode(900,700), "SFML works!");
    sf::Vector2i possouris ;
    sf::Event event;
    int r=3;
    Time tf=seconds(45) ;
    int k=0 ;
    int st=0;
    deb=1 ;
       Clock tm ;


      while (window.isOpen())
    {

        if(st!=1 && deb==1)
          {int st=start(tm);
             Clock tme ;
              music2.play();
          }

        while (window.pollEvent(event))

        {

            if (event.type == sf::Event::Closed)
                window.close();

               else if(event.type==Event::MouseButtonPressed)

                    {
                    possouris=sf::Mouse::getPosition(window);

                         k++;
                    int pos=selected(possouris.x,possouris.y) ;

                     if(k==1)
                       {
                           sound.setBuffer(buffer1);
                            sound.play();
                           carteselect[0]=pos;
                       carteinitiale[pos]=1;

                       cout<< "la valeur de k est     " <<k<<"  la carte selectionner    "<<carteselect[0]<<endl ;}

                     else if(k==2)
                        {sound.setBuffer(buffer1);
                            sound.play();

                            carteselect[1]=pos;
                        carteinitiale[pos]=1;
                        cout<< "la valeur de k est     " <<k<<"  la carte selectionner    "<<carteselect[1]<<endl ;

                window.clear() ;
   for(int i=0 ;i<12 ;i++)
    if (carteinitiale[i]==1)
         window.draw(sprite[i]) ;
   else
        window.draw(rect[i]) ;
     window.display() ;

                        }


                    }

if (sprite[carteselect[0]].getTexture() == sprite[carteselect[1]].getTexture() && k>=2)
                      {

                    if(sprite[carteselect[0]].getTexture()==sprite1[0].getTexture())

                         {cout<<"ils sont correctes"<<endl ;
                         cout<<"ITALIE,"<<endl;
                         m1.setVolume(100);
                         m1.play();}
                      else if(sprite[carteselect[0]].getTexture()==sprite1[1].getTexture())

                        {cout<<"ils sont correctes"<<endl ;
                         cout<<"ALGERIE,"<<endl;
                         m2.setVolume(100);
                         m2.play();

                        }
                    else if(sprite[carteselect[0]].getTexture()==sprite1[2].getTexture())

                          {cout<<"ils sont correctes"<<endl ;
                          cout<<"CANADA,"<<endl;
                          m3.setVolume(100);
                          m3.play();}
                    else if(sprite[carteselect[0]].getTexture()==sprite1[3].getTexture())

                        {cout<<"ils sont correctes"<<endl ;
                         cout<<"COTE D'IVOIRE,"<<endl;
                         m4.setVolume(100);
                          m4.play();
                        }
                    else if(sprite[carteselect[0]].getTexture()==sprite1[4].getTexture())

                        {cout<<"ils sont correctes"<<endl ;
                         cout<<"EGYPTE,"<<endl;
                         m5.setVolume(100);
                          m5.play();
                        }
                    else if(sprite[carteselect[0]].getTexture()==sprite1[5].getTexture())

                        {cout<<"ils sont correctes"<<endl ;
                         cout<<"FRANCE,,"<<endl;
                         m6.setVolume(100);
                          m6.play();
                        }

               else if(sprite[carteselect[0]].getTexture()==sprite1[6].getTexture())

                        {cout<<"ils sont correctes"<<endl ;
                         cout<<"JORDANIE,"<<endl;
                          m7.setVolume(100);
                          m7.play();
                        }
                        else if(sprite[carteselect[0]].getTexture()==sprite1[7].getTexture())

                        {cout<<"ils sont correctes"<<endl ;
                         cout<<"KUWAIT,"<<endl;
                          m8.setVolume(100);
                          m8.play();
                        }
                           else if(sprite[carteselect[0]].getTexture()==sprite1[8].getTexture())

                        {cout<<"ils sont correctes"<<endl ;
                         cout<<"LYBIE,"<<endl;
                         m9.setVolume(100);
                          m9.play();
                        }
                          else if(sprite[carteselect[0]].getTexture()==sprite1[9].getTexture())

                        {cout<<"ils sont correctes"<<endl ;
                         cout<<"MALI,"<<endl;
                         m10.setVolume(100);
                          m10.play();
                        }
                          else if(sprite[carteselect[0]].getTexture()==sprite1[10].getTexture())

                        {cout<<"ils sont correctes"<<endl ;
                         cout<<"ILE MAURICE,"<<endl;
                         m11.setVolume(100);
                          m11.play();
                        }
                          else if(sprite[carteselect[0]].getTexture()==sprite1[11].getTexture())

                        {cout<<"ils sont correctes"<<endl ;
                         cout<<"MEXIQUE,"<<endl;
                         m12.setVolume(100);
                          m12.play();
                        }
                        else if(sprite[carteselect[0]].getTexture()==sprite1[12].getTexture())

                        {cout<<"ils sont correctes"<<endl ;
                         cout<<"MONGOLIE,"<<endl;
                         m13.setVolume(100);
                          m13.play();
                        }
                          else if(sprite[carteselect[0]].getTexture()==sprite1[13].getTexture())

                        {cout<<"ils sont correctes"<<endl ;
                         cout<<"pero,"<<endl;
                         m14.setVolume(100);
                          m14.play();
                        }
                        else if(sprite[carteselect[0]].getTexture()==sprite1[14].getTexture())
                         {cout<<"ils sont correctes"<<endl ;
                         cout<<"KSA"<<endl;
                         m15.setVolume(100);
                          m15.play();

                        }
                        else if(sprite[carteselect[0]].getTexture()==sprite2[0].getTexture())

                         {cout<<"ils sont correctes"<<endl ;
                         cout<<"youtube,"<<endl;
                         n2.setVolume(100);
                         n2.play();}
                      else if(sprite[carteselect[0]].getTexture()==sprite2[1].getTexture())

                        {cout<<"ils sont correctes"<<endl ;
                         cout<<"windows"<<endl;
                         n3.setVolume(100);
                         n3.play();

                        }
                    else if(sprite[carteselect[0]].getTexture()==sprite2[2].getTexture())

                          {cout<<"ils sont correctes"<<endl ;
                          cout<<"vs"<<endl;
                          n4.setVolume(100);
                          n4.play();}
                    else if(sprite[carteselect[0]].getTexture()==sprite2[3].getTexture())

                        {cout<<"ils sont correctes"<<endl ;
                         cout<<"spring"<<endl;
                         n5.setVolume(100);
                          n5.play();
                        }
                    else if(sprite[carteselect[0]].getTexture()==sprite2[4].getTexture())

                        {cout<<"ils sont correctes"<<endl ;
                         cout<<"sfml"<<endl;
                         n6.setVolume(100);
                          n6.play();
                        }
                    else if(sprite[carteselect[0]].getTexture()==sprite2[5].getTexture())

                        {cout<<"ils sont correctes"<<endl ;
                         cout<<"microsoft"<<endl;
                         n7.setVolume(100);
                          n7.play();
                        }

               else if(sprite[carteselect[0]].getTexture()==sprite2[6].getTexture())

                        {cout<<"ils sont correctes"<<endl ;
                         cout<<"linux"<<endl;
                          n8.setVolume(100);
                          n8.play();
                        }
                        else if(sprite[carteselect[0]].getTexture()==sprite2[7].getTexture())

                        {cout<<"ils sont correctes"<<endl ;
                         cout<<"JS"<<endl;
                          n9.setVolume(100);
                          n9.play();
                        }
                           else if(sprite[carteselect[0]].getTexture()==sprite2[8].getTexture())

                        {cout<<"ils sont correctes"<<endl ;
                         cout<<"css"<<endl;
                         n10.setVolume(100);
                          n10.play();
                        }
                          else if(sprite[carteselect[0]].getTexture()==sprite2[9].getTexture())

                        {cout<<"ils sont correctes"<<endl ;
                         cout<<"python"<<endl;
                         n11.setVolume(100);
                          n11.play();}
                          else if(sprite[carteselect[0]].getTexture()==sprite2[10].getTexture())

                        {cout<<"ils sont correctes"<<endl ;
                         cout<<"google"<<endl;
                         n12.setVolume(100);
                          n12.play();
                        }
                          else if(sprite[carteselect[0]].getTexture()==sprite2[11].getTexture())

                        {cout<<"ils sont correctes"<<endl ;
                         cout<<"gmail"<<endl;
                         n13.setVolume(100);
                          n13.play();
                        }
                        else if(sprite[carteselect[0]].getTexture()==sprite2[12].getTexture())

                        {cout<<"ils sont correctes"<<endl ;
                         cout<<"php"<<endl;
                         n14.setVolume(100);
                          n14.play();
                        }
                          else if(sprite[carteselect[0]].getTexture()==sprite2[13].getTexture())

                        {cout<<"ils sont correctes"<<endl ;
                         cout<<"instagram"<<endl;
                         n15.setVolume(100);
                          n15.play();
                        }
                        else if(sprite[carteselect[0]].getTexture()==sprite2[14].getTexture())

                        {cout<<"ils sont correctes"<<endl ;
                         cout<<"html"<<endl;
                         n16.setVolume(100);
                          n16.play();
                        }
                        else if(sprite[carteselect[0]].getTexture()==sprite3[0].getTexture())

                        {cout<<"ils sont correctes"<<endl ;
                         cout<<"primever"<<endl;
                         l2.setVolume(100);
                         l2.play();

                        }
                    else if(sprite[carteselect[0]].getTexture()==sprite3[1].getTexture())

                          {cout<<"ils sont correctes"<<endl ;
                          cout<<"crocus"<<endl;
                          l3.setVolume(100);
                          l3.play();}
                    else if(sprite[carteselect[0]].getTexture()==sprite3[2].getTexture())

                        {cout<<"ils sont correctes"<<endl ;
                         cout<<"nenuphar"<<endl;
                         l4.setVolume(100);
                          l4.play();
                        }
                    else if(sprite[carteselect[0]].getTexture()==sprite3[3].getTexture())

                        {cout<<"ils sont correctes"<<endl ;
                         cout<<"fleur rouge"<<endl;
                         l5.setVolume(100);
                          l5.play();
                        }
                    else if(sprite[carteselect[0]].getTexture()==sprite3[4].getTexture())

                        {cout<<"ils sont correctes"<<endl ;
                         cout<<"calliandra"<<endl;
                         l6.setVolume(100);
                          l6.play();
                        }

               else if(sprite[carteselect[0]].getTexture()==sprite3[5].getTexture())

                        {cout<<"ils sont correctes"<<endl ;
                         cout<<"jasmin"<<endl;
                          l7.setVolume(100);
                          l7.play();
                        }
                        else if(sprite[carteselect[0]].getTexture()==sprite3[6].getTexture())

                        {cout<<"ils sont correctes"<<endl ;
                         cout<<"yucca"<<endl;
                          l8.setVolume(100);
                          l8.play();
                        }
                           else if(sprite[carteselect[0]].getTexture()==sprite3[7].getTexture())

                        {cout<<"ils sont correctes"<<endl ;
                         cout<<"fleur blanche"<<endl;
                         l9.setVolume(100);
                          l9.play();
                        }
                          else if(sprite[carteselect[0]].getTexture()==sprite3[8].getTexture())

                        {cout<<"ils sont correctes"<<endl ;
                         cout<<"fleur orange"<<endl;
                         l10.setVolume(100);
                          l10.play();
                        }
                          else if(sprite[carteselect[0]].getTexture()==sprite3[9].getTexture())

                        {cout<<"ils sont correctes"<<endl ;
                         cout<<"persil"<<endl;
                         l11.setVolume(100);
                          l11.play();
                        }
                          else if(sprite[carteselect[0]].getTexture()==sprite3[10].getTexture())

                        {cout<<"ils sont correctes"<<endl ;
                         cout<<"tigre"<<endl;
                         l12.setVolume(100);
                          l12.play();
                        }
                        else if(sprite[carteselect[0]].getTexture()==sprite3[11].getTexture())

                        {cout<<"ils sont correctes"<<endl ;
                         cout<<"lion"<<endl;
                         l13.setVolume(100);
                          l13.play();
                        }
                          else if(sprite[carteselect[0]].getTexture()==sprite3[12].getTexture())

                        {cout<<"ils sont correctes"<<endl ;
                         cout<<"fleur de lys"<<endl;
                         l14.setVolume(100);
                          l14.play();
                        }
                        else if(sprite[carteselect[0]].getTexture()==sprite3[13].getTexture())
                         {cout<<"ils sont correctes"<<endl ;
                         cout<<"dauphin"<<endl;
                         l15.setVolume(100);
                          l15.play();}
                       else if(sprite[carteselect[0]].getTexture()==sprite3[14].getTexture())
                         {cout<<"ils sont correctes"<<endl ;
                         cout<<"aigle"<<endl;
                         l16.setVolume(100);
                          l16.play();}


                          carteinitiale[carteselect[0]]=1;
                      carteinitiale[carteselect[1]]=1;
                      carteselect[0]=-1;
                      carteselect[1]=-1;
                      k=0 ;
                      sound.setBuffer(buffer2);
                            sound.play();
                      cout<<"ils sont correctes"<<endl ;


                      }
        else if(sprite[carteselect[0]].getTexture()!= sprite[carteselect[1]].getTexture() && k>=2 && test())
        {
        carteinitiale[carteselect[1]]=-1 ;
        carteinitiale[carteselect[0]]=-1;
        carteselect[0]=-1;
        carteselect[1]=-1;
        k=0 ;
         sound.setBuffer(buffer3);
                            sound.play();
        cout<<"   ils ne sont    pas correctes  "<< endl;
         }

   if(gagner() && tme.getElapsedTime()<tf && deb==0)
          {
              cout<<"  vous avez gagne  "<<endl ;
              music2.pause();
           window.close();


          }



 if(!gagner() && tme.getElapsedTime()>tf&&done==0)
            {
                music2.pause();
               sound.setBuffer(buffer6);
                            sound.play();
                cout<<"  vous voulez continuer vous devez repondre au quiz correctement  "<<endl ;
            if(themeselected==1)
             {Quiz q(900,700);
              done=1 ;
              cout<<" themeselected du quiz est"<<themeselected<<endl;
              r= q.run(q);
             }
             else if(themeselected==2)
             {Quiz q(900,700,2);
              done=1 ;
              cout<<" themeselected du quiz est"<<themeselected<<endl;
              r= q.run(q);
             }
             else
             {Quiz q(900,700,2,3);
              done=1 ;
              cout<<" themeselected du quiz est"<<themeselected<<endl;
              r= q.run(q);
             }
            cout<<"valeur de r="<<r<<endl;
            if(r==0)
            {
                //reponse fausse au quiz
                cout<<"vous avez tout perdu vous puvez repeter de nouveau "<<endl;

                window.close();

            }
            else
            {
                //reponse juste au quiz
                cout<<"vous avez un bonus de temps"<<endl;
            }

            }

             if(gagner() && r==1 && deb==0)
          {cout<<" maintenant vous avez gagne grace au quiz "<<endl ;

                window.close();

          }

    }

 window.clear() ;
   for(int i=0 ;i<12 ;i++)
    if (carteinitiale[i]==1)
         window.draw(sprite[i]) ;
   else
        window.draw(rect[i]) ;
     window.display() ;


    }

  if((gagner() && tme.getElapsedTime()<tf && deb==0)||(r==1 &&gagner()))
          {

            sound.setBuffer(buffer4);
                            sound.play();
              cout<<"  vous avez gagne  "<<endl ;

            sf::RenderWindow gain(sf::VideoMode(500,500),"you win");

               if(!texturewin.loadFromFile("youwin.jpg",sf::IntRect(0,0,500,500)))
      std::cout << "erreur de chargement" << endl;
       texturewin.setSmooth(true);
        spritewin.setTexture(texturewin);
                while (gain.isOpen())
                 {
                   sf::Event eventloose;
                   gain.clear();
                   gain.draw(spritewin);

                   gain.display();
                   if(timeout());
                   gain.close();
                   }

          }
//////////////////////
else
{if(r==0)
            {
                //reponse fausse au quiz
                cout<<"vous avez perdu "<<endl;


                sf::RenderWindow loose(sf::VideoMode(500,500),"you lose");
                 sound.setBuffer(buffer5);
                            sound.play();

              if(!textureloose.loadFromFile("loose.jpg",sf::IntRect(0,0,500,500)))
      std::cout << "erreur de chargement" << endl;
       textureloose.setSmooth(true);
        spriteloose.setTexture(textureloose);
                while (loose.isOpen())
                 {
                   sf::Event eventloose;
                   loose.clear();
                   loose.draw(spriteloose);
                   loose.display();
                   if(timeout());
                   loose.close();
                }
            }
}
 Menu menu2(900,700);
menu2.run(menu2.music);


}
Carte::~Carte()
{

}

