#include <stdio.h>

int main()
{
 char arr[100];
 char temp;
 int leng = 0;
 
 printf("���ڿ��� �Է��ϼ��� : ");
 scanf("%s", arr);

     while (arr[leng] != '\0')
          leng++;

 for (int i = 0; i < leng/2; i++){
      temp = arr[i];
      arr[i] = arr[leng - i - 1];
      arr[leng - i - 1] = temp;
  }
  
 printf("����� ���� : %s\n", arr);
 
}
