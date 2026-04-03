/* Linked List implementation in C */
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

/* Insert a node at the beginning */
struct Node *insertFront(struct Node *head, int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    return newNode;
}

/* Display the linked list */
void display(struct Node *head) {
    struct Node *curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");
}

/* Free the linked list */
void freeList(struct Node *head) {
    struct Node *tmp;
    while (head != NULL) {
        tmp = head;
        head = head->next;
        free(tmp);
    }
}

int main() {
    struct Node *head = NULL;

    head = insertFront(head, 30);
    head = insertFront(head, 20);
    head = insertFront(head, 10);

    printf("Linked List: ");
    display(head);

    freeList(head);
    return 0;
}
