//Q148 Take two structs as input and check if they are identical.
#include <stdio.h>
#include <string.h>

struct Student {
    char name[30];
    int roll_no;
    float marks;
};

int main() {
    struct Student s1, s2;

    printf("Enter details of Student 1\n");
    printf("Enter name: ");
    scanf("%[^\n]", s1.name);
    printf("Enter roll number: ");
    scanf("%d", &s1.roll_no);
    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    getchar();

    printf("\nEnter details of Student 2\n");
    printf("Enter name: ");
    scanf("%[^\n]", s2.name);
    printf("Enter roll number: ");
    scanf("%d", &s2.roll_no);
    printf("Enter marks: ");
    scanf("%f", &s2.marks);

    if (strcmp(s1.name, s2.name) == 0 && s1.roll_no == s2.roll_no && s1.marks == s2.marks)
        printf("\nBoth structures are identical\n");
    else
        printf("\nStructures are not identical\n");

    return 0;
}