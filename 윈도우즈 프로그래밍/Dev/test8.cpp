#include <iostream>  	//����� �����Ͽ� �������ؼ� ������Ʈ�� �ִ� �� ó���ؼ� ��� 
#include <stdio.h>
using namespace std;    //std��� �Ҽ��� �˷��� �ʿ䰡 �������� ���°� ����� ������� ex( std::cout 
// IT�����к� 2�г� 1971070 ������ ������ ���� ��ȯ 

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




