#include <iostream>				//선언부 컴파일에 접근을해서 선언파트에 있는 걸 처리해서 사용 
#include <string>				//선언부 컴파일에 접근을해서 선언파트에 있는 걸 처리해서 사용 
using namespace std;    		//std라는 소속을 알려줄 필요가 다음부터 없는것 등록을 했을경우 ex( std::cout 

double add(double X, double Y){			//실수 숫자 2개를 입력받아서 더한 후 그 결과를 반환하는 add함수 
	return X+Y;							//X+Y값 리턴 
} 

int add(int X, int Y){					//실수 숫자 2개를 입력받아서 더한 후 그 결과를 반환하는 add함수 
	return X+Y;							//X+Y값 리턴
}

string add(string X, string Y){			//실수 숫자 2개를 입력받아서 더한 후 그 결과를 반환하는 add함수 
	return X+Y;							//X+Y값 리턴
}

int main(){								// 몸체부, 메인 함수 // int 를 쓰는이유는 비정상적인 오류를 제외 시키는것
										//void를 써도 상관없지만 오류가 날수도있고 계속 컴퓨터가 값을 기다린다
	int iNum1=10;			//iNum1이라는 변수가 가르키는 주소 값에 메모리안에 10을 선언 10으로 초기화 
	int iNum2=20;			//iNum2이라는 변수가 가르키는 주소 값에 메모리안에 20을 선언 20으로 초기화
	double dNum1=30.5;		//dNum1이라는 변수가 가르키는 주소 값에 메모리안에 30.5을 선언 30.5으로 초기화
	double dNum2=15.4;		//dNum2이라는 변수가 가르키는 주소 값에 메모리안에 15.4을 선언 15.4으로 초기화
	string ch1="A";			//ch1이라는 변수가 가르키는 주소 값에 메모리안에 A를 선언 A로 초기화
	string ch2="B";			//ch2이라는 변수가 가르키는 주소 값에 메모리안에 B를 선언 B로 초기화
	
	cout << "IT융합학부 1971070 2학년 이재은 함수 오버로딩" << endl << endl;			//출력문 
	
	cout << "add 함수를 사용하여 더한 정수 값 : "; 						//출력문 
	cout << add(iNum1, iNum2) << endl;									//오버로딩으로 인한 정수값을 더하는 add함수 출력 
	cout << "add 함수를 사용하여 더한 실수 값 : "; 						//출력문 
	cout << add(dNum1, dNum2) << endl;									//오버로딩으로 인한 실수값을 더하는 add함수 출력
	cout << "add 함수를 사용하여 더한 문자열 값 : "; 					//출력문 
	cout << add(ch1, ch2) << endl;										//오버로딩으로 인한 문자열값을 더하는 add함수 출력
}	
