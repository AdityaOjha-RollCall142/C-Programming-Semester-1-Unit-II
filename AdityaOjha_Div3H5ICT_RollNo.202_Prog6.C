#include <stdio.h>
#include <conio.h>
void main()
{
	int m1,m2,m3,total;
	float avg;
	printf("Enter marks of three subjects: ");
	scanf("%d %d %d",&m1,&m2,&m3);
	total=m1+m2+m3;
	avg=total/3.0;
	if (m1<35 || m2<35 || m3<35)
	{
		printf("\nTotal marks = %d\nAverage = %.2f\nResult: Fail",total,avg);
	}
	else
	{
		printf("\nTotal = %d\nAverage = %.2f\n",total,avg);
		if (avg>=70)
			printf("Result: Distinction");
		else if (avg>=60)
			printf("Result: First Class");
		else if (avg>=50)
			printf("Result: Second Class");
		else if (avg>=35)
			printf("Result: Third Class");
		else
			printf("Result: Fail");
	}
	getch();
}
