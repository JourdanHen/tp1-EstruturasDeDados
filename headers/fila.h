// Códio passado em aula adaptado
#ifndef FILA
#define FILA

#include"Nave.h"

class Fila{
    public:
        Fila() {tamanho = 0;};
        int GetTamanho() {return tamanho;};
        bool Vazia() {return tamanho == 0;};
        virtual void Adiciona(Nave item) = 0;
        virtual Nave Retira() = 0;
        virtual void Limpa() = 0;
    protected:
        int tamanho;
};

#endif