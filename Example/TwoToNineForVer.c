#include <stdio.h>

int TwoToNineVer() {
	int dan, i;

	for (dan = 2; dan < 10; dan++)
	{
		for (i = 1; i < 10; i++) {
			printf("%d X %d = %d \n", dan, i, dan * i);
		}
		printf("\n======\n");
	}
	return 0;
}