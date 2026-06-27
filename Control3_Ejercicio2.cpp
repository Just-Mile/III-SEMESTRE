#include <iostream>
#include <memory>
using namespace std;


struct esMayorQueN{
    int n;
    esMayorQueN(int valor) : n(valor) {}
    bool operator()(int val){
        return val>n;
    }
};


void find_match(unique_ptr<int[]>& arreglo, esMayorQueN functor) {
    for(int* p = arreglo.get(); p != arreglo.get() + 5; p++){
        cout<<*p << " ";
    }
    cout<<endl;
    
    for(int* p = arreglo.get(); p != arreglo.get() + 5; p++){
        if(functor(*p)) {
            cout<<*p<< ", ";
        }
    }
    cout << endl;
    
}

int main() {
    int arreglo[] = {2, 4, 6, 8, 10};
    
    unique_ptr<int[]> arr(new int[]{2, 4, 6, 8, 10});
    
    int n = 7;

    esMayorQueN functor(n);
    
    find_match(arr, functor);
    

    return 0;
}
