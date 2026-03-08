#include <iostream>
using namespace std;

void afficherBienvenue(string message, int nbAffichage = 1)
{
    for(int i = 0; i < nbAffichage; i++)
        cout << message << endl;
}

int main(int argc, char* argv[])
{
    string message = "Bienvenue";
    int nb = 1;

    if(argc >= 2)
        message = argv[1];

    if(argc >= 3)
        nb = stoi(argv[2]);

    afficherBienvenue(message, nb);

    return 0;
}