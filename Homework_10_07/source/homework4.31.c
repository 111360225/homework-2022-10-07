#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	char 	a = '*';
	char 	b = ' ';
	int i;
	int j;

	int tem1;
	int tem2;

    tem1 = 4;
	tem2 = 4;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (j == 4 || (j >= tem1 && j <= tem2))
			{
				printf("%c", a);

			}
			else
			{
				printf("%c", b);
			}
		}
		tem1--;
		tem2++;
		printf("\n");
	}
	tem1 = 0;
	tem2 = 8;
	for (i = 4; i < 9; i++)
	{

		for (j = 0; j < 9; j++)
		{
			if (j<tem1||j> tem2)
			{
				printf("%c", b);
			}
			else
			{
				printf("%c", a);
			}
		}
		tem1++;
		tem2--;
		printf("\n");
	}
}