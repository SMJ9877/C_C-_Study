#include <stdio.h>

int P08_1_2() {
	int num3, num4;
	int result = 0;

	printf("�� ���� �Է�: ");
	scanf_s("%d %d", &num3, &num4);

	if (num3 >= num4)
	{
		result = num3 - num4;
	}
	else {
		result = num4 - num3;
	}
	printf("�� ���� ����: %d", result);
	return 0;
}