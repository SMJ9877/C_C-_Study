#include <stdio.h>

int main() {
	double sel;
	double num1, num2;
	double result = 0;


	printf("1. ���� 2.���� 3.���� 4.������");
	scanf_s("%lf", &sel);

	printf("�� ���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%lf %lf", &num1, &num2);

	if (sel == 1)
	{
		result = num1 + num2;
	}
	else if (sel == 2) {
		result = num1 - num2;
	}
	else if (sel == 3) {
		result = num1 * num2;
	}
	else if(sel == 4) {
		result = num1 / num2;
	}
	printf("%f\n", result);
	return 0;
}