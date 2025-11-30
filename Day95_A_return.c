//Q145 Return a structure containing top student's details from a function.#include <stdio.h>

struct Student {
    char name[30];
    int roll_no;
    float marks;
};

struct Student getTopper(struct Student s[], int n) {
    int i, topper = 0;
    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topper].marks)
            topper = i;
    }
    return s[topper];
}

int main() {
    struct Student s[5], top;
    int i;

    for (i = 0; i < 5; i++) {
        printf("\nEnter details of Student %d\n", i + 1);
        printf("Enter name: ");
        scanf(" %[^\n]", s[i].name);
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    top = getTopper(s, 5);

    printf("\n--- Top Student ---\n");
    printf("Name      : %s\n", top.name);
    printf("Roll No   : %d\n", top.roll_no);
    printf("Marks     : %.2f\n", top.marks);

    return 0;
}
