#include <iostream>
using namespace std;

class BASE1{					//기본 클래스 Value1, Value2 멤버 변수와 Set(), B_Print() 멤버 함수를 지님 //디폴트 생성자도 자동생성 
	int Value1, Value2;			//전역변수로 Value1, Value2 선언 
	public:							//어디서든지 사용가능 
		void Set(int a, int b) {	//Set int 인자를 2개 받는 생성자 
		Value1 = a; 				//Value1이라는 변수가 가르키는 주소 값에 메모리안에 a을 선언 a로 초기화 // 받은 인자값을 Value1에 선언 
		Value2 = b; 				//Value2라는 변수가 가르키는 주소 값에 메모리안에 b을 선언 b로 초기화 // 받은 인자값을 Value2에 선언
		}
		void B_Print(){				//출력문 생성자 
			cout << "IT융합학부 1971070 2학년 이재은 다중상속" << endl << endl;		//학부, 학번, 학년, 이름, 과제명 출력문 
			cout << "BASE1 class";
			cout << "\nV1 = " << Value1						//value1값 출력문 
				<< ", V2 = " << Value2 << endl << endl;				//value2값 출력문 
		}
};

class BASE2{						//기본 클래스 Value3, Value4 멤버 변수와 BB_Set(), BB_Print() 멤버 함수를 지님 //디폴트 생성자도 자동생성 
	int Value3, Value4;				//전역변수로 Value3, Value4 선언 
	public:							//어디서든지 사용가능 
		void BB_Set(int a, int b){		//Set int 인자를 2개 받는 생성자 
			Value3 = a;					//Value3이라는 변수가 가르키는 주소 값에 메모리안에 a을 선언 a로 초기화 // 받은 인자값을 Value3에 선언 
			Value4 = b;					//Value4라는 변수가 가르키는 주소 값에 메모리안에 a을 선언 a로 초기화 // 받은 인자값을 Value4에 선언
		}
		void BB_Print(){				//출력문 생성자 
			cout << "BASE2 class" << endl;
			cout << "V3 = " << Value3;		//Value3 값 출력문 
			cout << ", V4 = " << Value4 << endl << endl;		//Value4 값 출력문
		}
}; 

class DERIVED : public BASE1, public BASE2{		// 기본 클래스로부터 파생된 클래스 data 멤버 변수로 D_Print(), BB_Print() 멤버 함수 지님 // 자식클래스 다중상속 
	int data;						//전역변수로 data 선언 
	public:							//어디서든지 사용가능 
		DERIVED(int x ) {			//인자를 1개 받는 생성자 
		data = x;					//data라는 변수가 가르키는 주소 값에 메모리안에 x를 선언 x로 초기화 // 받은 인자값을 data에 선언
		}
		void D_Print() {			//출력문 생성자 
		cout << "data = " << data << endl;		//년 출력문 
	}
};

int main(){					// 몸체부, 메인 함수 // int 를 쓰는이유는 비정상적인 오류를 제외 시키는것
							//void를 써도 상관없지만 오류가 날수도있고 계속 컴퓨터가 값을 기다린다
	
	DERIVED Obj(2022);		//파생 클래스의 객체 생성 DERIVED Obj에 2022인자값 보내기 
	 
	Obj.Set(10, 20);		// 기본 클래스에 접근 (10, 18)인자값 보내기 
	Obj.B_Print();			// 기본 클래스의 멤버에 접근 Obj.B_Print 사용 
	Obj.BB_Set(30, 40);		// 기본 클래스에 접근 (30, 40)인자값 보내기 
	Obj.BB_Print();			// 파생 클래스의 멤버에 접근 Obj.BB_Print 사용 
	Obj.D_Print();			// 파생 클래스의 멤버에 접근 Obj.D_Print 사용 
	
	return 0;				//리턴값 0 
}
