#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string.h>

int main()
{
	float tem, a;
	
	printf("ȭ���µ��� �����µ��� ��ȯ�ϴ� ���α׷�\n");
	printf("ȭ���µ��� �Է����ּ���: ");
	scanf("%f", &tem);
	
	a = (tem-32)/1.8;
	
	printf("ȭ���µ�: %.1f\n", tem);
	printf("�����µ�: %.1f", a);
}
