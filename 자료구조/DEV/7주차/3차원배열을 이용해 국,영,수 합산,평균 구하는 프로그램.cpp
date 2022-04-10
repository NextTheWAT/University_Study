#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    int score[2][3][3];       //2개반의 학생 3명 3과목 성적을 체크
    int total[2][3][3] = {0};   //o반의 o학생 과목 총합계 점수 
    int total_age[2][3] = {0};  //o반의 o학생 과목 평균 점수 
    int a, b, c, d, e;
 
    for (c = 0; c < 2; c++){   //반을 입력받음 
        for (b = 0; b < 3; b++){   //점수 입력받음
            printf("%d반 %d번 학생의 국어, 수학, 영어점수: ", c + 1, b + 1);
            scanf("%d %d %d", &score[c][b][0], &score[c][b][1], &score[c][b][2]);
        }
        printf("\n");
    }
    
    for (e = 0; e < 2; e++){     //총합계 점수와 평균값 구하기 
        for (d = 0; d < 3; d++){
        	for(int f=0; f<3; f++){
                total[e][d][f] += score[e][d][f] + score[e][d][f] + score[e][d][f];
                total_age[e][d] = total[e][d][f]/3;
            }
        }
    }
    
    for(int i=0; i<2; i++){
    	for(int j=0; j<3; j++){
    		printf("%d반의 %d학생 국,영,수\n총점: %d\n평균: %d\n\n", i+1, j+1, total_age[i][j]*3, total_age[i][j]);
		}
	}
}







