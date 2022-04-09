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
	
	printf("각 반과 학생의 국영수 합산과 평균 구하는 프로그램\n");
	printf("몇반까지 있는지  적어주세요: ");
	scanf("%d", &std_num);
	printf("각 반의 학생이 몇명인지 적어주세요: ");
	scanf("%d", &pepl);
	printf("\n");
	
	for(i=1; i<=std_num; i++)
	{
		for(j=1; j<=pepl; j++)
		{
			std_num_num[i][j] = i;
			pepl_num[i][j] = j;
			printf("%d반의 %d번 학생 점수를 입력해주세요\n", std_num_num[i][j], pepl_num[i][j]);
			printf("국어: ");
			scanf("%d", &kr[i][j]);
			printf("영어: ");
			scanf("%d", &en[i][j]);
			printf("수학: ");
			scanf("%d", &mh[i][j]);
			sum[i][j] = kr[i][j] + en[i][j] + mh[i][j];
			age[i][j] = sum[i][j]/3;
			printf("%d반의 %d번 학생 \n합산 점수: %d \n평균: %d\n\n", std_num_num[i][j], pepl_num[i][j],sum[i][j], age[i][j]);
			all_sum[i][j] += sum[i][j];
		}
		all_age[i] = all_sum[i];
		printf("%d반의 평균 : %d\n", std_sum, all_age[i]);
		
	}
}








