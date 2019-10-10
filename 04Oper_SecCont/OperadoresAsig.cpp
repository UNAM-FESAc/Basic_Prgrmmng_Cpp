#include <iostream>
//using namespace std;

int main(){
    int a=5, b=-13;
    a += 1;
    std::cout << " a = " << a <<std::endl;
    a -= b;
    std::cout << " a = " << a <<std::endl;
    a *= b;
    std::cout << " a = " << a <<std::endl;
    a /= b;
    std::cout << " a = " << a <<std::endl;
    a %= b;
    std::cout << " a = " << a <<std::endl;
    a &= b;
    std::cout << " a = " << a <<std::endl;
    a ^= b;
    std::cout << " a = " << a <<std::endl;
    a |= b;
    std::cout << " a = " << a <<std::endl;
    
    return 0;
}
