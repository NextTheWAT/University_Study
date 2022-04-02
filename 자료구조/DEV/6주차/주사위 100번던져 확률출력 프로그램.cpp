#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#define MAX_COUNT 100

	
int main( ){
	
	int i, side[6] = {0,};
	
	printf("--주사위 100번 던져 확률출력하는 프로그램--\n"); 
	printf("주사위를 %d번 굴려서 나온 결과입니다.\n", MAX_COUNT);
	
	srand(time(NULL));
	
	for(i=0; i<MAX_COUNT; i++){
		side[rand() % 6]++;
	}
	
	for(i=0; i<6; i++)
	{
		printf("숫자 %d번 주사위 : %d\n", i+1, side[i]);
		
	}
	
	return 0;
	 
}
