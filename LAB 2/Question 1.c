//Name : Pranav Goyal
//Group : 1A82
//Roll no. : 1025040069

#include <stdio.h>
#include <math.h>
int main (){
	
	double a,b;
	
	printf ("Enter the angle 'a'(in degrees) : ");
	scanf ("%lf",&a);
	
	printf ("Enter a number 'b' : ");
	scanf ("%lf",&b);
	
	double angle = a * 3.14 / 180;
	
	printf ("sin(%.2lf)=%.2lf\n",a,sin(angle));
	
	printf ("cos(%.2lf)=%.2lf\n",a,cos(angle));
	
	printf ("tan(%.2lf)=%.2lf\n",a,tan(angle));
	
	printf ("log(%.2lf)=%.4lf\n",b,log(b));
	
	printf ("log10(%.2lf)=%.4lf\n",b,log10(b));
	
	printf ("%.2lf ^ %.2lf = %.4lf\n",a,b,pow(a,b));
	
	printf ("squareroot of '%lf' = %.4lf",b,sqrt(b));
	
	return 0;
}
