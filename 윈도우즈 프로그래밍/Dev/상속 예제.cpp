#include <iostream>	
using namespace std;

class BASE{					//기본 클래스 Value1, Value2 멤버 변수와 Set(), B_Print() 멤버 함수를 지님 //디폴트 생성자도 자동생성 
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
class DERIVED : public BASE{		// 기본 클래스로부터 파생된 클래스 data 멤버 변수오 D_Print() 멤버 함수를 지님 // 자식클래스 
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
	
	DERIVED Obj(33);		//파생 클래스의 객체 생성 
	 
	Obj.Set(34, 17);		// 기본 클래스에 접근 
	Obj.B_Print();			// 기본 클래스의 멤버에 접근 
	Obj.D_Print();			// 파생 클래스의 멤버에 접근 
	
	return 0;
}
