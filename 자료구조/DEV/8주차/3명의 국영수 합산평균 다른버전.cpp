#include <stdio.h>
#include <math.h>

int main(void)
{
	float ave[3];
	float *AP = ave; //�迭���� ��  
	int sum[3];
	int *SP = sum; //�հ谪�� ��
	int kor=0,eng=0,math=0;
	
	for(int i=0; i<3; i++)
	{
		printf("���� ���� ���� ������ �Է����ּ���!: ");
		scanf("%d%d%d",&kor,&eng,&math);
		sum[i] = kor+eng+math;
		ave[i] = ((float)kor+(float)eng+(float)math)/3;
		
		printf("\n");
	} 
	
	for(int i=0; i<3; i++)
	{
		printf("���: %f �հ�:%d \n",AP[i],SP[i]);
	}
	

	
}
�� 2022 GitHub
