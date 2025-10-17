#include <stdio.h>

int main() {
    
    int gomez[5][5]; 


    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            gomez[i][j] = 0;
            }
        }

        printf("Matriz gomez\n");
        for(int i = 0; i < 5; i++) {
            for(int j = 0; j < 5; j++) {
            printf("%d ", gomez[i][j]); 
        }
        printf("\n"); 
    }

    return 0;
}