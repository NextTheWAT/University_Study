#include <cstdlib>
#include <iostream>
#include <stdio.h>

int main()
{
	int i;
	int j;
	printf("�ʱ����� ���α׷�\n");
	for(i=1; i<=19; i++){
		for(j=1; j<=19; j++){
		printf("%d x %d = %2d\n", i, j, i*j);
	}
	printf("\n");
	}
}
