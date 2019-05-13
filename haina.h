#ifndef HAINA_H_INCLUDED
#define HAINA_H_INCLUDED
#include <iostream>
class Haina{
    //culoare, greutate si cui apartine
public:
    istream& operator >> (istream& is, Haina h);
protected:
    float greutate;
    bool culoare; //0-deschis, 1-inchis
    bool tipHaina; //usoara sau grea: 0->usoara, 1->grea
    bool temperatura;//scazuta sau ridicata: 0->scazuta, 1->ridicata
    int idHaina;
};


#endif // HAINA_H_INCLUDED
