#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string.h>

int main()
{
	char student[50], name[50];
	int en[50], mh[50], kr[50], age[50], sum[50];
	int n;
	
	printf("--n���� ������������ �Է¹޾� �ջ�� ��� ���ϴ� ���α׷�--\n");
	printf("������� �Է����ּ���: ");
	scanf("%d", &n);
	
	for(int i=0; i<n; i++)
	{
		printf("�̸�: ");
		scanf("%s", &name[i]);
		printf("��������: ");
		scanf("%d", &kr[i]);
		printf("��������: ");
		scanf("%d", &en[i]);
		printf("��������: ");
		scanf("%d", &mh[i]);
		
		sum[i] = kr[i] + en[i] + mh[i];
		age[i] = (sum[i])/3;
		
		printf("���ջ� ����: %d\n", sum[i]);
		printf("���: %d\n\n", age[i]);
	}
	
}
