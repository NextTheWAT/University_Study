#include <cstdlib>
#include <iostream>
#include <stdio.h>

int main()
{
	char name[50] = "������";
	int n;
	printf("�̸� n�� ��� ���α׷�\n");
	printf("n�� ���� �Է����ּ��� : \n");
	scanf("%d", &n);
	for(int i=1; i<=n; i++)
	printf("�̸� : %s %d ���� \n",  name, i);

}
