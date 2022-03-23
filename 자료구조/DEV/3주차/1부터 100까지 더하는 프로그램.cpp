#include <cstdlib>
#include <iostream>
#include <stdio.h>

int main()
{
	int i, a;
	
	printf("==1부터100까지 더하는 프로그램==\n");
	printf("1부터 100까지 더하는 과정 : \n");
	for(i=1; i<=100; i++){
		if(i == 100){
			a = a + i;
			printf("%d", i);}
		else{
			printf("%d + ", i);
			a = a + i ;
		}
	}
	printf("\n");
		
	 printf("  1부터 100까지 더한 값 : %d", a);
}
