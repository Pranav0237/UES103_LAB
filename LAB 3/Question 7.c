//Name : Pranav Goyal
//Group : 1A82
//Roll no. : 1025040069.

#include <stdio.h>

int main() {
    int days;

    printf("Enter number of days late: ");
    scanf("%d", &days);

    if (days <= 0) {
        printf("No fine. Book returned on time!\n");
    }
    else if (days <= 5) {
        printf("Fine = 50 paisa\n");
    }
    else if (days <= 10) {
        printf("Fine = 1 rupee\n");
    }
    else if (days <= 30) {
        printf("Fine = 5 rupees\n");
    }
    else {
        printf("Membership Cancelled!\n");
    }

    return 0;
}

