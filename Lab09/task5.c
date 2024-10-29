#include <stdio.h>

void mulit(int rows, int colus, int matrix[rows][colus], int vector[colus], int res[rows]) {
    for (int i = 0; i < rows; i++) {
        res[i] = 0;  
        for (int j = 0; j < colus; j++) {
            res[i] += matrix[i][j] * vector[j];
        }
    }
}

int main() {
    int rows, colus;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &colus);

    int matrix[rows][colus];
    int vector[colus];
    int res[rows];

    printf("Enter elements of the Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colus; j++) {
            printf("Enter element A[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Enter elements of the Vector:\n");
    for (int i = 0; i < colus; i++) {
        printf("Enter element x[%d]: ", i);
        scanf("%d", &vector[i]);
    }

    mulit(rows, colus, matrix, vector, res);

    printf("Resulting vector:\n");
    for (int i = 0; i < rows; i++) {
        printf("%d\n", res[i]);
    }

    return 0;
}

