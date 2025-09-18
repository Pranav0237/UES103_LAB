//Name : Pranav Goyal
//Group : 1A82
//Roll no. : 1025040069


#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    // (a) Using if-else
    printf("\n--- Using if-else ---\n");
    if (a >= b && a >= c) {
        printf("Greatest = %d\n", a);
    }
    else if (b >= a && b >= c) {
        printf("Greatest = %d\n", b);
    }
    else {
        printf("Greatest = %d\n", c);
    }

    // (b) Using ternary operator
    printf("\n--- Using ternary operator ---\n");
    int greatest = (a > b) ? ( (a > c) ? a : c ) : ( (b > c) ? b : c );
    printf("Greatest = %d\n", greatest);

    return 0;
}

