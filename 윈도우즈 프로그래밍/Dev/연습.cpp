#include <iostream>

using namespace std;

int main(){
	
	int left = 1;
	int right = 1000;
	int arr[1001];
	int sel = 501;
	
	for(int i=1; i<=1000; i++){
		arr[i] = i;
	}
	cout << "���ð� : " << sel << endl; 
	
	for(int i=1; i<=500; i++){
		int mid = (left+right)/2;
		
		if(arr[mid] == sel){
			cout << "arr : " << arr[mid] << " " << "sel : " << sel<< "����" <<endl;
			break;
		}
		else if(arr[mid] > sel){
			cout << "arr : " << arr[mid] << " " << "sel : " << sel << "  sel���� mid���� ũ��" << endl;
			right = mid;
		}
		else if(arr[mid] < sel){
			cout << "arr : " << arr[mid] << " " << "sel : " << sel << "  sel���� mid���� �۴�" << endl;
			left = mid+1;
		}
	}
	
	
	
	
	
}
