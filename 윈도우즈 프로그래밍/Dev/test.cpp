#include <iostream>  	//선언부 컴파일에 접근을해서 선언파트에 있는 걸 처리해서 사용 
using namespace std;    //std라는 소속을 알려줄 필요가 다음부터 없는것 등록을 했을경우 ex( std::cout 
// IT융합학부 2학년 1971070 이재은 1차원배열 


int main()
{
		cout <<"IT융합학부 1971070 2학년 이재은" << endl; 
	
	int a[4];
	
	
	for(int i=0; i<=2; i++){
		cout << "값 입력: ";
		cin >> a[i];	
	cout << i << "번째 : "<< a[i] << endl;	
	}
	
	for(int j=0; j<=2; j++){
		a[4] = a[4] + a[j];
	}
	
	cout << "4번째 배열 값: " << a[4];
	
	
	
}
