#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string.h>

int main()
{
	int a, i; 
	printf("1부터 100까지 3의배수 합산 프로그램\n");
	for(i=1; i<=100; i++)
	{
		if( i%3 == 0)
		{
			a = a + i;
		}
	}
	printf("1부터 100까지 3의 배수의 합은 : %d", a);
}


