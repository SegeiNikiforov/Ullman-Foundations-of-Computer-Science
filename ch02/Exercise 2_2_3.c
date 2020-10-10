#include "cell.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

DefCell(char, CELL, LIST);
LIST createFromString(const char* s);
bool compare(LIST l1, LIST l2);
int main() {
    char hello1[] = "hello world";
    char hello2[] = "hello world";
    char hello3[] = "";

    LIST list1 = createFromString(hello1);
    LIST list2 = createFromString(hello2);
    LIST list3 = createFromString(hello3);

    printf("%d\n", compare(list1, list2));
    printf("%d\n", compare(list3, list1));

}

LIST createFromString(const char* s) {
    size_t len = strlen(s);
    LIST list = malloc(sizeof(struct CELL) * len);
    if (!list) {
        return 0;
    }

    int i = 0;
    LIST current = list;
    while (s[i] != '\0') {
        current->element = s[i];
        LIST const next = current + 1;
        current->next = next;
        current = next;
        i++;
    }

    current->element = '\0';
    current->next = 0;
    return list;
}

bool compare(LIST l1, LIST l2) {

    if (l1 == 0 && l2 != 0) {
        return true;
    }

    if ((l1 == 0 && l2 == 0) || (l1 != 0 && l2 == 0)) {
        return false;
    }

    if (l1->element == l2->element) {
        return compare(l1->next, l2->next);
    }

    if (l1->element < l2->element) { // returns TRUE if the first string precedes the second in lexicographic order.
        return true;
    }

    return false;
}
