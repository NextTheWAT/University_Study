#include <stdio.h>
#include <string.h>

int str_cnt(char ptr1[], char ptr2[])
{
	printf("���ڿ� ���� ���ϴ� ���α׷�\n");
  int i, j, k;
  int count = 0;
  for(i=0; ptr1[i] != NULL; i++)
  for(j=i, k=0; ptr2[k] == ptr1[j]; k++, j++)
   if(ptr2[k+1] == NULL){
    count++;
    break;
  }
  return ((count == 0) ? -1 : count);
}
int main(void) {
    
    int cnt=0;
    cnt = str_cnt("hello hello World","hello");
    
    printf("���ڿ� ī��Ʈ : %d \n",cnt);
    return 0;
}
