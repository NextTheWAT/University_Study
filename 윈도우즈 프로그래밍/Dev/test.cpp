#include <iostream>  	//����� �����Ͽ� �������ؼ� ������Ʈ�� �ִ� �� ó���ؼ� ��� 
using namespace std;    //std��� �Ҽ��� �˷��� �ʿ䰡 �������� ���°� ����� ������� ex( std::cout 
// IT�����к� 2�г� 1971070 ������ 1�����迭 


int main()
{
		cout <<"IT�����к� 1971070 2�г� ������" << endl; 
	
	int a[4];
	
	
	for(int i=0; i<=2; i++){
		cout << "�� �Է�: ";
		cin >> a[i];	
	cout << i << "��° : "<< a[i] << endl;	
	}
	
	for(int j=0; j<=2; j++){
		a[4] = a[4] + a[j];
	}
	
	cout << "4��° �迭 ��: " << a[4];
	
	
	
}
