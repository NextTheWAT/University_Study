#include <iostream>  	//선언부 컴파일에 접근을해서 선언파트에 있는 걸 처리해서 사용 
using namespace std;    //std라는 소속을 알려줄 필요가 다음부터 없는것 등록을 했을경우 ex( std::cout 
// IT융합학부 2학년 1971070 이재은 1번 정삼각형 2번 역삼각형 
int main()
{
	int a=0, b=0, c=0;			//1번 삼각형 변수 
	int i=0, k=0;				//2번 삼각형 변수 
	int sel=0;					//번호 선택 변수 
		// a, b, c, i, k, sel을 선언함과 동시에 값을 초기화 0으로 
							//a가 기억하는 주소값에 0을 넣는것 b, c, i, k, sel도 마찬가지 
	cout<<"IT융합학부 1971070 2학년 이재은\n";
	printf("1번은 정삼각형\n");
	printf("2번은 역삼각형\n");
	printf("번호를 선택하세요: ");
	
	cin >> sel;
	if(sel==1){						//1번을 선택하면 1번 삼각형 for문 출력 
	for (a = 0; a < 3; a++) 				//조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식으로 
	{									// a는 0에서 2까지 증가	 
		for (b=a; b <= 2; b++) {		// b는 a부터 3-1까지 1+씩 증가 
			printf(" ");				//공백 
		}
		for (c = 0; c <=(a*2); c++) {		// c는  0부터 a*2까지 1+씩 증가 
			printf("*");
		}
		printf("\n");
	}
}
	else if(sel==2)			//2번을 선택하면 2번 삼각형 for문 출력 
	{
	for (i = 0; i < 3; i++)			//i는  0부터 2까지 1씩 증가 
		{
		for (k = 0; k < i; k++){			//k는 0부터 i까지 증가 1씩 
			printf(" ");
			}
		for (k = 0; k < 3 * 2 - i * 2 - 1; k++){		//k는 3*2-i*2-1 까지 +1씩 증가 
			printf("*");
			}
		printf("\n");
		}
	}
	else { printf("잘못 선택하셨습니다.");
	}
	return 0;
}




