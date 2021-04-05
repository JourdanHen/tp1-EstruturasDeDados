//Código passado nas aulas foi usado como inspiração
#ifndef LISTA
#define LISTA

#include "Nave.h"

class Lista{
    protected:
    int tamanho;

    public:
    Lista() {tamanho =0;}
    int GetTamanho(){return tamanho;};
    bool Vazia(){return tamanho == 0;};
    virtual void InsereInicio(Nave item) = 0;
    virtual Nave RemovePosicao(int pos) = 0;
    virtual int Pesquisa(ID_Nave c)= 0;
    virtual void Imprime() = 0;
    virtual void Limpa() = 0;

};

#endif