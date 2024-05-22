#include<stdio.h>
#include<conio.h>

main ()
{
	int a,b,c,d;

	clrscr();

	printf("Enter the first value :");
	scanf("%d",&a);
	printf("Enter the second value :");
	scanf("%d",&b);
	printf("Enter the third value :");
	scanf("%d",&c);
	printf("Enter the fourth value :");
	scanf("%d",&d);

	printf("\n\n");

	if(a==b)
	{
		printf("invalid value !!\n");
		printf("please try again ...");
	}
	else if(b==c)
	{
		printf("invalid value !!\n");
		printf("please try again ...");
	}
	else if(c==d)
	{
		printf("invalid value !!\n");
		printf("please try again ...");
	}
	else if(d==a)
	{
		printf("invalid value !!\n");
		printf("please try again ...");
	}
	else if(b==d)
	{
		printf("invalid value !!\n");
		printf("please try again ...");
	}
	else if(a==c)
	{
		printf("invalid value !!\n");
		printf("please try again ...");
	}

	else
	{
		if(a>b)
		{
			if(a>c)
			{
				if(a>d)
				{
					printf("%d is maximum",a);
				}
				else
				{
					printf("%d is maximum",d);
				}
			}
			else
			{
				if(c>d)
				{
					printf("%d is maximum",c);
				}
				else
				{
					printf("%d is maximum",d);
				}
			}
		}
		else
		{
			if(b>c)
			{
				if(b>d)
				{
					printf("%d is maximum",b);
				}
				else
				{
					printf("%d is maximum",d);
				}
			}
			else
			{
				if(c>d)
				{
					printf("%d is maximum",c);
				}
				else
				{
					printf("%d is maximum",d);
				}
			}
		}

	 }
	getch();

}