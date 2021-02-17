#include <stdio.h>

int main() {
	double sel;
	double num1, num2;
	double result = 0;


	printf("1. µ¡¼À 2.»¬¼À 3.°ö¼À 4.³ª´°¼À");
	scanf_s("%lf", &sel);

	printf("µÎ ¼ýÀÚ¸¦ ÀÔ·ÂÇÏ½Ã¿À: ");
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