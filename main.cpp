#include <iostream>
#include "program.h"

using namespace std;

int main()
{
   Program* prog = new Program;
   prog->init;
   prog->afiseazaComenzile();
   delete prog;
}
