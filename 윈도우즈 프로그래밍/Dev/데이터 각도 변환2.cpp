#include <iostream>  	//����� �����Ͽ� �������ؼ� ������Ʈ�� �ִ� �� ó���ؼ� ��� 
using namespace std;    //std��� �Ҽ��� �˷��� �ʿ䰡 �������� ���°� ����� ������� ex( std::cout 
// IT�����к� 2�г� 1971070 ������ ������ ���� ��ȯ 


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


