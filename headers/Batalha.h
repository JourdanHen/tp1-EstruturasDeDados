//A estrutura usada para a preparação da batalha será a Fila Encadeada
//Código passado nas aulas foi usado como inspiração
#include <iostream>
#ifndef BATALHA
#define BATALHA

#include "lista.h"
#include "Nave.h"
#include "tipocelula.h"

class Batalha : public Lista {
    public:
        Batalha();
        ~Batalha();
        void InsereInicio(Nave item);
        Nave RemovePosicao(int pos);
        int Pesquisa(ID_Nave c);
        void Imprime();
        void Limpa();
    private:
        TipoCelula* primeiro;
        TipoCelula* ultimo;
        TipoCelula* Posiciona(int pos, bool antes);
};
#endif