//Código passado nas aulas foi usado como inspiração
#include "Batalha.h"

Batalha::Batalha() : Lista(){
    primeiro = new TipoCelula();
    ultimo = primeiro;
};

Batalha::~Batalha(){
    Limpa();
    delete primeiro;
};

TipoCelula* Batalha::Posiciona(int pos, bool antes=false){
    TipoCelula *p; int i;
    if ( (pos > tamanho) || (pos <= 0) )
        throw "ERRO: Posicao Invalida!";
    // Posiciona na célula anterior a desejada
    p = primeiro;
    for(i=1; i<pos; i++){
        p = p->prox;
    }
    // vai para a próxima
    // se antes for false
    if(!antes)
        p = p->prox;
    return p;
};

void Batalha::InsereInicio(Nave item){
    TipoCelula *nova;
    nova = new TipoCelula();
    nova->item = item;
    nova->prox = primeiro->prox;
    primeiro->prox = nova;
    tamanho++;
    if(nova->prox == 0)
        ultimo = nova;
};

Nave Batalha::RemovePosicao(int pos) {;
    Nave aux;
    TipoCelula *p, *q;
    p = Posiciona(pos, true);
    q = p->prox;
    p->prox = q->prox;
    tamanho--;
    aux = q->item;
    delete q;
    if(p->prox == 0)
        ultimo = p;
    return aux;
};

int Batalha::Pesquisa(ID_Nave c) {
    Nave aux;
    TipoCelula *p;
    if (tamanho == 0)
        throw "ERRO: Lista vazia!";
    p = primeiro->prox;
    aux.SetNave(-1);
    int posicao=0;
    while (p!=0) {
        posicao ++;
        if (p->item.GetNave() == c) {
            aux = p->item;
            break;
        }
        p = p->prox;
    }
    return (posicao);
};

void Batalha::Imprime() {
    TipoCelula *p;
    p = primeiro->prox;
    while (p!=0) {
        p->item.Imprime();
        p = p->prox;
    }
    std::cout<<"\n";
};

void Batalha::Limpa() {
    TipoCelula *p;
    p = primeiro->prox;
    while (p!=NULL) {
        primeiro->prox = p->prox;
        delete p;
        p = primeiro->prox;
    }
    ultimo = primeiro;
    tamanho = 0;
};