#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string.h>

int main()
{
	int dpt_num, a;
	
	printf("학점을 입력해주세요: ");
	scanf("%d", &dpt_num);
	
	a = dpt_num/10*10 ;
	
	switch(a)
	{
		case 90:
		printf("학점: A");
		break;
		case 80:
		printf("학점: B");
		break;
		case 70:
		printf("학점: C");
		break;
		case 60:
		printf("학점: D");
		break;
		case 50:
		printf("학점: E");
		break;
		case 40:
		printf("학점: F");
		break;
		
		default:
		printf("학사경고"); 
	}
	
}








