#include <stdio.h>
#include <stdlib.h>

// Exercise 2.2.6
struct STUDENT {
    int studentID;
    char *name;
    char grade;
};

void SelectionSort(struct STUDENT [], int);

int main()
{
    struct STUDENT A[] = {{1423, "Sergei", 'B'}, {4321, "Piter", 'C'}, {4231, "Alex", 'A'}, {1231, "John", 'D'}, {2341, "Margo", 'A'}};
    SelectionSort(A, 5);

    printf("\nAfter sorting:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d %s %c\n", A[i].studentID, A[i].name, A[i].grade);
    }
    return 0;
}

void SelectionSort(struct STUDENT A[], int n) {
    int comparison = 0;
    int swaping = 0;
    int i, j, small;
    struct STUDENT temp;
    for (i = 0; i < n - 1; i++) {
        small = i;
        for (j = i+1; j < n; j++) {
            comparison++;
            if (A[j].studentID < A[small].studentID) {
                small = j;
            }
        }

        temp = A[small];
        A[small] = A[i];

        if (A[i].studentID != temp.studentID) {
            swaping++;
        }
        A[i] = temp;
    }
    printf("\ncomparisons %d swaps %d", comparison, swaping);
}
