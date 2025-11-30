//Q146 Create Employee structure with nested Date structure for joining date and print details.
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[30];
    int id;
    float salary;
    struct Date joining;
};

int main() {
    struct Employee e;

    printf("Enter employee name: ");
    scanf("%[^\n]", e.name);

    printf("Enter employee ID: ");
    scanf("%d", &e.id);

    printf("Enter salary: ");
    scanf("%f", &e.salary);

    printf("Enter joining day: ");
    scanf("%d", &e.joining.day);

    printf("Enter joining month: ");
    scanf("%d", &e.joining.month);

    printf("Enter joining year: ");
    scanf("%d", &e.joining.year);

    printf("\n--- Employee Details ---\n");
    printf("Name           : %s\n", e.name);
    printf("ID             : %d\n", e.id);
    printf("Salary         : %.2f\n", e.salary);
    printf("Joining Date   : %02d-%02d-%d\n", e.joining.day, e.joining.month, e.joining.year);

    return 0;
}