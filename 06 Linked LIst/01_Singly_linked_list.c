#include <stdio.h>
#include <stdlib.h>

// 1. Defining the Structure
struct Node
{
    int data;
    struct Node *next;
};

// 2. INSERTION FUNCTIONS

// at start: O(1) time complexity
struct Node *insertAtStart(struct Node *head, int val)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = head; // Point new node to current first node
    return newNode;       // New node is now the head
}

// at end: O(n) time complexity
void insertAtEnd(struct Node *head, int val)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;

    struct Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

// after location: Inserting after a specific value
void insertAfter(struct Node *head, int target, int val)
{
    struct Node *temp = head;
    while (temp != NULL && temp->data != target)
    {
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Target %d not found!\n", target);
        return;
    }

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = temp->next;
    temp->next = newNode;
}

// 3. DELETION FUNCTIONS

// from start
struct Node *deleteStart(struct Node *head)
{
    if (head == NULL)
        return NULL;
    struct Node *temp = head;
    head = head->next;
    free(temp);
    return head;
}

// from end
void deleteEnd(struct Node *head)
{
    if (head == NULL || head->next == NULL)
        return;

    struct Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

// after specific location (deleting the node FOLLOWING the target)
void deleteAfter(struct Node *head, int target)
{
    struct Node *temp = head;
    while (temp != NULL && temp->data != target)
    {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL)
    {
        printf("No node exists after %d to delete.\n", target);
        return;
    }

    struct Node *nodeToDelete = temp->next;
    temp->next = temp->next->next;
    free(nodeToDelete);
}

// 4. TRAVERSAL
void display(struct Node *head)
{
    struct Node *temp = head;
    printf("List: ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    // Initializing an empty list with one starting node
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = NULL;

    printf("Initial ");
    display(head);

    // Insertion tests
    head = insertAtStart(head, 5);
    insertAtEnd(head, 20);
    insertAfter(head, 10, 15); // Insert 15 after 10
    printf("After Insertions ");
    display(head);

    // Deletion tests
    deleteAfter(head, 10);    // Should delete 15
    head = deleteStart(head); // Should delete 5
    deleteEnd(head);          // Should delete 20
    printf("Final ");
    display(head);

    return 0;
}