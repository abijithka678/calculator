#include<stdio.h>
int main()
{
int numop,num1,num2,sum,subtraction,multiply;
float Division,val1,val2;
printf("1.Addition");
	printf("\n");
	printf("2.Subtraction");
	printf("\n");
	printf("3.Multiplication");
	printf("\n");
	printf("4.Division");
	printf("\n");
	
	printf("Enter the number of operator to operate :");
	scanf("%d",&numop);
	if(numop==1)
	{
		printf("Enter first number :");
		scanf("%d",&num1);
		printf("Enter second number :");
		scanf("%d",&num2);
		sum=num1+num2;
		printf("Sum of the numbers are : %d",sum);
		return 0;
	}
	else if(numop==2)
	{
		printf("Enter first number :");
		scanf("%d",&num1);
		printf("Enter second number :");
		scanf("%d",&num2);
		
		if(num1>num2)
		{
			subtraction=num1-num2;
			printf("Difference between the numbers is : %d",subtraction);
			return 0;
		}
		else
		{
			subtraction=num2-num1;
			printf("Difference between the numbers is : %d",subtraction);
			return 0;
			
		}
	}
	else if(numop==3)
		{
			printf("Enter first number :");
			scanf("%d",&num1);
			printf("Enter second number :");
			scanf("%d",&num2);
			multiply=num1*num2;
			printf("Multiplication of enetered number is : %d",multiply);
			return 0;
			
		}
	else if(numop==4)
		{
			printf("Enter Numerator :");
			scanf("%f",&val1);
			printf("Enter Denominator:");
			scanf("%f",&val2);
			   Division=val1/val2;
			   printf("Division of the numbers are :%f",Division);
	}

return 0;
}
