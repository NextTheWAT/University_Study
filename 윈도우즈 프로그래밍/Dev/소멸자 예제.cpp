#include <iostream>
#include <string>
using namespace std;

class STRING{
	char *string;
	int length;
	public:
		STRING(char*);
		~STRING();
		void Catenate(STRING &);
		void Print();
}; 


STRING::~STRING(){
	cout << "�޸� ���� ��..\n";
	delete string;
}


void STRING::Catenate(STRING &Str){
	length = length + Str.length;
	char *tmp = new char[length + 1];
	strcpy
}


int main(){
	STRING first("Timr is not money.");	//STRING ��ü�� first�� second ���� first ��ü���� time is not money ����
										//second ��ü���� time is life ���� 
	STRING second("Time is life.");
	
	first.Print();
	second.Print();
	first.Catenate(second);				 
	cout << "\n.....���ڿ� ����.....\n";
	first.Print();
	
	return 0;
}
