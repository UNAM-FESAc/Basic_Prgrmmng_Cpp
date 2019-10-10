#include <iostream>
using namespace std;

int funcion_a(int a){ //de
    return a*a;
}
int funcion_b(int b); /*de*/

int main(){
    int a; /*de*/
    a = 3;
    int b = 4;
    
    cout<< funcion_a(b) << endl;
    cout<< funcion_b(a);

    return 0;
}

int funcion_b(int b){ return b+b; }//de
