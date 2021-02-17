#include <stdio.h>

int P08_1_2() {
	int num3, num4;
	int result = 0;

	printf("두 숫자 입력: ");
	scanf_s("%d %d", &num3, &num4);

	if (num3 >= num4)
	{
		result = num3 - num4;
	}
	else {
		result = num4 - num3;
	}
	printf("두 수의 차는: %d", result);
	return 0;
}