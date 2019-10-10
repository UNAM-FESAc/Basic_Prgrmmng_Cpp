#include <iostream>


int main(){
    int nivel =5, actual=5, bloques=1;
        for(int i=0; i< nivel; i++){
            for(int j=actual; j> 1; j--)
                std::cout << " ";
            for(int j=0; j< bloques; j++)
                std::cout << "*";
            bloques+=2;
            actual--;
            std::cout << "\n";
        }

    return 0;
}

