#include<stdio.h>
#include<stdlib.h>
#include<time.h>



int main() {
	
        srand(time(NULL));
        
        int i, me, count, com;
        int com_count=0, me_count=0, draw_count=0;
        
        printf("컴퓨터와 가위바위보 게임 프로그램");
        printf("몇회를 하실건지 입력해주세요:");
        scanf("%d", &count);
        
        for(i=1; i<=count; i++){
        printf("가위(1) 바위(2) 보(3) 중 낼것을 입력해주세요: ");
        scanf("%d", &me);
        com = rand() %3+1;
		
		if(me == 1 && com == 2){
		printf("컴퓨터 승\n"); com_count++;}
		else if(me == 1 && com == 3){
		printf("사용자 승\n" ); me_count++;}
		else if(me == 2 && com == 1){
		printf("사용자 승\n"); me_count++;}
		else if(me == 2 && com == 3){
		printf("컴퓨터 승\n"); com_count++;}
		else if(me == 3 && com == 1){
		printf("컴퓨터 승\n"); com_count++;}
		else if(me == 3 && com == 2){
		printf("사용자 승\n"); me_count++;}
		else{
		printf("비겼음\n"); draw_count++;}
	}
	printf("총 %d번 한 결과\n", count); 
	printf("컴퓨터 승: %d\n사용자 승: %d\n비김 : %d", com_count, me_count, draw_count);
}









