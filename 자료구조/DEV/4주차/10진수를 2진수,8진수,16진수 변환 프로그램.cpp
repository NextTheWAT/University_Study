#include <cstdlib>
#include <iostream>
#include <stdio.h> 
const static char NUMBERS[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
 /* 10 ������ 2 ~ 16������ �����ϴ� �Լ� */
void decimal_to_base_number(long num, int base) 
{ long temp = num;

if(base < 2 || base > 16) 
{ printf("2 ~ 16������ ���� �����մϴ�.\n"); 
return; 
} 
if(num <= 0) 
{ return; } 
temp /= base; 
decimal_to_base_number(temp, base); 
printf("%c", NUMBERS[num % base]); 
} int main(void) 
{ long number; 
printf("10���� ���� �Է�: "); 
scanf("%ld", &number); 
printf("\n2����: ");
 decimal_to_base_number(number, 2); 
 printf("\n8����: ");
  decimal_to_base_number(number, 8);
   printf("\n16����: "); 
   decimal_to_base_number(number, 16); return 0; 
   }

