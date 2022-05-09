#include <SFML/Graphics.hpp>
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Menu.h"
#include "Carte.h"
#include "Level2.h"
#include "Level3.h"
#include "Quiz.h"

using namespace std ;
using namespace sf ;
using namespace std ;
using namespace sf ;



int main()
{
    Menu menu(900,700);

	menu.run(menu.music);

    return 0;
}

