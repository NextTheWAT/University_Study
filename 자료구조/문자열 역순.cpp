#include <stdio.h>

int main()
{
 char arr[100];
 char temp;
 int leng = 0;
 
 printf("문자열을 입력하세요 : ");
 scanf("%s", arr);

     while (arr[leng] != '\0')
          leng++;

 for (int i = 0; i < leng/2; i++){
      temp = arr[i];
      arr[i] = arr[leng - i - 1];
      arr[leng - i - 1] = temp;
  }
  
 printf("변경된 문자 : %s\n", arr);
 
}
