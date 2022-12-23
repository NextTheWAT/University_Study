#include <iostream>				//선언부 컴파일에 접근을해서 선언파트에 있는 걸 처리해서 사용 
using namespace std;    		//std라는 소속을 알려줄 필요가 다음부터 없는것 등록을 했을경우 ex( std::cout 

class Date{									//Date라는 객체(클래스) 선언 
	private:								//자기 자신만 사용 가능 
		int year, month, day;				//전역변수로 year, month, day 선언 
		public :							//어디서든 사용 가능 
			Date();							//Date 의 디폴트 생성자 
			Date(int y, int m, int d);		//Date int 인자를 3개 받는 생성자 
			Date(int m, int d);				//Date int 인자를 2개 받는 생성자
			Date(int d);					//Date int 인자를 1개 받는 생성자
			void print();					//year, month, day 값을 출력해주는 생성자 
};

Date::Date(){					//Date의 디폴트 생성자 
	year = 2022;				//year이라는 변수가 가르키는 주소 값에 메모리안에 2022을 선언 2022으로 초기화 
	month=10;					//month이라는 변수가 가르키는 주소 값에 메모리안에 10을 선언 10으로 초기화 
	day = 11;					//day이라는 변수가 가르키는 주소 값에 메모리안에 11을 선언 11으로 초기화 
}
Date::Date(int y, int m, int d){		//정수형 인자를 3개받는 Date 생성자 
	month = m;							//month라는 변수가 가르키는 주소 값에 메모리안에 m을 선언 m으로 초기화 
	day = d;							//day라는 변수가 가르키는 주소 값에 메모리안에 d을 선언 m으로 초기화
	year = y;							//year이라는 변수가 가르키는 주소 값에 메모리안에 y을 선언 m으로 초기화
}
Date::Date(int m, int d){				//정수형 변수를 2개받는 Date 생성자 
	month = m;							//month라는 변수가 가르키는 주소 값에 메모리안에 m을 선언 m으로 초기화 
	day = d;							//day라는 변수가 가르키는 주소 값에 메모리안에 d를 선언 d으로 초기화
	year = 2022;						//year이라는 변수가 가르키는 주소 값에 메모리안에 2022을 선언 2022으로 초기화
}
Date::Date(int d){						//정수형 변수를 1개받는 Date 생성자
	month = 10;							//month라는 변수가 가르키는 주소 값에 메모리안에 10을 선언 10으로 초기화 
	day = d;							//day라는 변수가 가르키는 주소 값에 메모리안에 d을 선언 d으로 초기화
	year = 2022;						//year이라는 변수가 가르키는 주소 값에 메모리안에 2022을 선언 2022으로 초기화
}
void Date::print(){												//출력문 생성자 
	cout << year << "년" << month << "월" << day << "일";		//년, 월, 일 출력문 
}

int main(){										// 몸체부, 메인 함수 // int 를 쓰는이유는 비정상적인 오류를 제외 시키는것
												//void를 써도 상관없지만 오류가 날수도있고 계속 컴퓨터가 값을 기다린다
	Date date1(2022, 10, 11);					//Date클래스에 date1객체 생성하면서 인자3개를 받는 생성자가 호출된다 
	Date date2(10, 11);							//Date클래스에 date2객체 생성하면서 인자2개를 받는 생성자가 호출된다
	Date date3(11);								//Date클래스에 date3객체 생성하면서 인자1개를 받는 생성자가 호출된다
	Date date4;								//Date클래스에 date4객체 생성하면서 인자0개를 받는 생성자가 호출된다 디폴트 생성자 
	
	cout << "IT융합학부 1971070 2학년 이재은 생성자" << endl << endl;			//학과 학번 학년 이름 출력문 
	
	cout << "=== (int y, int m, int d) 인수를 받았을때 ===" << endl;		//출력문 
	cout << "date1 => ";													//출력문 
	date1.print();															//print생정자를 date1 값으로 호출 
	cout << endl << endl;													//줄바꿈 
	cout << "=== (int m, int d) 인수를 받았을때 ===" << endl;				//출력문 
	cout << "date2 => ";													//출력문 
	date2.print();															//print생성자를 date2 값으로 호출 
	cout << endl << endl;													//줄바꿈 
	cout << "=== (int d) 인수를 받았을때 date3 ===" << endl;				//출력문 
	cout << "date3 => ";													//출력문 
	date3.print();															//print생성자를 date3 값으로 호출 
	cout << endl << endl;		
		cout << "=== date4 ===" << endl;				//출력문 
	cout << "date4 => ";													//출력문 
	date4.print();															//print생성자를 date3 값으로 호출 
	cout << endl << endl;												//줄바꿈 

	
	return 0; 
}
