#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define SIZE 3

bool cuadradoMagico(int matrix[][SIZE]) {
	int j,i;
	int suma_ref=0;
	
	//Suma la primera línea y la toma como referencia
	for(j=0; j<SIZE; j++){
        	suma_ref+=matrix[0][j];
 	}         

	//Suma las filas
	for(i=0; i<SIZE; i++){
		int suma_fila=0;
		for(j=0; j<SIZE; j++){
			suma_fila+=matrix[i][j];
		}
		if(suma_fila!=suma_ref){
			return false; //Devuelve false si la suma en una fila es distinta a la referencia
		}

	}

	//Suma las columnas
	for(i=0; i<SIZE; i++){
        	int suma_columna=0;
                for(j=0; j<SIZE; j++){
                        suma_columna+=matrix[j][i];
            	}
		if(suma_columna!=suma_ref){
                        return false; //Devuelve false si la suma en una columna es distinta a la referencia
                }
        }

	//Primera diagonal
	int suma_diagonal_1=0;
	for(i=0; i<SIZE; i++){
                suma_diagonal_1+=matrix[i][i];
        }
	
	if(suma_diagonal_1!=suma_ref){
        	return false; //Devuelve false si la suma en la primera diagonal es distinta a la referencia
        }

	//Segunda diagonal
	int suma_diagonal_2=0;
	for(i=0; i<SIZE; i++){
		suma_diagonal_2+=matrix[i][SIZE-1-i];
        	
	}
        

        if(suma_diagonal_2!=suma_ref){
                return false; //Devuelve false si la suma en la segunda diagonal es distinta a la referencia
        }

	return true;
}

void imprimirMatriz(int matrix[][SIZE]){
	for(int i=0; i<SIZE; i++){
                for(int j=0; j<SIZE; j++){
                        printf("%d ", matrix[i][j]);
                }
		printf("\n");
        }

}

int main() {
	/*int matrix[SIZE][SIZE] = {
		{2, 7, 6},
		{9, 5, 1},
		{4, 3, 8}
	};
	*/

	int matrix[SIZE][SIZE];
	srand(time(0)); //Permite obtener una matriz al azar distinta
		for(int i=0; i<SIZE; i++){
                	for(int j=0; j<SIZE; j++){
                        	matrix[i][j] = rand() % 10;
                	}
        	}



	int cuadrado_magico = cuadradoMagico(matrix);
	printf("La matriz utilizada corresponde a: \n");
	imprimirMatriz(matrix);
	(cuadrado_magico==false) ?
	printf("La matriz no es cuadrado mágico. \n") :
	printf("La matriz es cuadrado mágico. \n");

	return 0;
}

