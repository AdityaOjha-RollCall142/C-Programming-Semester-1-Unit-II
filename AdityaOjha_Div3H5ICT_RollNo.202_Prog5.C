#include <stdio.h>
#include <conio.h>
void main()
{
	int ns,gs,disc;
	printf("Enter gross sales: ");
	scanf("%d",&gs);
	if (gs>20000)
	{
		disc=0.15*gs;
		ns=gs-disc;
		printf("Net sales is: %d",ns);
	}
	else if (gs>10000 && gs<=20000)
	{
		disc=0.1*gs;
		ns=gs-disc;
		printf("Net sales is: %d",ns);
	}
	else
	{
		disc=0.05*gs;
		ns=gs-disc;
		printf("Net sales is: %d",ns);
	}
	getch();
}
