//Name : Pranav Goyal 
//Group : 1A82
//Roll no. : 1025040069

#include <stdio.h>
int main (){
	
	int a,b;
	printf ("Print a number : ");
	scanf ("%d",&a);
	printf ("Number of position to be shifted : ");
	scanf ("%d",&b);
	int left = a << b;
	int right = a >> b;
	printf ("Original number : %d\n",a);
	printf ("Number after shifting left : %d\n",left);
	printf ("Number after shifting right : %d\n",right);
	return 0;
}
