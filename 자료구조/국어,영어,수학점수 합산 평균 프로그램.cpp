#include <cstdlib>
#include <iostream>
#include <stdio.h>

int main()
{
	int en[50], mh[50],kr[50],a[50];
	
	for(int i=1; i<=3; i++)
	{
		printf("���������� �Է����ּ���: ");
		scanf("%d", &kr[i]);
		printf("���������� �Է����ּ���: ");
		scanf("%d", &en[i]);
		printf("���������� �Է����ּ���: ");
		scanf("%d", &mh[i]);
		
		a[i] = kr[i] + en[i] + mh[i];
		printf("�ջ� ���� : %d\n", a[i]);
		a[i] = a[i]/3;
		
		printf("��� ���� : %.1f\n", (float)a[i]);
	}


}
