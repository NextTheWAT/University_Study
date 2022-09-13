#include <iostream>
using namespace std;

int main(){
	
	int integer;
	
	cout << "Á¤¼ö ÀÔ·Â: ";
	cin >> integer;
	
	
	if(integer % 2 != 0)
		cout << "==>" << integer <<"´Â È¦¼ö\n";
	
	if(integer %2==0)
		cout << "==>" << integer <<"´Â Â¦¼ö\n";
	
	return 0;
	
}
