#include <iostream>
using namespace std;

int main(){
	
	int integer;
	
	cout << "���� �Է�: ";
	cin >> integer;
	
	
	if(integer % 2 != 0)
		cout << "==>" << integer <<"�� Ȧ��\n";
	
	if(integer %2==0)
		cout << "==>" << integer <<"�� ¦��\n";
	
	return 0;
	
}
