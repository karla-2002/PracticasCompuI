#include <iostream>
#include <array>

#define LEN 3 //Número de elementos en los arreglos. LEN=3

// Añadir std para fácil llamado de funciones
using namespace std;

// Declaración de funciones
void ImprimirArreglo(array<float, LEN> arreglo);
array<float, LEN> LlenarArreglo(void); // la función de tipo arreglo se llama y le ponemos void porque no tiene ningún argumento
array<float, LEN> MultiplicarArreglo(array<float, LEN> arreglo, float multiplo) ;
array<float, LEN> SumarArreglos(array<float, LEN> arr1, array<float, LEN> arr2);

int main()// El main es la función principal. Ahí se pone todoo el código.
{
    char decision;
    array<float, LEN> arr = { 0 }; // Inicializamos el arreglo con ceros como buena práctica
    arr = LlenarArreglo(); // Solicitamos al usuario que llene un arreglo y lo asignamos a nuestro arreglo principal
    cout << "Operacion: ";
    cin >> decision;
    // Si la operación no es '+' de suma, o '*' de multiplicación, seguimos preguntando al usuario.
    // Se abre ciclo para preguntar eso hasta que sea válida la respuesta
    while (decision != '+' && decision != '*')
    {
        cout << "Operacion: ";
        cin >> decision;
    }
    // Si se ingresa la multiplicación
    if (decision == '*') {
        float factor;
        cout << "Factor: ";
        cin >> factor;  // Pedimos el factor a multiplicar
        arr = MultiplicarArreglo(arr, factor); // Multiplicamos nuestro arreglo principal por el factor y el resultado lo asignamos a nuestro arreglo principal.
    }
    // Si se ingresa la suma
    else if (decision == '+') {
        array<float, LEN> arr2 = {0}; // Creamos el segundo arreglo y lo inicializamos en ceros
        arr2 = LlenarArreglo(); // Pedimos al usuario que llene otro arreglo y lo asignamos a nuetsro nuevo arreglo
        arr = SumarArreglos(arr, arr2); // Sumamos ambos arreglos elemento a elemento, y reasignamos el resutlado a nuestro arreglo principal
    }
    cout << "Resultado: ";
    ImprimirArreglo(arr); // Imprimimos el resultado de la operación sobre el arreglo principal
    return 0; // Indicamos que salimos del programa con éxito. Tiene que retornar un número entero porque es int main.
}

// Imprime los elementos del arreglo 'arreglo' separando cada elemento con un espacio en blanco
void ImprimirArreglo(array<float, LEN> arreglo)
{
    for (int i = 0; i < LEN; i++)
        cout << arreglo[i] << ' ';
    cout << '\n';
}

// Llena un arreglo de tamaño LEN y lo "regresa" como resultado
array<float, LEN> LlenarArreglo()
{
    array<float, LEN> arreglo = {0};
    for (int i =0; i< LEN; i++){
        cout << "Valor elemento [" << i << "] :";
        cin >> arreglo[i];
    }
    return arreglo;
}

// Multiplica cada elemento del arreglo 'arreglo' por el factor 'mult'
array<float, LEN> MultiplicarArreglo(array<float, LEN> arreglo, float multiplo)
{
    // Para hacer que el factor se multiplique por cada elemento del arreglo se necesita un ciclo for que vaya posición en posición.
    for (int i =0; i< LEN; i++) {
        arreglo[i]= arreglo [i]* multiplo;
    }
        return arreglo;
}

// Suma elemento a elemento los arreglos 'arr1' y 'arr2' y regresa el arreglo resultante
array<float, LEN> SumarArreglos(array<float, LEN> arr1, array<float, LEN> arr2)
{ 
    // agregamos otro ciclo for para que vaya de posisión en posición de cada arreglo.
    for (int i =0; i< LEN; i++) {
        arr1[i]= arr1 [i]+ arr2 [i];
    }
 return arr1; 
}
