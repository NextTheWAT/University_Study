#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string.h>

int main()
{
	int std_num[7] = {1,9,7,1,0,7,0};
	char name[10] = "이재은";
	char dpt[20] = "IT융합학부";
	
	printf("자신의 이름,학번,과명을 배열로 초기화하여 출력하는 프로그램\n");
	printf("이름: %s\n", name);
	printf("학번: ");
	for(int i=0; i<7; i++)
	printf("%d", std_num[i]);
	
	printf("\n");
	printf("학과: %s", dpt);	
}
