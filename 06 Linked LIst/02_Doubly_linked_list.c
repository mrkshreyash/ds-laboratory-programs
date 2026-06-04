#include <stdio.h>
#include <stdlib.h>

// 1. Defining the Doubly Linked Node
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

// 2. INSERTION FUNCTIONS

// Insert at the very front
struct Node *insertAtStart(struct Node *head, int val)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->prev = NULL;
    newNode->next = head;

    if (head != NULL)
    {
        head->prev = newNode;
    }

    return newNode; // New node becomes the head
}

// Insert at the very end
void insertAtEnd(struct Node *head, int val)
{
    if (head == NULL)
        return;

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;

    struct Node *temp = head;
    // Traverse to the last node
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}

// 3. DELETION FUNCTIONS

// Delete the first node
struct Node *deleteStart(struct Node *head)
{
    if (head == NULL)
        return NULL;

    struct Node *temp = head;
    head = head->next;

    if (head != NULL)
    {
        head->prev = NULL;
    }

    free(temp);
    return head;
}

// 4. DISPLAY FUNCTIONS (The "Two-Way" Benefit)
void displayForward(struct Node *head)
{
    struct Node *temp = head;
    printf("Forward:  ");
    while (temp != NULL)
    {
        printf("%d <-> ", temp->data);
        if (temp->next == NULL)
            break; // Keep temp at the last node for reverse test
        temp = temp->next;
    }
    printf("NULL\n");
}

void displayBackward(struct Node *tail)
{
    // Note: You need a pointer to the end of the list to do this easily
    struct Node *temp = tail;
    printf("Backward: ");
    while (temp != NULL)
    {
        printf("%d <-> ", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");
}

int main()
{
    struct Node *head = NULL;

    // Build the list
    head = insertAtStart(head, 10); // [10]
    head = insertAtStart(head, 5);  // [5] <-> [10]
    insertAtEnd(head, 20);          // [5] <-> [10] <-> [20]

    displayForward(head);

    // To demonstrate backward traversal, let's find the tail first
    struct Node *tail = head;
    while (tail->next != NULL)
        tail = tail->next;

    displayBackward(tail);

    // Delete and show
    printf("\nDeleting head...\n");
    head = deleteStart(head);
    displayForward(head);

    return 0;
}