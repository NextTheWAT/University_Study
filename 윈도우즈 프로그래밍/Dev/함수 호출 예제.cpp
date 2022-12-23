#include <iostream>  	//선언부 컴파일에 접근을해서 선언파트에 있는 걸 처리해서 사용 
using namespace std;    //std라는 소속을 알려줄 필요가 다음부터 없는것 등록을 했을경우 ex( std::cout 
// IT융합학부 2학년 1971070 이재은 이름 10번 출력 

void String(void);		//함수 선언 

int main()			// 몸체부, 메인 함수 // int 를 쓰는이유는 비정상적인 오류를 제외 시키는것
					//void를 써도 상관없지만 오류가 날수도있고 계속 컴퓨터가 값을 기다린다
{
	
	cout <<"1971070 2학년 이재은" << endl; 
	
	for(int idx=1; idx<=10; idx++){			//조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식으로 
	cout << idx << "라인 : ";				// idx가 1부터 10까지 1씩증가 라인: 을 1번씩출력 뒤에 String 함수 1번씩 호출 
	
	String();					//String 함수 호출 
	
	}
	return 0;			//반환되는 값이 0 이다 
}

void String(void){					//String 함수 정의 
cout << "이재은" << endl;
}
