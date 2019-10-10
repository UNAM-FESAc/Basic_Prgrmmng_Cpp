#include <iostream>

int main(){
    int calif;
    //calif=0;
    std::cin >> calif;
    if(calif >90) std::cout <<"A";
    else if(calif >=80) std::cout <<"B";
    else if(calif >=70) std::cout <<"C";
    else if(calif >=60) std::cout <<"D";
    else std::cout <<"F";

    return 0;
}

