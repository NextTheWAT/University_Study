#include <iostream>  	//선언부 컴파일에 접근을해서 선언파트에 있는 걸 처리해서 사용 
#include <stdio.h>
using namespace std;    //std라는 소속을 알려줄 필요가 다음부터 없는것 등록을 했을경우 ex( std::cout 
// IT융합학부 2학년 1971070 이재은 데이터 각도 변환 

int arr[2][2] = {{1,2},{3,4}};
int temp[2][2];

void rotate(int n);

int main(){
	rotate(2);
	rotate(2);
	rotate(2);
}


void rotate(int n){
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout << arr[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			temp[i][j] = arr[n-1-j][i];
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			arr[i][j] = temp[i][j];
		}
	}
	
}




