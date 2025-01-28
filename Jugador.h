//
// Created by gilbe on 28/01/2025.
//

#ifndef JUGADOR_H
#define JUGADOR_H
#include <iostream>
#include <vector>
#include <string>

#include "Cartas.h"


class Jugador {
private:
 string nombre;
 vector<Cartas> cartas;
 public:
   Jugador();
   Jugador(string nombre);
   string getNombre();
   void setNombre(string nombre);
   vector<Cartas> getCartas();
   void setCartas(vector<Cartas> cartas);
   bool hasCartas();

};



#endif //JUGADOR_H
