#include <stdio.h>

int P07_4_2() {
	int num, result = 1;

	printf("정수를 입력하시오: ");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		result *= i;
	}
		printf("%d의 계승은 :%d", num, result);
		return 0;
}

