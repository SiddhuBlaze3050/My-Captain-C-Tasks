#include<stdio.h>
main()
{
	printf("Enter choices from 1 to 5: ");
	int choice=0;
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("You chose Burger\n");
			printf("Price - Rs 129");
			break;
		case 2:
			printf("You chose Sandwich\n");
			printf("Price - Rs 149");
			break;
		case 3:
			printf("You chose French Fries\n");
			printf("Price - Rs 99");
			break;
		case 4:
			printf("You chose Pizza\n");
			printf("Price - Rs 239");
			break;
		case 5:
			printf("You chose Pasta\n");
			printf("Price - Rs 179");
			break;
		default: printf("Invalid input");
	return 0;
	}
}
