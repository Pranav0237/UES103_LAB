//Name : Pranav Goyal 
//Group : 1A82
//Roll no. : 1025040069

#include <stdio.h>
#include <math.h>
int main (){
	
	
	int a,b,c;
	double x,d,y;
	printf ("Enter the coefficient of x^2 : ");
	scanf ("%d",&a);
	printf ("Enter the coefficient of x : ");
	scanf ("%d",&b);
	printf ("Enter the constant term : ");
	scanf ("%d",&c);
	printf ("The quadratic quation for the given coefficients is %d x^2 + %d x + %d = 0\n",a,b,c);
	d = b*b - 4*a*c;
	if (a==0){
	printf ("This is not a quadratic equation.");
	}
	else if (d>0){
	x = ( (- b + pow(d,0.5) )  / (2*a) );
	y = ( (- b - pow(d,0.5) )  / (2*a) );
	printf ("The roots of the equation are %.2lf and %.2lf",x,y);
	}
	else if (d==0){
	x = - b / (2.0*a);
	y = - b / (2.0*a);
	printf ("The roots of the equation are %.2lf and %.2lf",x,y);	
	}
	
	else 
	printf ("The equation has no real roots");
	
	
	return 0;
}
