#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

//¸Þ´º Á¤º¸ ±¸Á¶Ã¼
typedef struct _MENU 
{
   char drink[30];
   char price[30];
}MENU;

//°í°´ Á¤º¸ ±¸Á¶Ã¼
typedef struct _customer 
{
   char name[30];
   char phone[30];
   char drink[30];
}CUSTOMER;

//¹øÈ£Ç¥ ±¸Á¶Ã¼
typedef struct _ticket_number 
{
   char number[30];
   char name[30];
   char drink[30];
   char price[30];
}TICKET_NUMBER;


//ÇÔ¼ö
void new_add_menu();           //¸Þ´º Ãß°¡ 
void new_add_customer();      //°í°´ Ãß°¡ 
void new_add_ticker_number();      //¹øÈ£Ç¥ Ãß°¡ 

int search_menu();            //¸Þ´º °Ë»ö 
int search_customer();         //°í°´ °Ë»ö 
int search_ticket_number();      //¹øÈ£Ç¥ °Ë»ö 

void edit_customer();         //°í°´ ¼öÁ¤ 
void edit_menu();            //¸Þ´º ¼öÁ¤ 

void del_customer();         //°í°´ »èÁ¦ 
void del_menu();            //¸Þ´º »èÁ¦ 
void del_ticket();

void view_menu();            //¸Þ´º ÀüÃ¼ º¸±â 
void view_customer();         //°í°´Á¤º¸ ÀüÃ¼ º¸±â 
void view_ticket_number();      // ¹øÈ£Ç¥ ÀüÃ¼ º¸±â 

int cross_search();       // ±³Â÷°Ë»ö 

void end();                  //³¡³»±â 

void input_menu();             //È£ÃâÇßÀ» ?? Á¤º¸¸¦ ÀüºÎ ±¸Á¶Ã¼¿¡ ´ã´Â ÇÔ¼ö
void input_customer();
void input_ticket_number();

void SetTextColor(int background, int text) // UI
{
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (background<<4) | text);
   //¹è°æ»öÀÎ background¸¦ 4ºñÆ® ¾ÕÀ¸·Î º¸³»°í, text¿Í ´õÇÏ¿© Àû¿ë
}

//±¸Á¶Ã¼ ¹è¿­ Àü¿ªº¯¼ö ¼±¾ð
MENU menu_info[200];
int menu_idx=0;        //¸Þ´º Á¤º¸ Ä«¿îÆÃ

CUSTOMER customer_info[200];
int customer_idx=0;        //°í°´ Á¤º¸ Ä«¿îÆÃ

TICKET_NUMBER ticket_number_info[200];
int ticket_number_idx=0;        //¹øÈ£Ç¥ Á¤º¸ Ä«¿îÆÃ


int main()  //¸ÞÀÎÈ­¸é
{
   int i, sel=1, idx;
   input_menu();
   input_customer();
   input_ticket_number();

   SetTextColor(15, 0); //15: Èò»ö, 0: °ËÀº»ö

   while(sel!=16)
   {
      system("cls"); //È­¸éÁö¿ì±â    
      printf("¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯\n");
      printf("¦­                            ¦­\n");
      printf("¦­     Ä«Æä °ü¸® ÇÁ·Î±×·¥     ¦­\n"); 
      printf("¦­                            ¦­\n");
      printf("¦­¡ë¡ë¡ë¡ë¡ë¡ëÃß°¡¡ë¡ë¡ë¡ë¡ë¡ë¦­\n");
      printf("¦­  1.  ½Å±Ô ¸Þ´º Ãß°¡        ¦­\n");
      printf("¦­  2.  ½Å±Ô °í°´ Ãß°¡        ¦­\n");
      printf("¦­  3.  ¹øÈ£Ç¥ Ãß°¡           ¦­\n");
      printf("¦­¡ë¡ë¡ë¡ë¡ë¡ë°Ë»ö¡ë¡ë¡ë¡ë¡ë¡ë¦­\n");
      printf("¦­  4.  ±âÁ¸ ¸Þ´º °Ë»ö        ¦­\n");
      printf("¦­  5.  ±âÁ¸ °í°´ °Ë»ö        ¦­\n");
      printf("¦­  6.  ¹øÈ£Ç¥ °Ë»ö           ¦­\n");
      printf("¦­¡ë¡ë¡ë¡ë¡ë¡ë¼öÁ¤¡ë¡ë¡ë¡ë¡ë¡ë¦­\n");
      printf("¦­  7.  ±âÁ¸ °í°´ ¼öÁ¤        ¦­\n");
      printf("¦­  8.  ±âÁ¸ ¸Þ´º ¼öÁ¤        ¦­\n");
      printf("¦­¡ë¡ë¡ë¡ë¡ë¡ë»èÁ¦¡ë¡ë¡ë¡ë¡ë¡ë¦­\n");
      printf("¦­  9.  ±âÁ¸ °í°´ »èÁ¦        ¦­\n");
      printf("¦­  10. ±âÁ¸ ¸Þ´º »èÁ¦        ¦­\n");
      printf("¦­  11. ±âÁ¸ ¹øÈ£Ç¥ »èÁ¦      ¦­\n");
      printf("¦­¡ë¡ë¡ë¡ë¡ëÀüÃ¼º¸±â¡ë¡ë¡ë¡ë¡ë¦­\n");
      printf("¦­  12. ¸Þ´º ÀüÃ¼ º¸±â        ¦­\n");
      printf("¦­  13. °í°´ ÀüÃ¼ º¸±â        ¦­\n");
      printf("¦­  14. ¹øÈ£Ç¥ ÀüÃ¼ º¸±â      ¦­\n");
      printf("¦­¡ë¡ë¡ë¡ë¡ë±³Â÷°Ë»ö¡ë¡ë¡ë¡ë¡ë¦­\n");
      printf("¦­  15. ±³Â÷ °Ë»ö             ¦­\n");
      printf("¦­¡ë¡ë¡ë¡ë¡ë¡ëÁ¾·á¡ë¡ë¡ë¡ë¡ë¡ë¦­\n");
      printf("¦­  16. ÇÁ·Î±×·¥ Á¾·á         ¦­\n");
      printf("¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°\n");
      printf("  ¿øÇÏ´Â ¸Þ´º¸¦ ¼±ÅÃÇÏ¼¼¿ä: ");

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
         printf("\nÀß¸ø ¼±ÅÃÇÏ¼Ì½À´Ï´Ù.\n");
         break;
      }
     
      printf("\nÀÛ¾÷À» ¿Ï·áÇÏ¿´½À´Ï´Ù.\n»õ·Î¿î ¸Þ´º¸¦ ¼±ÅÃÇÏ·Á¸é Enter¸¦ ´­·¯ÁÖ¼¼¿ä.\n");
      getch(); // Ç×¸ñ ÀÔ·Â ¹Þ±â ´ë±â -> ¿£ÅÍÄ¡¸é »õ·Ó°Ô Ç×º¹ ¼±ÅÃ °¡´É
   }
   return 0;
}

//°í°´ Á¤º¸ ÆÄÀÏ¿¡¼­ ÀÔ·Â¹Þ±â 
void input_customer()
 {
   FILE* c_fp = fopen("Customer.txt", "r");
   char line[150];
   char* ptr;
   int word_cnt;

    //°í°´ Á¤º¸ ÀÔ·Â 
   while(fscanf(c_fp, "%s", line)>0)
   {
      word_cnt = 0;
      ptr = strtok(line,","); //","´ÜÀ§·Î Àß¶ó³»´Â strtokÇÔ¼ö  
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
// ¸Þ´º Á¤º¸ ÆÄÀÏ¿¡¼­ ÀÔ·Â ¹Þ±â 
void input_menu()
 {
   FILE* fp = fopen("Menu.txt", "r");
   char line[150];
   char* ptr;
   int word_cnt;

   //¸Þ´º Á¤º¸ ÀÔ·Â 
   while(fscanf(fp, "%s", line)>0)
   {
      word_cnt = 0;
      ptr = strtok(line,","); //","´ÜÀ§·Î Àß¶ó³»´Â strtok ÇÔ¼ö 
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
//¹øÈ£Ç¥ Á¤º¸ ÆÄÀÏ¿¡¼­ ÀÔ·Â¹Þ±â 
void input_ticket_number()
 {
   FILE* fp = fopen("Ticket_number.txt", "r");
   char line[150];
   char* ptr;
   int word_cnt;
//   int count=0; //¹øÈ£Ç¥ ºÎ¿©  (x)

   //Á¤º¸ ÀÔ·Â 
   while(fscanf(fp, "%s", line)>0)
   {
      word_cnt = 0;
      ptr = strtok(line,","); //","´ÜÀ§·Î Àß¶ó³»´Â strtok ÇÔ¼ö 
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




//1. ½Å±Ô ¸Þ´º Ãß°¡
void new_add_menu()
{
   FILE* fp = fopen("Menu.txt", "a");
   
   system("cls");
    printf("¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯\n");
    printf("¦­                          ¦­\n");
   printf("¦­      ½Å±Ô ¸Þ´º Ãß°¡      ¦­\n");
   printf("¦­                          ¦­\n");
   printf("¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°\n");   

   printf("\n"); 
   printf("¸Þ´º ÀÌ¸§: ");
   scanf("%s", &menu_info[menu_idx].drink);
   printf("°¡°Ý: ");
   scanf("%s", &menu_info[menu_idx].price);
   printf("=====================\n");
   printf("½Å±Ô ¸Þ´º Ãß°¡ ¿Ï·á\n");
   printf("=====================\n");



   fprintf(fp, "%s,%s\n", menu_info[menu_idx].drink, menu_info[menu_idx].price);
   menu_idx++;
   fclose(fp);
}

//2. ½Å±Ô °í°´ Á¤º¸ Ãß°¡ 
void new_add_customer()
{
   FILE* c_fp = fopen("Customer.txt", "a");
   
   system("cls");
    printf("¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯\n");
    printf("¦­                          ¦­\n");
   printf("¦­      ½Å±Ô °í°´ Ãß°¡      ¦­\n");
   printf("¦­                          ¦­\n");
   printf("¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°\n");   



   printf("\n");
   printf("°í°´ ÀÌ¸§: ");
   scanf("%s", &customer_info[customer_idx].name);
   printf("°í°´ ÀüÈ­¹øÈ£: ");
   scanf("%s", &customer_info[customer_idx].phone);
   printf("====================\n");
   printf("½Å±Ô °í°´ Ãß°¡ ¿Ï·á\n");
   printf("====================\n");
   
   fprintf(c_fp, "\n%s,%s\n", customer_info[customer_idx].name, customer_info[customer_idx].phone);
   customer_idx++;
   fclose(c_fp);
}


//3. ½Å±Ô ¹øÈ£Ç¥ Ãß°¡ 
void new_add_ticker_number()
{
   FILE* fp = fopen("Ticket_number.txt", "a");
   system("cls");
    printf("¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯\n");
    printf("¦­                          ¦­\n");
   printf("¦­     ½Å±Ô ¹øÈ£Ç¥  Ãß°¡    ¦­\n");
   printf("¦­                          ¦­\n");
   printf("¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°\n");   

   
   printf("\n");
   printf("¹øÈ£: ");
   scanf("%s", &ticket_number_info[ticket_number_idx].number);
   printf("ÀÌ¸§: ");
   scanf("%s", &ticket_number_info[ticket_number_idx].name);
   printf("À½·á: ");
   scanf("%s", &ticket_number_info[ticket_number_idx].drink);
   printf("°¡°Ý: ");
   scanf("%s", &ticket_number_info[ticket_number_idx].price);

   fprintf(fp, "%s,%s,%s,%s\n", ticket_number_info[ticket_number_idx].number, ticket_number_info[ticket_number_idx].name, ticket_number_info[ticket_number_idx].drink, ticket_number_info[ticket_number_idx].price);
   ticket_number_idx++;
   
   fclose(fp);
}

//4. ¸Þ´º Á¾·ù·Î °Ë»öÇÏ±â 
int search_menu()
{
   int i;
   char drink[30]; //¿©±â¿¡ ÀÔ·ÂÇÒ ÀÌ¸§ 

   system("cls");
   printf("¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯\n");
   printf("¦­                          ¦­\n");
   printf("¦­        ¸Þ´º °Ë»ö         ¦­\n");
   printf("¦­                          ¦­\n");
   printf("¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°\n");   

   printf("\nÀ½·á ÀÌ¸§: ");
   scanf("%s", &drink);
   for(i=0; i<=menu_idx; i++) //menu À¯¿äÇÑ ¹è¿­¸¸Å­ µ¹¸³´Ï´Ù. 
   {
      if(strcmp(drink, menu_info[i].drink)==0)
      { //strcmpÇÔ¼ö »ç¿ë -> ÀÔ·ÂÇÑ drink°ú ±¸Á¶Ã¼ ¹è¿­ÀÇ ¸Þ´º°¡ ÀÏÄ¡ÇÏ¸é 0À» ¹ÝÈ¯. 
             printf("=====================\n");
            printf("À½·á: %s \n°¡°Ý: %s\n", menu_info[i].drink, menu_info[i].price);
             printf("=====================\n");
            return i;
      }
      
      else if(strcmp(drink, menu_info[i].drink)!=0 && i==menu_idx)
      {
            printf("============================\n");
             printf("Ã£À¸½Ã´Â Á¤º¸°¡ ¾ø½À´Ï´Ù.\n");
             printf("============================\n");
             return i;
      }
      
      else
      continue;
   }
}

//5. ÀÌ¸§À¸·Î °í°´ Á¤º¸ °Ë»ö 
int search_customer()
{
   int i;
   char name[30];
   
      system("cls");
    printf("¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯\n");
    printf("¦­                          ¦­\n");
   printf("¦­        °í°´ °Ë»ö         ¦­\n");
   printf("¦­                          ¦­\n");
   printf("¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°\n");   
   
   printf("\nÀÌ¸§: ");
   scanf("%s", &name);
   for(i=0; i<=customer_idx; i++) 
   {
      if(strcmp(name, customer_info[i].name)==0)
     {  //°í°´ÀÇ À¯¹«¿¡ µû¶ó ¹ÝÈ¯ÇÏ±â À§ÇÑ ÇüÅÂ
         printf("=================================\n");
         printf("°í°´ ÀÌ¸§: %s \n°í°´ ÀüÈ­¹øÈ£: %s\n", customer_info[i].name, customer_info[i].phone);   
         printf("=================================\n");
         return i;
       }
       
       else if(strcmp(name ,customer_info[i].name)!=0 && i==customer_idx)
       {
          printf("============================\n");
          printf("Ã£À¸½Ã´Â Á¤º¸°¡ ¾ø½À´Ï´Ù.\n");
          printf("============================\n");
      return i;   
     }
     
     else continue;
   }
}

//6. ¹øÈ£Ç¥ Á¶È¸ 
int search_ticket_number()
{
   int i;
   char number[30];
   
      system("cls");
    printf("¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯\n");
    printf("¦­                          ¦­\n");
   printf("¦­       ¹øÈ£Ç¥ °Ë»ö        ¦­\n");
   printf("¦­                          ¦­\n");
   printf("¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°\n");   

   
   printf("\n¹øÈ£Ç¥: ");
   scanf("%s", &number);
   for(i=0; i<ticket_number_idx; i++) 
   {
      if(strcmp(number, ticket_number_info[i].number)==0)
     {  
      printf("=====================\n");
      printf("¹øÈ£: %s \nÀÌ¸§: %s \nÀ½·á: %s \n°¡°Ý: %s \n", ticket_number_info[i].number, ticket_number_info[i].name,ticket_number_info[i].drink,ticket_number_info[i].price);
       printf("=====================\n");
         return i;
        }
   }
   return -1;
}

//7. °í°´ Á¤º¸ ¼öÁ¤ 
 void edit_customer()
{
   int i, j, k;
   char name[20];
   char info[20];
   
      system("cls");
    printf("¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯\n");
    printf("¦­                           ¦­\n");
   printf("¦­      °í°´ Á¤º¸ ¼öÁ¤       ¦­\n");
   printf("¦­                           ¦­\n");
   printf("¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°\n");   


   
   printf("\nÀÌ¸§À» ÀÔ·ÂÇØÁÖ¼¼¿ä: "); 
   scanf("%s", name);
   printf("\n");

   for(i=0; i<customer_idx; i++)
   {
      if(strcmp(name, customer_info[i].name)==0)
      { 
         printf("ÀÌ¸§: %s\nÀüÈ­¹øÈ£: %s\n", customer_info[i].name, customer_info[i].phone);
         printf("\n");
         printf("1.ÀÌ¸§ 2.ÀüÈ­¹øÈ£\n");
         printf("¹øÈ£¸¦ ¼±ÅÃÇÏ¼¼¿ä: ");
         scanf("%d", &j);
         if(j==1)
         {
            printf("¼öÁ¤ÇÒ ÀÌ¸§: ");
            scanf("%s", customer_info[i].name); 
         } 
         else if(j==2)
         {
            printf("¼öÁ¤ÇÒ ÀüÈ­¹øÈ£: ");
            scanf("%s", customer_info[i].name); 
         } 
         printf("\n");
      }
   }
}

//8. ¸Þ´º Á¤º¸ ¼öÁ¤ 
 void edit_menu()
{
   int i, j, k;
   char drink[20];
   char info[20];
   
      system("cls");
    printf("¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯\n");
    printf("¦­                          ¦­\n");
   printf("¦­        ¸Þ´º ¼öÁ¤         ¦­\n");
   printf("¦­                          ¦­\n");
   printf("¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°\n");   

   
   printf("\n¸Þ´º¸¦ ÀÔ·ÂÇØÁÖ¼¼¿ä: "); 
   scanf("%s", drink);
   printf("\n");

   for(i=0; i<menu_idx; i++)
   {
      if(strcmp(drink, menu_info[i].drink)==0)
      {
         printf("À½·á: %s\n°¡°Ý: %s\n", menu_info[i].drink, menu_info[i].price);
         printf("\n");
         printf("1.À½·á 2.°¡°Ý\n");
         printf("¹øÈ£¸¦ ¼±ÅÃÇÏ¼¼¿ä: ");
         scanf("%d", &j);
         if(j==1)
         {
            printf("¼öÁ¤ÇÒ À½·á: ");
            scanf("%s", menu_info[i].drink); 
         } 
         else if(j==2)
         {
            printf("¼öÁ¤ÇÒ °¡°Ý: ");
            scanf("%s", menu_info[i].price); 
         } 
         printf("\n");
      }
   }
}



//9. ±âÁ¸ °í°´ »èÁ¦ 
void del_customer()
 {   
   FILE* fp = fopen("Customer.txt", "r+");
    int i=0;
   char name[30];
   
      system("cls");
    printf("¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯\n");
    printf("¦­                          ¦­\n");
   printf("¦­        °í°´ »èÁ¦         ¦­\n");
   printf("¦­                          ¦­\n");
   printf("¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°\n");   

   
   printf("\nÀÌ¸§: ");
   scanf("%s", &name);   

    //ÀÔ·ÂµÈ ÀÌ¸§À¸·Î °í°´ Á¤º¸ »èÁ¦ 
    for(i=0; i<customer_idx; i++)
    {
        //»èÁ¦ÇÒ °í°´ Á¤º¸ Ãâ·Â
        if(strcmp(name, customer_info[i].name)==0)
        {
           printf("====================\n");
           printf("»èÁ¦ÇÒ °í°´ ÀÌ¸§\nÀÌ¸§: %s\nÀüÈ­¹øÈ£: %s\n",customer_info[i].name, customer_info[i].phone);
           printf("====================\n");
            memset(&customer_info[i], 0x00, sizeof(CUSTOMER));
         fprintf(fp, "%s %s\n", customer_info[i].name, customer_info[i].phone);
         fclose(fp);
        }
    }
}




//10. ±âÁ¸ ¸Þ´º »èÁ¦ 
void del_menu()
 {   
   FILE* fp = fopen("Menu.txt", "r+");

    int i=0;
   char drink[30];
   
      system("cls");
    printf("¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯\n");
    printf("¦­                          ¦­\n");
   printf("¦­        ¸Þ´º »èÁ¦         ¦­\n");
   printf("¦­                          ¦­\n");
   printf("¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°\n");   

   
   printf("\n¸Þ´º ÀÌ¸§: ");
   scanf("%s", &drink);   

    //ÀÔ·ÂµÈ ¸Þ´º·Î À½·á Á¤º¸ »èÁ¦ 
    for(i=0; i<menu_idx; i++)
    {
        //»èÁ¦ÇÒ À½·á Á¤º¸ Ãâ·Â
        if(strcmp(drink, menu_info[i].drink)==0)
        {
           printf("====================\n");
           printf("»èÁ¦ÇÒ ¸Þ´º\nÀ½·á: %s\n°¡°Ý: %s\n",menu_info[i].drink, menu_info[i].price);
           printf("====================\n");
           memset(&menu_info[i], 0x00, sizeof(MENU));
         fprintf(fp, "%s %s\n", menu_info[i].drink, menu_info[i].price);
         fclose(fp);
        }
    }
}


//11. ±âÁ¸ ¹øÈ£Ç¥ »èÁ¦  
void del_ticket()
 {   
   FILE* fp = fopen("Ticket_number.txt", "r+");
    int i=0;
   char num[30];
   
      system("cls");
    printf("¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯\n");
    printf("¦­                          ¦­\n");
   printf("¦­        ¹øÈ£Ç¥ »èÁ¦        ¦­\n");
   printf("¦­                          ¦­\n");
   printf("¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°\n");   

    
   printf("\n ¹øÈ£Ç¥ ¹øÈ£: ");
   scanf("%s", &num);   

    
    for(i=0; i<ticket_number_idx; i++) 
    {
       
        if(strcmp(num, ticket_number_info[i].number)==0)
        {
           printf("====================\n");
           printf("»èÁ¦µÇ¾ú½À´Ï´Ù!\n"); //À½·á Á¤º¸ »èÁ¦ 
           printf("====================\n");
           memset(&ticket_number_info[i], 0x00, sizeof(TICKET_NUMBER));
         fprintf(fp, "%s %s %s %s\n", ticket_number_info[i].number, ticket_number_info[i].name, ticket_number_info[i].drink, ticket_number_info[i].price);
         fclose(fp);
        }
    }
}




//11. ¸Þ´º ÀüÃ¼º¸±â
void view_menu()
{
   int i;
   
      system("cls");
    printf("¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯\n");
    printf("¦­                            ¦­\n");
   printf("¦­        ¸Þ´º ÀüÃ¼º¸±â       ¦­\n");
   printf("¦­                            ¦­\n");
   printf("¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°\n");   

   
   printf("\n          Menu                    Price \n");
   printf("------------------------------------------------\n");
   for(i=0; i<menu_idx; i++) //À¯È¿ÇÑ ¹è¿­ ºÒ·¯¿À±â 
   {
      printf("%15s%20s\n",menu_info[i].drink,menu_info[i].price);
   }
}





//12. °í°´ ÀüÃ¼º¸±â  
void view_customer()
{
   int i;
   
         system("cls");
    printf("¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯\n");
    printf("¦­                            ¦­\n");
   printf("¦­        °í°´ ÀüÃ¼º¸±â       ¦­\n");
   printf("¦­                            ¦­\n");
   printf("¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°\n");   
   
   printf("\n          Name           Phone       \n");
   printf("---------------------------------------\n");
   for(i=0; i<customer_idx; i++)
   {
      printf("%15s%20s\n", customer_info[i].name, customer_info[i].phone);
   }
}





//13. ¹øÈ£Ç¥ ÀüÃ¼º¸±â  
void view_ticket_number()
{
   int i;
   
         system("cls");
    printf("¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯\n");
    printf("¦­                              ¦­\n");
   printf("¦­        ¹øÈ£Ç¥ ÀüÃ¼º¸±â       ¦­\n");
   printf("¦­                              ¦­\n");
   printf("¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°\n");   
   printf("\n          ¹øÈ£           ÀÌ¸§           À½·á           °¡°Ý\n");
   printf("-------------------------------------------------------------\n");
   for(i=0; i<ticket_number_idx; i++)
   {
      printf("%12s%15s%18s%15s\n", ticket_number_info[i].number, ticket_number_info[i].name, ticket_number_info[i].drink, ticket_number_info[i].price);
   }
}






//14. ¸Þ´º Á¾·ù, °í°´ Á¾·ù °Ë»öÇÏ±â 
int cross_search()
{
   int i,j;
   char drink[30]; //¿©±â¿¡ ÀÔ·ÂÇÒ ÀÌ¸§ 
   char name[30];

   system("cls");
    printf("¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯\n");
    printf("¦­                          ¦­\n");
   printf("¦­        ±³Â÷ °Ë»ö         ¦­\n");
   printf("¦­                          ¦­\n");
   printf("¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°\n");   

   
   printf("\n°í°´ ÀÌ¸§: ");
   scanf("%s", &name);
   for(j=0; j<customer_idx; j++) 
   {
      if(strcmp(name,  ticket_number_info[j].name)==0) //°í°´ÀÇ À¯¹«¿¡ µû¶ó ¹ÝÈ¯ÇÏ±â À§ÇÑ ÇüÅÂ
     {  
         printf("°í°´ ÀÌ¸§: %s \n °í¸£½Å ¸Þ´º: %s\n", customer_info[j].name, ticket_number_info[j].drink);   
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


//15. ÇÁ·Î±×·¥ Á¾·á
void end()
{
   printf("\nÇÁ·Î±×·¥À» Á¾·áÇÕ´Ï´Ù\n");
   exit(1);
}

