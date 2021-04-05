//Código passado nas aulas foi usado como inspiração
#ifndef NAVE
#define NAVE

typedef int ID_Nave; 

class Nave{
    private:
        ID_Nave identidade;
    public:
        Nave();
        Nave(ID_Nave c);
        void SetNave(ID_Nave c);
        ID_Nave GetNave();
        void Imprime();  
};

#endif