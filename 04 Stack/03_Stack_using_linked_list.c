#include <stdio.h>
#include <stdlib.h>

// 1. Define the Node structure
struct Node
{
    int data;
    struct Node *next;
};

// 2. Global pointer to the top of the stack
struct Node *top = NULL;

// isEmpty: If top is NULL, the stack has no nodes
int isEmpty()
{
    return top == NULL;
}

// Push: Create a new node and put it at the very front
void push(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        printf("Memory full! Cannot push %d\n", value);
        return;
    }

    newNode->data = value; // Set the data
    newNode->next = top;   // Point new node to the old top
    top = newNode;         // Make this new node the current top

    printf("%d pushed to stack.\n", value);
}

// Pop: Remove the top node and move the 'top' pointer down
void pop()
{
    if (isEmpty())
    {
        printf("Stack Underflow! Nothing to pop.\n");
        return;
    }

    struct Node *temp = top; // Keep track of the node to delete
    top = top->next;         // Move top to the next node

    printf("Popped value: %d\n", temp->data);
    free(temp); // Clear the memory of the old top
}

// Display: Traverse the list from top to bottom
void display()
{
    if (isEmpty())
    {
        printf("Stack is empty.\n");
        return;
    }

    struct Node *temp = top;
    printf("Stack (Top -> Bottom): ");
    while (temp != NULL)
    {
        printf("| %d |-> ", temp->data);
        temp = temp->next;
    }
    printf("-> | NULL |\n");
}

int main()
{
    int choice, val;

    while (1)
    {
        printf("\n--- Linked List Stack Menu ---\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\nChoice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value: ");
            scanf("%d", &val);
            push(val);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice!\n");
        }
    }
    return 0;
}