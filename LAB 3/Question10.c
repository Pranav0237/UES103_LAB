//Name : Pranav Goyal
//Group : 1A82
//Roll no. : 1025040069

#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter numbers (enter -999 to stop):\n");

    while (1) {  
        scanf("%d", &num);

        if (num == -999)  
            break;

        sum += num;
    }

    printf("Sum of numbers = %d\n", sum);

    return 0;
}

