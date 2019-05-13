#ifndef MASINA_H_INCLUDED
#define MASINA_H_INCLUDED

class Masina{
public:
    Masina();
    Masina(int x, float y, float z);
    virtual getTip() = 0;
protected:
    int tipMasina; // 1-spalat, 2-stors, 3-uscat,4-calcat
    float capacitateMax;
    float cantitateActuala;

};

#endif // MASINA_H_INCLUDED
