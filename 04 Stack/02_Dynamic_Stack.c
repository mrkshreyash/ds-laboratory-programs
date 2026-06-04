#include <stdio.h>
#include <stdlib.h>

struct DynamicStack
{
    int *items;
    int top;
    int capacity;
};

void initDynamic(struct DynamicStack *s, int size)
{
    s->capacity = size;
    s->top = -1;
    s->items = (int *)malloc(s->capacity * sizeof(int));
}

void pushDynamic(struct DynamicStack *s, int value)
{
    // If full, double the capacity!
    if (s->top == s->capacity - 1)
    {
        s->capacity *= 2;
        s->items = (int *)realloc(s->items, s->capacity * sizeof(int));
        printf("(Stack resized to %d)\n", s->capacity);
    }
    s->items[++s->top] = value;
    printf("%d pushed.\n", value);
}

void popDynamic(struct DynamicStack *s)
{
    if (s->top == -1)
    {
        printf("Stack Underflow! Nothing to delete.\n");
    }
    else
    {
        printf("Popped: %d\n", s->items[s->top]);
        s->top--;
    }
}

void display(struct DynamicStack *s)
{
    {
        if (s->top == -1)
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
    struct DynamicStack s;
    int choice, val, capacity;

    while (1)
    {
        printf("\n--- Dynamic Stack Menu ---\n");
        printf("1. Initialize the stack\n2. Push\n3. Pop\n4. Display\n5. Exit\nChoice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter stack capacity: ");
            scanf("%d", &capacity);
            initDynamic(&s, capacity);

        case 2:
            printf("Enter value: ");
            scanf("%d", &val);
            pushDynamic(&s, val);
            break;
        case 3:
            popDynamic(&s);
            break;
        case 4:
            display(&s);
            break;
        case 5:
            free(s.items);
            exit(0);
        default:
            printf("Invalid choice!\n");
        }
    }
    return 0;
}