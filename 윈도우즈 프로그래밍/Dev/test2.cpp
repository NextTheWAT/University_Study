#include <iostream>  	//����� �����Ͽ� �������ؼ� ������Ʈ�� �ִ� �� ó���ؼ� ��� 
using namespace std;    //std��� �Ҽ��� �˷��� �ʿ䰡 �������� ���°� ����� ������� ex( std::cout 
// IT�����к� 2�г� 1971070 ������

double add (double x, double y){
	return x+y;
}
int a (double x, double y){
	return x*y;
}

int main(){
	int d, b, c;
	
			cout <<"IT�����к� 1971070 2�г� ������" << endl; 
	
	cout << "���� �Է��ϼ��� : ";
	
	cin >> d;
	cin >> b;
	
	c = d + b;
	
	if(c%3 == 0){
		cout << a(d,b);
	}
	else {
		cout << add(d,b);
	}
}

