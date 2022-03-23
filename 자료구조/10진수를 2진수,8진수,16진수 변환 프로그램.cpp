#include <cstdlib>
#include <iostream>
#include <stdio.h> 
const static char NUMBERS[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
 /* 10 진수를 2 ~ 16진수로 변한하는 함수 */
void decimal_to_base_number(long num, int base) 
{ long temp = num;

if(base < 2 || base > 16) 
{ printf("2 ~ 16진수만 지원 가능합니다.\n"); 
return; 
} 
if(num <= 0) 
{ return; } 
temp /= base; 
decimal_to_base_number(temp, base); 
printf("%c", NUMBERS[num % base]); 
} int main(void) 
{ long number; 
printf("10진수 정수 입력: "); 
scanf("%ld", &number); 
printf("\n2진수: ");
 decimal_to_base_number(number, 2); 
 printf("\n8진수: ");
  decimal_to_base_number(number, 8);
   printf("\n16진수: "); 
   decimal_to_base_number(number, 16); return 0; 
   }

