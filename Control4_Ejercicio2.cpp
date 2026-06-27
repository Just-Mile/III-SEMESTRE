#include <iostream>
#include <memory>

using namespace std;

int main()
{
    int filas = 4; int columnas = 4;
    int numero = 1;
    
    /*ORIGINAL
    int** B = new int* [filas];
    int numero = 1;
    for(int** p = B; p<B+filas;p++){
        *p = new int[filas];
        for(int*q = *p; q<*p + columnas; q++){
            *q = numero;
            numero++;
        }
    }
    */
    
    //A completar (Smart Pointers)
    unique_ptr<unique_ptr<int[]>[]> A = make_unique<unique_ptr<int[]>[]>(filas);
    for(unique_ptr<int[]>* p = A.get(); p!= A.get() + filas; p++){
        *p = make_unique<int[]>(columnas);
        for(int* q = (*p).get(); q!= (*p).get() + columnas; q++){
            *q = numero++;
        }
    }
    
    
    for(unique_ptr<int[]>* p = A.get(); p!= A.get() + filas; p++){
        for(int* q = (*p).get(); q!= (*p).get() + columnas; q++){
            cout<<*q<<"\t";
        }
        cout<<endl;
    }
    
    /*
    for(int** p = B; p<B+filas; p++){
        for(int* q = *p; q<*p + columnas; q++){
            cout<<*q<<"\t";
        }
        cout<<"\n";
    }
    
    for(int** p = B; p<B+filas; p++){
        delete[] *p;
    }
    delete[] B;
    */
    
    return 0;
}
