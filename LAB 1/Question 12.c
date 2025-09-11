//Name : Pranav Goyal
//Group : 1A82
//Roll No. : 1025040069

#include <stdio.h>
#include <math.h>

int main() {
    double radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = M_PI * pow(radius, 2);  

    printf("The area of the circle with radius %.1lf is: %.2lf\n", radius, area);

    return 0;
}

