#include <stdio.h>
#include <stdlib.h>

#define MAX 5 // Fixed capacity

struct Stack
{
    int items[MAX];
    int top;
};

// Initialize top to -1 (indicates stack is empty)
void init(struct Stack *s)
{
    s->top = -1;
}

int isFull(struct Stack *s)
{
    return s->top == MAX - 1;
}

int isEmpty(struct Stack *s)
{
    return s->top == -1;
}

void push(struct Stack *s, int value)
{
    if (isFull(s))
    {
        printf("Stack Overflow! Cannot add %d\n", value);
    }
    else
    {
        s->top++;
        s->items[s->top] = value;
        printf("%d pushed to stack.\n", value);
    }
}

void pop(struct Stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack Underflow! Nothing to delete.\n");
    }
    else
    {
        printf("Popped: %d\n", s->items[s->top]);
        s->top--;
    }
}

void display(struct Stack *s)
{
    {
        if (isEmpty(s))
        {
            printf("Stack is empty.\n");
        }
        else
        {
            printf("\nCurrent Stack (Top to Bottom):\n");
            for (int i = s->top; i >= 0; i--)
            {
                printf("| %d |\n", s->items[i]);
            }
            printf("-----\n");
        }
    }
}


int main()
{
    struct Stack s;
    init(&s);
    int choice, val;

    while (1)
    {
        printf("\n--- Static Stack Menu ---\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\nChoice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value: ");
            scanf("%d", &val);
            push(&s, val);
            break;
        case 2:
            pop(&s);
            break;
        case 3:
            display(&s);
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice!\n");
        }
    }
    return 0;
}