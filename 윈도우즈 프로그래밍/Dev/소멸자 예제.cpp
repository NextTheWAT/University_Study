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
	cout << "메모리 해제 중..\n";
	delete string;
}


void STRING::Catenate(STRING &Str){
	length = length + Str.length;
	char *tmp = new char[length + 1];
	strcpy
}


int main(){
	STRING first("Timr is not money.");	//STRING 객체로 first와 second 생성 first 객체에는 time is not money 저장
										//second 객체에는 time is life 저장 
	STRING second("Time is life.");
	
	first.Print();
	second.Print();
	first.Catenate(second);				 
	cout << "\n.....문자열 연결.....\n";
	first.Print();
	
	return 0;
}
