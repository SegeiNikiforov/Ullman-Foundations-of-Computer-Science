#include <stdio.h>
#include <stdlib.h>

// Exercise 2.2.9
struct STUDENT {
    int studentID;
    char *name;
    char grade;
};

void SelectionSort(struct STUDENT *[], int);

int main()
{
    int n = 5;
    struct STUDENT A[] = {{1423, "Sergei", 'B'}, {4321, "Piter", 'C'}, {4231, "Alex", 'A'}, {1231, "John", 'D'}, {2341, "Margo", 'A'}};
    struct STUDENT *ptrA[n];
    ptrA[0] = &A[0];
    ptrA[1] = &A[1];
    ptrA[2] = &A[2];
    ptrA[3] = &A[3];
    ptrA[4] = &A[4];

    SelectionSort(ptrA, n);

    printf("\nAfter sorting:\n");
   for(int i = 0; i < n; i++) {
        printf("%d %s %c\n", ptrA[i]->studentID, ptrA[i]->name, ptrA[i]->grade);
   }

   printf("\nBefor sorting\n");
   for(int i = 0; i < n; i++) {
        printf("%d %s %c\n", A[i].studentID, A[i].name, A[i].grade);
   }

    return 0;
}

void SelectionSort(struct STUDENT *ptrA[], int n) {
    int comparison = 0;
    int swaping = 0;
    int i, j, small;

    struct STUDENT *temp = NULL;
    for (i = 0; i < n - 1; i++) {
        small = i;
        for (j = i+1; j < n; j++) {
            comparison++;
            if (ptrA[j]->studentID < ptrA[small]->studentID) {
                small = j;
            }
        }

        temp = ptrA[small];
        ptrA[small] = ptrA[i];

        if (ptrA[i]->studentID != temp->studentID) {
            swaping++;
        }
        ptrA[i] = temp;
    }
    printf("\ncomparisons %d swaps %d", comparison, swaping);

}
