#include <iostream>  	//����� �����Ͽ� �������ؼ� ������Ʈ�� �ִ� �� ó���ؼ� ��� 
using namespace std;    //std��� �Ҽ��� �˷��� �ʿ䰡 �������� ���°� ����� ������� ex( std::cout 

int count =0;

class Aniaml {				//Animal Ŭ���� ���� 
	char Name[10];
	public : 
	void Set_Name();
	void Print_Name();
};						//������� Ŭ���� ���� 

void Animal::Set_Name() {			//��� �Լ� Set_Name() ���� 
	cout << "�����ϴ� ���� " << ++count << " : ";
	cin >> Name; 		//����ڷκ��� Name �����͸� �Է� ���� 
}

void Animal::Print_Name(){				//��� �Լ� Print_Name() ���� 
	cout << count << " : " << Name << endl;
}

int main(){
	
	Animal Dog, Dog2, Cat,;
	
	Dog.Set_Name();
	Dog.Print_Name();
	
	Dog2.Set_Name();
	Dog2.Print_Name();
	
	Cat.Set_Name();
	Cat.Print_Name();
	
	return 0;
	
} 
