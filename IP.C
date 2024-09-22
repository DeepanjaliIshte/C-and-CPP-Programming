#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int octet1, octet2, octet3, octet4;

    srand(time(0));

    octet1 = rand() % 256;
    octet2 = rand() % 256;
    octet3 = rand() % 256;
    octet4 = rand() % 256;

    printf("Generated IP Address: %d.%d.%d.%d\n", octet1, octet2, octet3, octet4);

    return 0;
}

