#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const int ArraySize = 5;			// const ������� ���� �ٲ��� ���� 
	int DATA[ArraySize] = {1,2,3,4,5};
	
	cout << "�迭 ���" << setw(13) << "������"
	<< setw(17) << "������׷�" << endl;
	
	for(int i=0; i<ArraySize; i++)
	{
		cout << setw(7) << i << setw(13)			//setw(3) �̶�� 3�̸��� ũ�⸦ �������� ä�� 
		<<DATA[i] << setw(9);
		
		for(int j=0; j<DATA[i]; j++)
		cout<<"*";
		
		cout<<endl;
	}
	
	return 0;
}
