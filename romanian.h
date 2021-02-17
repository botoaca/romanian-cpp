#ifndef ROMANIANCPP_ROMANIAN_H
#define ROMANIANCPP_ROMANIAN_H

// Functii utilitare
int prima_cifra(int n) {
    while (n >= 10) n = n / 10;
    return n;
}

int ultima_cifra(int n) {
    return n % 10;
}

bool este_par(int n) {
    if (n % 2 == 0) return true;
    else return false;
}

// Definitii utilitare
#define foloseste using namespace
#define spatiu " "
#define egal =
#define mod %
#define diferit <>
#define si &&
#define sau ||

// C++
#define vid void

#define intreg int
#define real float
#define caracter char
#define nesemnat unsigned
#define lung long
#define dublu double
#define sir_de_caractere string

#define scrie cout
#define citeste cin
#define sfarsit_de_linie endl

#define daca if
#define cat_timp while
#define altfel else
#define pentru for

#define adevarat true
#define fals false

#define schimba swap
#define ca_sdc to_string
#define gol empty
#define returneaza return

#endif
