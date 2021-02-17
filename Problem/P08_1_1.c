#include <stdio.h>

int P08_1_1() {
	int i;
	for ( i = 1; i < 100; i++)
	{
		if (i%7==0)
		{
			printf("%d ", i);
			
		}
		else if (i % 9 == 0) {
			printf("%d ", i);
		}
	}
	return 0;
}