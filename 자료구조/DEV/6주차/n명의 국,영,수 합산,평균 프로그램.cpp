#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string.h>

int main()
{
	char student[50], name[50];
	int en[50], mh[50], kr[50], age[50], sum[50];
	int n;
	
	printf("--n명의 국영수점수를 입력받아 합산과 평균 구하는 프로그램--\n");
	printf("몇명인지 입력해주세요: ");
	scanf("%d", &n);
	
	for(int i=0; i<n; i++)
	{
		printf("이름: ");
		scanf("%s", &name[i]);
		printf("국어점수: ");
		scanf("%d", &kr[i]);
		printf("영어점수: ");
		scanf("%d", &en[i]);
		printf("수학점수: ");
		scanf("%d", &mh[i]);
		
		sum[i] = kr[i] + en[i] + mh[i];
		age[i] = (sum[i])/3;
		
		printf("총합산 점수: %d\n", sum[i]);
		printf("평균: %d\n\n", age[i]);
	}
	
}
