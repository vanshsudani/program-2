#include<stdio.h>
main()
{
	int firstangle , secondangle , thirdangle;
	
	printf("enter  first angle =");
	scanf("%d",&firstangle);
	printf("enter  second angle =");
	scanf("%d",&secondangle);
	thirdangle = 180-(firstangle + secondangle);
	printf("Thirdangle = %d",thirdangle);
}