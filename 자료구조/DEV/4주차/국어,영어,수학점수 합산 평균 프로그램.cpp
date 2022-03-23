#include <cstdlib>
#include <iostream>
#include <stdio.h>

int main()
{
	int en[50], mh[50],kr[50],a[50];
	
	for(int i=1; i<=3; i++)
	{
		printf("국어점수를 입력해주세요: ");
		scanf("%d", &kr[i]);
		printf("영어점수를 입력해주세요: ");
		scanf("%d", &en[i]);
		printf("수학점수를 입력해주세요: ");
		scanf("%d", &mh[i]);
		
		a[i] = kr[i] + en[i] + mh[i];
		printf("합산 점수 : %d\n", a[i]);
		a[i] = a[i]/3;
		
		printf("평균 점수 : %.1f\n", (float)a[i]);
	}


}
