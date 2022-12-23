#include <iostream>				//����� �����Ͽ� �������ؼ� ������Ʈ�� �ִ� �� ó���ؼ� ��� 
using namespace std;    		//std��� �Ҽ��� �˷��� �ʿ䰡 �������� ���°� ����� ������� ex( std::cout 

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

Date::Date(){		//������ ������ 
	year = 2022;
	month=10;
	day = 11;
}
Date::Date(int y, int m, int d){		//������ 
	month = m;
	day = d;
	year = y;
}
Date::Date(int m, int d){		//������ 
	month = 2022;
	day = d;
	year = y;
}
Date::Date(int d){		//������ 
	month = 10;
	day = d;
	year = 2022;
}

void Date::print(){				//����Լ� 
	cout << year << "��" << month << "��" << day << "��";
}

int main(){
	Date date1(2007, 4, 15);	//date1 ��ü ���� �ÿ��� �μ��� �ִ� ������ �Լ��� ȣ��Ǿ� 2007,4,15�� ����,��,���� �ʱ�ȭ�� 
	Date date2;					//date2 ��ü�� ������ ������ �μ��� ���� ������ �Լ��� ȣ��Ǿ� 1900,1,1 �� �ʱ�ȭ�� 
	
	cout << "date1 => ";
	date1.print();
	cout<< "\ndate2 -> ";		//date1 ��ü�� date2 ��ü ��� 
	date2.print();
	
	date2 = date1;				//��ü ���� �ڵ忡 ���� date2 ��ü�� date1 ��ü�� �����ͷ� ���� 
	cout << "\n\n[date2 = date1] ���� ����� date2 => ";
	date2.print();
	cout << endl;
	
	return 0; 
}
