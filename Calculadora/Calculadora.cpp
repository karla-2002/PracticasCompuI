//Author: Karla Castillo Sandoval
//karlasandoval2002@comunidad.unam.mx
//28 sept, 2022

#include <iostream> //Declaramos librerías

using namespace std;

int main(){
    float Vnum1=0;
    float Vnum2=0;
    float resultado=0;
    int num1modu;
    int num2modu;
    char Voper;

    cout << "$ ./ Calculadora "<< "\n"<< "Este programa hace operaciones basicas entre dos numeros."<< endl;
    cout << "Primer numero:";
    cin >> Vnum1;
    cout << "Operacion:";
    cin >> Voper;
    cout << "Segundo numero:";
    cin >> Vnum2;

    if( Voper == '+'){
        resultado = Vnum1 + Vnum2;
    }
    if( Voper == '-'){
        resultado = Vnum1 - Vnum2;
    }
    if( Voper == '*'){
        resultado = Vnum1 * Vnum2;
    }
    if( Voper == '/'){
        resultado = Vnum1 / Vnum2;
    }


     if( Voper == '%'){
         num1modu= int(Vnum1);
         num2modu= int(Vnum2);
        resultado = num1modu % num2modu;
    }

    cout << "\nResultado: " << endl << Vnum1 << Voper << Vnum2 << " = " << resultado<< endl;

}
