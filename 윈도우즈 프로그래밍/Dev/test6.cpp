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
	
	for(int a=0; a<1; a++){
		
		for(int b=0; b<1; b++){
			for(int c=0; c<1; c++){
				cout << arr[b][c] << " "<< arr[b][c+1] << " ";
				cout << "    ";
				cout << arr[b+1][c] << " "<< arr[b][c] << " ";
				cout << "    "; 
			}
			for(int i=0; i<1; i++){
				cout << arr[b+1][i+1] << " " << arr[b+1][i] << " ";
				cout << "    ";
			}
		}
		cout << endl;
		for(int q=0; q<1; q++){
			for(int w=0; w<1; w++){
				cout << arr[q+1][w] << " "<< arr[q+1][w+1] << " ";
				cout << "    ";
				cout << arr[q+1][w+1] << " "<< arr[q][w+1] << " ";
				cout << "    "; 
			}
			for(int j=0; j<1; j++){
				cout << arr[q][j+1] << " " << arr[q][j] << " ";
				cout << "    ";
			}
		}
	}
}



