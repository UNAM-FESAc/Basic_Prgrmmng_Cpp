#include <iostream>
//using namespace std;

int main(){
    int a= -1, b= 0, c= 0;
    bool d = true;
    std::cout << "Operadores postfijos" << std::endl;
    std::cout << "a++ = " << (a++) << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "a-- = " << (a--) << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "\nOperadores prefijos" << std::endl;
    // el \n anterior es una secuencia de escape
    std::cout << "b = " << b << std::endl;
    std::cout << "++b = " << (++b) << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "--b = " << (--b) << std::endl;
    std::cout << "b = " << b << std::endl;
    //Observa bien el siguiente enunciado
    c = a++ + ++b;
    std::cout << "\nc = " << c << std::endl;
    
    std::cout << "\nOperador unario !" << std::endl;
    std::cout << !3 <<" == " << !d << std::endl;

    return 0;
}

