//Código passado nas aulas foi usado como inspiração
#include "Preparacao.h"


Preparacao::Preparacao() :Pilha(){
    topo = NULL;
};

Preparacao::~Preparacao(){
    Limpa();
};

void Preparacao::Preparar(Nave item){
    TipoCelula *nova;

    nova = new TipoCelula();
    nova->item = item;
    nova->prox = topo;
    topo = nova;
    tamanho++;

};

Nave Preparacao::Atacar(){
    Nave aux; TipoCelula *p;
    aux = topo->item;
    p = topo;
    topo = topo->prox;
    delete p;
    tamanho--;
    return aux;
};

void Preparacao::Imprime(){
    TipoCelula *p;
    p = topo;
    while (p!=0) {
        p->item.Imprime();
        p = p->prox;
    }
    std::cout<<"\n";
};

void Preparacao::Limpa(){
    while(!Vazia()){
        Atacar();
    }
};