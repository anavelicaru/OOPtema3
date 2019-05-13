#ifndef SPALATORIE_H_INCLUDED
#define SPALATORIE_H_INCLUDED

#include "program.h"
#include "client.h"
class Spalatorie{
public:
    Spalatorie();
    Spalatorie(int x);//presupun ca am un client atm
    Spalatorie(const Spalatorie&);
    ~Spalatorie;
    void init();
    void afiseazaComenzi();
//altceva nu prea cred ca-mi trebuie
};

#endif // SPALATORIE_H_INCLUDED
