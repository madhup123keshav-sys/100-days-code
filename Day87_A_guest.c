//Q137 Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>

enum UserRole {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum UserRole role;

    
    role = ADMIN;

    switch (role) {
        case ADMIN:
            printf("Welcome ADMIN! You have full system access.\n");
            break;
        case USER:
            printf("Welcome USER! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome GUEST! You have view-only access.\n");
            break;
        default:
            printf("Invalid role.\n");
    }

    return 0;
}