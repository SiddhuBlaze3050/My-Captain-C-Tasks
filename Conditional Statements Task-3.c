#include<stdio.h>
main()
{
	printf("Enter the marks: ");
	int marks=0;
	scanf("%d",&marks);
	if(marks<=100 && marks>=85)
	{
		printf("Grade A");
	}
	else if(marks<=84 && marks>=70)
	{
		printf("Grade B");
	}
	else if(marks<=69 && marks>=55)
	{
		printf("Grade C");
	}
	else if(marks<=54 && marks>=40)
	{
		printf("Grade D");
	}
	else if(marks<40)
	{
		printf("Grade F");
	}
	return 0;
}
