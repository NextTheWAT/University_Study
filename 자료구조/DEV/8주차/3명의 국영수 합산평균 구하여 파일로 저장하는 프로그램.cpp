#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

int main(){

    FILE* fout;

    int score[2][3][3];       //2������ �л� 3�� 3���� ������ üũ
    int total[2][3] = {0};   //o���� o�л� ���� ���հ� ����
    int total_age[2][3] = {0};  //o���� o�л� ���� ��� ����
    int a, b, c, d, e,f;

    (fout = fopen("Class.txt", "wt")) == NULL;
 
    for (c = 0; c < 1; c++)
   {   //���� �Է¹��� 
        for (b = 0; b < 3; b++)
      {   //���� �Է¹���
            printf("%d�� %d�� �л��� ����, ����, ��������: ", c + 1, b + 1);
            scanf("%d %d %d", &score[c][b][0], &score[c][b][1], &score[c][b][2]);
        }
        printf("\n");
    }
    //b=1 �϶� ���ھ� �ް� b=2�϶� ���ھ� �ް� b=3�ϋ� ���ھ� �ް� 


    for (e = 0; e < 1; e++)//���հ� ������ ��հ� ���ϱ� 
   {     
        for (d = 0; d < 3; d++)
      {
         total[e][d] +=score[e][d][0]+score[e][d][1]+score[e][d][2];
            total_age[e][d] = (total[e][d])/3;
        }
    }

    for(int i=0; i<1; i++){
        for(int j=0; j<3; j++){
            printf("%d���� %d�� �л� ��,��,��\n����: %d\n���: %d\n\n", i+1, j+1, total[i][j], total_age[i][j]);
        }
    }

    for(int q=0; q<1; q++){
        for(int w=0; w<3; w++){
            fprintf(fout, "%d�� %d�� �л� �հ�: %d ��� : %d \n", q+1, w+1, total[q][w], total_age[q][w]);
        }
    }
        fclose(fout);
}
