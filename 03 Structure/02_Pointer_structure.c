#include <stdio.h>
#include <string.h>

// 1. GLOBAL STRUCTURE DEFINITION
// Think of this as a "Blueprint" for any student object we create later.
struct Student
{
    char PRN[20];
    char name[50];
    int semester;
    int year;
    float cgpa;
};

// 2. INITIALIZE FUNCTION
// We pass the address (pointer) so we can modify the original structure.
void initialize(struct Student *s)
{
    strcpy(s->PRN, "Not Assigned");
    strcpy(s->name, "New Student");
    s->semester = 1;
    s->year = 2026;
    s->cgpa = 0.0;
    printf("Student record initialized with default values.\n");
}

// 3. READ FUNCTION
// The '->' arrow operator is used to access members through a pointer.
void read(struct Student *s)
{
    printf("\n--- Enter Student Details ---\n");
    printf("Enter PRN: ");
    scanf("%s", s->PRN);

    printf("Enter Name (No spaces): ");
    scanf("%s", s->name);

    printf("Enter Semester (1-8): ");
    scanf("%d", &s->semester);

    printf("Enter Year (YYYY): ");
    scanf("%d", &s->year);

    printf("Enter CGPA: ");
    scanf("%f", &s->cgpa);
}

// 4. DISPLAY FUNCTION
// Since we are only printing, we don't strictly need a pointer,
// but using 'const' is a professional way to say "Read-Only".
void display(struct Student s)
{
    printf("\n--- Student Record ---\n");
    printf("PRN     : %s\n", s.PRN);
    printf("Name    : %s\n", s.name);
    printf("Semester: %d\n", s.semester);
    printf("Year    : %d\n", s.year);
    printf("CGPA    : %.2f\n", s.cgpa);
    printf("----------------------\n");
}

int main()
{
    struct Student myStudent;

    // Step 1: Initialize with defaults
    initialize(&myStudent);
    display(myStudent);

    // Step 2: Read data from user
    read(&myStudent);

    // Step 3: Show the updated data
    display(myStudent);

    return 0;
}