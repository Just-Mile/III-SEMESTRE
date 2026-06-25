#include <iostream>
using namespace std;

const int FILAS = 8;
const int COLS = 8;

void alfilSuperiorIzquierdo(int* pieza, int (*tablero)[COLS]) {
    int* destino = pieza - COLS - 1;
    cout<< *destino<<endl;
}

void alfilSuperiorDerecho(int* pieza, int (*tablero)[COLS]) {
    int* destino = pieza - COLS + 1;
    cout<< *destino<<endl;
}

void alfilInferiorIzquierdo(int* pieza, int (*tablero)[COLS]) {
    int* destino = pieza + COLS - 1;
    cout<< *destino<<endl;
}

void alfilInferiorDerecho(int* pieza, int (*tablero)[COLS]) {
    int* destino = pieza + COLS + 1;
    cout<< *destino<<endl;
}

int main()
{
    int tablero[FILAS][COLS] = {
        { 1,  2,  3,  4,  5,  6,  7,  8},
        { 9, 10, 11, 12, 13, 14, 15, 16},
        {17, 18, 19, 20, 21, 22, 23, 24},
        {25, 26, 27, 28, 29, 30, 31, 32},
        {33, 34, 35, 36, 37, 38, 39, 40},
        {41, 42, 43, 44, 45, 46, 47, 48},
        {49, 50, 51, 52, 53, 54, 55, 56},
        {57, 58, 59, 60, 61, 62, 63, 64}
    };
    
    int* pieza = *(tablero + 3) + 3;
    
    void (*funciones[4])(int*, int (*)[COLS]) = {
        alfilSuperiorIzquierdo,
        alfilSuperiorDerecho,
        alfilInferiorIzquierdo,
        alfilInferiorDerecho
    }
    
    for(int i = 0; i<4; i++){
        funciones[i](pieza, tablero);
    }
    
    return 0;
}
