#include <iostream>

int main(){
    int a=24, b=54;
    int menor = (a<b ? a : b);
    int mcd=1;
    
    for(int i=2; i<= menor; i++)
        if(a%i == 0 && b%i == 0)
            mcd =i;
    
   std::cout << mcd;

    return 0;
}

