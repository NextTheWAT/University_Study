#include <iostream>				//C++�� �����ϱ� ���� ��� ���� ����
using namespace std;			//std::�� ���ξ �����Ѵ�.

class BASE1{							//�⺻ Ŭ���� Value1, Value2 ��� ������ Set(), B_Print() ��� �Լ��� ���� //����Ʈ �����ڵ� �ڵ����� 
	int Value1, Value2, sum;			//���������� Value1, Value2 ���� 
	public:								//��𼭵��� ��밡�� 
		void sum_Set(int a, int b) {	//Set int ���ڸ� 2�� �޴� ������ 
		Value1 = a; 					//Value1�̶�� ������ ����Ű�� �ּ� ���� �޸𸮾ȿ� a�� ���� a�� �ʱ�ȭ // ���� ���ڰ��� Value1�� ���� 
		Value2 = b; 					//Value2��� ������ ����Ű�� �ּ� ���� �޸𸮾ȿ� b�� ���� b�� �ʱ�ȭ // ���� ���ڰ��� Value2�� ����
		}
		void sum_Print(){							//��¹� ������ 
			sum = Value1 + Value2;											// sum = Value1 + Value2
			cout << "�� �� : " << Value1 <<", "<< Value2 << "   ";		//Valeu1, Valeu2�� ��¹� 
			cout << "Valeu1 + Value2 = " << sum << endl;					//Valeu1, Valeu2�� ��¹�
		}
};

class BASE2{							//�⺻ Ŭ���� Value3, Value4 ��� ������ BB_Set(), BB_Print() ��� �Լ��� ���� //����Ʈ �����ڵ� �ڵ����� 
	int Value3, Value4, sub;				//���������� Value3, Value4 ���� 
	public:								//��𼭵��� ��밡�� 
		void sub_Set(int a, int b){		//Set int ���ڸ� 2�� �޴� ������ 
			Value3 = a;					//Value3�̶�� ������ ����Ű�� �ּ� ���� �޸𸮾ȿ� a�� ���� a�� �ʱ�ȭ // ���� ���ڰ��� Value3�� ���� 
			Value4 = b;					//Value4��� ������ ����Ű�� �ּ� ���� �޸𸮾ȿ� a�� ���� a�� �ʱ�ȭ // ���� ���ڰ��� Value4�� ����
		}
		void sub_Print(){				//��¹� ������ 
			sub = Value3 - Value4;										// sub = Value3 + Value4
			cout << "�� �� : " << Value3 <<", "<< Value4 << "   ";	//Valeu3, Valeu4�� ��¹�
			cout << "Valeu3 + Value4 = " << sub<< endl;					//Valeu3, Valeu4�� ��¹�
		}
}; 

class BASE3{							//�⺻ Ŭ���� Value3, Value4 ��� ������ BB_Set(), BB_Print() ��� �Լ��� ���� //����Ʈ �����ڵ� �ڵ����� 
	int Value5, Value6, mul;			//���������� Value3, Value4 ���� 
	public:								//��𼭵��� ��밡�� 
		void mul_Set(int a, int b){		//Set int ���ڸ� 2�� �޴� ������ 
			Value5 = a;					//Value3�̶�� ������ ����Ű�� �ּ� ���� �޸𸮾ȿ� a�� ���� a�� �ʱ�ȭ // ���� ���ڰ��� Value3�� ���� 
			Value6 = b;					//Value4��� ������ ����Ű�� �ּ� ���� �޸𸮾ȿ� a�� ���� a�� �ʱ�ȭ // ���� ���ڰ��� Value4�� ����
		}
		void mul_Print(){				//��¹� ������ 
			mul = Value5 * Value6;										// mul = Value5 + Value6
			cout << "�� �� : " << Value5 <<", "<< Value6 << "   ";	//Valeu5, Valeu6�� ��¹�
			cout << "Valeu5 x Value6 = " << mul<< endl;					//Valeu5, Valeu6�� ��¹�
		}
}; 

class BASE4{								//�⺻ Ŭ���� Value3, Value4 ��� ������ BB_Set(), BB_Print() ��� �Լ��� ���� //����Ʈ �����ڵ� �ڵ����� 
	double Value7, Value8, div, div2;		//���������� Value3, Value4 ���� 
	public:									//��𼭵��� ��밡�� 
		void div_Set(double a, double b){		//Set int ���ڸ� 2�� �޴� ������ 
			Value7 = a;							//Value3�̶�� ������ ����Ű�� �ּ� ���� �޸𸮾ȿ� a�� ���� a�� �ʱ�ȭ // ���� ���ڰ��� Value3�� ���� 
			Value8 = b;							//Value4��� ������ ����Ű�� �ּ� ���� �޸𸮾ȿ� a�� ���� a�� �ʱ�ȭ // ���� ���ڰ��� Value4�� ����
		}
		void div_Print(){						//��¹� ������ 
			div = Value7 / Value8;										// div = Value7 + Value8
			cout << "�� �� : " << Value7 <<", "<< Value8 << "   ";	//Valeu7, Valeu8�� ��¹�
			cout << "Value7 / Vlaue8 = " << div2<< endl;				//Valeu7, Valeu8�� ��¹�
		}
}; 

class DERIVED : public BASE1, public BASE2, public BASE3, public BASE4{		// �⺻ Ŭ�����κ��� �Ļ��� Ŭ���� data ��� ������ D_Print(), BB_Print() ��� �Լ� ���� // �ڽ�Ŭ���� ���߻�� 
};

int main(){					// ��ü��, ���� �Լ� // int �� ���������� ���������� ������ ���� ��Ű�°�
							//void�� �ᵵ ��������� ������ �������ְ� ��� ��ǻ�Ͱ� ���� ��ٸ���
	
	DERIVED Obj;		//�Ļ� Ŭ������ ��ü ���� DERIVED Obj�� 2022���ڰ� ������ 
	
	cout << "IT�����к� 1971070 2�г� ������ ���߻�� ����" << endl << endl;		//�к�, �й�, �г�, �̸�, ������ ��¹� 
	
	Obj.sum_Set(10,20);		// �⺻ Ŭ������ ���� (10, 20)���ڰ� ������ 
	Obj.sub_Set(30,20);		// �⺻ Ŭ������ ���� (30, 20)���ڰ� ������ 
	Obj.mul_Set(10,20);		// �⺻ Ŭ������ ���� (10, 20)���ڰ� ������ 
	Obj.div_Set(40,20);		// �⺻ Ŭ������ ���� (40, 20)���ڰ� ������ 
	
	Obj.sum_Print();		// �Ļ� Ŭ������ ����� ���� Obj.sum_Print ��� 
	Obj.sub_Print();		// �Ļ� Ŭ������ ����� ���� Obj.sub_Print ���
	Obj.mul_Print();		// �Ļ� Ŭ������ ����� ���� Obj.mul_Print ���
	Obj.div_Print();		// �Ļ� Ŭ������ ����� ���� Obj.div_Print ���
	
	return 0;				//���ϰ� 0 
}
