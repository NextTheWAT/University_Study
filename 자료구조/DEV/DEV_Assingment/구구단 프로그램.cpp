#include <cstdlib>
#include <iostream>
#include <stdio.h>

int main()
{
	int i;
	int j;
	for(i=1; i<=9; i++){
		for(j=1; j<=9; j++){
		printf("%d x %d = %2d   ", j, i, i*j);
	}
	printf("\n");
	}
}
