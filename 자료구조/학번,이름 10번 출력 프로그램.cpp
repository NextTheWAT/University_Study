#include <cstdlib>
#include <iostream>
#include <stdio.h>

int main()
{
	int i, th=0;
	printf("1���� 100���� 3�� ��� �� ���ϴ� ���α׷�\n");
	printf("3�� ����� ���� : ") ;
	for(i=1; i<=100; i++){
		if(i%3 == 0){
		th = th + i;
	}
	}
	printf("%d", th);
}
