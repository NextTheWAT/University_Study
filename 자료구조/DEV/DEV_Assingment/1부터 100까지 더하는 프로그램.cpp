#include <cstdlib>
#include <iostream>
#include <stdio.h>

int main()
{
	int i, a;
	
	printf("==1����100���� ���ϴ� ���α׷�==\n");
	printf("1���� 100���� ���ϴ� ���� : \n");
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
		
	 printf("  1���� 100���� ���� �� : %d", a);
}
