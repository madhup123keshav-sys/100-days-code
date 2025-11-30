//Q149 Use malloc() to allocate structure memory dynamically and print details.
#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[30];
    int id;
    float salary;
};

int main() {
    struct Employee *e = (struct Employee*)malloc(sizeof(struct Employee));

    printf("Enter name: ");
    scanf("%[^\n]", e->name);
    printf("Enter ID: ");
    scanf("%d", &e->id);
    printf("Enter salary: ");
    scanf("%f", &e->salary);

    printf("\n--- Employee Details ---\n");
    printf("Name   : %s\n", e->name);
    printf("ID     : %d\n", e->id);
    printf("Salary : %.2f\n", e->salary);

    free(e);
    return 0;
}
