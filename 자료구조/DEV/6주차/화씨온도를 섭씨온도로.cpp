#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string.h>

int main()
{
	float tem, a;
	
	printf("화씨온도를 섭씨온도로 변환하는 프로그램\n");
	printf("화씨온도를 입력해주세요: ");
	scanf("%f", &tem);
	
	a = (tem-32)/1.8;
	
	printf("화씨온도: %.1f\n", tem);
	printf("섭씨온도: %.1f", a);
}
