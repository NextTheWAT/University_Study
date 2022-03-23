#include <cstdlib>
#include <iostream>
#include <stdio.h>

int main()
{
	char name[50];
	printf("본인 이름을 작성해주세요: ");
	scanf("%s", &name);
	for(int i=1; i<=10; i++)
	printf("%s %d 번 \n", name, i);

}
