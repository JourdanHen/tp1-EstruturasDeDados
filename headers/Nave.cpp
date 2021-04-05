#include <iostream>
#include "Nave.h"

Nave::Nave(){
    identidade = -1;
};

Nave::Nave(ID_Nave c){
    identidade = c;
};

void Nave::SetNave(ID_Nave c){
    identidade = c;
};

ID_Nave Nave::GetNave(){
    return identidade;
};

void Nave::Imprime(){
    std::cout << identidade<<std::endl;
};