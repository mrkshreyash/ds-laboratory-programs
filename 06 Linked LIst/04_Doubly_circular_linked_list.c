#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next, *prev;
};

struct Node *insertAtEnd(struct Node *head, int val)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = val;

    if (head == NULL)
    {
        newNode->next = newNode->prev = newNode;
        return newNode;
    }

    struct Node *tail = head->prev; // In a circular DLL, head->prev IS the tail!

    newNode->next = head;
    newNode->prev = tail;
    tail->next = newNode;
    head->prev = newNode;

    return head;
}

void displayBothWays(struct Node *head)
{
    if (head == NULL)
        return;

    struct Node *temp = head;
    printf("Forward:  ");
    do
    {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(Head)\n");

    temp = head->prev; // Start at the tail
    printf("Backward: ");
    do
    {
        printf("%d <-> ", temp->data);
        temp = temp->prev;
    } while (temp != head->prev);
    printf("(Tail)\n");
}

int main()
{
    struct Node *head = NULL;
    head = insertAtEnd(head, 1);
    head = insertAtEnd(head, 2);
    head = insertAtEnd(head, 3);
    displayBothWays(head);
    return 0;
}