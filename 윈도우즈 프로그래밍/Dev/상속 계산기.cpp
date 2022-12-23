#include <iostream>				//C++을 구동하기 위한 헤더 파일 선언
using namespace std;			//std::의 접두어를 생략한다.

class BASE1{							//기본 클래스 Value1, Value2 멤버 변수와 Set(), B_Print() 멤버 함수를 지님 //디폴트 생성자도 자동생성 
	int Value1, Value2, sum;			//전역변수로 Value1, Value2 선언 
	public:								//어디서든지 사용가능 
		void sum_Set(int a, int b) {	//Set int 인자를 2개 받는 생성자 
		Value1 = a; 					//Value1이라는 변수가 가르키는 주소 값에 메모리안에 a을 선언 a로 초기화 // 받은 인자값을 Value1에 선언 
		Value2 = b; 					//Value2라는 변수가 가르키는 주소 값에 메모리안에 b을 선언 b로 초기화 // 받은 인자값을 Value2에 선언
		}
		void sum_Print(){							//출력문 생성자 
			sum = Value1 + Value2;											// sum = Value1 + Value2
			cout << "들어간 값 : " << Value1 <<", "<< Value2 << "   ";		//Valeu1, Valeu2값 출력문 
			cout << "Valeu1 + Value2 = " << sum << endl;					//Valeu1, Valeu2값 출력문
		}
};

class BASE2{							//기본 클래스 Value3, Value4 멤버 변수와 BB_Set(), BB_Print() 멤버 함수를 지님 //디폴트 생성자도 자동생성 
	int Value3, Value4, sub;				//전역변수로 Value3, Value4 선언 
	public:								//어디서든지 사용가능 
		void sub_Set(int a, int b){		//Set int 인자를 2개 받는 생성자 
			Value3 = a;					//Value3이라는 변수가 가르키는 주소 값에 메모리안에 a을 선언 a로 초기화 // 받은 인자값을 Value3에 선언 
			Value4 = b;					//Value4라는 변수가 가르키는 주소 값에 메모리안에 a을 선언 a로 초기화 // 받은 인자값을 Value4에 선언
		}
		void sub_Print(){				//출력문 생성자 
			sub = Value3 - Value4;										// sub = Value3 + Value4
			cout << "들어간 값 : " << Value3 <<", "<< Value4 << "   ";	//Valeu3, Valeu4값 출력문
			cout << "Valeu3 + Value4 = " << sub<< endl;					//Valeu3, Valeu4값 출력문
		}
}; 

class BASE3{							//기본 클래스 Value3, Value4 멤버 변수와 BB_Set(), BB_Print() 멤버 함수를 지님 //디폴트 생성자도 자동생성 
	int Value5, Value6, mul;			//전역변수로 Value3, Value4 선언 
	public:								//어디서든지 사용가능 
		void mul_Set(int a, int b){		//Set int 인자를 2개 받는 생성자 
			Value5 = a;					//Value3이라는 변수가 가르키는 주소 값에 메모리안에 a을 선언 a로 초기화 // 받은 인자값을 Value3에 선언 
			Value6 = b;					//Value4라는 변수가 가르키는 주소 값에 메모리안에 a을 선언 a로 초기화 // 받은 인자값을 Value4에 선언
		}
		void mul_Print(){				//출력문 생성자 
			mul = Value5 * Value6;										// mul = Value5 + Value6
			cout << "들어간 값 : " << Value5 <<", "<< Value6 << "   ";	//Valeu5, Valeu6값 출력문
			cout << "Valeu5 x Value6 = " << mul<< endl;					//Valeu5, Valeu6값 출력문
		}
}; 

class BASE4{								//기본 클래스 Value3, Value4 멤버 변수와 BB_Set(), BB_Print() 멤버 함수를 지님 //디폴트 생성자도 자동생성 
	double Value7, Value8, div, div2;		//전역변수로 Value3, Value4 선언 
	public:									//어디서든지 사용가능 
		void div_Set(double a, double b){		//Set int 인자를 2개 받는 생성자 
			Value7 = a;							//Value3이라는 변수가 가르키는 주소 값에 메모리안에 a을 선언 a로 초기화 // 받은 인자값을 Value3에 선언 
			Value8 = b;							//Value4라는 변수가 가르키는 주소 값에 메모리안에 a을 선언 a로 초기화 // 받은 인자값을 Value4에 선언
		}
		void div_Print(){						//출력문 생성자 
			div = Value7 / Value8;										// div = Value7 + Value8
			cout << "들어간 값 : " << Value7 <<", "<< Value8 << "   ";	//Valeu7, Valeu8값 출력문
			cout << "Value7 / Vlaue8 = " << div2<< endl;				//Valeu7, Valeu8값 출력문
		}
}; 

class DERIVED : public BASE1, public BASE2, public BASE3, public BASE4{		// 기본 클래스로부터 파생된 클래스 data 멤버 변수로 D_Print(), BB_Print() 멤버 함수 지님 // 자식클래스 다중상속 
};

int main(){					// 몸체부, 메인 함수 // int 를 쓰는이유는 비정상적인 오류를 제외 시키는것
							//void를 써도 상관없지만 오류가 날수도있고 계속 컴퓨터가 값을 기다린다
	
	DERIVED Obj;		//파생 클래스의 객체 생성 DERIVED Obj에 2022인자값 보내기 
	
	cout << "IT융합학부 1971070 2학년 이재은 다중상속 계산기" << endl << endl;		//학부, 학번, 학년, 이름, 과제명 출력문 
	
	Obj.sum_Set(10,20);		// 기본 클래스에 접근 (10, 20)인자값 보내기 
	Obj.sub_Set(30,20);		// 기본 클래스에 접근 (30, 20)인자값 보내기 
	Obj.mul_Set(10,20);		// 기본 클래스에 접근 (10, 20)인자값 보내기 
	Obj.div_Set(40,20);		// 기본 클래스에 접근 (40, 20)인자값 보내기 
	
	Obj.sum_Print();		// 파생 클래스의 멤버에 접근 Obj.sum_Print 사용 
	Obj.sub_Print();		// 파생 클래스의 멤버에 접근 Obj.sub_Print 사용
	Obj.mul_Print();		// 파생 클래스의 멤버에 접근 Obj.mul_Print 사용
	Obj.div_Print();		// 파생 클래스의 멤버에 접근 Obj.div_Print 사용
	
	return 0;				//리턴값 0 
}
