#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Function to insert at the end of a Circular Singly Linked List
struct Node *insertEnd(struct Node *head, int val)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = val;

    if (head == NULL)
    {
        newNode->next = newNode; // Points to itself
        return newNode;
    }

    struct Node *temp = head;
    // Traverse until we find the node that points back to head
    while (temp->next != head)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->next = head; // Complete the circle
    return head;
}

void displayCircular(struct Node *head)
{
    if (head == NULL)
        return;
    struct Node *temp = head;
    printf("Circular List: ");
    do
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head); // Stop when we get back to the start
    printf("(Back to Head)\n");
}

int main()
{
    struct Node *head = NULL;
    head = insertEnd(head, 10);
    head = insertEnd(head, 20);
    head = insertEnd(head, 30);
    displayCircular(head);
    return 0;
}