#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string.h>

int main()
{
	int std[20][20];
	int en[50][50], mh[50][50], kr[50][50], age[50][50], sum[50][50], all_age[50][50], all_sum[50][50];
	int std_num, pepl, i, j;
	int std_num_num[50][50], pepl_num[50][50];
	
	printf("�� �ݰ� �л��� ������ �ջ�� ��� ���ϴ� ���α׷�\n");
	printf("��ݱ��� �ִ���  �����ּ���: ");
	scanf("%d", &std_num);
	printf("�� ���� �л��� ������� �����ּ���: ");
	scanf("%d", &pepl);
	printf("\n");
	
	for(i=1; i<=std_num; i++)
	{
		for(j=1; j<=pepl; j++)
		{
			std_num_num[i][j] = i;
			pepl_num[i][j] = j;
			printf("%d���� %d�� �л� ������ �Է����ּ���\n", std_num_num[i][j], pepl_num[i][j]);
			printf("����: ");
			scanf("%d", &kr[i][j]);
			printf("����: ");
			scanf("%d", &en[i][j]);
			printf("����: ");
			scanf("%d", &mh[i][j]);
			sum[i][j] = kr[i][j] + en[i][j] + mh[i][j];
			age[i][j] = sum[i][j]/3;
			printf("%d���� %d�� �л� \n�ջ� ����: %d \n���: %d\n\n", std_num_num[i][j], pepl_num[i][j],sum[i][j], age[i][j]);
			all_sum[i][j] += sum[i][j];
		}
		all_age[i] = all_sum[i];
		printf("%d���� ��� : %d\n", std_sum, all_age[i]);
		
	}
}








