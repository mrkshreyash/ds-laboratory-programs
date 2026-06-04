#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    char name[50];
};

void findStudent(struct Student list[], int size, int targetID)
{
    int low = 0, high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (list[mid].id == targetID)
        {
            printf("Student Found: %s\n", list[mid].name);
            return;
        }
        if (list[mid].id < targetID)
            low = mid + 1;
        else
            high = mid - 1;
    }
    printf("Student with ID %d not registered.\n", targetID);
}

int main()
{
    // A pre-sorted list of students
    struct Student database[] = {
        {101, "Alice"}, {105, "Bob"}, {110, "Charlie"}, {120, "David"}};

    int searchID;
    printf("Enter Student ID to look up: ");
    scanf("%d", &searchID);

    findStudent(database, 4, searchID);
    return 0;
}