#include <iostream>  	//����� �����Ͽ� �������ؼ� ������Ʈ�� �ִ� �� ó���ؼ� ��� 

using namespace std;    //std��� �Ҽ��� �˷��� �ʿ䰡 �������� ���°� ����� ������� ex( std::cout 

// IT�����к� 2�г� 1971070 ������ ���ﰢ�� 


int main()
{
	int i, k;

	for (i = 0; i < 3; i++)
	{
		for (k = 0; k < i; k++){
			printf(" ");
		}
		for (k = 0; k < 3 * 2 - i * 2 - 1; k++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
