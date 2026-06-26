#include <iostream>
#include <algorithm>
using namespace std;

bool mi_funcion_mayor(int a, int b) {
    return a > b;
}

// <A Completar>
struct mi_functor_mayor{
    bool operator()(int a, int b){
        return a>b;
    }
};


int main() {
    int numeros[] = {15, 2, 89, 44, 7, 10};
    int n = 6;

    // <A Completar>
    
    mi_functor_mayor f;
    sort(numeros, numeros + n, f);

    cout << "array ordenado functor:" << endl;
    for (int* it = numeros; it != numeros + n; it++) {
        cout << *it << " ";
    }
    cout << endl;
    
    int arr[] = {15, 2, 89, 44, 7, 10};

    bool (*ptr_func)(int, int) = &mi_funcion_mayor;
    sort(arr, arr + n, ptr_func);

    cout << "array ordenado puntero a función:" << endl;
    for (int* it = arr; it != arr + n; it++) {
        cout << *it << " ";
    }
    cout << endl;
    
    return 0;
}
