#include <stdio.h>
#define max 100

void printArray(int col, int row);
void initArray(int col, int row);

int matrix[max][max];

int main(){
    int col = 3, row = 4;

    initArray(col, row);
    printArray(col, row);

    return 0;
}

void initArray(int col, int row){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printArray(int col, int row){
    printf("\n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

