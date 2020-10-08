#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct _node {
    void *data;
    struct _node *next;
} Node;

typedef struct _linkedList {
    Node *head;
    Node *tail;
    Node *current;
} LinkedList;

void initializeList(LinkedList *list);
void addTail(LinkedList *list, void* data);
bool compare(Node *, Node *);
int main() {
    char *s_1 = "bat";
    char *s_2 = "batter";

    LinkedList linkedList_1;
    LinkedList linkedList_2;

    initializeList(&linkedList_1);
    initializeList(&linkedList_2);

    for(int i = 0; i < strlen(s_1); i++) {
        addTail(&linkedList_1, &s_1[i]);
    }

    for(int i = 0; i < strlen(s_2); i++) {
        addTail(&linkedList_2, &s_2[i]);
    }

    printf("%d\n", compare(linkedList_1.head, linkedList_2.head));

    return 0;
}

void initializeList(LinkedList *list) {
    list->head = NULL;
    list->tail = NULL;
    list->current = NULL;
}

void addTail(LinkedList *list, void* data) {
    Node *node = (Node*) malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    if (list->head == NULL) {
        list->head = node;
    } else {
        list->tail->next = node;
    }
    list->tail = node;
}

bool compare(Node *current_1, Node *current_2) {
    if (current_1 == NULL) {
        return false;
    }
    else if ((current_1->data - current_2->data) < 0) {
        return true;
    }
    else {
        current_1 = current_1->next;
        current_2 = current_2->next;
        return compare(current_1, current_2);
    }
}
