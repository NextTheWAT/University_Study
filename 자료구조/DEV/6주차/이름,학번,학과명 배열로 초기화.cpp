#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string.h>

int main()
{
	int std_num[7] = {1,9,7,1,0,7,0};
	char name[10] = "������";
	char dpt[20] = "IT�����к�";
	
	printf("�ڽ��� �̸�,�й�,������ �迭�� �ʱ�ȭ�Ͽ� ����ϴ� ���α׷�\n");
	printf("�̸�: %s\n", name);
	printf("�й�: ");
	for(int i=0; i<7; i++)
	printf("%d", std_num[i]);
	
	printf("\n");
	printf("�а�: %s", dpt);	
}
