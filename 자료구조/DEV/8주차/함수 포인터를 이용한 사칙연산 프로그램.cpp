#include <cstdlib>
#include <iostream>
#include <stdio.h>

void math()
{
	int a, b;
	printf("함수 포인터를 이용한 사칙연산 프로그램\n");
    printf("a와 b값을 입력해주세요: ");
    scanf("%d", &a);
    scanf("%d", &b);
	
	printf("a + b = %d\n", a + b);
	printf("a - b = %d\n", a - b);
	printf("a / b = %d\n", a / b);
	printf("a * b = %d\n", a * b);
}


int main()
{
	void (*cal)();  

    cal = math;
    cal();
    
    return 0;
}

