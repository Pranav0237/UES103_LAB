//Name : Pranav Goyal
//Group : 1A82
//Roll no. : 1025040069

#include <stdio.h>
int main()
{
	
	float basic_salary,da,ta,gross_salary;
	printf ("Enter Basic salary of the person : ");
	scanf ("%f",&basic_salary);
	
	da = basic_salary * 10 / 100;
	
	ta = basic_salary * 12 / 100;
	
	gross_salary = basic_salary + da + ta;
	
	printf ("Gross Salary of the person : %f",gross_salary);
	
	return 0;
}
