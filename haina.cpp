#include <iostream>
#include "haina.h"

istream& operator >> (istream& is, Haina h){
    is >> h.greutate >> h.culoare >> h.tipHaina >> h.temperatura >> h.idHaina;};
