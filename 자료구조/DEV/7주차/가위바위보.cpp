#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int main() {
	
        srand(time(NULL));
        
        int i, me, count, com;
        int com_count=0, me_count=0, draw_count=0;
        
        printf("��ǻ�Ϳ� ���������� ���� ���α׷�");
        printf("��ȸ�� �Ͻǰ��� �Է����ּ���:");
        scanf("%d", &count);
        
        for(i=1; i<=count; i++){
        printf("����(1) ����(2) ��(3) �� ������ �Է����ּ���: ");
        scanf("%d", &me);
        com = rand() %3+1;
		
		if(me == 1 && com == 2){
		printf("��ǻ�� ��\n"); com_count++;}
		else if(me == 1 && com == 3){
		printf("����� ��\n" ); me_count++;}
		else if(me == 2 && com == 1){
		printf("����� ��\n"); me_count++;}
		else if(me == 2 && com == 3){
		printf("��ǻ�� ��\n"); com_count++;}
		else if(me == 3 && com == 1){
		printf("��ǻ�� ��\n"); com_count++;}
		else if(me == 3 && com == 2){
		printf("����� ��\n"); me_count++;}
		else{
		printf("�����\n"); draw_count++;}
	}
	printf("�� %d�� �� ���\n", count); 
	printf("��ǻ�� ��: %d\n����� ��: %d\n��� : %d", com_count, me_count, draw_count);
}









