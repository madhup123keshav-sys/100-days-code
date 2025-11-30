//Q139 Show that enums store integers by printing assigned values.
#include <stdio.h>

enum Days {
    SUNDAY = 1,
    MONDAY,
    TUESDAY = 5,
    WEDNESDAY,
    THURSDAY,
    FRIDAY = 20,
    SATURDAY
};

int main() {
    printf("SUNDAY = %d\n", SUNDAY);
    printf("MONDAY = %d\n", MONDAY);
    printf("TUESDAY = %d\n", TUESDAY);
    printf("WEDNESDAY = %d\n", WEDNESDAY);
    printf("THURSDAY = %d\n", THURSDAY);
    printf("FRIDAY = %d\n", FRIDAY);
    printf("SATURDAY = %d\n", SATURDAY);

    return 0;
}