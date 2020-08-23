#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,r=0;
	printf("Enter the number=");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0)
		r=1;
		break;
	}
	if(r==0)
	printf(" Given number is prime");
	else
	printf(" Given number is not prime");
	getch();
}
