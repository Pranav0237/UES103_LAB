//Name : Pranav Goyal
//Group : 1A82
//Roll no. : 1025040069

#include <stdio.h>

int main() {
    int num;

    printf("Enter integers (program will quit if number > 100):\n");

    while (1) {  
        scanf("%d", &num);

        if (num > 100) {
            printf("QUIT! (%d is larger than 100)\n", num);
            break;
        } else {
            printf("You entered: %d\n", num);
        }
    }

    return 0;
}

