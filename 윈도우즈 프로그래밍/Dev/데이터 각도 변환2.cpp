#include <iostream>  	//선언부 컴파일에 접근을해서 선언파트에 있는 걸 처리해서 사용 
using namespace std;    //std라는 소속을 알려줄 필요가 다음부터 없는것 등록을 했을경우 ex( std::cout 
// IT융합학부 2학년 1971070 이재은 데이터 각도 변환 


int main(){
	
	int arr[2][2];
	int temp;
	
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			arr[i][j] = i+j+1;
			arr[1][j] = arr[1][j]+1;
		}
	}
	
	for(int i=0; i<1; i++){
		
		for(int a=0; a<1; a++){
			for(int b=1; b>=0; b--){
				cout << arr[a][b] << " " << arr[a][b];
			}
		}
		
	}
}


