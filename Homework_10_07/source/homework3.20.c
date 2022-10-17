#include<stdio.h>
#include<stdlib.h>

int hours_worked;
float hourly_rate;
float salary;

void main(void)
{
	hours_worked = 1;
	while (hours_worked != -1)
	{
		printf("Enter # of hours worked (-1 to end):");
		scanf("%d", &hours_worked);
		if (hours_worked != -1)
		{
			printf("Enter hourly rate of the worker ($00.00):");
			scanf("%f", &hourly_rate);

			if (hours_worked > 40)
			{
				salary = (hours_worked * hourly_rate) + (hours_worked - 40)*(hourly_rate / 2);
				printf("Salary is $ %.2f\n", salary);
			}
			else
			{
				salary = hours_worked * hourly_rate;
				printf("Salary is $ %.2f \n", salary);
			}
		}
	}
}