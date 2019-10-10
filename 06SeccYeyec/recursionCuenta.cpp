#include <iostream>

int cuenta_regresiva(int a){
    if(a == 0) return 1;
    std::cout << a << " ";
    cuenta_regresiva( a-1 );
}

int main(){
    int var= 10;
    cuenta_regresiva(var);
    std::cout << std::endl << "Despegue";

    return 0;
}

