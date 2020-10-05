#include <stdio.h>
#include <stdlib.h>

#define MAX 100
int getSum(int [], int);
int main() {
    int n;
    int A[MAX];

    for (n = 0; n < MAX && scanf("%d", &A[n]) != EOF; n++)
        ;

    printf("\nThe sum of array: %d\n", getSum(A, n));
    return 0;
}

int getSum(int A[], int n) {
    if (n <= 0) {
        return 0;
    }

    return getSum(A, n - 1) + A[n - 1];
}
