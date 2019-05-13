#ifndef MASINASPALAT_H_INCLUDED
#define MASINASPALAT_H_INCLUDED
#include "masina.h"
#define CAPACITATE 30
class masinaSpalat : protected Masina{
protected:
    float greutateActuala;
    vector <Haina> curate; //teoretic un vector in care retin care sunt curate si care murdare

};

#endif // MASINASPALAT_H_INCLUDED
