#include <iostream> //c++ �����ϴµ� �ʿ��� ��������̴�. 
//it�����к� 2�г� 1971014 ����� 
using namespace std; //std�� �����ϰ� �ۼ��� �����մϴ� std::cout �� cout�̷��� ��� �����մϴ�. 



 //���� Ž�� 
class BASE1 //BASE1 Ŭ������ �����ŵ�ϴ�. 
{
   int workCount=0;
   int arrBase[5]={1,2,3,4,5}; //INT�� �迭 5ĭ¥���� ���� 

   public: //���������ڴ� public���� �����Ѵ�. 
      
      void Found(int num){ //BASE1 Ŭ������ Fount()����Լ��� ������ ���ڸ� �ϳ��� �ʿ�� �ϴ� �Լ��̴�! �� �Լ��� ����Ž���� ������ ������ �� �̴�. 
         cout<<"-----ã���ô� ��: "<<num << "-----" << endl; //���� ã������ ���� ���� ������ݴϴ�! 
         for(int i=0; i<5; i++){ //for������ i�� 0���� 4���� �� 5�� ���ư��� �˴ϴ�. 
            workCount++; //���� ������ �� Ƚ���� �ϳ��� ������ŵ�ϴ�. 
            if(num==arrBase[i]){ //���� ���ϴ� ���� arrBase[i] �� �ش��ϴ� ���� ������   
               cout<<"�迭�� "<<i<<" �ε����� " << arrBase[i] << " �ֽ��ϴ�."<<endl; //�� �ε����� ��ȣ�� ���� ����մϴ�. 
               cout<<"��Ƚ��: " << workCount ;  //��Ƚ���� ����մϴ�! 
               break; //for���� Ż���մϴ�. 
            }
            
            cout<<"arrBase["<<i<<"]�� ����: " <<arrBase[i]<<" ���� ���� Ʋ���ϴ�!"<<endl; //���� ��ã������� ���ϸ鼭 ���� Ʋ���ٴ� ���� ����մϴ�. 
         }
      }
};

class BASE2
{
   int arrBase[5] = {1,2,3,4,5};
   int center=0; //�߾Ӱ��� �ǹ��Ѵ�. 
   int workCount=0;
   
   public:
      void Check(int num){
         center = (arrBase[0]+arrBase[4])/2; //ó�� ���� ���� ū ���� �����մϴ�. ��ü �߾Ӱ� ���ϱ� ����!
         
         cout<<"-----ã���ô� ��: "<<num << "-----" << endl;
         for(int i=0; i<5; i++){
            //�߾Ӱ����� ũ�ٸ� �� �ε����� �ִ´�.
            if(center<arrBase[i]){
               center = i-1;
               break; 
            }
         }
         
         
         
         if(arrBase[center]==num) //�ٷ� ���� �� ���!
         {
            ++workCount;
            cout<<"�߾Ӱ���: " << center<<endl;
            cout<<"�迭�� "<<center<<" �ε����� " << arrBase[center] << " �ֽ��ϴ�."<<endl;
            cout<<"��Ƚ��: " << workCount ; 
         } 
         
          
         else if(num <arrBase[center])
         { //ó�� ���� �߾Ӱ����� ������! 
               
               center= (arrBase[0]+arrBase[center])/2; //���� ���� ���� ���ϰ�
               for(int i=0; i<3; i++)
               {
                  if(center<arrBase[i]){
                     center = i-1; //arrBase[i] Ŭ��� 
                  }
               }
               
               
               if(num==arrBase[center]){
                  ++workCount;
                  cout<<"�߾Ӱ���: " << center<<endl;
                  cout<<"�迭�� "<<center<<" �ε����� " << arrBase[center] << " �ֽ��ϴ�."<<endl;
                  cout<<"��Ƚ��: " << workCount ; 
               } 
               
               else if(num<arrBase[center-1]){
                  ++workCount;
                  cout<<"�߾Ӱ���: " << center<<endl;
                  cout<<"�迭�� "<<center-1<<" �ε����� " << arrBase[center-1] << " �ֽ��ϴ�."<<endl;
                  cout<<"��Ƚ��: " << workCount ; 
               } 
         }
         
         
          
         else
         {
               center= (arrBase[center]+arrBase[4])/2; //zms ���� ���� ���ϰ�
               for(int i=center; i<5; i++){
                  if(center>arrBase[i]){
                     center = i-1;
                  }
               }
               
               if(num==arrBase[center]){ //�ٷ� ã���� ��! 
                  ++workCount;
                  cout<<"�߾Ӱ���: " << center<<endl;
                  cout<<"�迭�� "<<center<<" �ε����� " << arrBase[center] << " �ֽ��ϴ�."<<endl;
                  cout<<"��Ƚ��: " << workCount ; 
               } 
               
               
               else {
                  ++workCount;
                  cout<<"�迭�� "<<center<<" �ε����� " << arrBase[center] << " �ֽ��ϴ�."<<endl;
                  cout<<"��Ƚ��: " << workCount ; 
               }
         }
      }
   };   
   
 
class HOME : public BASE1, public BASE2{
      
};

int main(void) //�����Լ� 
{
   int i,j,num; //int�� ���� i,j,num�� �����մϴ�. 
   HOME obj; //HOME obj ��ü�� ���� 
   cout<<"it�����к� 2�г� 1971014 �����";
   cout<<"\n==============================\n\n";
   obj.Found(3); //BASE1 Ŭ������ Found()�Լ��� ������ ���� 3�� ÷���ؼ� �����ϴ�! �׷��� �Ǹ� ����Ž�� �ڵ尡 �ִ� Found�Լ����� ���� ã�� �˴ϴ�. 
   cout<<"\n\n";
   obj.Check(4);
   cout<<"\n";
   cout<<"\n==============================\n";
   
   
}
