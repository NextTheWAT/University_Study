#include <cstdlib>
#include <iostream>
#include <stdio.h>

int main()
{
	char name[50];
	int number;
	printf("�й��� �̸� 10�� ��� ���α׷�\n");
	printf("���� �̸��� �ۼ����ּ���: ");
	scanf("%s", &name);
	printf("���� �й��� �ۼ����ּ���: ");
	scanf("%d", &number);
	for(int i=1; i<=10; i++)
	printf("�й�: %d �̸� : %s %d ���� \n", number, name, i);

}
