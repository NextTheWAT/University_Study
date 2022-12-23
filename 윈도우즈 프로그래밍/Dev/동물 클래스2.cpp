#include <iostream>  	//선언부 컴파일에 접근을해서 선언파트에 있는 걸 처리해서 사용 
using namespace std;    //std라는 소속을 알려줄 필요가 다음부터 없는것 등록을 했을경우 ex( std::cout 
// IT융합학부 2학년 1971070 이재은 클래스 객체 

int count = 0; //전역 변수선언 

class Animal		//Animal 클래스 정의 
{
   char Name[10];					// 배열값이 10인 Name을 선언 주소값을 가지고있고 해당 메모리에 저장한다 
  public:							//접근 한정자의 public 이다 - 어디서든지 사용 가능 
   void Set_Name();					// Set_Name() 함수 선언 
   void Print_Name();				// Print_name() 함수 선언 
};			//여기까지 클래스 정의 

void Animal::Set_Name(){						//멤버 함수 Set_Name() 정의 
   cout<<"좋아하는 동물" << ++count << ":";		// 좋아하는 동물 출력 후 바로 count 변수의 값이 1++ 
   cin >> Name;									//사용자로부터 Name 데이터를 입력 받음 
}

void Animal::Print_Name(){						//멤버 함수 Print_Name() 정의 
   cout<<count<<":"<<Name<<endl;				// count 변수의 값 출력후 Name 출력 
}

int main()			// 몸체부, 메인 함수 // int 를 쓰는이유는 비정상적인 오류를 제외 시키는것
					//void를 써도 상관없지만 오류가 날수도있고 계속 컴퓨터가 값을 기다린다
{
	cout << "IT융합학부 2학년 1971070 이재은 클래스 객체" <<endl; 		//출력문
	
   Animal dog,cat,dog2; //dog, dog2, cat 객체선언. 
   
   dog.Set_Name(); 				// Animal 클래스에 정의 되어있는 Set_name을 dog객체를 이용하여 사용 
   dog.Print_Name();			// Animal 클래스에 정의 되어있는 Print_name을 dog객체를 이용하여 사용
   
   dog2.Set_Name(); 			// Animal 클래스에 정의 되어있는 Set_name을 dog2객체를 이용하여 사용 
   dog2.Print_Name();			// Animal 클래스에 정의 되어있는 Print_name을 dog2객체를 이용하여 사용

   cat.Set_Name();				// Animal 클래스에 정의 되어있는 Set_name을 cat객체를 이용하여 사용 
   cat.Print_Name();			// Animal 클래스에 정의 되어있는 Print_name을 cat객체를 이용하여 사용
   

   return 0;					//리턴 값이 0이다. 
}





