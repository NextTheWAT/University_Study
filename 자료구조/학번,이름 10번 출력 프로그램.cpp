#include <cstdlib>
#include <iostream>
#include <stdio.h>

int main()
{
	char name[50];
	int number;
	printf("학번과 이름 10번 출력 프로그램\n");
	printf("본인 이름을 작성해주세요: ");
	scanf("%s", &name);
	printf("본인 학번을 작성해주세요: ");
	scanf("%d", &number);
	for(int i=1; i<=10; i++)
	printf("학번: %d 이름 : %s %d 번줄 \n", number, name, i);

}
