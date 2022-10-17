#include <stdio.h>
#include <stdlib.h>

int length;
int width;
int t_length;
int t_width;


void main(void)
{		
	printf("(A)\n");
	t_width = 1;
	for (length = 1; length <= 10; length++)
	{
		for (width = 1; width <= 10; width++)
		{
			if (width <= t_width)
			{
				printf("%s", "*");
			}
		}
		t_width++;
		printf("\n");
	}

	printf("(B)\n");
	t_width = 10;
	for (length = 1; length <= 10; length++)
	{
		for (width = 1; width <= 10; width++)
		{
			if (width <= t_width)
			{
				printf("%s", "*");
			}
		}
		t_width--;
		printf("\n");
	}

	printf("(C)\n");
	t_width = 1;
	for (length = 1; length <= 10; length++)
	{
		for (width = 1; width <= 10; width++)
		{
			if (width < t_width)
			{
				printf("%s", " ");
			}
			else
			{
				printf("%s", "*");
			}
		}
		t_width++;
		printf("\n");
	}

	printf("(D)\n");
	t_width = 10;
	for (length = 1; length <= 10; length++)
	{
		for (width = 1; width <= 10; width++)
		{
			if (width < t_width)
			{
				printf("%s", " ");
			}
			else
			{
				printf("%s", "*");
			}
		}
		t_width--;
		printf("\n");
	}

}
