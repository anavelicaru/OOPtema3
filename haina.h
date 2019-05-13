#ifndef HAINA_H_INCLUDED
#define HAINA_H_INCLUDED

class Haina{
public:
    virtual float getGreutate() = 0;
    virtual bool getTip() = 0;
    virtual bool getCuloare() = 0;
    virtual bool getTemperatura() = 0;
private:
    float greutate;
    bool tipHaina; //usoara sau grea: 0->usoara, 1->grea
    bool culoareHaina; //inchisa sau deschisa: 0->deschisa, 1->inchisa
    bool temperatura;//scazuta sau ridicata: 0->scazuta, 1->ridicata
};


#endif // HAINA_H_INCLUDED
