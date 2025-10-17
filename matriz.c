#include <stdio.h>

int main() {
    int filas, columnas;

    
    printf("Ingrese el numero de filas: ");
    scanf("%d", &filas);
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &columnas);

   
    int gomez[filas][columnas];

    
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            if(i == j) {
                gomez[i][j] = 1; 
            } else {
                gomez[i][j] = 0;
            }
        }
    }

    
    printf("\nMatriz gomez:\n");
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            printf("%d ", gomez[i][j]);
        }
        printf("\n");
    }

    return 0;
}