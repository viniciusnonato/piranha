#ifndef AGENTE_H
#define AGENTE_H
#include "vetor.h"
#include <vector>
using namespace std;

class agente
{
public:
    agente();
private:
    double passo;
    vetor locDir;
    double angVisao;
    int rg;
    vector <agente *> vizinhos;

};

#endif // AGENTE_H
