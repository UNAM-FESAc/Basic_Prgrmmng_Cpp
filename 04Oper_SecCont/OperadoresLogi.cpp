#include <iostream>
//using namespace std;

int main(){
    bool a= true, b=false;
    std::cout << " a && b = " << ( a && b ) << std::endl
        << " a || b  = "<< ( a || b ) << std::endl
        //ahora usando el operador de negacion
        << " !b  = "<< ( !b ) << std::endl
        << " a && !b = " << ( a && !b ) << std::endl
        << " !a || b  = "<< ( !a || b ) << std::endl;

    return 0;
}

