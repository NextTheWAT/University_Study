#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c;
	
	printf("��Ÿ��� ���� ���ϴ� ���α׷�");
	printf("a�� b�� �Է����ּ���: \n");
	printf("a: ");
	scanf("%f", &a);
	printf("b: ");
	scanf("%f", &b);
	c = sqrt(a*a+b*b);
	printf("������ c�� ���� : %.1f", c );
	
}
