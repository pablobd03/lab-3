#include <stdio.h>

int factorial(int n) {
    int i = 1;
    while (n > 1) {
        i = i * n;
        n = n - 1; //Se elimina la declación de n en el scope
    }
    return i;
}

int main(int argc, char *argv[]) {
	int fac4 = factorial(4);
	int fac5 = factorial(5);
    	int numero;
	
	//Solicita un número entero al usuario
	printf("Ingrese un número entero: ");
	scanf("%d", &numero);

	//Se llama a la función factorial y se envía el número ingresado por el usuario como argumento
	int facn=factorial(numero);

	//Imprime el resultado
    	printf("4! = %d, 5! = %d, \nEl factorial de su número es: %d! = %d \n", fac4, fac5, numero, facn);
    return 0;
}

