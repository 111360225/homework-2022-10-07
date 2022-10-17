#include <stdio.h>
#include <stdlib.h>

float investment;
int years;
float rate;


void main(void)
{
	rate = 1.095;
	investment = 5000;
	for (years = 1; years < 16; years++)
	{
		if (years % 3 == 1)
		{
			rate = rate + 0.005;
			investment = investment * rate;
			if (years < 10)
			{
				printf("The  %d year = %5.f \n", years, investment);
			}
			else
			{
				printf("The %d year = %5.f \n", years, investment);
			}
		}
		else
		{
			investment = investment * rate;
			if (years < 10)
			{
				printf("The  %d year = %5.f \n", years, investment);
			}
			else
			{
				printf("The %d year = %5.f \n", years, investment);
			}
		}
	}
}