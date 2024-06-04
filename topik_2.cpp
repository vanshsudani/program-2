#include<stdio.h>
main()
{
	int base_salary,gross_salary;
	float hra,da,ta;
	
	printf("enter  base salary =");
	scanf("%d",&base_salary);
	
	printf("enter  hra =");
	scanf("%f",&hra);
	
	printf("enter  da =");
	scanf("%f",&da);
	
	printf("enter ta =");
	scanf("%f",&ta);
	
	hra = base_salary*hra/100;
	da = base_salary*da/100;
	ta = base_salary*ta/100;
	gross_salary = base_salary + hra + da + ta;
	printf("Gross salary = %d",gross_salary);
}