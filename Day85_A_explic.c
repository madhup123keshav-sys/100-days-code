//Q135 (Enum)Assign explicit values starting from 10 and print them.
#include <stdio.h>

enum Numbers {
    FIRST = 10,
    SECOND = 11,
    THIRD = 12
};

int main() {

    printf("FIRST = %d\n", FIRST);
    printf("SECOND = %d\n", SECOND);
    printf("THIRD = %d\n", THIRD);

    return 0;
}