//Q140 Define a struct with enum Gender and print person's gender.
#include <stdio.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[30];
    int age;
    enum Gender gender;
};

int main() {
    struct Person p;

    
    strcpy(p.name, "Rahul");
    p.age = 22;
    p.gender = MALE;

    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);

    
    switch (p.gender) {
        case MALE:
            printf("Gender: Male\n");
            break;
        case FEMALE:
            printf("Gender: Female\n");
            break;
        case OTHER:
            printf("Gender: Other\n");
            break;
        default:
            printf("Gender: Unknown\n");
    }

    return 0;
}
