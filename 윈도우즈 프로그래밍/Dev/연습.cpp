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
	cout << "선택값 : " << sel << endl; 
	
	for(int i=1; i<=500; i++){
		int mid = (left+right)/2;
		
		if(arr[mid] == sel){
			cout << "arr : " << arr[mid] << " " << "sel : " << sel<< "같다" <<endl;
			break;
		}
		else if(arr[mid] > sel){
			cout << "arr : " << arr[mid] << " " << "sel : " << sel << "  sel보다 mid값이 크다" << endl;
			right = mid;
		}
		else if(arr[mid] < sel){
			cout << "arr : " << arr[mid] << " " << "sel : " << sel << "  sel보다 mid값이 작다" << endl;
			left = mid+1;
		}
	}
	
	
	
	
	
}
