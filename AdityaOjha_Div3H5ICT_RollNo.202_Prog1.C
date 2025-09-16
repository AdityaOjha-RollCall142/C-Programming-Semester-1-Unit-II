#include <stdio.h>
#include <conio.h>

void main()
{
    int n1,n2,n3;
    printf("Enter the three numbers: ");
    scanf("%d %d %d",&n1,&n2,&n3);

    int largest, smallest;

    // Find largest
    if(n1 > n2 && n1 > n3)
        largest = n1;
    else if(n2 > n1 && n2 > n3)
        largest = n2;
    else
        largest = n3;

    // Find smallest
    if(n1 < n2 && n1 < n3)
        smallest = n1;
    else if(n2 < n1 && n2 < n3)
        smallest = n2;
    else
        smallest = n3;

    printf("%d is the largest number and %d is the smallest number", largest, smallest);

    getch();
}
