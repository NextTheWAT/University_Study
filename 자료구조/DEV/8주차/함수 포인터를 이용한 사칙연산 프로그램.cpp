#include <cstdlib>
#include <iostream>
#include <stdio.h>

void math()
{
	int a, b;
	printf("�Լ� �����͸� �̿��� ��Ģ���� ���α׷�\n");
    printf("a�� b���� �Է����ּ���: ");
    scanf("%d", &a);
    scanf("%d", &b);
	
	printf("a + b = %d\n", a + b);
	printf("a - b = %d\n", a - b);
	printf("a / b = %d\n", a / b);
	printf("a * b = %d\n", a * b);
}


int main()
{
	void (*cal)();  

    cal = math;
    cal();
    
    return 0;
}

