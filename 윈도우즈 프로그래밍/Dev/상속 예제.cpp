#include <iostream>	
using namespace std;

class BASE{					//�⺻ Ŭ���� Value1, Value2 ��� ������ Set(), B_Print() ��� �Լ��� ���� //����Ʈ �����ڵ� �ڵ����� 
	int Value1, Value2;
	public:
		void Set(int a, int b) {
		Value1 = a; 
		Value2=b; 
		}
		void B_Print(){
			cout << "\nValue1 = " << Value1
				<< ", Value2 = " << Value2 << endl;
		}
};
class DERIVED : public BASE{		// �⺻ Ŭ�����κ��� �Ļ��� Ŭ���� data ��� ������ D_Print() ��� �Լ��� ���� // �ڽ�Ŭ���� 
	int data;
	public:
		DERIVED(int x ) {
		data = x;
		}
		void D_Print() {
		cout << "data = " << data << endl;
	}
};
int main(){
	
	DERIVED Obj(33);		//�Ļ� Ŭ������ ��ü ���� 
	 
	Obj.Set(34, 17);		// �⺻ Ŭ������ ���� 
	Obj.B_Print();			// �⺻ Ŭ������ ����� ���� 
	Obj.D_Print();			// �Ļ� Ŭ������ ����� ���� 
	
	return 0;
}
