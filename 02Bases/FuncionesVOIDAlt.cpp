#include <iostream>

using namespace std;

void hola(int num){
    if(num < 6) return;
    cout << "Numero: " << num;
}

int main(){
    hola(5);

    return 0;
}

