#ifndef PROGRAM_H_INCLUDED
#define PROGRAM_H_INCLUDED
#include "client.h"
#include "haina.h"
#include "masina.h"

//am nevoie de functii de: memorare haine murdare/spalate,
//preluare, plasare, pornire, mutare de la o masina in alta
class Program{
public:
    friend istream& operator >> (istream& is, Haina h);
    int preluare(Client c, Haina h);
    int plasare(Masina m); // spalare - stoarcere
    int preluare1(Masina m, Masina n);// stoarcere - uscare
    int preluare2(Masina m); // uscare - calcare
    int pornire(Masina m);
    void init();
    void afiseazaComenzile();
};

#endif // PROGRAM_H_INCLUDED
