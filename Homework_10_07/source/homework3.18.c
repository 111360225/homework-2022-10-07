#include<stdio.h>
#include<stdlib.h>

float sales;
float salary;

void main(void)
{
	sales = 1;
	while (sales != -1)
	{
		printf("Enter sales in dollars (-1 to end) :");
		scanf("%f", &sales);
		if (sales != -1)
		{
			salary = 200 + sales * 0.09;
			printf("Salary is : %.2f\n", salary);
		}
	}
}