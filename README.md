# TP Git – Séquence 1

## Exemple d'exécution d'une commande Linux

```sh
$ make rebuild
Fabrication du programme : bienvenue
rm -f *.o
g++ -c -Wall -std=c++11 bienvenue.cpp
g++ -c -Wall -std=c++11 fonction-bienvenue.cpp
g++ -o bienvenue bienvenue.o fonction-bienvenue.o
$ ./bienvenue
Bienvenue le monde !
## Changelog

- Ajout de la fonctionnalité `feature-xyz` pour améliorer la gestion des utilisateurs.
- Correction du fichier README.md pour mieux documenter le processus de compilation et d'exécution.
