#include <cstdlib>
#include <iostream>
#include <stdio.h>

int main()
{
	int i, th=0;
	printf("1부터 100까지 3의 배수 합 구하는 프로그램\n");
	printf("3의 배수의 합은 : ") ;
	for(i=1; i<=100; i++){
		if(i%3 == 0){
		th = th + i;
	}
	}
	printf("%d", th);
}
