#include <iostream>

int main(){
    int num=4,respuesta=1;
        for(int i=2; i<= num; i++)
            respuesta *= i;
    std::cout << num << "! = "<< respuesta;

    return 0;
}

