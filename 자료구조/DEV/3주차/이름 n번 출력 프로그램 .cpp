#include <cstdlib>
#include <iostream>
#include <stdio.h>

int main()
{
	char name[50] = "이재은";
	int n;
	printf("이름 n번 출력 프로그램\n");
	printf("n의 값을 입력해주세요 : \n");
	scanf("%d", &n);
	for(int i=1; i<=n; i++)
	printf("이름 : %s %d 번줄 \n",  name, i);

}
