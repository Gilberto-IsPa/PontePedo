//
// Created by gilbe on 28/01/2025.
//

#ifndef CARTAS_H
#define CARTAS_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;


class Cartas {
private:
  string valor;
  string tipo;
  bool activa;

public:
  Cartas();
  Cartas(string valor, string tipo);
  string getValor();
  string getTipo();
  void setValor(string valor);
  void setTipo(string tipo);
  bool isActiva();
  void setActiva();


};



#endif //CARTAS_H
