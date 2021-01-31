// FizzBuzz
// FizzBuzz este o intrebare de raspuns care enunta:
// "
// Scrie un program care arata numerele de la 1 la 100,
// dar pentru multiplii lui 3, scrie "Fizz" in loc de numar si
// pentru multiplii lui 5, scrie "Buzz" in loc de numar. Pentru
// numerele care sunt multiplii ambelor numere, scrie "FizzBuzz".
// "
#include <iostream>
#include "../romanian.h"

foloseste std;

intreg main() {
    pentru (intreg i = 1; i <= 100; i++) {
        sir_de_caractere rezultat;
        daca (i % 3 == 0) rezultat += "Fizz";
        daca (i % 5 == 0) rezultat += "Buzz";
        daca (rezultat.gol()) rezultat = ca_sdc(i);
        scrie << rezultat << sfarsit_de_linie;
    }

    returneaza 0;
}
