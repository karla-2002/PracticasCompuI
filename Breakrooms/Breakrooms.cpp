#include <iostream>
#include <array>
#include <string>

using namespace std;
int main() {
    array < string, 15 >ListaEstudiantes;
    int numEqui;
    ListaEstudiantes [0]= "Hannia";
    ListaEstudiantes [1]= "Karla";
    ListaEstudiantes [2]= "Emilio";
    ListaEstudiantes [3]= "Mario";
    ListaEstudiantes [4]= "Gary";
    ListaEstudiantes [5]= "Oscar";
    ListaEstudiantes [6]= "Teniente";
    ListaEstudiantes [7]= "Fabian";
    ListaEstudiantes [8]= "Hugo";
    ListaEstudiantes [9]= "Roberto";
    ListaEstudiantes [10]= "Quintero";
    ListaEstudiantes [11]= "Ricardo";
    ListaEstudiantes [12]= "Jorge";
    ListaEstudiantes [13]= "Ander";
    ListaEstudiantes [14]= "Aboytes";


    cout << "Cuantos equipos quieres hacer?"<< std::endl;
    cin>> numEqui;

    for(int i=0; i < numEqui; i++) {
        int j=i;
        cout << "\nEquipo "<< i << endl;
        for (i; i <= 14; i+=numEqui) {
            cout << ListaEstudiantes[i] << endl;
        }
        i=j;
    }
    return 0;
}
