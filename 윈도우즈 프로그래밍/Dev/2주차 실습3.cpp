#include <iostream>  	//선언부 컴파일에 접근을해서 선언파트에 있는 걸 처리해서 사용 

using namespace std;    //std라는 소속을 알려줄 필요가 다음부터 없는것 등록을 했을경우 ex( std::cout 

// IT융합학부 2학년 1971070 이재은 정삼각형 


int main()		// 몸체부, 메인 함수 // int 를 쓰는이유는 비정상적인 오류를 제외 시키는것
					//void를 써도 상관없지만 오류가 날수도있고 계속 컴퓨터가 값을 기다린다
{
	int a=0, b=0, c=0;
	// a, b, c을 선언함과 동시에 값을 초기화 0으로 
							//a가 기억하는 주소값에 0을 넣는것 b,c도 마찬가지 
	
	cout<<"IT융합학부 1971070 2학년 이재은\n";


	for (a = 0; a < 3; a++) 	//조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식으로 
	{								//a는 0부터 2까지 증가 
		for (b = 0; b <= a; b++) {			//b는 0부터 +1씩 a까지 증가 
			printf("*");
		}
		printf("\n");
	}
	
	
	return 0;
}












