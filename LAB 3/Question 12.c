//Name : Pranav Goyal
//Group : 1A82
//Roll no. : 1025040069

#include <stdio.h>

int main() {
    int num, i, evenCount = 0;

    printf("Enter 20 integers:\n");

    for (i = 1; i <= 20; i++) {
        scanf("%d", &num);

        if (num % 2 == 0) {
            evenCount++;
        }
    }

    printf("Total even numbers = %d\n", evenCount);

    return 0;
}

