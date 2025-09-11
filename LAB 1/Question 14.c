//Name : Pranav Goyal
//Group : 1A82
//Roll no. : 1025040069

#include <stdio.h>
#include <math.h>
int main ()
{
	
	double p,r,t,A,CI;
	
	printf ("Enter the Principal amount : ");
	scanf ("%lf",&p);
	
	printf ("Enter the rate : ");
	scanf ("%lf",&r);

	
	printf ("Enter the time (in years): ");
	scanf ("%lf",&t);
	
	A = p * pow((1+r/100),t);
	
	CI = A - p;
	
	printf ("The compound interest is : %.4lf",CI);
	
	return 0;
	
}
