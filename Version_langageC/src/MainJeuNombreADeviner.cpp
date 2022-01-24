/*************************************************/
// Nom du projet: Jeu du nombre à deviner
// Nom du fichier: MainJeuNombreAdeviner.cpp
// Version : 1.0
// Nom du programmeur: MP Pinaud
// Date de création : 21/01/2022
// Rôle du fichier: Contient le code jeu
// Nom des composants utilises: JeuNombreADeviner.h
//                              stdio.h
// Historique du fichier:
/*************************************************/

#include <stdio.h>


#include "../include/JeuNombreADeviner.h"

int main()
{

    int nb;
    int nbMax;
    int nbMin;
    int nbTryMax;
    int nbTry;
    int nbEndGame;

    printf ("%s\n", "Vous allez jouer pour deviner un nombre secret");

    nb = tirerNombreMystere(1,10);// Tirer aléatoirement le nombre à deviner


    // Jouer une partie


    printf("La partie commence.\n");

    printf("Vous avez 4 essais pour deviner le nombre myst\x8Are compris entre 0 et 10\n");

    nbEndGame = JouerPartie(nb, 1, 10, 4, &nbTry);

    // Affichage du résultat de la partie


    return 0;
}

