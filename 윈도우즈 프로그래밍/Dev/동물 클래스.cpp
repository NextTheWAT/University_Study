#include <iostream>  	//선언부 컴파일에 접근을해서 선언파트에 있는 걸 처리해서 사용 
using namespace std;    //std라는 소속을 알려줄 필요가 다음부터 없는것 등록을 했을경우 ex( std::cout 

int count =0;

class Aniaml {				//Animal 클래스 정의 
	char Name[10];
	public : 
	void Set_Name();
	void Print_Name();
};						//여기까지 클래스 정의 

void Animal::Set_Name() {			//멤버 함수 Set_Name() 정의 
	cout << "좋아하는 동물 " << ++count << " : ";
	cin >> Name; 		//사용자로부터 Name 데이터를 입력 받음 
}

void Animal::Print_Name(){				//멤버 함수 Print_Name() 정의 
	cout << count << " : " << Name << endl;
}

int main(){
	
	Animal Dog, Dog2, Cat,;
	
	Dog.Set_Name();
	Dog.Print_Name();
	
	Dog2.Set_Name();
	Dog2.Print_Name();
	
	Cat.Set_Name();
	Cat.Print_Name();
	
	return 0;
	
} 
