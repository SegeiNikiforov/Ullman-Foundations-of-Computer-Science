#include <stdio.h>
#include <stdlib.h>

#define MAX 100
int getEven(int [], int);
int main() {
    int n;
    int A[MAX];

    for (n = 0; n < MAX && scanf("%d", &A[n]) != EOF; n++)
        ;

    printf("\nEven elements of array:\n");
    getEven(A, n);
    return 0;
}

int getEven(int A[], int n) {
    // Prints even elements
    if (n < 0) {
        return 0;
    }

    if (A[n]%2 == 0 && A[n] != '\0') {
        printf("%d\n", A[n]);
    }
    return getEven(A, n - 1) + A[n - 1];
}
