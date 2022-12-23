#include <iostream>				//C++을 구동하기 위한 헤더 파일 선언
using namespace std;			//std::의 접두어를 생략한다.

class BASE1{					//기본 클래스 sel,count,arr[],mid 멤버 변수와 Set(), tam() 멤버 함수를 지님 //디폴트 생성자도 자동생성 
	int sel;					//전역변수로 sel 선언 
	int count;					//전역변수로 count 선언 
	int arr[5];					//전역배열로 arr[5]값 선언 
	public:								//어디서든지 사용가능 
		void set(int a) {				//Set int 인자를 1개 받는 생성자 
		sel = a; 						//sel이라는 변수가 가르키는 주소 값에 메모리안에 a을 선언 a로 초기화 // 받은 인자값을 sel에 선언 
		}
		void tam(){						//선형탐색 생성자 
		cout << "-----------선형탐색 시작-----------" << endl; 
		for(int j=0; j<5; j++){ arr[j] = j+1;}		//배열값을 추가해주는 for문 
		
		for(int i=0; i<5; i++){						//조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식으로 0~4까지 1++ 
			if(arr[i] == sel){						//arr[i]값이 sel 값과 같다면 조건문 실행 
				count++;							//count 값 증가 
				cout<< count << "번째 비교,  "; 	//비교 출력문 
				cout << arr[i] << "값과" << sel << "값이 같습니다." << endl;		//값 비교 출력문 
				break; 																//값이 같다면 for문 탈출 
			}
			else if(arr[i] < sel){					//arr[i]값이 sel 값보다 작다면 
				count++;							//count 값 증가 
				cout<< count << "번째 비교,  "; 	//비교 출력문 
				cout << arr[i] << "값과" << sel << "값이 같지않습니다." << endl;	//값 비교 출력문 
			}
		}		
	}
};
class BASE2{						//기본 클래스 sel2,count2,arr2[],mid 멤버 변수와 Set2(), tam2() 멤버 함수를 지님 //디폴트 생성자도 자동생성 
	int arr2[6];						//전역 정수형 배열로 arr2[6] 선언 
	int mid, sel2, count2=0;			//전역 정수형 변수 mid2, sel2, count2 선언 
	int left = 1, right = 5; 		// left, right 초기화
	public:							//어디서든지 사용가능 
		void set2(int a){			//Set int 인자를 1개 받는 생성자 
			sel2 = a;				//sel이라는 변수가 가르키는 주소 값에 메모리안에 a을 선언 a로 초기화 // 받은 인자값을 sel에 선언 
		}
		void tam2(){				//이분탐색 생성자 분 
		cout << "-----------이분탐색 시작-----------" << endl;
			for(int i=1;i<6;i++){arr2[i]=i;} 	//배열값을 추가해주는 for문 	
			
			for(int i=0; i<5; i++){			//조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식으로 0~4까지 1++ 
      		mid = (left+right)/2; 			// mid값 갱신 새로 돌아갈때마다 
      		if(arr2[mid] == sel2){			//arr[mid]와 sel 값이 같다면 조건식 실행 
      			count2++;					//count 값 증가 
      			cout << count2 <<"번째 비교 "<< endl;		//비교 횟수 출력문 
		  		cout << mid << "값과" << sel2 << "값이 같습니다." << endl;	//비교값 출력문 
		  		break;						//값이 같다면 for문 탈출 
	 		 }
	  		else if(arr2[mid] > sel2){		//arr[mid]가 sel보다 크다면 
	  			count2++;					//count 값 증가	 
      			cout << count2 <<"번째 비교 "<< endl;		//비교 횟수 출력문 
				cout << mid << "값과" << sel2 << "값이 같지 않습니다.." << endl;		//비교값 출력문 
				right = mid;				//왼쪽값이 크면 미드를 왼쪽으로 당겨준다 
	  		}
	  		else if(arr2[mid] < sel2){		//arr[mid]가 sel보다 작다면 
	  			count2++;					//count값 증가 
      			cout << count2 <<"번째 비교 "<< endl;		//비교 횟수 출력문 
				cout << mid << "값과" << sel2 << "값이 같지 않습니다.." << endl;		//비교값 출력문 
				left = mid+1;				//만약 나눴을때 4.5라면 정수는 항상 4가 나오기 때문에 비교값이 5일때를 대비해서 만들어준 값 
			  }
  		}	
	}
};

class DERIVED : public BASE1, public BASE2{
};

int main(){					// 몸체부, 메인 함수 // int 를 쓰는이유는 비정상적인 오류를 제외 시키는것
							//void를 써도 상관없지만 오류가 날수도있고 계속 컴퓨터가 값을 기다린다
    int sel;				//정수형 변수 sel 선언  
    
    cout << "IT융합학부 1971070 2학년 이재은 선형, 이분탐색" << endl << endl;		//학부, 학번, 학년, 이름, 과제명 출력문 
  	cout << "찾을 값을 입력해 주세요: ";		//출력문 
  	cin >> sel; 								//sel 입력문	
  	
  	DERIVED D;
  	D.set(sel);
  	D.tam();
  	D.set2(sel);
  	D.tam2();

}


