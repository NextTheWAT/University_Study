#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const int ArraySize = 5;			// const 상수지정 값을 바꾸지 못함 
	int DATA[ArraySize] = {1,2,3,4,5};
	
	cout << "배열 요소" << setw(13) << "데이터"
	<< setw(17) << "히스토그램" << endl;
	
	for(int i=0; i<ArraySize; i++)
	{
		cout << setw(7) << i << setw(13)			//setw(3) 이라면 3미만은 크기를 공백으로 채움 
		<<DATA[i] << setw(9);
		
		for(int j=0; j<DATA[i]; j++)
		cout<<"*";
		
		cout<<endl;
	}
	
	return 0;
}
