#include<stdlib.h>
#include<stdio.h>

int length;
int breadth;
int length_test;
int breadth_test;

void main(void)
{
	printf("請輸入長度:");
	scanf("%d", &length);
	printf("請輸入寬度:");
	scanf("%d", &breadth);

	for (length_test = 1; length_test <= length; length_test++)
	{
		if (length_test == 1 | length_test== length)
		{
			for (breadth_test = 1; breadth_test <= breadth; breadth_test++)
			{
				printf("+");
			}
		}
		else 
		{
			for (breadth_test = 1; breadth_test <= breadth; breadth_test++)
			{
				if (breadth_test == 1 | breadth_test == breadth)
				{
					printf("+");
				}
				else
					printf(" ");
			}
		}
		printf("\n");
	}

}