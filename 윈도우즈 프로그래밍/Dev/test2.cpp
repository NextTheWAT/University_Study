#include <iostream>  	//선언부 컴파일에 접근을해서 선언파트에 있는 걸 처리해서 사용 
using namespace std;    //std라는 소속을 알려줄 필요가 다음부터 없는것 등록을 했을경우 ex( std::cout 
// IT융합학부 2학년 1971070 이재은

double add (double x, double y){
	return x+y;
}
int a (double x, double y){
	return x*y;
}

int main(){
	int d, b, c;
	
			cout <<"IT융합학부 1971070 2학년 이재은" << endl; 
	
	cout << "값을 입력하세요 : ";
	
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

