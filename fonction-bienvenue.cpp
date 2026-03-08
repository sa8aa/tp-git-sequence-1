#include "fonction-bienvenue.h"
#include <iostream>

void afficherBienvenue(string message, int nbAffichage = 1)
{
    for(int i = 0; i < nbAffichage; i++)
    {
        cout << message << endl;
    }
}