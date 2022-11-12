//
// Created by karli on 11/11/2022.
//

#include "Punto.h"
void Punto2D::SetPosicion(float x1, float y1){
    x=x1;
    y=y1;
}
void Punto2D::Escalar (float temp1, float temp2){
    x=temp1 * x;
    y= temp2 * y;
}
void Punto2D::Trasladar(float temp1, float temp2) {
    x= temp1 + x;
    y= temp2 + y;
}
void Punto2D::RotarRespectoAlOrigen (float temp1) {
    float rad, x1, y1, pi=3.14159;
    x1=x;
    y1=y;

    rad=(temp1)*(pi/180);
    x= (x1*cos(rad))-(y1*sin(rad));
    y= (x1*sin(rad))+(y1*cos(rad));


}
//Métodos get
float Punto2D::GetX(){
    return x;
}
float Punto2D::GetY(){
    return y;
}
