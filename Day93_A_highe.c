   //Q143 Find and print the student with the highest marks.
#include <stdio.h>

struct Student {
    char name[30];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    int i, topperIndex = 0;


    for (i = 0; i < 5; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    
    for (i = 1; i < 5; i++) {
        if (s[i].marks > s[topperIndex].marks) {
            topperIndex = i;
        }
    }

    
    printf("\n\n----- Student with Highest Marks -----\n");
    printf("Name      : %s\n", s[topperIndex].name);
    printf("Roll No   : %d\n", s[topperIndex].roll_no);
    printf("Marks     : %.2f\n", s[topperIndex].marks);

    return 0;
}