//Código passado nas aulas foi usado como inspiração
#include "Mecanica.h"

Mecanica::Mecanica() : Fila(){
    frente = new TipoCelula;
    tras = frente;
};

Mecanica::~Mecanica(){
    Limpa();
    delete frente;
};

void Mecanica::Adiciona(Nave item){
    TipoCelula *nova;
    nova = new TipoCelula();
    nova->item = item;
    tras->prox = nova;
    tras = nova;
    tamanho++;
};

Nave Mecanica::Retira(){
    TipoCelula *p;
    Nave aux;
    aux = frente->prox->item;
    p = frente;
    frente = frente->prox;
    delete p;
    tamanho--;
    return aux;
};

void Mecanica::Imprime(){
    int tamanhoaux = tamanho;
    TipoCelula *p;
    p = frente->prox;
    while (p!=0) {
        p->item.Imprime();
        p = p->prox;
    }
    std::cout<<"\n";
};

void Mecanica::Limpa(){
    TipoCelula *p;
    p = frente->prox;
    while(p!=0){
        frente->prox = p->prox;
        delete p;
        p = frente->prox;
    }
    tamanho = 0;
    tras = frente;
};


