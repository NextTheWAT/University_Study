#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>


int main(){
	
	FILE* fout;
	
    int score[1][3][3];       //1개반의 학생 3명 3과목 성적을 체크
    int total[1][3][3] = {0};   //o반의 o학생 과목 총합계 점수
    int total_age[1][3] = {0};  //o반의 o학생 과목 평균 점수
    int a, b, c, d, e;
    
    (fout = fopen("Class.txt", "wt")) == NULL;
 
    for (c = 0; c < 1; c++){   //반을 입력받음 
        for (b = 0; b < 3; b++){   //점수 입력받음
            printf("%d반 %d번 학생의 국어, 수학, 영어점수: ", c + 1, b + 1);
            scanf("%d %d %d", &score[c][b][0], &score[c][b][1], &score[c][b][2]);
        }
        printf("\n");
    }
    
    for (e = 0; e < 1; e++){     //총합계 점수와 평균값 구하기 
        for (d = 0; d < 3; d++){
        	for(int f=0; f<3; f++){
                total[e][d][f] = score[e][d][f] + score[e][d][f] + score[e][d][f];
                total_age[e][d] = total[e][d][f]/3;
            }
        }
    }
    
    for(int i=0; i < 1 ; i++){
    	for(int j=0; j<3; j++){
    		printf("%d반의 %d학생 국,영,수\n총점: %d\n평균: %d\n\n", i+1, j+1, total_age[i][j]*3, total_age[i][j]);
		}
	}
	
	for(int q=0; q < 1; q++){
		for(int w=0; w<3; w++){
			fprintf(fout, "%d반의 %d학생  합계: %d  평균: %d\n", q+1, w+1, total_age[q][w]*3, total_age[q][w]);
		}
	}
		fclose(fout);
}







