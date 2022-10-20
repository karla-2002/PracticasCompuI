#include <iostream>
#include <array>

// Añadir std para fácil llamado de funciones
using namespace std;

//// Declaración de funciones
//Definimos un template (un tipo de dato) para nuestra matriz
template <typename matriz>
void LlenarMatriz(matriz & miMatriz);

template <typename matriz>
void ImprimirMatriz(matriz & miMatriz);

template <typename matriz>
void GaussJordan(matriz & miMatriz);

template <typename matriz>
void ImprimirSolucion(matriz & miMatriz);

template <typename matriz>
void multi(matriz & miMatriz);

template <typename matriz>
void cambio(matriz & miMatriz);

template <typename matriz>
void sum(matriz & miMatriz);

template <typename matriz>
void sum2(matriz & miMatriz);

int main()
{
    // Definimos el número de variables de nuestro sistema
    const int variables = 3;
    // El número de columnas será el número de variables más su solición para cada ecuación
    const int columnas = variables + 1;

    // Inicializamos la matriz que vamos a ocupar
    array <array<float, columnas>, variables> miMatriz = { 0 };

    // Pedimos al usuario que llene la matriz
    LlenarMatriz(miMatriz);

    // Aplicamos el método de Gauss-Jordan sobre nuestra matriz
    GaussJordan(miMatriz);// son las que tengo qe hacer
    //ImprimirMatriz(miMatriz);
    // Imprimimos la solución de la matriz
    ImprimirSolucion(miMatriz); //son las que tengo qe hacer

    return 0; // Indicamos que salimos del programa con éxito
}

/*
Llena 'miMatriz' con valores ingresados por el usuario para cada elemento.
No regresa ningún valor.
*/
template <typename matriz>
void LlenarMatriz(matriz & miMatriz)
{
    int variables = miMatriz.size();
    for (int i = 0; i < variables; i++) {
        for (int j = 0; j <= variables; j++) {
            cout << "Valor elemento [" << i << "][" << j << "]: ";
            cin >> miMatriz[i][j];
        }
    }
}

/*
Imprime cada elemento de 'miMatriz' emulando una matriz con corchetes cuadrados.
No regresa ningún valor.
*/
template <typename matriz>
void ImprimirMatriz(matriz & miMatriz)
{
    int variables = miMatriz.size();
    for (int i = 0; i < variables; i++) {
        cout << "[ ";
        for (int j = 0; j < variables + 1; j++)
            cout << miMatriz[i][j] << '\t';
        cout << "]\n";
    }
}

/*
Imprime en pantalla la solución para cada variable del sistema de ecuaciones correspondiente a los valores en 'miMatriz'.
No regresa ningún valor.
*/
template <typename matriz>
void ImprimirSolucion(matriz & miMatriz)
{
    cout<< "Solucion: " <<endl << "x0 = [" << miMatriz [0][3]<< "]" << endl << "x1 = [" << miMatriz [1][3]<< "]" <<endl <<"x2 = [" << miMatriz [2][3]<< "]"<<endl;
}

/*
Implementa el algoritmo de Gauss-Jordan sobre 'miMatriz', finalizando en ella la solución del algoritmo.
No regresa ningún valor.
*/
template <typename matriz>
void GaussJordan(matriz & miMatriz)
{
    cambio(miMatriz);
    sum(miMatriz);
    multi(miMatriz);



}

template <typename matriz>
void multi(matriz & miMatriz){
    int variables = miMatriz.size();
    float factor = 0;
        for (int i = 0; i < variables; i++) {
        for (int j = 0; j < variables + 1; j++){
            if (i==j && miMatriz[i][j] !=1 ){
                factor=miMatriz[i][j];
                for (int h=0 ; h < variables + 1; h++){
                    miMatriz[i][h]= miMatriz[i][h]*(1/factor);
                 }
            }

        }

    }

}

template <typename matriz>// función para cambiar renglones
void cambio(matriz & miMatriz){

    int variables = miMatriz.size();
    array <float, 4> Memoria={0};
    for (int i = 0; i < variables; i++) {
        for (int j = 0; j < variables + 1; j++){
            if (i==j && miMatriz[i][j] ==0 ){
                for (int h=0 ; h < variables + 1; h++){
                    Memoria[h]= miMatriz[i+1][h];
                    miMatriz [i+1][h]= miMatriz[i][h];
                    miMatriz [i][h]= Memoria[h];
                }
            }

        }

    }
}

template <typename matriz>
void sum(matriz & miMatriz){
    int variables =miMatriz.size();
    float a=0;
    float b=0;
    float x=0;
    int m=0;
    for (int j = 0; j < variables+1 ; j++) {
        for (int i = 0; i < variables ; i++){
            if (i==j){
                m=i;
                a= miMatriz[i][j];
            }
            if (i>j  &&  miMatriz[i][j] !=0 ){
                b=miMatriz[i][j];
                x=(-b)/a;
                for (int c=0; c< variables+1; c++ ) {
                    miMatriz[i][c] = (x * miMatriz[m][c]) + miMatriz[i][c];
                }
            }
        }
    }

    for (int j = variables-1; j >=0 ; j--) {
        for (int i = variables-1; i >= 0 ; i--){
            if (i==j){
                m=i;
                a= miMatriz[i][j];
            }
            if (i<j  &&  miMatriz[i][j] !=0 ){
                b=miMatriz[i][j];
                x=(-b)/a;
                for (int c=0; c< variables+1; c++ ) {
                    miMatriz[i][c] = (x * miMatriz[m][c]) + miMatriz[i][c];
                }
            }
        }
    }

}
