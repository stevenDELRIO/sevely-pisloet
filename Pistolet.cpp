// Pistolet.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "pistolet.h"
using namespace std;
int main()
{
    //std::cout << "Hello World!\n";
    pistolet pistolet(4); // Crée un pistolet avec x coups max

    pistolet.Tir();// Tir du pistolet 
    pistolet.Tir();
    pistolet.Recharge();// Recharge du pistolet 
    pistolet.Tir();
    pistolet.Tir();
    pistolet.Tir();
    pistolet.Tir();
    pistolet.Tir();
}

pistolet::pistolet(int max) : coupsRestants(max), coupsMax(max) {}

void pistolet::Tir() {
    if (coupsRestants > 0) {
        cout << " Un coup tire.\n Il reste " << --coupsRestants << " coups." << endl;
    }
    else {
        cout << "Le pistolet est vide.\n  " << std::endl;
    }
}

void pistolet::Recharge() {
    coupsRestants = coupsMax;
    cout << "Le pistolet est recharge avec " << coupsMax << " coups." << endl;
}
