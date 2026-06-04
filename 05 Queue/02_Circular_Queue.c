#include <stdio.h>
#define MAX 5

struct CircularQueue
{
    int items[MAX];
    int front, rear;
};

void initCQ(struct CircularQueue *q)
{
    q->front = -1;
    q->rear = -1;
}

int isFullCQ(struct CircularQueue *q)
{
    // Full if rear is right behind front
    return (q->rear + 1) % MAX == q->front;
}

int isEmptyCQ(struct CircularQueue *q)
{
    return q->front == -1;
}

void enqueueCQ(struct CircularQueue *q, int value)
{
    if (isFullCQ(q))
    {
        printf("Queue is full!\n");
    }
    else
    {
        if (q->front == -1)
            q->front = 0;
        q->rear = (q->rear + 1) % MAX; // Wrap around using modulo
        q->items[q->rear] = value;
        printf("Inserted %d\n", value);
    }
}

void dequeueCQ(struct CircularQueue *q)
{
    if (isEmptyCQ(q))
    {
        printf("Queue is empty!\n");
    }
    else
    {
        printf("Removed: %d\n", q->items[q->front]);
        if (q->front == q->rear)
        { // Last element removed
            q->front = q->rear = -1;
        }
        else
        {
            q->front = (q->front + 1) % MAX; // Wrap around
        }
    }
}

void display(struct CircularQueue *q)
{
    if (isEmptyCQ(q))
    {
        printf("Queue is empty.\n");
    }
    else
    {
        for (int i = q->front; i <= q->rear; i++)
            printf("| %d ", q->items[i]);
        printf("|");
        printf("\n");
    }
}

int main()
{
    struct CircularQueue q;
    initCQ(&q);
    int choice, val;

    while (1)
    {
        printf("\n--- Circular Queue Menu ---\n");
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nChoice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value: ");
            scanf("%d", &val);
            enqueueCQ(&q, val);
            break;
        case 2:
            dequeueCQ(&q);
            break;
        case 3:
            display(&q);
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice!\n");
        }
    }
    return 0;
}