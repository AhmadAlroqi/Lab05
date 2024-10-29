#include <stdio.h>

void printArr(void* arr, int elementSize) {
    printf("Here is my Func Print of Array\n");
    for (int i = 0; i < 4; i++) {
        printf("%p\n", (char*)arr + i * elementSize);
    }
}

int main() {
    char CharArr[4];
    short ShortArr[4];
    int IntArr[4];
    double Darr[4];

    printf("Integer Array\n");
    printArr(IntArr, sizeof(int));

    printf("Character Array\n");
    printArr(CharArr, sizeof(char));

    printf("Short Array\n");
    printArr(ShortArr, sizeof(short));

    printf("Double Array\n");
    printArr(Darr, sizeof(double));

    return 0;
}
