//A estrutura usada para a preparação da batalha será a Fila Encadeada
//Código passado nas aulas foi usado como inspiração
#include <iostream>
#ifndef MECANICA
#define MECANICA

#include "fila.h"
#include "tipocelula.h"
#include "Nave.h"

class Mecanica : public Fila{
    public:
        Mecanica();
        ~Mecanica();
        void Adiciona(Nave item);
        Nave Retira();
        void Imprime();
        void Limpa();
    private:
        TipoCelula* frente;
        TipoCelula* tras;
};
#endif