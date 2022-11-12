//
// Created by karli on 11/11/2022.
//

#ifndef PUNTOS_PUNTO_H
#define PUNTOS_PUNTO_H

#include <math.h>
#include <iostream>

using namespace std;
class Punto2D {
private:
    float x, y;
public:
    void SetPosicion(float x1, float y1);
    void Escalar (float temp1, float temp2);
    void Trasladar (float temp1, float temp2);
    void RotarRespectoAlOrigen (float temp1);
    //Métodos get
    float GetX();
    float GetY();

};


#endif //PUNTOS_PUNTO_H
