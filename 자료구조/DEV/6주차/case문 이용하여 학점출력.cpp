#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string.h>

int main()
{
	int dpt_num, a;
	
	printf("������ �Է����ּ���: ");
	scanf("%d", &dpt_num);
	
	a = dpt_num/10*10 ;
	
	switch(a)
	{
		case 90:
		printf("����: A");
		break;
		case 80:
		printf("����: B");
		break;
		case 70:
		printf("����: C");
		break;
		case 60:
		printf("����: D");
		break;
		case 50:
		printf("����: E");
		break;
		case 40:
		printf("����: F");
		break;
		
		default:
		printf("�л���"); 
	}
	
}








