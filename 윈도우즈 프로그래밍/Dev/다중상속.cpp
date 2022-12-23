#include <iostream>
using namespace std;

class BASE1{					//�⺻ Ŭ���� Value1, Value2 ��� ������ Set(), B_Print() ��� �Լ��� ���� //����Ʈ �����ڵ� �ڵ����� 
	int Value1, Value2;			//���������� Value1, Value2 ���� 
	public:							//��𼭵��� ��밡�� 
		void Set(int a, int b) {	//Set int ���ڸ� 2�� �޴� ������ 
		Value1 = a; 				//Value1�̶�� ������ ����Ű�� �ּ� ���� �޸𸮾ȿ� a�� ���� a�� �ʱ�ȭ // ���� ���ڰ��� Value1�� ���� 
		Value2 = b; 				//Value2��� ������ ����Ű�� �ּ� ���� �޸𸮾ȿ� b�� ���� b�� �ʱ�ȭ // ���� ���ڰ��� Value2�� ����
		}
		void B_Print(){				//��¹� ������ 
			cout << "IT�����к� 1971070 2�г� ������ ���߻��" << endl << endl;		//�к�, �й�, �г�, �̸�, ������ ��¹� 
			cout << "BASE1 class";
			cout << "\nV1 = " << Value1						//value1�� ��¹� 
				<< ", V2 = " << Value2 << endl << endl;				//value2�� ��¹� 
		}
};

class BASE2{						//�⺻ Ŭ���� Value3, Value4 ��� ������ BB_Set(), BB_Print() ��� �Լ��� ���� //����Ʈ �����ڵ� �ڵ����� 
	int Value3, Value4;				//���������� Value3, Value4 ���� 
	public:							//��𼭵��� ��밡�� 
		void BB_Set(int a, int b){		//Set int ���ڸ� 2�� �޴� ������ 
			Value3 = a;					//Value3�̶�� ������ ����Ű�� �ּ� ���� �޸𸮾ȿ� a�� ���� a�� �ʱ�ȭ // ���� ���ڰ��� Value3�� ���� 
			Value4 = b;					//Value4��� ������ ����Ű�� �ּ� ���� �޸𸮾ȿ� a�� ���� a�� �ʱ�ȭ // ���� ���ڰ��� Value4�� ����
		}
		void BB_Print(){				//��¹� ������ 
			cout << "BASE2 class" << endl;
			cout << "V3 = " << Value3;		//Value3 �� ��¹� 
			cout << ", V4 = " << Value4 << endl << endl;		//Value4 �� ��¹�
		}
}; 

class DERIVED : public BASE1, public BASE2{		// �⺻ Ŭ�����κ��� �Ļ��� Ŭ���� data ��� ������ D_Print(), BB_Print() ��� �Լ� ���� // �ڽ�Ŭ���� ���߻�� 
	int data;						//���������� data ���� 
	public:							//��𼭵��� ��밡�� 
		DERIVED(int x ) {			//���ڸ� 1�� �޴� ������ 
		data = x;					//data��� ������ ����Ű�� �ּ� ���� �޸𸮾ȿ� x�� ���� x�� �ʱ�ȭ // ���� ���ڰ��� data�� ����
		}
		void D_Print() {			//��¹� ������ 
		cout << "data = " << data << endl;		//�� ��¹� 
	}
};

int main(){					// ��ü��, ���� �Լ� // int �� ���������� ���������� ������ ���� ��Ű�°�
							//void�� �ᵵ ��������� ������ �������ְ� ��� ��ǻ�Ͱ� ���� ��ٸ���
	
	DERIVED Obj(2022);		//�Ļ� Ŭ������ ��ü ���� DERIVED Obj�� 2022���ڰ� ������ 
	 
	Obj.Set(10, 20);		// �⺻ Ŭ������ ���� (10, 18)���ڰ� ������ 
	Obj.B_Print();			// �⺻ Ŭ������ ����� ���� Obj.B_Print ��� 
	Obj.BB_Set(30, 40);		// �⺻ Ŭ������ ���� (30, 40)���ڰ� ������ 
	Obj.BB_Print();			// �Ļ� Ŭ������ ����� ���� Obj.BB_Print ��� 
	Obj.D_Print();			// �Ļ� Ŭ������ ����� ���� Obj.D_Print ��� 
	
	return 0;				//���ϰ� 0 
}
