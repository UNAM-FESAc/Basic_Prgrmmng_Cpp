#include <iostream>

using namespace std;

int nombre_funcion(int parametro);

int main(){
    cout<< nombre_funcion(3);

    return 0;
}

int nombre_funcion(int parametro){
    return parametro*parametro;
}
