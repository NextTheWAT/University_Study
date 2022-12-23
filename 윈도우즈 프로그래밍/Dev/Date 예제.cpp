#include <iostream>				//선언부 컴파일에 접근을해서 선언파트에 있는 걸 처리해서 사용 
using namespace std;    		//std라는 소속을 알려줄 필요가 다음부터 없는것 등록을 했을경우 ex( std::cout 

class Date{
	private:
		int year, month, day;
		public :
			Date();
			Date(int y, int m, int d);
			Date(int m, int d);
			Date(int d);
			void print();
};

Date::Date(){		//디폴스 생성자 
	year = 2022;
	month=10;
	day = 11;
}
Date::Date(int y, int m, int d){		//생성자 
	month = m;
	day = d;
	year = y;
}
Date::Date(int m, int d){		//생성자 
	month = 2022;
	day = d;
	year = y;
}
Date::Date(int d){		//생성자 
	month = 10;
	day = d;
	year = 2022;
}

void Date::print(){				//출력함수 
	cout << year << "년" << month << "월" << day << "일";
}

int main(){
	Date date1(2007, 4, 15);	//date1 객체 생성 시에는 인수가 있는 생성자 함수가 호출되어 2007,4,15로 연도,월,일이 초기화됨 
	Date date2;					//date2 객체가 생성될 때에는 인수가 없는 생성자 함수가 호출되어 1900,1,1 로 초기화됨 
	
	cout << "date1 => ";
	date1.print();
	cout<< "\ndate2 -> ";		//date1 객체와 date2 객체 출력 
	date2.print();
	
	date2 = date1;				//객체 복사 코드에 의해 date2 객체가 date1 객체의 데이터로 변경 
	cout << "\n\n[date2 = date1] 문장 실행수 date2 => ";
	date2.print();
	cout << endl;
	
	return 0; 
}
