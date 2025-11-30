//Q138 Print all enum names and integer values using a loop.
#include <stdio.h>

enum UserRole {
    ADMIN,
    USER,
    GUEST,
    SUPERADMIN,
    MODERATOR
};

int main() {
    enum UserRole role;

    
    const char *roleNames[] = {"ADMIN", "USER", "GUEST", "SUPERADMIN", "MODERATOR"};

    
    int totalRoles = sizeof(roleNames) / sizeof(roleNames[0]);

    printf("Enum names and their integer values:\n\n");

    for (role = ADMIN; role < totalRoles; role++) {
        printf("%s = %d\n", roleNames[role], role);
    }

    return 0;
}