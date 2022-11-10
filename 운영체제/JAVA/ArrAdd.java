import java.util.Scanner;	//Scanner를 사용하기위해 import를 통해 외부 클래스를 호출
					//Scanner는 java.util 패키지에 포함되어있다.

public class ArrAdd{					//Arr 이라는 객체를 생성
		public static void main(String[] args) { //접근 한정자를 public으로 설정(어디서든지 사용가능)
						//static으로 메모리를 미리 할당
						//void는 함수가 끝날 때 리턴값이 없다.
						//main은 메인 함수로 쓰여지는것
						//String[] args는 args를 문자열로 사용하겠다 라는 의미


System.out.println("IT융합학부 1971070 2학년 이재은 - 배열홀수합");	// 출력문

int b=0;						//변수 선언 0으로 초기화
int[] arr = new int[5];				//배열 선언
Scanner in = new Scanner(System.in);		//객체를 생성 System.in은 키보드로 입력받기위해 사용


for(int i=0; i<5; i++){				//조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식
System.out.print( i+1 + "번째 값을 입력해주세요 : " );			//0~4까지 1씩 증가 출력문
	 arr[i] = in.nextInt();						//Scanner 입력
}

for(int i=0; i<5; i++){				//조건식이 트루일때만 실행 그리고 문장을 갔다가 증감식을가고 다시 조건식
if(arr[i]%2==1){						//arr값이 홀수라면 
	System.out.println(i+1 + "번째 값 : " +arr[i]);		//출력문
	b = b + arr[i]; 				//홀수인 값을 b에다가 더하기
			}	
		}
	System.out.println("홀수들의 합 : " + b);		//b값 출력
	}
}