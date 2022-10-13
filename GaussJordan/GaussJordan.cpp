#include <iostream>
#include <array>

// Añadir std para fácil llamado de funciones y para imprimir
using namespace std;

//// Declaración de funciones:
//Definimos un template (un tipo de dato) para nuestra matriz
template <typename matriz> // define un tipo de variable llamado matriz y
// que contendrá en nuestro caso la matriz sobre la que vamos a implementar el método de Gauss-Jordan
void LlenarMatriz(matriz & miMatriz);// miMatriz está por referencia,

template <typename matriz>
void ImprimirMatriz (matriz & miMatriz); //Esta función me va a dejar imprimir la matriz en cualquier momento.   No la llames en el código final

template <typename matriz> //Este define
//un tipo de variable llamado matriz y que contendrá en nuestro caso la matriz sobre la que vamos a implementar el método de Gauss-Jordan.

void GaussJordan(matriz & miMatriz);//donde el argumento pasado por referencia miMatriz es la matriz a imprimir..
// La funció Gauss jordan  tiene como objetivo implementar el algoritmo de Gauss-Jordan sobre una matriz de tamaño variablesXcolumnas.

//
template <typename matriz>
void ImprimirSolucion(matriz & miMatriz);


int main()
{
    // Definimos el número de variables de nuestro sistema
    const int variables = 3;// Para poder usarlo dentro del array debe de ser const int
    // El número de columnas será el número de variables más su solición para cada ecuación
    const int columnas = variables + 1;

    // Inicializamos la matriz que vamos a ocupar.
    array <array<float, columnas>, variables> miMatriz = { 0 };// todos los valores de la matriz van a ser igua a 0

    // Pedimos al usuario que llene la matriz.
    LlenarMatriz(miMatriz);

    // Aplicamos el método de Gauss-Jordan sobre nuestra matriz
    GaussJordan(miMatriz);

    // Imprimimos la solución de la matriz
    ImprimirSolucion(miMatriz);

    return 0; // Indicamos que salimos del programa con éxito
}

/*
Llena 'miMatriz' con valores ingresados por el usuario para cada elemento.
No regresa ningún valor.
*/
template <typename matriz>// para que el usuario llene la matriz se ocpa este ciclo for
void LlenarMatriz(matriz & miMatriz)
{
    int variables = miMatriz.size();
    for (int i = 0; i < variables; i++) {  //para llenar la columna
        for (int j = 0; j <= variables; j++) {    //para llenar la fila
            cout << "Valor ele mento ["  << i <<  "]["  << j <<  "]: ";
            cin >> miMatriz[i][j];
        }
    }
}

/*
Imprime cada elemento de 'miMatriz' emulando una matriz con corchetes cuadrados.
No regresa ningún valor.
*/
template <typename matriz>
void ImprimirMatriz(matriz & miMatriz) // este for es para que aparezca el lugar del elemento de la matriz
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

}

/*
Implementa el algoritmo de Gauss-Jordan sobre 'miMatriz', finalizando en ella la solución del algoritmo.
No regresa ningún valor.
*/
template <typename matriz>
void GaussJordan(matriz & miMatriz)
{
    //TODO
    cout<< "Solucion: " <<endl << "x0 = [" << miMatriz [0][3]<< "]" << endl << "x1 = [" << miMatriz [1][3]<< "]" <<endl <<"x2 = [" << miMatriz [2][3]<< "]"<<endl;

}
