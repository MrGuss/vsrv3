#include <stdio.h>
#include <stdlib.h>

int main(){
    int N;
    printf("Write N: ");
    scanf("%d", &N);

    int **ptr = (int**) calloc(N, sizeof((int*) calloc(N, sizeof(int))));

    for (int i=0; i<N; i++){
        ptr[i] = (int*) calloc(N, sizeof(int));
        for (int j=0; j<N; j++){
            ptr[i][j] = (i<<j)/3;
        }
    }

    for (int i=0; i<N; i++){
        for (int j=0; j<N; j++){
            printf("Coords i, j: %d, %d; num: %d, addr: %p\n", i, j, ptr[i][j], &ptr[i][j]);
        }
    }

    free(ptr);

    return 0;
}


