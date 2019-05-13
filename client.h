#ifndef CLIENT_H_INCLUDED
#define CLIENT_H_INCLUDED
#include <vector>
class Client{
public:
    Client();
    Client(vector <Haina*> h, int nHaine);//haina & numarul de itemi
    Client(const Client&);
    ~Client();
//friend istream& operator >> (istream&, Client&);
protected:
    vector <Haina*>* comanda;
    int nHaine;
};

#endif // CLIENT_H_INCLUDED
