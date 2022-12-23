#include <iostream>  	//선언부 컴파일에 접근을해서 선언파트에 있는 걸 처리해서 사용 

using namespace std;    //std라는 소속을 알려줄 필요가 다음부터 없는것 등록을 했을경우 ex( std::cout 

// IT융합학부 2학년 1971070 이재은 정삼각형 


int main()
{
	int i, k;

	for (i = 0; i < 3; i++)
	{
		for (k = 0; k < i; k++){
			printf(" ");
		}
		for (k = 0; k < 3 * 2 - i * 2 - 1; k++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
