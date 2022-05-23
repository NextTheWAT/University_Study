#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARINGS
#include <windows.h>


struct HealthMtg //�ｺ ���� ����ü
{
   char name[10];
   int age[10];
   int time[10];
   int number[10];//ȸ�� ��ȣ 
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
         num[i].time[j] = -1;//�ʱ�ȭ 
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
            printf("���� �ϰڽ��ϴ�.");
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
      printf("      �ｺ�� ȸ�� ���� ���α׷�       \n");
      printf("         1. �ű� ���� ���            \n");
      printf("         2. ȸ�� ���� ���            \n");
      printf("         3. ȸ�� ���� ����            \n");
      printf("         4. ȸ�� ���� ����            \n");
      printf("         5. ȸ�� ���� �˻�            \n");
      printf("         6. ȸ�� ���� ����            \n");
       printf("         7. ���� ���                 \n");
      printf("         0. ����                      \n");
      printf("-------------------------------------------\n");
}

void inputMenu(struct HealthMtg* num)
{
   printf("-------------------------------------------\n");
   printf("         1. �Է� Ȩ                   \n");
   printf("         2. ���Ͽ� ����               \n");
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
   printf("������ �Է��ϼ���\n");
      for(i=0;i<10;i++)
    {
      if((*(num+i)).number[0] == -1)
        {
         break;
        }
   }
   printf("�̸� : ");  scanf("%s",(*(num+i)).name);
   fflush(stdin);
   printf("ȸ�� ��ȣ : "); scanf("%d",&(*(num+i)).number);
   fflush(stdin);
   printf("���� : ");  scanf("%d",(*(num+i)).age);
   printf("��� �ð� : "); scanf("%d",(*(num+i)).time);
   fflush(stdin);
   FILE* fp = fopen("Health.txt","w");
   fprintf(fp," %8s     | %5s     | %5s     | %5s     |\n","�̸�","ȸ�� ��ȣ","����","��� �ð�");
   for(j=0; j<10; j++)
   {
      if((*(num+j)).number[0] != -1)
      {
         fprintf(fp," %8s     | %5d     | %5d     | %5d ����    |\n",(*(num+j)).name,(*(num+j)).number[0], (*(num+j)).age[0],(*(num+j)).time[0]);
      } 
   }
   fclose(fp);
   printf("����Ǿ����ϴ�.");
}

void outputFunc(struct HealthMtg* num)
{
    int i;
    printf("������ ����մϴ�\n");
    printf(" %8s     | %5s     | %5s     | %5s     |\n","�̸�","ȸ�� ��ȣ","����","��� �ð�");
    
    for(i=0;i<10;i++)
   {
      if((*(num+i)).number[0] != -1)
      {
         printf(" %8s     | %5d     | %5d     | %5d ����    |\n",(*(num+i)).name,(*(num+i)).number[0], (*(num+i)).age[0],(*(num+i)).time[0]); 
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
   
    printf("�˻� �� �̸� > ");
    if((i = searchFunc(num)) >= 0)
    {
       printf(" %8s     | %5d     | %5d     | %5d     |\n",(*(num+i)).name, (*(num+i)).number[0], (*(num+i)).age[0], (*(num+i)).time[0]);
    }
    else
    {
     printf(" �˻� ������ �����ϴ� \n");
     printf(" �޴��� ���ư��ڽ��ϴ� \n");
    }
}

void DelFunc(struct HealthMtg* num)
{
   int i,j;
   
   printf("������ �̸� >");
   if((i = searchFunc(num)) >= 0)
   {
      for(j=0;j<10;j++)
        {
            (*(num+i)).name[j] = -1;
            (*(num+i)).number[j] = -1;
            (*(num+i)).age[j] = -1;
            (*(num+i)).time[j] = -1;
        }
      printf("���� �Ͽ����ϴ�.\n");
   }
   else
   {
   printf(" �ش� ������ �����ϴ� \n");
     printf(" �޴��� ���ư��ڽ��ϴ� \n");
   }
   
   FILE* fp = fopen("Health.txt","w");
   fprintf(fp," %8s     | %5s     | %5s     | %5s     |\n","�̸�","ȸ�� ��ȣ","����","��� �ð�");
   for(j=0; j<10; j++)
   {
      if((*(num+j)).number[0] != -1)
      {
         fprintf(fp," %8s     | %5d     | %5d     | %5d ����    |\n",(*(num+j)).name,(*(num+j)).number[0], (*(num+j)).age[0],(*(num+j)).time[0]);
      } 
   }
   fclose(fp);
   printf("����Ǿ����ϴ�.");
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
