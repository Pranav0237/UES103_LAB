//Name : Pranav Goyal 
//Group : 1A82
//Roll no. : 1025040069

#include <stdio.h>
int main () {

	int i;
	
	printf ("Enter a number : ");
	scanf ("%d",&i);
	
	printf ("Initial value of input value 'i' is %d\n",i);
	i+=7;
	printf ("Using i+=7 we get %d\n",i);
	i-=9;
	printf ("Using i-=9 we get %d\n",i);
	i*=3;
	printf ("Using i*=3 we get %d\n",i);
	i/=2;
	printf ("Using i/=2 we get %d\n",i);
	i%=5;
	printf ("Using i%=5 we get %d\n",i);
	return 0; 
}
