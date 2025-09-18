//Name : Pranav Goyal
//Group : 1A82
//Roll no. : 1025040069

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // (a) Using if-else
    printf("\n--- Using if-else ---\n");
    if (num % 2 == 0)
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);

    if (num > 0)
        printf("%d is Positive\n", num);
    else if (num < 0)
        printf("%d is Negative\n", num);
    else
        printf("Number is Zero\n");

    // (b) Using ternary operator
    printf("\n--- Using ternary operator ---\n");
    printf("%d is %s\n", num, (num % 2 == 0) ? "Even" : "Odd");
    printf("%d is %s\n", num, (num > 0) ? "Positive" : (num < 0) ? "Negative" : "Zero");

    return 0;
}

