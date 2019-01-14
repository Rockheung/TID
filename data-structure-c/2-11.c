/*
 */
#include <stdio.h>

int main() {

    char *ptrArray[2];
    char **ptrptr;
    int i;

    ptrArray[0] = "Korea";
    ptrArray[1] = "Seoul";

    ptrptr = ptrArray;
    printf("\n ptrArray[0] addr: %u", &ptrArray[0]);
    printf("\n ptrArray[0] has: %u", ptrArray[0]);
    printf("\n ptrArray[0] val: %c", *ptrArray[0]);
    printf("\n ptrArray[0] val_str: %s\n", *ptrArray);

    printf("\n ptrArray[1] addr: %u", &ptrArray[1]);
    printf("\n ptrArray[1] has: %u", ptrArray[1]);
    printf("\n ptrArray[1] val: %c", *ptrArray[1]);
    printf("\n ptrArray[1] val_str: %s\n", *ptrArray);

    printf("\n ptrptr addr: %u", &ptrptr);
    printf("\n ptrptr has: %u", ptrptr);
    printf("\n ptrptr 1st val: %u", *ptrptr);
    printf("\n ptrptr 2nd val: %c", **ptrptr);
    printf("\n ptrptr 2nd val_str: %s", *ptrptr);


    return 0;
}
