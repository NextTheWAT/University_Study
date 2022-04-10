#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int main(void)
{
	char arr[SIZE];
	char name;
	int count=1;
	
	printf("이름을 입력해주세요!: ");
	scanf("%s",&arr); //이름을 입력받음 
	
	while(arr[count]!='\0') //글자 갯수세기! 
	{
		count++;
	}
	
	for(int i=0; i<=count; i++)
	{ 
		
		if(arr[i]>='a' && arr[i]<= 'z')
		{
			arr[i] = (int)arr[i]-32;
			printf("%c",(char)arr[i]);
		}
		
		else if(arr[i]>='A' && arr[i]<= 'Z')
		{
			arr[i] = (int)arr[i]+32;
			printf("%c",(char)arr[i]);
		}
		
	}
	return 0;
}

