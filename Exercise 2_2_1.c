#include <stdio.h>
#include <stdlib.h>

#define MAX 100
void SelectionSort(int [], int);
void displayArr(int [], int);
int main() {
    int n;
    int A[MAX];
//    Answer is:    
//    int n = 5;
//    int A[] = {6, 8, 14, 17, 23}; has 10 comparisons and 0 swaps
//    int A[] = {17, 23, 14, 6, 8}; has 10 comparisons and 2 swaps
//    int A[] = {23, 17, 14, 8, 6}; has 10 comparisons and 2 swaps

    for (n = 0; n < MAX && scanf("%d", &A[n]) != EOF; n++);

    displayArr(A, n);
    SelectionSort(A, n);

    printf("\n");
    displayArr(A, n);

    return 0;
}

void SelectionSort(int A[], int n) {
    int comparison = 0;
    int swaping = 0;
    int i, j, small, temp;
    for (i = 0; i < n - 1; i++) {
        small = i;
        for (j = i+1; j < n; j++) {
            comparison++;
            if (A[j] < A[small]) {
                small = j;
            }
        }

        temp = A[small];
        if (small == i) {
            continue;
        }
        swaping++;
        
        A[small] = A[i];
        A[i] = temp;
    }
    printf("\ncomparison %d swaps %d", comparison, swaping);
}

void displayArr(int A[], int n) {
    for(int i=0; i<n; i++) {
        printf("%d ", A[i]);
    }
}
