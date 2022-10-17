#include <stdio.h>
#include <stdlib.h>

int account;
float beginning_balance;
float totoal_charges;
float totoal_credits;
float credit_limit;
float new_bamance;

void main(void)
{
	account = 1;
	while (account != -1)
	{
		printf("Enter account number (-1 to end) :");
		scanf("%d", &account);
		if (account != -1)
		{
			printf("Enter beginning balance:");
			scanf("%f", &beginning_balance);
			printf("Enter totoal charges:");
			scanf("%f", &totoal_charges);
			printf("Enter totoal credits:");
			scanf("%f", &totoal_credits);
			printf("Enter credit_limit:");
			scanf("%f", &credit_limit);
			new_bamance = beginning_balance + totoal_charges - totoal_credits;
		if (new_bamance > credit_limit)
			{
				printf("Account:\t%d\n", account);
				printf("Credit limit:\t%.2f\n", credit_limit);
				printf("Balance:\t%.2f\n", new_bamance);
				printf("Credit Limit Exceed.\n");
			}
		}
		printf("\n");
	}
}


