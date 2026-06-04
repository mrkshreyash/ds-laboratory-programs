#include <stdio.h>
#include <stdlib.h>

// 1. The Structure of a Single Node
struct Node
{
    int data;
    struct Node *next;
};

// 2. The Structure to manage the Queue pointers
struct Queue
{
    struct Node *front;
    struct Node *rear;
};

// Function to create an empty queue
void initializeQueue(struct Queue *q)
{
    q->front = NULL;
    q->rear = NULL;
}

// Function to check if the queue is empty
int isEmpty(struct Queue *q)
{
    return (q->front == NULL);
}

// ENQUEUE: Adding an element to the back
void enqueue(struct Queue *q, int value)
{
    // Create a new node in memory
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        printf("Out of memory! Cannot add %d\n", value);
        return;
    }

    newNode->data = value;
    newNode->next = NULL;

    // If the queue is empty, the new node is both front and rear
    if (q->rear == NULL)
    {
        q->front = q->rear = newNode;
        printf("Inserted %d\n", value);
        return;
    }

    // Add the new node at the end of the queue and update 'rear'
    q->rear->next = newNode;
    q->rear = newNode;
    printf("Inserted %d\n", value);
}

// DEQUEUE: Removing an element from the front
void dequeue(struct Queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue Underflow! Nothing to remove.\n");
        return;
    }

    // Temporary pointer to hold the node we are about to delete
    struct Node *temp = q->front;

    printf("Removed: %d\n", temp->data);

    // Move front to the next node
    q->front = q->front->next;

    // If front becomes NULL, then the queue is empty, so set rear to NULL too
    if (q->front == NULL)
    {
        q->rear = NULL;
    }

    // Free the memory of the removed node
    free(temp);
}

// DISPLAY: Printing the queue from front to rear
void display(struct Queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty.\n");
        return;
    }

    struct Node *temp = q->front;
    printf("Queue Status: ");
    while (temp != NULL)
    {
        printf("[%d] -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    struct Queue myQueue;
    initializeQueue(&myQueue);

    int choice, val;

    while (1)
    {
        printf("\n--- Dynamic Queue Menu ---\n");
        printf("1. Enqueue (Add)\n2. Dequeue (Remove)\n3. Display\n4. Exit\nChoice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value to add: ");
            scanf("%d", &val);
            enqueue(&myQueue, val);
            break;
        case 2:
            dequeue(&myQueue);
            break;
        case 3:
            display(&myQueue);
            break;
        case 4:
            // Clean up memory before exiting
            while (!isEmpty(&myQueue))
            {
                dequeue(&myQueue);
            }
            exit(0);
        default:
            printf("Invalid option! Please try again.\n");
        }
    }

    return 0;
}