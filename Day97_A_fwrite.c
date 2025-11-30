//Q147 Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>

struct Employee {
    char name[30];
    int id;
    float salary;
};

int main() {
    struct Employee e1, e2;
    FILE *fp;

    printf("Enter name: ");
    scanf("%[^\n]", e1.name);
    printf("Enter ID: ");
    scanf("%d", &e1.id);
    printf("Enter salary: ");
    scanf("%f", &e1.salary);

    fp = fopen("employee.bin", "wb");
    fwrite(&e1, sizeof(e1), 1, fp);
    fclose(fp);

    fp = fopen("employee.bin", "rb");
    fread(&e2, sizeof(e2), 1, fp);
    fclose(fp);

    printf("\n--- Employee Details from File ---\n");
    printf("Name   : %s\n", e2.name);
    printf("ID     : %d\n", e2.id);
    printf("Salary : %.2f\n", e2.salary);

    return 0;
}