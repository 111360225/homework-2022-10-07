#include<stdlib.h>
#include<stdio.h>

int length;
int breadth;
int length_test;
int breadth_test;

void main(void)
{
	printf("�п�J����:");
	scanf("%d", &length);
	printf("�п�J�e��:");
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