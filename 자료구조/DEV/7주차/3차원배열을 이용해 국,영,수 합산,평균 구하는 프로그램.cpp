#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    int score[2][3][3];       //2������ �л� 3�� 3���� ������ üũ
    int total[2][3][3] = {0};   //o���� o�л� ���� ���հ� ���� 
    int total_age[2][3] = {0};  //o���� o�л� ���� ��� ���� 
    int a, b, c, d, e;
 
    for (c = 0; c < 2; c++){   //���� �Է¹��� 
        for (b = 0; b < 3; b++){   //���� �Է¹���
            printf("%d�� %d�� �л��� ����, ����, ��������: ", c + 1, b + 1);
            scanf("%d %d %d", &score[c][b][0], &score[c][b][1], &score[c][b][2]);
        }
        printf("\n");
    }
    
    for (e = 0; e < 2; e++){     //���հ� ������ ��հ� ���ϱ� 
        for (d = 0; d < 3; d++){
        	for(int f=0; f<3; f++){
                total[e][d][f] += score[e][d][f] + score[e][d][f] + score[e][d][f];
                total_age[e][d] = total[e][d][f]/3;
            }
        }
    }
    
    for(int i=0; i<2; i++){
    	for(int j=0; j<3; j++){
    		printf("%d���� %d�л� ��,��,��\n����: %d\n���: %d\n\n", i+1, j+1, total_age[i][j]*3, total_age[i][j]);
		}
	}
}







