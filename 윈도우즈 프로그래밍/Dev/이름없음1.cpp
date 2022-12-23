#include <iostream>

using namespace std;


int main(){
	
	for(int i=0; i<5; i++){
		for(int a=4; a>=i; a--){
			cout << " ";
		}
		for(int b=0; b<i*2-1; b++){
			cout << "*";
		}
		cout << endl;
	}
	
	for(int i=0; i<5; i++){
		for(int a=0; a<i; a++){
			cout << " ";
		}
		for(int b=4; b>i*2-1; b--){
			cout << "*";
		}
		cout << endl;
	}
	
}
