#include <stdio.h>

int P08_1_3() {
	int kor, eng, mat;
	int average = 0;

	printf("국어, 영어, 수학의 점수를 입력하시오: ");
	scanf_s("%d %d %d", &kor, &eng, &mat);

	average = (kor + eng + mat) / 3;

	printf("%d\n",average);

	if (average == 100 || average >= 90)
	{
		printf("A");
	}
	else if (average >= 80)
	{
		printf("B");
	}
	else if (average >= 70) {
		printf("C");
	}
	else if (average >= 50) {
		printf("D");
	}
	else {
		printf("F");
	}
	return 0;
}