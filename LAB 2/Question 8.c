//This is the 7th question according to the assignment pdf.

//Name : Pranav Goyal 
//Group : 1A82
//Roll no. : 1025040069

#include <stdio.h>
int main (){
	
	int a,b;
	
	printf ("Enter the first number : ");
	scanf ("%d",&a);
	
	printf ("Enter the second number : ");
	scanf ("%d",&b);
	
	int max = a>b?a:b;
	
	printf ("The greatest of the two numbers %d and %d is : %d",a,b,max);
	
	return 0;
}
