#include <iostream>
using namespace std;

class A{
	private:
		int a, b;
		public:
		A();
		A(int q);
		A(int q, int w);
		void Print();
}; 

class B : public A{
	public:
		B();
		B(int q);
		B(int q, int w);
};

A::A(){
	a = 1;
	b = 2;
}

A::A(int q){
	a = q;
	b = 3;
}

A::A(int q, int w){
	a = q;
	b = w;
}
void A::Print(){
	cout << "A : " << a << ", B = " << b << endl;
}

B::B()

int main(){
	
	A k1;
	A k2(10);
	A k3(30,40);
	
	k1.Print();
	k2.Print();
	k3.Print();
	
	
}
