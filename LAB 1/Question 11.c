//Name : Pranav Goyal
//Group : 1A82
//Roll No. : 1025040069

#include <stdio.h>
#include <math.h>

int main() {
    double number, n, result;
    printf("Enter the number: ");
    scanf("%lf", &number);
    printf("Enter the value of n (for nth root): ");
    scanf("%lf", &n);

    result = pow(number, 1.0 / n);

    printf("The %.0lfth root of %.1lf is: %.2lf\n", n, number, result);

    return 0;
}

