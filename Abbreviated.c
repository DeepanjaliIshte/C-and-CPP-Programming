#include <stdio.h>
#include <string.h>

int main() {
    char first_name[20], middle_name[20], last_name[20];

    printf("Enter First Name: ");
    scanf("%s", first_name);

    printf("Enter Middle Name: ");
    scanf("%s", middle_name);

    printf("Enter Last Name: ");
    scanf("%s", last_name);

    printf("Abbreviated Name: %c. %c. %s\n", first_name[0], middle_name[0], last_name);

    return 0;
}

