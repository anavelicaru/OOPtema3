#ifndef CLIENT_H_INCLUDED
#define CLIENT_H_INCLUDED
#include <vector>
#include "haina.h"
class Client{
    //hainele pe care mi le a adus si CNP-ul
    //vector de haine curate si haine murdare
public:
    Client();
    Client(vector <Haina*> h, int nHaine);//haina & numarul de itemi
    Client(const Client&);
    ~Client();
    int getidClient(int id);
//friend istream& operator >> (istream&, Client&);
protected:
    vector <Haina*>* comanda;
    int nHaine;
    int idClient;
};

#endif // CLIENT_H_INCLUDED
