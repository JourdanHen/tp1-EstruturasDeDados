// Códio passado em aula adaptado
#ifndef PILHA
#define PILHA

#include"Nave.h"

class Pilha{
    public:
        Pilha(){tamanho = 0;};
        int GetTamanho() {return tamanho;};
        bool Vazia() {return tamanho == 0;};
        virtual void Preparar(Nave item) = 0;
        virtual Nave Atacar() = 0;
        virtual void Limpa() = 0;
    protected:
        int tamanho;
};

#endif