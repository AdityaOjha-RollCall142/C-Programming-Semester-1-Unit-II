#include <stdio.h>
#include <conio.h>
void main()
{
	int gs,ns,all,ded;
	printf("Enter gross salary: ");
	scanf("%d",&gs);
	if (gs>10000)
	{
		all=0.1*gs;
		ded=0.03*gs;
		ns=gs+all-ded;
		printf("Net salary is: %d",ns);
	}
	else if (gs>5000 && gs<=10000)
	{
		all=0.07*gs;
		ded=0.02*gs;
		ns=gs+all-ded;
		printf("Net salary is: %d",ns);
	}
	getch();
}
