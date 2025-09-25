#include <stdio.h>
#define SIZE 5

int findLargestLine(int matrix[][SIZE]) {
    // Su implementacion
}

int main() {
    int matrix[SIZE][SIZE] = {
        {2, 7, 6},
        {9, 5, 1},
        {4, 3, 8}
    };

    int largestLine = findLargestLine(matrix);
    printf("El tamano de la secuencia de 1s mas grande es: %d\n", largestLine);

    return 0;
}

