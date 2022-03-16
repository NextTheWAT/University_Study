#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	int a;
	int b;
	int c;
	float pi = 4 * atan(1);
	printf("==원의 면적(넓이)구하는 프로그램==\n");
	printf("원의 지름을 입력해주세요: ");
	scanf("%d", &a);
	b = a/2;
	printf("원의 지름 : %d\n", a);
	printf("원의 반지름 : %d\n", b);
	
	printf("원의 면적(넓이) : %.1f\n", (float)b * (float)b * pi );
	printf("원의 둘레 : %.1f", (float)a * pi );
}
