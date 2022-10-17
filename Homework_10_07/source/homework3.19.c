#include<stdlib.h>
#include<stdio.h>

float loan_principal;
float interest_rate;
int loan_in_day;
float interest_charge;

void main(void)
{
	while (loan_principal != -1)
	{
		printf("Enter loan principal (-1 to end):");
		scanf("%f", &loan_principal);
		if (loan_principal != -1)
		{
			printf("Enter interest rate:");
			scanf("%f", &interest_rate);
			printf("Enter term of the loan in days:");
			scanf("%d", &loan_in_day);
			interest_charge = loan_principal * interest_rate*((float)loan_in_day / 365);
			printf("The interest charge is $%.2f\n", interest_charge);
		}
	}
}