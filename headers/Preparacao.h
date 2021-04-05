//A estrutura usada para a preparação da batalha será a Pilha Encadeada
//Código passado nas aulas foi usado como inspiração
#include <iostream>
#ifndef PREPARACAO
#define PREPARACAO

#include "pilha.h"
#include "tipocelula.h"
#include "Nave.h"

class Preparacao : public Pilha{
    public:
        Preparacao();
        ~Preparacao();
        void Preparar(Nave item);
        Nave Atacar();
        void Imprime();
        void Limpa();
    private:
        TipoCelula* topo;
};

#endif