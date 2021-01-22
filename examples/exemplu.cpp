// Program Exemplu
#include <iostream>
#include "../romanian.h"

foloseste std;

vid functie_exemplu() {
    intreg x;
    scrie << "Dati un numar intreg: ";
    citeste >> x;
    daca (este_par(ultima_cifra(x))) scrie << "\nUltima cifra este para." << sfarsit_de_linie;
    altfel scrie << "\nUltima cifra nu este para." << sfarsit_de_linie;
}

intreg main() {
    scrie << "Buna ziua!" << sfarsit_de_linie;
    functie_exemplu();
    returneaza 0;
}