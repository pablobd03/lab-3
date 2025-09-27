#include <stdio.h>

int factorial(int n) {
    int i = 1;
    while (n > 1) {
        i = i * n;
        n = n - 1; //Se elimina la declación de n en el scope
    }
    return i;
}

int main (int argc, char *argv[]) {
	int fac4 = factorial(4);
	int fac5 = factorial(5);
    	int numero;
	printf("Ingrese un número: ");
	scanf("%d", &numero);
	int facn=factorial(numero);
    	printf("4! = %d, 5! = %d \nEl factorial del número ingresado corresponde a: %d! = %d \n", fac4, fac5, numero, facn);
    return 0;
}
