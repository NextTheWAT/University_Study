#include <iostream>			//선언부 컴파일에 접근을해서 선언파트에 있는 걸 처리해서 사용 
using namespace std;		//std라는 소속을 알려줄 필요가 다음부터 없는것 등록을 했을경우 ex( std::cout 

class BASE{					//기본 클래스 Value1, Value2 멤버 변수와 Set(), B_Print() 멤버 함수를 지님 //디폴트 생성자도 자동생성 
	int Value1, Value2, sum;		//전역변수로 Value1, Value2, sum 선언 
	public:							//어디서든지 사용가능 
		void Set(int a, int b) {	//Set int 인자를 2개 받는 생성자 
		Value1 = a; 				//Value1이라는 변수가 가르키는 주소 값에 메모리안에 a을 선언 a로 초기화 // 받은 인자값을 Value1에 선언 
		Value2 = b; 				//Value2라는 변수가 가르키는 주소 값에 메모리안에 b을 선언 b로 초기화 // 받은 인자값을 Value2에 선언
		}
		void B_Print(){				//출력문 생성자 
			cout << "IT융합학부 1971070 2학년 이재은 상속실습" << endl;		//학부, 학번, 학년, 이름, 과제명 출력문 
			cout << "\n월 = " << Value1						//value1값 출력문 
				<< ", 일 = " << Value2 << endl;				//value2값 출력문 
				sum = Value1 + Value2;						//value1, value2 더한 값을 sum에 선언 
			cout << "월 + 일 더한 값: " << sum << endl;		//더한 값 출력문 
		}
};

class DERIVED : public BASE{		// 기본 클래스로부터 파생된 클래스 data 멤버 변수오 D_Print() 멤버 함수를 지님 // 자식클래스 
	int data;						//전역변수로 data 선언 
	public:							//어디서든지 사용가능 
		DERIVED(int x ) {			//인자를 1개 받는 생성자 
		data = x;					//data라는 변수가 가르키는 주소 값에 메모리안에 x를 선언 x로 초기화 // 받은 인자값을 data에 선언
		}
		void D_Print() {			//출력문 생성자 
		cout << "년 = " << data << endl;		//년 출력문 
	}
};

int main(){					// 몸체부, 메인 함수 // int 를 쓰는이유는 비정상적인 오류를 제외 시키는것
							//void를 써도 상관없지만 오류가 날수도있고 계속 컴퓨터가 값을 기다린다
	
	DERIVED Obj(2022);		//파생 클래스의 객체 생성 DERIVED Obj에 2022인자값 보내기 
	 
	Obj.Set(10, 18);		// 기본 클래스에 접근 (10, 18)인자값 보내기 
	Obj.B_Print();			// 기본 클래스의 멤버에 접근 Obj.B_Print 사용 
	Obj.D_Print();			// 파생 클래스의 멤버에 접근 Obj.D_Print 사용 
	
	return 0;				//리턴값 0 
}
