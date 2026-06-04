#include <stdio.h>
#define MAX 5

struct Queue
{
    int items[MAX];
    int front, rear;
};

void init(struct Queue *q)
{
    q->front = -1;
    q->rear = -1;
}

int isFull(struct Queue *q)
{
    return q->rear == MAX - 1;
}

int isEmpty(struct Queue *q)
{
    return q->front == -1 || q->front > q->rear;
}

void enqueue(struct Queue *q, int value)
{
    if (isFull(q))
    {
        printf("Queue is full!\n");
    }
    else
    {
        if (q->front == -1)
            q->front = 0; // First element being added
        q->rear++;
        q->items[q->rear] = value;
        printf("Inserted %d\n", value);
    }
}

void dequeue(struct Queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty!\n");
    }
    else
    {
        printf("Removed: %d\n", q->items[q->front]);
        q->front++;
    }
}

void display(struct Queue *q)
{
    if (isEmpty(q))
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
    struct Queue q;
    init(&q);
    int choice, val;

    while (1)
    {
        printf("\n--- Static Queue Menu ---\n");
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nChoice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value: ");
            scanf("%d", &val);
            enqueue(&q, val);
            break;
        case 2:
            dequeue(&q);
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