#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

//詭景 薑爾 掘褻羹
typedef struct _MENU 
{
   char drink[30];
   char price[30];
}MENU;

//堅偌 薑爾 掘褻羹
typedef struct _customer 
{
   char name[30];
   char phone[30];
   char drink[30];
}CUSTOMER;

//廓��ル 掘褻羹
typedef struct _ticket_number 
{
   char number[30];
   char name[30];
   char drink[30];
   char price[30];
}TICKET_NUMBER;


//л熱
void new_add_menu();           //詭景 蹺陛 
void new_add_customer();      //堅偌 蹺陛 
void new_add_ticker_number();      //廓��ル 蹺陛 

int search_menu();            //詭景 匐儀 
int search_customer();         //堅偌 匐儀 
int search_ticket_number();      //廓��ル 匐儀 

void edit_customer();         //堅偌 熱薑 
void edit_menu();            //詭景 熱薑 

void del_customer();         //堅偌 餉薯 
void del_menu();            //詭景 餉薯 
void del_ticket();

void view_menu();            //詭景 瞪羹 爾晦 
void view_customer();         //堅偌薑爾 瞪羹 爾晦 
void view_ticket_number();      // 廓��ル 瞪羹 爾晦 

int cross_search();       // 掖離匐儀 

void end();                  //部頂晦 

void input_menu();             //��轎ц擊 ?? 薑爾蒂 瞪睡 掘褻羹縑 氬朝 л熱
void input_customer();
void input_ticket_number();

void SetTextColor(int background, int text) // UI
{
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (background<<4) | text);
   //寡唳儀檣 background蒂 4綠お 擅戲煎 爾頂堅, text諦 渦ж罹 瞳辨
}

//掘褻羹 寡翮 瞪羲滲熱 摹樹
MENU menu_info[200];
int menu_idx=0;        //詭景 薑爾 蘋遴た

CUSTOMER customer_info[200];
int customer_idx=0;        //堅偌 薑爾 蘋遴た

TICKET_NUMBER ticket_number_info[200];
int ticket_number_idx=0;        //廓��ル 薑爾 蘋遴た


int main()  //詭檣�飛�
{
   int i, sel=1, idx;
   input_menu();
   input_customer();
   input_ticket_number();

   SetTextColor(15, 0); //15: �羃�, 0: 匐擎儀

   while(sel!=16)
   {
      system("cls"); //�飛橧鶹麇�    
      printf("旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬\n");
      printf("早                            早\n");
      printf("早     蘋む 婦葬 Щ煎斜極     早\n"); 
      printf("早                            早\n");
      printf("早㏑㏑㏑㏑㏑㏑蹺陛㏑㏑㏑㏑㏑㏑早\n");
      printf("早  1.  褐敘 詭景 蹺陛        早\n");
      printf("早  2.  褐敘 堅偌 蹺陛        早\n");
      printf("早  3.  廓��ル 蹺陛           早\n");
      printf("早㏑㏑㏑㏑㏑㏑匐儀㏑㏑㏑㏑㏑㏑早\n");
      printf("早  4.  晦襄 詭景 匐儀        早\n");
      printf("早  5.  晦襄 堅偌 匐儀        早\n");
      printf("早  6.  廓��ル 匐儀           早\n");
      printf("早㏑㏑㏑㏑㏑㏑熱薑㏑㏑㏑㏑㏑㏑早\n");
      printf("早  7.  晦襄 堅偌 熱薑        早\n");
      printf("早  8.  晦襄 詭景 熱薑        早\n");
      printf("早㏑㏑㏑㏑㏑㏑餉薯㏑㏑㏑㏑㏑㏑早\n");
      printf("早  9.  晦襄 堅偌 餉薯        早\n");
      printf("早  10. 晦襄 詭景 餉薯        早\n");
      printf("早  11. 晦襄 廓��ル 餉薯      早\n");
      printf("早㏑㏑㏑㏑㏑瞪羹爾晦㏑㏑㏑㏑㏑早\n");
      printf("早  12. 詭景 瞪羹 爾晦        早\n");
      printf("早  13. 堅偌 瞪羹 爾晦        早\n");
      printf("早  14. 廓��ル 瞪羹 爾晦      早\n");
      printf("早㏑㏑㏑㏑㏑掖離匐儀㏑㏑㏑㏑㏑早\n");
      printf("早  15. 掖離 匐儀             早\n");
      printf("早㏑㏑㏑㏑㏑㏑謙猿㏑㏑㏑㏑㏑㏑早\n");
      printf("早  16. Щ煎斜極 謙猿         早\n");
      printf("曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭\n");
      printf("  錳ж朝 詭景蒂 摹鷗ж撮蹂: ");

      scanf("%d", &sel) ;

switch(sel)
      {
      case 1:
         new_add_menu();
         break;
      case 2:
         new_add_customer();
         break;
      case 3:
         new_add_ticker_number();
         break;
      case 4:
         search_menu();
         break;
      case 5:
         search_customer();
         break;
      case 6:
         search_ticket_number();
         break;
      case 7:
         edit_customer();
         break;
      case 8:
         edit_menu();
         break;
      case 9:
         del_customer();
         break;
      case 10:
         del_menu();
         break;
      case 11:
        del_ticket(); 
         break;
      case 12:
         view_menu();
         break;
      case 13:
         view_customer();
         break;
      case 14:
        view_ticket_number();
         break;
      case 15:
         cross_search();
         break;
      case 16:
         end();
         break;
         
      default:
         printf("\n澀跤 摹鷗ж樟蝗棲棻.\n");
         break;
      }
     
      printf("\n濛機擊 諫猿ж艘蝗棲棻.\n億煎遴 詭景蒂 摹鷗ж溥賊 Enter蒂 揚楝輿撮蹂.\n");
      getch(); // о跡 殮溘 嫡晦 渠晦 -> 縛攪纂賊 億照啪 о犒 摹鷗 陛棟
   }
   return 0;
}

//堅偌 薑爾 だ橾縑憮 殮溘嫡晦 
void input_customer()
 {
   FILE* c_fp = fopen("Customer.txt", "r");
   char line[150];
   char* ptr;
   int word_cnt;

    //堅偌 薑爾 殮溘 
   while(fscanf(c_fp, "%s", line)>0)
   {
      word_cnt = 0;
      ptr = strtok(line,","); //","欽嬪煎 澀塭頂朝 strtokл熱  
      while(ptr!=NULL)
      {
         word_cnt++;
         switch(word_cnt)
         {
         case 1: //char name
            strcpy(customer_info[customer_idx].name, ptr);
            break;
         case 2: //char phone
            strcpy(customer_info[customer_idx].phone, ptr);
            break;
         }
         ptr=strtok(NULL,",");
      }
      customer_idx++;
   }
   fclose(c_fp); 
}
// 詭景 薑爾 だ橾縑憮 殮溘 嫡晦 
void input_menu()
 {
   FILE* fp = fopen("Menu.txt", "r");
   char line[150];
   char* ptr;
   int word_cnt;

   //詭景 薑爾 殮溘 
   while(fscanf(fp, "%s", line)>0)
   {
      word_cnt = 0;
      ptr = strtok(line,","); //","欽嬪煎 澀塭頂朝 strtok л熱 
      while(ptr!=NULL)
      {
         word_cnt++;
         switch(word_cnt)
         {
         case 1: //char drink
            strcpy(menu_info[menu_idx].drink, ptr);
            break;
         case 2: //char price
            strcpy(menu_info[menu_idx].price, ptr);
            break;
         }
         ptr=strtok(NULL,",");
      }
      menu_idx++;
   }
   fclose(fp); 
}
//廓��ル 薑爾 だ橾縑憮 殮溘嫡晦 
void input_ticket_number()
 {
   FILE* fp = fopen("Ticket_number.txt", "r");
   char line[150];
   char* ptr;
   int word_cnt;
//   int count=0; //廓��ル 睡罹  (x)

   //薑爾 殮溘 
   while(fscanf(fp, "%s", line)>0)
   {
      word_cnt = 0;
      ptr = strtok(line,","); //","欽嬪煎 澀塭頂朝 strtok л熱 
      while(ptr!=NULL)
      {
         word_cnt++;          
         switch(word_cnt)
         {
         case 1: //char number
            strcpy(ticket_number_info[ticket_number_idx].number, ptr);
            break;
         case 2: //char name
            strcpy(ticket_number_info[ticket_number_idx].name, ptr);
            break;
         case 3: //char drink
            strcpy(ticket_number_info[ticket_number_idx].drink, ptr);
            break;
         case 4: //char price
            strcpy(ticket_number_info[ticket_number_idx].price, ptr);
            break;
        }
         ptr=strtok(NULL,",");
      }
      ticket_number_idx++;
   }
   fclose(fp); 
}




//1. 褐敘 詭景 蹺陛
void new_add_menu()
{
   FILE* fp = fopen("Menu.txt", "a");
   
   system("cls");
    printf("旨收收收收收收收收收收收收收收收收收收收收收收收收收收旬\n");
    printf("早                          早\n");
   printf("早      褐敘 詭景 蹺陛      早\n");
   printf("早                          早\n");
   printf("曲收收收收收收收收收收收收收收收收收收收收收收收收收收旭\n");   

   printf("\n"); 
   printf("詭景 檜葷: ");
   scanf("%s", &menu_info[menu_idx].drink);
   printf("陛問: ");
   scanf("%s", &menu_info[menu_idx].price);
   printf("=====================\n");
   printf("褐敘 詭景 蹺陛 諫猿\n");
   printf("=====================\n");



   fprintf(fp, "%s,%s\n", menu_info[menu_idx].drink, menu_info[menu_idx].price);
   menu_idx++;
   fclose(fp);
}

//2. 褐敘 堅偌 薑爾 蹺陛 
void new_add_customer()
{
   FILE* c_fp = fopen("Customer.txt", "a");
   
   system("cls");
    printf("旨收收收收收收收收收收收收收收收收收收收收收收收收收收旬\n");
    printf("早                          早\n");
   printf("早      褐敘 堅偌 蹺陛      早\n");
   printf("早                          早\n");
   printf("曲收收收收收收收收收收收收收收收收收收收收收收收收收收旭\n");   



   printf("\n");
   printf("堅偌 檜葷: ");
   scanf("%s", &customer_info[customer_idx].name);
   printf("堅偌 瞪�食醽�: ");
   scanf("%s", &customer_info[customer_idx].phone);
   printf("====================\n");
   printf("褐敘 堅偌 蹺陛 諫猿\n");
   printf("====================\n");
   
   fprintf(c_fp, "\n%s,%s\n", customer_info[customer_idx].name, customer_info[customer_idx].phone);
   customer_idx++;
   fclose(c_fp);
}


//3. 褐敘 廓��ル 蹺陛 
void new_add_ticker_number()
{
   FILE* fp = fopen("Ticket_number.txt", "a");
   system("cls");
    printf("旨收收收收收收收收收收收收收收收收收收收收收收收收收收旬\n");
    printf("早                          早\n");
   printf("早     褐敘 廓��ル  蹺陛    早\n");
   printf("早                          早\n");
   printf("曲收收收收收收收收收收收收收收收收收收收收收收收收收收旭\n");   

   
   printf("\n");
   printf("廓��: ");
   scanf("%s", &ticket_number_info[ticket_number_idx].number);
   printf("檜葷: ");
   scanf("%s", &ticket_number_info[ticket_number_idx].name);
   printf("擠猿: ");
   scanf("%s", &ticket_number_info[ticket_number_idx].drink);
   printf("陛問: ");
   scanf("%s", &ticket_number_info[ticket_number_idx].price);

   fprintf(fp, "%s,%s,%s,%s\n", ticket_number_info[ticket_number_idx].number, ticket_number_info[ticket_number_idx].name, ticket_number_info[ticket_number_idx].drink, ticket_number_info[ticket_number_idx].price);
   ticket_number_idx++;
   
   fclose(fp);
}

//4. 詭景 謙盟煎 匐儀ж晦 
int search_menu()
{
   int i;
   char drink[30]; //罹晦縑 殮溘й 檜葷 

   system("cls");
   printf("旨收收收收收收收收收收收收收收收收收收收收收收收收收收旬\n");
   printf("早                          早\n");
   printf("早        詭景 匐儀         早\n");
   printf("早                          早\n");
   printf("曲收收收收收收收收收收收收收收收收收收收收收收收收收收旭\n");   

   printf("\n擠猿 檜葷: ");
   scanf("%s", &drink);
   for(i=0; i<=menu_idx; i++) //menu 嶸蹂и 寡翮虜躑 給董棲棻. 
   {
      if(strcmp(drink, menu_info[i].drink)==0)
      { //strcmpл熱 餌辨 -> 殮溘и drink婁 掘褻羹 寡翮曖 詭景陛 橾纂ж賊 0擊 奩��. 
             printf("=====================\n");
            printf("擠猿: %s \n陛問: %s\n", menu_info[i].drink, menu_info[i].price);
             printf("=====================\n");
            return i;
      }
      
      else if(strcmp(drink, menu_info[i].drink)!=0 && i==menu_idx)
      {
            printf("============================\n");
             printf("瓊戲衛朝 薑爾陛 橈蝗棲棻.\n");
             printf("============================\n");
             return i;
      }
      
      else
      continue;
   }
}

//5. 檜葷戲煎 堅偌 薑爾 匐儀 
int search_customer()
{
   int i;
   char name[30];
   
      system("cls");
    printf("旨收收收收收收收收收收收收收收收收收收收收收收收收收收旬\n");
    printf("早                          早\n");
   printf("早        堅偌 匐儀         早\n");
   printf("早                          早\n");
   printf("曲收收收收收收收收收收收收收收收收收收收收收收收收收收旭\n");   
   
   printf("\n檜葷: ");
   scanf("%s", &name);
   for(i=0; i<=customer_idx; i++) 
   {
      if(strcmp(name, customer_info[i].name)==0)
     {  //堅偌曖 嶸鼠縑 評塭 奩�納炱� 嬪и ⑽鷓
         printf("=================================\n");
         printf("堅偌 檜葷: %s \n堅偌 瞪�食醽�: %s\n", customer_info[i].name, customer_info[i].phone);   
         printf("=================================\n");
         return i;
       }
       
       else if(strcmp(name ,customer_info[i].name)!=0 && i==customer_idx)
       {
          printf("============================\n");
          printf("瓊戲衛朝 薑爾陛 橈蝗棲棻.\n");
          printf("============================\n");
      return i;   
     }
     
     else continue;
   }
}

//6. 廓��ル 褻�� 
int search_ticket_number()
{
   int i;
   char number[30];
   
      system("cls");
    printf("旨收收收收收收收收收收收收收收收收收收收收收收收收收收旬\n");
    printf("早                          早\n");
   printf("早       廓��ル 匐儀        早\n");
   printf("早                          早\n");
   printf("曲收收收收收收收收收收收收收收收收收收收收收收收收收收旭\n");   

   
   printf("\n廓��ル: ");
   scanf("%s", &number);
   for(i=0; i<ticket_number_idx; i++) 
   {
      if(strcmp(number, ticket_number_info[i].number)==0)
     {  
      printf("=====================\n");
      printf("廓��: %s \n檜葷: %s \n擠猿: %s \n陛問: %s \n", ticket_number_info[i].number, ticket_number_info[i].name,ticket_number_info[i].drink,ticket_number_info[i].price);
       printf("=====================\n");
         return i;
        }
   }
   return -1;
}

//7. 堅偌 薑爾 熱薑 
 void edit_customer()
{
   int i, j, k;
   char name[20];
   char info[20];
   
      system("cls");
    printf("旨收收收收收收收收收收收收收收收收收收收收收收收收收收收旬\n");
    printf("早                           早\n");
   printf("早      堅偌 薑爾 熱薑       早\n");
   printf("早                           早\n");
   printf("曲收收收收收收收收收收收收收收收收收收收收收收收收收收收旭\n");   


   
   printf("\n檜葷擊 殮溘п輿撮蹂: "); 
   scanf("%s", name);
   printf("\n");

   for(i=0; i<customer_idx; i++)
   {
      if(strcmp(name, customer_info[i].name)==0)
      { 
         printf("檜葷: %s\n瞪�食醽�: %s\n", customer_info[i].name, customer_info[i].phone);
         printf("\n");
         printf("1.檜葷 2.瞪�食醽αn");
         printf("廓�ㄧ� 摹鷗ж撮蹂: ");
         scanf("%d", &j);
         if(j==1)
         {
            printf("熱薑й 檜葷: ");
            scanf("%s", customer_info[i].name); 
         } 
         else if(j==2)
         {
            printf("熱薑й 瞪�食醽�: ");
            scanf("%s", customer_info[i].name); 
         } 
         printf("\n");
      }
   }
}

//8. 詭景 薑爾 熱薑 
 void edit_menu()
{
   int i, j, k;
   char drink[20];
   char info[20];
   
      system("cls");
    printf("旨收收收收收收收收收收收收收收收收收收收收收收收收收收旬\n");
    printf("早                          早\n");
   printf("早        詭景 熱薑         早\n");
   printf("早                          早\n");
   printf("曲收收收收收收收收收收收收收收收收收收收收收收收收收收旭\n");   

   
   printf("\n詭景蒂 殮溘п輿撮蹂: "); 
   scanf("%s", drink);
   printf("\n");

   for(i=0; i<menu_idx; i++)
   {
      if(strcmp(drink, menu_info[i].drink)==0)
      {
         printf("擠猿: %s\n陛問: %s\n", menu_info[i].drink, menu_info[i].price);
         printf("\n");
         printf("1.擠猿 2.陛問\n");
         printf("廓�ㄧ� 摹鷗ж撮蹂: ");
         scanf("%d", &j);
         if(j==1)
         {
            printf("熱薑й 擠猿: ");
            scanf("%s", menu_info[i].drink); 
         } 
         else if(j==2)
         {
            printf("熱薑й 陛問: ");
            scanf("%s", menu_info[i].price); 
         } 
         printf("\n");
      }
   }
}



//9. 晦襄 堅偌 餉薯 
void del_customer()
 {   
   FILE* fp = fopen("Customer.txt", "r+");
    int i=0;
   char name[30];
   
      system("cls");
    printf("旨收收收收收收收收收收收收收收收收收收收收收收收收收收旬\n");
    printf("早                          早\n");
   printf("早        堅偌 餉薯         早\n");
   printf("早                          早\n");
   printf("曲收收收收收收收收收收收收收收收收收收收收收收收收收收旭\n");   

   
   printf("\n檜葷: ");
   scanf("%s", &name);   

    //殮溘脹 檜葷戲煎 堅偌 薑爾 餉薯 
    for(i=0; i<customer_idx; i++)
    {
        //餉薯й 堅偌 薑爾 轎溘
        if(strcmp(name, customer_info[i].name)==0)
        {
           printf("====================\n");
           printf("餉薯й 堅偌 檜葷\n檜葷: %s\n瞪�食醽�: %s\n",customer_info[i].name, customer_info[i].phone);
           printf("====================\n");
            memset(&customer_info[i], 0x00, sizeof(CUSTOMER));
         fprintf(fp, "%s %s\n", customer_info[i].name, customer_info[i].phone);
         fclose(fp);
        }
    }
}




//10. 晦襄 詭景 餉薯 
void del_menu()
 {   
   FILE* fp = fopen("Menu.txt", "r+");

    int i=0;
   char drink[30];
   
      system("cls");
    printf("旨收收收收收收收收收收收收收收收收收收收收收收收收收收旬\n");
    printf("早                          早\n");
   printf("早        詭景 餉薯         早\n");
   printf("早                          早\n");
   printf("曲收收收收收收收收收收收收收收收收收收收收收收收收收收旭\n");   

   
   printf("\n詭景 檜葷: ");
   scanf("%s", &drink);   

    //殮溘脹 詭景煎 擠猿 薑爾 餉薯 
    for(i=0; i<menu_idx; i++)
    {
        //餉薯й 擠猿 薑爾 轎溘
        if(strcmp(drink, menu_info[i].drink)==0)
        {
           printf("====================\n");
           printf("餉薯й 詭景\n擠猿: %s\n陛問: %s\n",menu_info[i].drink, menu_info[i].price);
           printf("====================\n");
           memset(&menu_info[i], 0x00, sizeof(MENU));
         fprintf(fp, "%s %s\n", menu_info[i].drink, menu_info[i].price);
         fclose(fp);
        }
    }
}


//11. 晦襄 廓��ル 餉薯  
void del_ticket()
 {   
   FILE* fp = fopen("Ticket_number.txt", "r+");
    int i=0;
   char num[30];
   
      system("cls");
    printf("旨收收收收收收收收收收收收收收收收收收收收收收收收收收旬\n");
    printf("早                          早\n");
   printf("早        廓��ル 餉薯        早\n");
   printf("早                          早\n");
   printf("曲收收收收收收收收收收收收收收收收收收收收收收收收收收旭\n");   

    
   printf("\n 廓��ル 廓��: ");
   scanf("%s", &num);   

    
    for(i=0; i<ticket_number_idx; i++) 
    {
       
        if(strcmp(num, ticket_number_info[i].number)==0)
        {
           printf("====================\n");
           printf("餉薯腎歷蝗棲棻!\n"); //擠猿 薑爾 餉薯 
           printf("====================\n");
           memset(&ticket_number_info[i], 0x00, sizeof(TICKET_NUMBER));
         fprintf(fp, "%s %s %s %s\n", ticket_number_info[i].number, ticket_number_info[i].name, ticket_number_info[i].drink, ticket_number_info[i].price);
         fclose(fp);
        }
    }
}




//11. 詭景 瞪羹爾晦
void view_menu()
{
   int i;
   
      system("cls");
    printf("旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬\n");
    printf("早                            早\n");
   printf("早        詭景 瞪羹爾晦       早\n");
   printf("早                            早\n");
   printf("曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭\n");   

   
   printf("\n          Menu                    Price \n");
   printf("------------------------------------------------\n");
   for(i=0; i<menu_idx; i++) //嶸�褲� 寡翮 碳楝螃晦 
   {
      printf("%15s%20s\n",menu_info[i].drink,menu_info[i].price);
   }
}





//12. 堅偌 瞪羹爾晦  
void view_customer()
{
   int i;
   
         system("cls");
    printf("旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬\n");
    printf("早                            早\n");
   printf("早        堅偌 瞪羹爾晦       早\n");
   printf("早                            早\n");
   printf("曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭\n");   
   
   printf("\n          Name           Phone       \n");
   printf("---------------------------------------\n");
   for(i=0; i<customer_idx; i++)
   {
      printf("%15s%20s\n", customer_info[i].name, customer_info[i].phone);
   }
}





//13. 廓��ル 瞪羹爾晦  
void view_ticket_number()
{
   int i;
   
         system("cls");
    printf("旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬\n");
    printf("早                              早\n");
   printf("早        廓��ル 瞪羹爾晦       早\n");
   printf("早                              早\n");
   printf("曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭\n");   
   printf("\n          廓��           檜葷           擠猿           陛問\n");
   printf("-------------------------------------------------------------\n");
   for(i=0; i<ticket_number_idx; i++)
   {
      printf("%12s%15s%18s%15s\n", ticket_number_info[i].number, ticket_number_info[i].name, ticket_number_info[i].drink, ticket_number_info[i].price);
   }
}






//14. 詭景 謙盟, 堅偌 謙盟 匐儀ж晦 
int cross_search()
{
   int i,j;
   char drink[30]; //罹晦縑 殮溘й 檜葷 
   char name[30];

   system("cls");
    printf("旨收收收收收收收收收收收收收收收收收收收收收收收收收收旬\n");
    printf("早                          早\n");
   printf("早        掖離 匐儀         早\n");
   printf("早                          早\n");
   printf("曲收收收收收收收收收收收收收收收收收收收收收收收收收收旭\n");   

   
   printf("\n堅偌 檜葷: ");
   scanf("%s", &name);
   for(j=0; j<customer_idx; j++) 
   {
      if(strcmp(name,  ticket_number_info[j].name)==0) //堅偌曖 嶸鼠縑 評塭 奩�納炱� 嬪и ⑽鷓
     {  
         printf("堅偌 檜葷: %s \n 堅腦褐 詭景: %s\n", customer_info[j].name, ticket_number_info[j].drink);   
      return j; 
       }
    }
     
}


//typedef struct _ticket_number 
//{
//   char number[30];
//   char name[30];
//   char drink[30];
//   char price[30];
//}TICKET_NUMBER;


//15. Щ煎斜極 謙猿
void end()
{
   printf("\nЩ煎斜極擊 謙猿м棲棻\n");
   exit(1);
}

