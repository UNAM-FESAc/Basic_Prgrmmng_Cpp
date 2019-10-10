#include <iostream>

int centro(int a){
    std::cout << a << " ";
    if(a == 0) return 1;
    
    centro( a-1 );
    std::cout << a << " ";
}

int main(){
    int var= 9;
    
    centro(var);
    
    std::cout << std::endl;
    for(int i = 0; i <= var-1 ; i++){
        std::cout << "  ";
    }
    std::cout << "^";

    return 0;
}

