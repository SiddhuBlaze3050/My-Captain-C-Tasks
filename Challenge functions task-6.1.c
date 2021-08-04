#include<stdio.h>
int sum_of_digits(int n);
int main()
{
	int num=1234;
	int result=sum_of_digits(num);
	printf("Sum of digits in %d is %d",num,result);
	return 0;
}

int sum_of_digits(int n)
{
	if(n==0)
	return 0;
	return(n%10+sum_of_digits(n/10));
}
