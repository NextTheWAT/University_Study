#include <stdio.h>
#include <math.h>


typedef struct Friends
{
	char name[10];
	char address[10];
	char phoneNum[12];
	char age[3];	
}Friends;


int main(void)
{
	Friends arr[5];
	
	for(int i=0; i<3; i++)
	{
		printf("�̸��� �Է����ּ���: ");
		scanf("%s",&arr[i].name);
		printf("�ּҸ� �Է����ּ���: "); 
		scanf("%s",&arr[i].address);
		printf("����ó�� �����ּ���: "); 
		scanf("%s",&arr[i].phoneNum);
		printf("���̸� �Է����ּ���: "); 
		scanf("%s",&arr[i].age);	
		printf("\n");
	}
	
	for(int i=0; i<3; i++)
	{
		printf("========================================================\n");
		printf("\n");
		printf("�̸�:%s �ּ�:%s ����ó:%s ����:%s\n",arr[i].name, arr[i].address, arr[i].phoneNum, arr[i].age);
		printf("\n");
	}
}
