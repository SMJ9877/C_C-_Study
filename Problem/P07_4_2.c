#include <stdio.h>

int P07_4_2() {
	int num, result = 1;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		result *= i;
	}
		printf("%d�� ����� :%d", num, result);
		return 0;
}

