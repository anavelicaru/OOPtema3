#ifndef PANTALONI_H_INCLUDED
#define PANTALONI_H_INCLUDED
#include <vector>
#include <haina.h>

class Pantaloni : protected Haina {
public:
    Pantaloni(void);
    Pantaloni(int x, string y);
    Pantaloni(const Haina&);
    ~Pantaloni();
protected:
    //static int getDetergent();
  //  static int detergent;
   // string getName();

};

#endif // PANTALONI_H_INCLUDED
