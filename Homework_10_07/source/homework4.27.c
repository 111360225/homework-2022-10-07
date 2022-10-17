#include <stdio.h>
#include <stdlib.h>

void main(void)
{
	int base;//©³
	int opposite;//¹ï
	int hypotenuse;//±×
	int t_base;//©³
	int t_opposite;//¹ï
	int t_hypotenuse;//±×

	for (base = 1; base <= 500; base++)
	{
		for (opposite = 1; opposite <= 500; opposite++)
		{
			for (hypotenuse = 1; hypotenuse <= 500; hypotenuse++)
			{
				t_base = base * base;
				t_opposite = opposite * opposite;
				t_hypotenuse = hypotenuse * hypotenuse;
				if (t_base + t_opposite == t_hypotenuse)
				{
					printf("%6d + %6d = %6d\n", t_base, t_opposite, t_hypotenuse);
				}
			}
		}
	}

}
