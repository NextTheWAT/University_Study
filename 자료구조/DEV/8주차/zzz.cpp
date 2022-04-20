#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>


int main(void){
	int i;
	int ksum = 0, esum = 0, wsum =0;
	int K[3],E[3],M[3];
	
	for(int j=0; j<3; j++){
		printf("%d번 학생의 수학점수: ", j+1);
		scanf("%d", &M[j]);
		printf("%d번 학생의 영어점수 : ", j+1);
		scanf("%d", &E[j]);
		printf("%d번 학생의 국어점수 : ", j+1);
		scanf("%d", &K[j]);
	}
	
 	for(i=0;i<3;i++){
	ksum += *K;
	esum += *E;
	wsum += *M;
}
	printf("3명의 국어 합계 %d 평균 %d \n", ksum, ksum/3); 
	printf("3명의 영어 합계 %d 평균 %d \n", esum, esum/3);
	printf("3명의 수학 합계 %d 평균 %d \n", wsum, wsum/3);
}
