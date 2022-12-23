#include <iostream> //c++ 구동하는데 필요한 헤더파일이다. 
//it융합학부 2학년 1971014 김민재 
using namespace std; //std를 생략하고 작성이 가능합니다 std::cout 을 cout이렇게 사용 가능합니다. 



 //선형 탐색 
class BASE1 //BASE1 클래스를 선언시킵니다. 
{
   int workCount=0;
   int arrBase[5]={1,2,3,4,5}; //INT형 배열 5칸짜리를 선언 

   public: //접근제어자는 public으로 선언한다. 
      
      void Found(int num){ //BASE1 클래스의 Fount()멤버함수로 정수형 인자를 하나를 필요로 하는 함수이다! 이 함수는 선형탐색의 역할을 진행할 것 이다. 
         cout<<"-----찾으시는 값: "<<num << "-----" << endl; //현재 찾으려는 값을 먼저 출력해줍니다! 
         for(int i=0; i<5; i++){ //for무으로 i가 0부터 4까지 총 5번 돌아가게 됩니다. 
            workCount++; //비교할 때마다 비교 횟수를 하나씩 증가시킵니다. 
            if(num==arrBase[i]){ //현재 비교하는 수와 arrBase[i] 에 해당하는 값이 있으면   
               cout<<"배열의 "<<i<<" 인덱스에 " << arrBase[i] << " 있습니다."<<endl; //그 인덱스의 번호와 값을 출력합니다. 
               cout<<"비교횟수: " << workCount ;  //비교횟수를 출력합니다! 
               break; //for문을 탈출합니다. 
            }
            
            cout<<"arrBase["<<i<<"]의 값은: " <<arrBase[i]<<" 비교할 값과 틀립니다!"<<endl; //만약 못찾았을경우 비교하면서 값이 틀리다는 것을 출력합니다. 
         }
      }
};

class BASE2
{
   int arrBase[5] = {1,2,3,4,5};
   int center=0; //중앙값을 의미한다. 
   int workCount=0;
   
   public:
      void Check(int num){
         center = (arrBase[0]+arrBase[4])/2; //처음 값과 가장 큰 값을 진행합니다. 전체 중앙값 구하기 위해!
         
         cout<<"-----찾으시는 값: "<<num << "-----" << endl;
         for(int i=0; i<5; i++){
            //중앙값보다 크다면 그 인덱스를 넣는다.
            if(center<arrBase[i]){
               center = i-1;
               break; 
            }
         }
         
         
         
         if(arrBase[center]==num) //바로 같을 때 출력!
         {
            ++workCount;
            cout<<"중앙값은: " << center<<endl;
            cout<<"배열의 "<<center<<" 인덱스에 " << arrBase[center] << " 있습니다."<<endl;
            cout<<"비교횟수: " << workCount ; 
         } 
         
          
         else if(num <arrBase[center])
         { //처음 구한 중앙값보다 작을때! 
               
               center= (arrBase[0]+arrBase[center])/2; //작은 값을 먼저 구하고
               for(int i=0; i<3; i++)
               {
                  if(center<arrBase[i]){
                     center = i-1; //arrBase[i] 클경우 
                  }
               }
               
               
               if(num==arrBase[center]){
                  ++workCount;
                  cout<<"중앙값은: " << center<<endl;
                  cout<<"배열의 "<<center<<" 인덱스에 " << arrBase[center] << " 있습니다."<<endl;
                  cout<<"비교횟수: " << workCount ; 
               } 
               
               else if(num<arrBase[center-1]){
                  ++workCount;
                  cout<<"중앙값은: " << center<<endl;
                  cout<<"배열의 "<<center-1<<" 인덱스에 " << arrBase[center-1] << " 있습니다."<<endl;
                  cout<<"비교횟수: " << workCount ; 
               } 
         }
         
         
          
         else
         {
               center= (arrBase[center]+arrBase[4])/2; //zms 값을 먼저 구하고
               for(int i=center; i<5; i++){
                  if(center>arrBase[i]){
                     center = i-1;
                  }
               }
               
               if(num==arrBase[center]){ //바로 찾았을 때! 
                  ++workCount;
                  cout<<"중앙값은: " << center<<endl;
                  cout<<"배열의 "<<center<<" 인덱스에 " << arrBase[center] << " 있습니다."<<endl;
                  cout<<"비교횟수: " << workCount ; 
               } 
               
               
               else {
                  ++workCount;
                  cout<<"배열의 "<<center<<" 인덱스에 " << arrBase[center] << " 있습니다."<<endl;
                  cout<<"비교횟수: " << workCount ; 
               }
         }
      }
   };   
   
 
class HOME : public BASE1, public BASE2{
      
};

int main(void) //메인함수 
{
   int i,j,num; //int형 변수 i,j,num을 선언합니다. 
   HOME obj; //HOME obj 객체를 생성 
   cout<<"it융합학부 2학년 1971014 김민재";
   cout<<"\n==============================\n\n";
   obj.Found(3); //BASE1 클래스의 Found()함수에 정수형 인자 3을 첨부해서 보냅니다! 그렇게 되면 선형탐색 코드가 있는 Found함수에서 값을 찾게 됩니다. 
   cout<<"\n\n";
   obj.Check(4);
   cout<<"\n";
   cout<<"\n==============================\n";
   
   
}
