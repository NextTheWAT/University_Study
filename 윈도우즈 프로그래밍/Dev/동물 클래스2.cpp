#include <iostream>  	//����� �����Ͽ� �������ؼ� ������Ʈ�� �ִ� �� ó���ؼ� ��� 
using namespace std;    //std��� �Ҽ��� �˷��� �ʿ䰡 �������� ���°� ����� ������� ex( std::cout 
// IT�����к� 2�г� 1971070 ������ Ŭ���� ��ü 

int count = 0; //���� �������� 

class Animal		//Animal Ŭ���� ���� 
{
   char Name[10];					// �迭���� 10�� Name�� ���� �ּҰ��� �������ְ� �ش� �޸𸮿� �����Ѵ� 
  public:							//���� �������� public �̴� - ��𼭵��� ��� ���� 
   void Set_Name();					// Set_Name() �Լ� ���� 
   void Print_Name();				// Print_name() �Լ� ���� 
};			//������� Ŭ���� ���� 

void Animal::Set_Name(){						//��� �Լ� Set_Name() ���� 
   cout<<"�����ϴ� ����" << ++count << ":";		// �����ϴ� ���� ��� �� �ٷ� count ������ ���� 1++ 
   cin >> Name;									//����ڷκ��� Name �����͸� �Է� ���� 
}

void Animal::Print_Name(){						//��� �Լ� Print_Name() ���� 
   cout<<count<<":"<<Name<<endl;				// count ������ �� ����� Name ��� 
}

int main()			// ��ü��, ���� �Լ� // int �� ���������� ���������� ������ ���� ��Ű�°�
					//void�� �ᵵ ��������� ������ �������ְ� ��� ��ǻ�Ͱ� ���� ��ٸ���
{
	cout << "IT�����к� 2�г� 1971070 ������ Ŭ���� ��ü" <<endl; 		//��¹�
	
   Animal dog,cat,dog2; //dog, dog2, cat ��ü����. 
   
   dog.Set_Name(); 				// Animal Ŭ������ ���� �Ǿ��ִ� Set_name�� dog��ü�� �̿��Ͽ� ��� 
   dog.Print_Name();			// Animal Ŭ������ ���� �Ǿ��ִ� Print_name�� dog��ü�� �̿��Ͽ� ���
   
   dog2.Set_Name(); 			// Animal Ŭ������ ���� �Ǿ��ִ� Set_name�� dog2��ü�� �̿��Ͽ� ��� 
   dog2.Print_Name();			// Animal Ŭ������ ���� �Ǿ��ִ� Print_name�� dog2��ü�� �̿��Ͽ� ���

   cat.Set_Name();				// Animal Ŭ������ ���� �Ǿ��ִ� Set_name�� cat��ü�� �̿��Ͽ� ��� 
   cat.Print_Name();			// Animal Ŭ������ ���� �Ǿ��ִ� Print_name�� cat��ü�� �̿��Ͽ� ���
   

   return 0;					//���� ���� 0�̴�. 
}





