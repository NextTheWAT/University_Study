#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string.h>

int main()
{
	int a, i; 
	printf("1���� 100���� 3�ǹ�� �ջ� ���α׷�\n");
	for(i=1; i<=100; i++)
	{
		if( i%3 == 0)
		{
			a = a + i;
		}
	}
	printf("1���� 100���� 3�� ����� ���� : %d", a);
}


