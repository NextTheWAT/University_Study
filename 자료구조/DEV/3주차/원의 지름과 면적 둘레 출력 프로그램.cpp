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
	printf("==���� ����(����)���ϴ� ���α׷�==\n");
	printf("���� ������ �Է����ּ���: ");
	scanf("%d", &a);
	b = a/2;
	printf("���� ���� : %d\n", a);
	printf("���� ������ : %d\n", b);
	
	printf("���� ����(����) : %.1f\n", (float)b * (float)b * pi );
	printf("���� �ѷ� : %.1f", (float)a * pi );
}
