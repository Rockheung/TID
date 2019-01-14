#include <stdio.h>
#include <string.h>

struct employee {
    char name[10];
    int year;
    int pay;
};

int main() {

    struct employee Park, Rock;
    struct employee *Sptr = &Park;
    struct employee *Sptr2 = &Rock;
    strcpy(Sptr->name, "박흥준");
    Sptr->year = 2011;
    Sptr->pay = 10830;
    /*
     * Not working
     * Sptr2->name = "락흥";
     * (*Sptr2).name = "락흥";
     */
    strcpy((*Sptr2).name, "락흥");
    (*Sptr2).year = 2013;
    (*Sptr2).pay = 12830;

    int i;

    printf("%s \n", Park.name);
    printf("struct addr: %u\n", &Park);
    printf("char addr: %u, val: %s\n", &Park.name, Sptr->name);
    printf("year addr: %u, val: %d \n", &Park.year, Sptr->year);
    printf("pay addr: %u, val: %d \n\n", &Park.pay, Sptr->pay);

    printf("%s \n", Rock.name);
    printf("struct addr: %u\n", &Rock);
    printf("char addr: %u, val: %s\n", &Rock.name, Sptr2->name);
    printf("year addr: %u, val: %d \n", &Rock.year, Sptr2->year);
    printf("pay addr: %u, val: %d \n\n", &Rock.pay, Sptr2->pay);

    return 0;
}
