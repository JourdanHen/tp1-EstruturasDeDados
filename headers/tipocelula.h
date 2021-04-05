//Código passado em aula
#ifndef TIPOCELULA
#define TIPOCELULA

#include "Nave.h"
class TipoCelula{
    public:
        TipoCelula();
    private:
        Nave item;
        TipoCelula *prox;
    
    friend class Preparacao;
    friend class Mecanica;
    friend class Batalha;
};

#endif