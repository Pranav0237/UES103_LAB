//Name : Pranav Goyal
//Group : 1A82
//Roll no. : 1025040069

#include <stdio.h>
#include <math.h>

int main() {
    float num[5], sum = 0, avg, sd, variance = 0;
    float max, min;
    int i;


    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%f", &num[i]);
        sum += num[i];
    }

  
    avg = sum / 5;

 
    max = min = num[0];
    for (i = 1; i < 5; i++) {
        if (num[i] > max)
            max = num[i];
        if (num[i] < min)
            min = num[i];
    }

   
    for (i = 0; i < 5; i++) {
        variance += pow(num[i] - avg, 2);
    }
    variance /= 5;               
    sd = sqrt(variance);


    printf("\nAverage = %.2f", avg);
    printf("\nMaximum = %.2f", max);
    printf("\nMinimum = %.2f", min);
    printf("\nStandard Deviation = %.2f\n", sd);

    return 0;
}

