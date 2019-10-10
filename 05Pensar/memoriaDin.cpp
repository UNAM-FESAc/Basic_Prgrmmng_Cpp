#include <iostream>
#include <string>

int main(){
    std::string a= "Hola";
    std::string b[2]= {","," esto"};
    std::string c[] = {" ", "es"," "};
    std::string d= "un ejemplo.";
    std::cout<< a;
    for(int i=0; i< 2; i++) std::cout << b[i];
    for( auto str: c ) std::cout << str;
    std::cout << d;

    return 0;
}

