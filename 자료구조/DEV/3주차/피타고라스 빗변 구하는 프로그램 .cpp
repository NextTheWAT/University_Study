#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c;
	
	printf("피타고라스 빗변 구하는 프로그램");
	printf("a와 b를 입력해주세요: \n");
	printf("a: ");
	scanf("%f", &a);
	printf("b: ");
	scanf("%f", &b);
	c = sqrt(a*a+b*b);
	printf("빗변의 c의 값은 : %.1f", c );
	
}
