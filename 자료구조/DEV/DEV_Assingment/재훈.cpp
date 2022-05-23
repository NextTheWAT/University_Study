#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARINGS
#include <windows.h>


struct HealthMtg //헬스 관리 구조체
{
   char name[10];
   int age[10];
   int time[10];
   int number[10];//회원 번호 
};


void menu();
void inputFunc(struct HealthMtg* num);
void outputFunc(struct HealthMtg* num);
int searchFunc(struct HealthMtg* num);
void SearchFunc(struct HealthMtg* num);
void DelFunc(struct HealthMtg* num);
void loadFile(struct HealthMtg* num);
void inputMenu(struct HealthMtg* num);

int main()
{
   struct HealthMtg num[10];
   int Healthnum,i,j;
   
   for(i=0; i<10; i++)
   {
      for(j=0; j<10; j++)
      {
         num[i].name[j] = -1;
         num[i].number[j] = -1;
         num[i].age[j] = -1;
         num[i].time[j] = -1;//초기화 
      }
   }
   
   while(1)
   {
      system("cls");
      menu();
      printf("->"); 
      scanf("%d", &Healthnum);
      fflush(stdin);
      system("cls");
      
      switch(Healthnum){
         case 1:
         {
            inputMenu(num);
            break;
         }
         case 2:
         {
             outputFunc(num);
             break;
         }
         case 3:
         {
            DelFunc(num);
            break;
         }
         case 4:
         {
            SearchFunc(num);
            break;
         }
         case 5 :
         {
            loadFile(num);
            break;
         }
         case 0:
         {
            printf("종료 하겠습니다.");
            return 0;
         }
         defult:
         {
            break;
         }
      }
      system("pause");
    }
    return 0;
}

void menu()
{
      printf("--------------------------------------------\n");
      printf("      헬스장 회원 관리 프로그램       \n");
      printf("         1. 신규 정보 등록            \n");
      printf("         2. 회원 정보 출력            \n");
      printf("         3. 회원 정보 삭제            \n");
      printf("         4. 회원 정보 수정            \n");
      printf("         5. 회원 정보 검색            \n");
      printf("         6. 회원 정보 정렬            \n");
       printf("         7. 파일 출력                 \n");
      printf("         0. 종료                      \n");
      printf("-------------------------------------------\n");
}

void inputMenu(struct HealthMtg* num)
{
   printf("-------------------------------------------\n");
   printf("         1. 입력 홈                   \n");
   printf("         2. 파일에 저장               \n");
   printf("-------------------------------------------\n");
   
   scanf("%d", &num);
   
         switch(Healthnum){
         case 1:
         {
            inputMenu(num);
            break;
         }
   
   
   inputFunc(a);
   
}


   
void inputFunc(struct HealthMtg* num)
{
   int i,j;
   printf("정보를 입력하세요\n");
      for(i=0;i<10;i++)
    {
      if((*(num+i)).number[0] == -1)
        {
         break;
        }
   }
   printf("이름 : ");  scanf("%s",(*(num+i)).name);
   fflush(stdin);
   printf("회원 번호 : "); scanf("%d",&(*(num+i)).number);
   fflush(stdin);
   printf("나이 : ");  scanf("%d",(*(num+i)).age);
   printf("등록 시간 : "); scanf("%d",(*(num+i)).time);
   fflush(stdin);
   FILE* fp = fopen("Health.txt","w");
   fprintf(fp," %8s     | %5s     | %5s     | %5s     |\n","이름","회원 번호","나이","등록 시간");
   for(j=0; j<10; j++)
   {
      if((*(num+j)).number[0] != -1)
      {
         fprintf(fp," %8s     | %5d     | %5d     | %5d 개월    |\n",(*(num+j)).name,(*(num+j)).number[0], (*(num+j)).age[0],(*(num+j)).time[0]);
      } 
   }
   fclose(fp);
   printf("저장되었습니다.");
}

void outputFunc(struct HealthMtg* num)
{
    int i;
    printf("정보를 출력합니다\n");
    printf(" %8s     | %5s     | %5s     | %5s     |\n","이름","회원 번호","나이","등록 시간");
    
    for(i=0;i<10;i++)
   {
      if((*(num+i)).number[0] != -1)
      {
         printf(" %8s     | %5d     | %5d     | %5d 개월    |\n",(*(num+i)).name,(*(num+i)).number[0], (*(num+i)).age[0],(*(num+i)).time[0]); 
      }
   }
}

int searchFunc(struct HealthMtg* num)
{
   int i;
 char searchName[10];

 scanf("%s",searchName);
 fflush(stdin);
 for(i=0; i<10; i++)
 {
  if(strcmp(searchName, (*(num+i)).name) == 0)
   return i;
 }
 return -1;
}

void SearchFunc(struct HealthMtg* num)
{
   int i;
   
    printf("검색 할 이름 > ");
    if((i = searchFunc(num)) >= 0)
    {
       printf(" %8s     | %5d     | %5d     | %5d     |\n",(*(num+i)).name, (*(num+i)).number[0], (*(num+i)).age[0], (*(num+i)).time[0]);
    }
    else
    {
     printf(" 검색 정보가 없습니다 \n");
     printf(" 메뉴로 돌아가겠습니다 \n");
    }
}

void DelFunc(struct HealthMtg* num)
{
   int i,j;
   
   printf("삭제할 이름 >");
   if((i = searchFunc(num)) >= 0)
   {
      for(j=0;j<10;j++)
        {
            (*(num+i)).name[j] = -1;
            (*(num+i)).number[j] = -1;
            (*(num+i)).age[j] = -1;
            (*(num+i)).time[j] = -1;
        }
      printf("삭제 하였습니다.\n");
   }
   else
   {
   printf(" 해당 정보가 없습니다 \n");
     printf(" 메뉴로 돌아가겠습니다 \n");
   }
   
   FILE* fp = fopen("Health.txt","w");
   fprintf(fp," %8s     | %5s     | %5s     | %5s     |\n","이름","회원 번호","나이","등록 시간");
   for(j=0; j<10; j++)
   {
      if((*(num+j)).number[0] != -1)
      {
         fprintf(fp," %8s     | %5d     | %5d     | %5d 개월    |\n",(*(num+j)).name,(*(num+j)).number[0], (*(num+j)).age[0],(*(num+j)).time[0]);
      } 
   }
   fclose(fp);
   printf("저장되었습니다.");
}

void loadFile(struct HealthMtg* num)
{
   int c;
   FILE *fp = NULL;
   
   fp = fopen("Health.txt","r");
   
   while((c = fgetc(fp)) != EOF)
   {
      putchar(c);
   }
   
   fclose(fp);
}   
