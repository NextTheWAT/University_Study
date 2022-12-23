#include <iostream>  	//선언부 컴파일에 접근을해서 선언파트에 있는 걸 처리해서 사용 
using namespace std;    //std라는 소속을 알려줄 필요가 다음부터 없는것 등록을 했을경우 ex( std::cout 
// IT융합학부 2학년 1971070 이재은	실수는 더하고 정수는 곱하고 문자는 아스키코드 값으로 더하기 

double add (double x, double y){			//함수화, 함수를 사용하면 프로그램 코드가 구조화되어 간단해지고 쉽게 사용가능하다
											//x,y값을 받음 
	return x+y;				// x + y 값을 리턴 
}
int mul (int x, int y){			// 함수 선언 x,y값을 받음 
	return x*y;			// x*y 값을 리턴 
}
int asc (int x, int y){			//함수 선언 x,y값을 받음 
	return x + y; 			//x + y 값을 리턴 
}

int main(){				// 몸체부, 메인 함수 // int 를 쓰는이유는 비정상적인 오류를 제외 시키는것
						//void를 써도 상관없지만 오류가 날수도있고 계속 컴퓨터가 값을 기다린다
	
	int a = 10, b = 20;				//a = 10, b=20 으로 인트형으로 값을 초기화 
	double x = 10.1, y = 20.2;			//x=10.1, y=20.2로 더블형으로 값을 초기화 
	char q = 'A', w = 'B';				//q='A', w='B'로 char형으로 값을 초기화 
	
			cout <<"IT융합학부 1971070 2학년 이재은" << endl; 		//출력문 
	
	cout << "실수 값은 더하기 : " << add(x,y) << endl;		//출력문 
	cout << "정수 값은 곱하기 : " <<mul(a,b) << endl;		//출력문 
	cout << "문자는 아스키 코드 값으로 더하기 : " << asc(q,w) << endl;		//출력문 
 	
}

