#include <cstdio> 
#include "headers/Nave.h"
#include "headers/tipocelula.h"
#include "headers/pilha.h"
#include "headers/Preparacao.h"
#include "headers/fila.h"
#include "headers/Mecanica.h"
#include "headers/lista.h"
#include "headers/Batalha.h"
#include "headers/Nave.cpp"
#include "headers/tipocelula.cpp"
#include "headers/Preparacao.cpp"
#include "headers/Mecanica.cpp"
#include "headers/Batalha.cpp"


int main() {
  int num_frotas;
//  cout<<"Digite o numero de naves da frota"<<endl;
  scanf("%d",&num_frotas);
  int i;
  Preparacao p;
  Batalha b;
  Mecanica m;
  for(i=0; i < num_frotas; i++){
    int id_nave;
//    cout<<"Digite a identifiacao da nave"<<endl;
    scanf("%d",&id_nave);
    Nave n;
    n.SetNave(id_nave);
    p.Preparar(n);
  }
  int operacao;
  while(scanf("%d", &operacao) != EOF) {
    if(operacao==0||operacao ==-1||operacao ==-2||operacao ==-3){
      if(operacao==0){
        Nave n;
        n = p.Atacar();
        std::cout<<"nave "<<n.GetNave()<<" em combate"<<std::endl;
        b.InsereInicio(n.GetNave());
      }
      if(operacao== -1){
        Nave n;
        n = m.Retira();
        std::cout<<"nave "<<n.GetNave()<<" consertada"<<std::endl;
        p.Preparar(n);
      }
      if(operacao== -2){
        p.Imprime();
      }
      if(operacao== -3){
        m.Imprime();
      }
    }else{
      int aux;
      Nave o;
      o.SetNave(operacao);
      aux = b.Pesquisa(o.GetNave());
      std::cout<<"nave "<<o.GetNave()<<" avariada"<<std::endl;
      b.RemovePosicao(aux);
      m.Adiciona(operacao);
    }
  }
  return 0;
}