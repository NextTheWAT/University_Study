#include <iostream>  	//선언부 컴파일에 접근을해서 선언파트에 있는 걸 처리해서 사용 
using namespace std;    //std라는 소속을 알려줄 필요가 다음부터 없는것 등록을 했을경우 ex( std::cout 
// IT융합학부 2학년 1971070 이재은 최소양방향정렬 

void swap();			//함수 선언문	 

int main()				// 몸체부, 메인 함수 // int 를 쓰는이유는 비정상적인 오류를 제외 시키는것
					//void를 써도 상관없지만 오류가 날수도있고 계속 컴퓨터가 값을 기다린다
{
	int arr[5];				//배열 arr[]를 메모리값의 크기가 5인 배열 선언 
	int temp = 0;			// temp라는 변수가 가르키는 주소 값에 메모리안에 0을 선언 0으로 초기화 

cout << "IT융합학부 2학년 1971070 이재은 최소양방향정렬" <<endl; 			//출력문 
	cout << "=====input=====" <<endl; 								//출력문 
	for(int i=0; i<5; i++){								//조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식으로 0~4까지 1++
		cout << i+1 << "번째 숫자 : "; 					//i는 0부터니까 i+1부터 시작 출력문 
		cin >> arr[i];									//0부터 4까지 arr[i]에 값 입력 
	}	
	cout << "============data============" <<endl; 				//출력문 
	cout << "현재 들어간 숫자 : ";								//출력문	 
	for(int i=0; i<5; i++){								//조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식으로 0~4까지 1++ 
		cout << arr[i] << " "; 							//arr[] 배열값에 뭐가 들어가있는지 출력 
	}
	cout << endl;				//줄 바꿈 
	
	cout << "============swap============" << endl;			//출력문, 줄바꿈 
		for(int j=0; j<2; j++){		//0~1까지 1씩 증가//조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식
				for(int i=j; i<4-j; i++){		//j부터 4-j까지 1씩 증가 //조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식
					if(arr[i] > arr[i+1]){		//arr[i]가 a[i+1]보다 클때 실행
					swap(arr[i], arr[i+1]);				//swap 함수사용 
					}
					cout << j+1 << "-"<<i+1<< "번째 정렬 : ";			// for문이 2개이기때문에  j+1 - i+1 로 출력문을 써준다 
						for(int q=0; q<5; q++){					//조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식으로0~5 1++ 
						cout << arr[q] << " "; 					//arr[q] 출력 
				}
								cout <<endl;				//줄바꿈 
			}
			cout << endl;
				for(int c=3; c>=j+1; c--){			//조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식으로 3부터 j+1까지 1-- 
					if(arr[c] < arr[c-1]){				//arr[c] 가 arr[c-1] 이라면 조건문 실행 
					swap(arr[c], arr[c-1]);				// arr[c]와 arr[c-1]을 swap 함수로 값을 보냄 
				}
				cout << j+1 <<"-" << c+1<< "번째 정렬 : ";		//for문이 2개이기 때문에 j+1 - c+1로 값을 설정 (출력문) 
						for(int z=0; z<5; z++){				//조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식으로 0~5까지 1++ 
						cout << arr[z] << " "; 				//arr[] 배열값 출력 
			}
						cout << endl;				//줄 바꿈 
		}
		cout << endl;
					
	}
}
void swap(int x, int y){		//함수 선언문 
	int temp;				// temp 변수 선언 
	
	temp = x;			//temp, x 값 교환		 
	x = y;				//x, y 값 교환 
	y = temp;			//y, temp 값 교환 
}
