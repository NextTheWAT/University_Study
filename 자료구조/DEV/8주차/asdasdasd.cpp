#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>


int main(){
	
	FILE* fout;
	
    int score[1][3][3];       //1������ �л� 3�� 3���� ������ üũ
    int total[1][3][3] = {0};   //o���� o�л� ���� ���հ� ����
    int total_age[1][3] = {0};  //o���� o�л� ���� ��� ����
    int a, b, c, d, e;
    
    (fout = fopen("Class.txt", "wt")) == NULL;
 
    for (c = 0; c < 1; c++){   //���� �Է¹��� 
        for (b = 0; b < 3; b++){   //���� �Է¹���
            printf("%d�� %d�� �л��� ����, ����, ��������: ", c + 1, b + 1);
            scanf("%d %d %d", &score[c][b][0], &score[c][b][1], &score[c][b][2]);
        }
        printf("\n");
    }
    
    for (e = 0; e < 1; e++){     //���հ� ������ ��հ� ���ϱ� 
        for (d = 0; d < 3; d++){
        	for(int f=0; f<3; f++){
                total[e][d][f] = score[e][d][f] + score[e][d][f] + score[e][d][f];
                total_age[e][d] = total[e][d][f]/3;
            }
        }
    }
    
    for(int i=0; i < 1 ; i++){
    	for(int j=0; j<3; j++){
    		printf("%d���� %d�л� ��,��,��\n����: %d\n���: %d\n\n", i+1, j+1, total_age[i][j]*3, total_age[i][j]);
		}
	}
	
	for(int q=0; q < 1; q++){
		for(int w=0; w<3; w++){
			fprintf(fout, "%d���� %d�л�  �հ�: %d  ���: %d\n", q+1, w+1, total_age[q][w]*3, total_age[q][w]);
		}
	}
		fclose(fout);
}







