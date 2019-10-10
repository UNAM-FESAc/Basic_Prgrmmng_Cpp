#include <iostream>
//using namespace std;

void imprimir_binarios(size_t tamanio, void* valor);

int main(){
    char a=5, b=13, c;
    std::cout << " a = " ;
    imprimir_binarios(sizeof a, &a);
    std::cout << " b = " ;
    imprimir_binarios(sizeof b, &b);
    std::cout << " a & b = " << (a&b) << " = ";
    c = a&b;
    imprimir_binarios(sizeof c, &c );
    std::cout << " a ^ b = " << (a^b) << " = ";
    c = a^b;
    imprimir_binarios(sizeof c, &c );
    std::cout << " a | b = " << (a|b) << " = ";
    c = a|b;
    imprimir_binarios(sizeof c, &c );
    std::cout << " ~a = " << ~a << " = ";
    c = ~a;
    imprimir_binarios(sizeof c, &c );

    return 0;
}

void imprimir_binarios(size_t tamanio, void* valor) {
	unsigned char *allbytes = (unsigned char*) valor;//posicion en bytes(referencia a direccion de memoria del valor)
	unsigned char bit;//unsigned concentrara todo a solo los bits sin importar el signo, y por tamanio de 1 byte
	
	for(int i= tamanio-1;i>=0;i--){//for para todos los bytes
		for(int j=7;j>=0;j--){//for para cada octeto
			bit = (allbytes[i]>>j) & 1;//movemos el byte para comparar esa posicion con 1
			std::cout << (bit == 0 ? 0 : 1);
		}
	    std::cout << " ";
	}
    std::cout << std::endl;
}

