#include <iostream>
#include <iomanip> /*libreria para modificar las impresiones en pantalla*/
using namespace std;

int main(){
    char a=42;
    int b=42;
    float c= (float) (41 + 0.9999998);
    double d=41 +0.9999998;
    cout << "char a = " << a <<endl;
    cout << "int b = " << b <<endl;
    cout << setprecision(10); /*especifica con que precision escribir numeros*/
    cout << "float c = " <<c <<endl;
    cout << "double d = " << d <<endl;

return 0;}       
